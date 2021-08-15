
  
 
 public static byte[] HexStringToByteArray(String hex)
 {
  int NumberChars = hex.Length;
  byte[] bytes = new byte[NumberChars / 2];
  for (int i = 0; i < NumberChars; i += 2)
   bytes[i / 2] = Convert.ToByte(hex.Substring(i, 2), 16);
  return bytes;
 }
}

public class AesCryptographyService
{
    public byte[] Encrypt(byte[] data, byte[] key, byte[] iv)
    {
        using (var aes = Aes.Create())
        {
            aes.KeySize = 128;
            aes.BlockSize = 128;
            aes.Padding = PaddingMode.Zeros;

            aes.Key = key;
            aes.IV = iv;

            using (var encryptor = aes.CreateEncryptor(aes.Key, aes.IV))
            {
                return PerformCryptography(data, encryptor);
            }
        }
    }

    public byte[] Decrypt(byte[] data, byte[] key, byte[] iv)
    {
        using (var aes = Aes.Create())
        {
            aes.KeySize = 128;
            aes.BlockSize = 128;
            aes.Padding = PaddingMode.Zeros;

            aes.Key = key;
            aes.IV = iv;

            using (var decryptor = aes.CreateDecryptor(aes.Key, aes.IV))
            {
                return PerformCryptography(data, decryptor);
            }
        }
    }

    private byte[] PerformCryptography(byte[] data, ICryptoTransform cryptoTransform)
    {
        using (var ms = new MemoryStream())
        using (var cryptoStream = new CryptoStream(ms, cryptoTransform, CryptoStreamMode.Write))
        {
            cryptoStream.Write(data, 0, data.Length);
            cryptoStream.FlushFinalBlock();

            return ms.ToArray();
        }
    }
 
 
}



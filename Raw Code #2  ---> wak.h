/*

This was the second post containing clear code that day.

It appears to define variables and declares class "AesCryptographyService"

I'm not too familiar with C# but this sure seems like he is telling us to use this program to decode the encrypted text that he included with the recent "epsilon" and "omega" NFT's over at opensea.io



begin Mcafee's raw post after.........
..........................................................*/



Console.WriteLine("Epsilon: " + epsilon_b64);
  Console.WriteLine("B64 Decoded: " + BitConverter.ToString(epsilon).Replace("-", ""));
  Console.WriteLine("To String: " + Encoding.UTF8.GetString(epsilon));
  Console.WriteLine();
  
  var decrypted = crypto.Decrypt(epsilon, testkey0, md5);
  Console.WriteLine("Trying Key: " + BitConverter.ToString(testkey0).Replace("-", "") + "   IV: " + BitConverter.ToString(md5).Replace("-", ""));
  Console.WriteLine("Decrypted: " + BitConverter.ToString(decrypted).Replace("-", ""));
  Console.WriteLine("To String" + Encoding.UTF8.GetString(decrypted));
  Console.WriteLine();
  
  decrypted = crypto.Decrypt(epsilon, testkey1, md5);
  Console.WriteLine("Trying Key: " + BitConverter.ToString(testkey1).Replace("-", "") + "   IV: " + BitConverter.ToString(md5).Replace("-", ""));
  Console.WriteLine("Decrypted: " + BitConverter.ToString(decrypted).Replace("-", ""));
  Console.WriteLine("To String" + Encoding.UTF8.GetString(decrypted));  
  Console.WriteLine();
  
  decrypted = crypto.Decrypt(epsilon, testkey2, md5);
  Console.WriteLine("Trying Key: " + BitConverter.ToString(testkey2).Replace("-", "") + "   IV: " + BitConverter.ToString(md5).Replace("-", ""));
  Console.WriteLine("Decrypted: " + BitConverter.ToString(decrypted).Replace("-", ""));
  Console.WriteLine("To String" + Encoding.UTF8.GetString(decrypted));  
  Console.WriteLine();
  
  
  Console.WriteLine();
  Console.WriteLine();
  
 }
 
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


 John McAfee.

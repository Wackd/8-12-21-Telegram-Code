

//This is the first post from that day that clearly contains Code, I believe it is C#???

//This file was "cleaned" became wak.c


//Begin original McAfee post after ............................
........................................................../*

[UP]
[DOWN]
[LEFT]
[RIGHT]
[A][A]
]START>TRATS[
_REMEMBER_REMEMBER_
ONLY THE STRONG SURVIVE;
VVATCH_THE_VVATER:

John McAfee.


*/
using System;
using System.Text;
using System.IO;
using System.Security.Cryptography;
     
public class Program
{
 public static void Main()
 {
  Console.WriteLine("https//opensea[.]io/collection/contingency-protocol-44924");
  Console.WriteLine();
 
  //CONTINGENCY PROTOCOL 44924 COLLECTION DESCRIPTION
  //MD5: 346257E94DA2E0D0D0F54AA397D291F0
  //DATA: Q Society
  string collectiondescriptiondecoded = "Q Society";
  MD5 md5Hash = MD5.Create();
  byte[] md5 = md5Hash.ComputeHash(Encoding.UTF8.GetBytes(collectiondescriptiondecoded));
  Console.WriteLine("Verified: [Q Society] = " + BitConverter.ToString(md5).Replace("-", "") + " Initialization Vector or Key or Who the fuck knows? LULZZZ
  Console.WriteLine();
  
  //SQME KEYS TO TEST  
  byte[] testkey0 = Encoding.UTF8.GetBytes("rustyshackleford");
  byte[] testkey1 = Encoding.UTF8.GetBytes("Q H7^PZBVTpZ7302");  
  //https//www[.]britbonglogpost[.]com/978ea96f-2740-4ea6-b1d0-288f11a48ff7.jpg
  byte[] testkey2 = HexStringToByteArray("978ea96f-2740-4ea6-b1d0-288f11a48ff7".Replace("-", ""));
  
   
  //NFT IMAGE DESCRIPTIONS - BASE64 ENCODED DATA
  //https[:]//opensea[.]io/assets/0x495f947276749ce646f68ac8c248420045cb7b5e/42715653451494116278904116357368839356782358833774246712130390239617933639681
  string epsilon_b64 = "mbhD5klu/+mMNw6nN8bmE7+m4MWKp9ZMzO61R83YPGc23pCnwNXl6XnRPizFWi+k35YtNRsXiT20P7KNiV6Bz/jwBGq3PjQv2Zd14gORArKA6Cz30JEU9Sa6GGCEpJIufbFJuWWxaI9NTnGCrshcDDvIne9DvhwSTvcJHMOCAkeBNiRwxb/tCK17mclpwgV1fKXDhrCfzddOW2bTO14c0w==";
  
  //https[:]//opensea[.]io/assets/0x495f947276749ce646f68ac8c248420045cb7b5e/42715653451494116278904116357368839356782358833774246712130390238518422011905
  string omega_b64 = "QWIn8NzJMuDZIfibj/MqK1CPK32YXf3KuzCsf4HohUPSmUgyqAdY6moE98U6v3wVGTu2g1+ZziW+tqk9cVif41v+GC91bgnym7NlX9URAY/LLE9X9amJw3Qxa4PyNWat/dVkEOUFoa3vAE6TCVgk/gfWzB8085VW7A6hBcoR0D1tv9U5HrylObyNdm2I6ljim5XVXA9XRkLKffQReXWkAS7R34IQYsipc9jOaf/LlaCPputybuz5cKWaq/q6kbRksksbPL6v4F/omjkBHOJiqWxKHRkEgSIOEEEgIQHqk5h5Tnf7O7I5/eyDXGPAYBS2I7IwMmykLp7CG9nFLg5FDHmNgQZD4vOFrJcjoYcH3mg=";
  
  //DECODE BASE64
  var epsilon = Convert.FromBase64String(epsilon_b64);
  var omega = Convert.FromBase64String(omega_b64);
  
  //AES CRYPTO
  var crypto = new AesCryptographyService();


  1x5e7033fd210f8d7b3e87486ad989732c7943058b

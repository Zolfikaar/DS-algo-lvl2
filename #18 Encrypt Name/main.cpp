#include <iostream>
using namespace std;

string EncryptName(string name, short EncryptionKey)
{

  for (int i = 0; i < name.length(); i++)
  {

    name[i] = char((int)name[i] + EncryptionKey);
  }

  return name;
}

string DecryptName(string name, short EncryptionKey)
{
  for (int i = 0; i < name.length(); i++)
  {

    name[i] = char((int)name[i] - EncryptionKey);
  }

  return name;
}

string ReadName()
{
  string Name = "";

  cout << "Please Enter Your Name" << endl;

  cin >> Name;

  return Name;
}

int main()
{
  short EncryptionKey = 6;
  string name = ReadName();
  string encrypted_name = EncryptName(name, EncryptionKey);
  string decrypted_name = DecryptName(encrypted_name, EncryptionKey);

  cout << "The Name is: " << name << endl;
  cout << "The Encrypted Name is: " << encrypted_name << endl;
  cout << "The Name After Decrypt is: " << decrypted_name << endl;
}

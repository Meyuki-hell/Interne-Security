#include <bits/stdc++.h>
using namespace std;
int main()
{
string all_letrs = "abcdefghijklmnopqrstuvwxyzABCDEFGHI"
"JKLMNOPQRSTUVWXYZ";
// create a dictionary to store the substitution for the
// given alphabet in the plain text based on the key
map<char, char> dict1;
int key = 4;
for (int i = 0; i < all_letrs.length(); i++) {
dict1[all_letrs[i]]
= all_letrs[(i + key) % all_letrs.length()];
}
Plain Alphabet: a b c d e f g h i j k l m n o p q r s t u v w x y z
Cipher Alphabet: y h k q g v x f o l u a p w m t z e c j d b s n r i
Plain Alphabet: c r y p t o g r a p h y
Cipher Alphabet: k e r t j m x e y t f r
string plain_txt = "I am studying Data Encryption";
string cipher_txt;
// loop to generate ciphertext
for (char& c : plain_txt) {
if (all_letrs.find(c) != string::npos) {
cipher_txt += dict1;
}
else {
cipher_txt += c;
}
}
cout << "Cipher Text is: " << cipher_txt << endl;
map<char, char> dict2;
for (int i = 0; i < all_letrs.length(); i++) {
dict2[all_letrs[i]]
= all_letrs[(i - key) % all_letrs.length()];
}
string decrypt_txt;
for (char& c : cipher_txt) {
if (all_letrs.find(c) != string::npos) {
decrypt_txt += dict2;
}
else {
decrypt_txt += c;
}
}
cout << "Recovered plain text : " << decrypt_txt
<< endl;
return 0;
} }

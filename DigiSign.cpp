#include <openssl/dsa.h>
#include <openssl/err.h>
#include <iostream>
int main() {
 DSA *dsa = DSA_new();
 DSA_generate_parameters_ex(dsa, 1024, NULL, 0, NULL, NULL, NULL);
 DSA_generate_key(dsa);
 unsigned char message[] = "Hello, world!";
 unsigned int message_len = sizeof(message); 
 unsigned char signature[DSA_size(dsa)];
 unsigned int signature_len; 
 if (DSA_sign(0, message, message_len, signature, &signature_len, dsa) == 1) {
 std::cout << "Signature generated successfully!" << std::endl;
 } else {
 std::cerr << "Error generating signature: " << ERR_error_string(ERR_get_error(), 
NULL) << std::endl;
 return 1;
 } 
 if (DSA_verify(0, message, message_len, signature, signature_len, dsa) == 1) {
 std::cout << "Signature verified successfully!" << std::endl;
 } else {
 std::cerr << "Error verifying signature: " << ERR_error_string(ERR_get_error(), NULL) 
<< std::endl;
 return 1;
 } 
 DSA_free(dsa);
 return 0;
}

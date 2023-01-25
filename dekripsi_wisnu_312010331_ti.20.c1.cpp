#include <iostream>
#include <string>

int main() {
    std::string ciphertext = "E
Y";
    std::string key = "123456";
    std::string plaintext;
    
    for (int i = 0; i < ciphertext.length(); i++) {
        plaintext += ciphertext[i] ^ key[i % key.length()];
    }
    
    std::cout << plaintext << std::endl;
    return 0;
}

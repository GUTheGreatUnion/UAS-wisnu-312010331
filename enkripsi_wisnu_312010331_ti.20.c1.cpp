#include <iostream>
#include <string>

int main() {
    std::string plaintext = "selamat dan suksess ujian akhir smester gasal 2022-2023";
    std::string key = "123456";
    std::string ciphertext;
    
    for (int i = 0; i < plaintext.length(); i++) {
        ciphertext += plaintext[i] ^ key[i % key.length()];
    }
    
    std::cout << ciphertext << std::endl;
    return 0;
}

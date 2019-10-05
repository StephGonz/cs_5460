// ============================================================================
// Computer Security
// Assignment 2 - Part 3
// Group: Alice and the Foobars
// Andres Imperial
// Stephanie Gonzales
// Jake Hadley
// Cole Buhman
// ============================================================================

#include "codec.hpp"
#include <string>
#include <iostream>
#include <vector>

std::vector<std::string> myStrs = {"1", "12", "123", "1234", "12345", "123456", "1234567"};

std::string run(std::string plaintext, std::string ciphertext)
{
    for (unsigned int i = 0; i < myStrs.size(); ++i)
    {
        std::string currStr = myStrs[i];
        std::sort(currStr.begin(), currStr.end());

        do {
            std::string myCiphertext = codec::columnarTranspositionEncrypt(currStr, plaintext);
            if (ciphertext == myCiphertext)
            {
                return currStr;
            }
        } while (next_permutation(currStr.begin(), currStr.end()));
    }
}

int main(int argc, char *argv[])
{
    std::string plaintext = argv[1];
    std::string plaintextNoSpaces = detail::removeSpaces(plaintext);
    std::string ciphertext = argv[2];
    std::cout << "plaintext: " + plaintextNoSpaces << std::endl;
    std::cout << "ciphertext: " + ciphertext << std::endl;

    auto result = run(plaintextNoSpaces, ciphertext);

    printf("result: %s\n", result.c_str());

    return 0;
}

// ============================================================================
// Computer Security
// Assignment 1
// Group:
// Andres Imperial
// ============================================================================

#ifndef CODEC_HPP
#define CODEC_HPP

#include <string>

namespace codec
{
  const char polybiusSquare[6][6] = {{'E', '2', 'R', 'F', 'Z', 'M'},
                                     {'Y', 'H', '3', '0', 'B', '7'},
                                     {'O', 'Q', 'A', 'N', 'U', 'K'},
                                     {'P', 'X', 'J', '4', 'V', 'W'},
                                     {'D', '1', '8', 'G', 'C', '6'},
                                     {'9', 'I', 'S', '5', 'T', 'L'}};

  std::string oneTimePad(std::string key);

  std::string encrypt(std::string plaintext,
                      std::string firstKey,
                      std::string secondKey);

  std::string decrypt(std::string ciphertext,
                      std::string firstKey,
                      std::string secondKey);

  std::string columnarTranspositionEncrypt(std::string derivedKey,
                                           std::string plaintext);

  std::string columnarTranspositionDecrypt(std::string derivedKey,
                                           std::string plaintext);

  std::string xorEncrypt(std::string key, std::string text);

  std::string xorDecrypt(std::string key, std::string text);
}

#endif
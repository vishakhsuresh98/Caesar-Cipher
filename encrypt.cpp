#include "encrypt.h"

/**
 * Encrypt a given plaintext and obtain the corresponding ciphertext
 *
 * @param plaintext the plaintext, as a string
 * @param shift the shift, as an int
 * @returns the ciphertext, as a string
 */
string encrypt(string plaintext, int shift) 
{ 
    string ciphertext = "";  
    for (int i = 0; i < plaintext.length(); i++) { 
        if (isupper(plaintext[i])) {
            ciphertext += char(int(plaintext[i] + shift - 65) % 26 + 65); 
        }
    	else if (islower(plaintext[i])) {
        	ciphertext += char(int(plaintext[i] + shift - 97) % 26 + 97);
        }
        else {
        	ciphertext += plaintext[i];
        }
    } 
    return ciphertext; 
} 

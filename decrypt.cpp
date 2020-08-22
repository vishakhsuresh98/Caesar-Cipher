#include "encrypt.h"

/**
 * Decrypt a given ciphertext and obtain the corresponding plaintext
 *
 * @param ciphertext the ciphertext, as a string
 * @param shift the shift, as an int
 * @returns the plaintext, as a string
 */
string decrypt(string ciphertext, int shift) 
{ 
    string plaintext = "";  
    for (int i = 0; i < ciphertext.length(); i++) { 
        if (isupper(ciphertext[i])) {
            plaintext += char(int(ciphertext[i] + 26 - shift - 65) % 26 + 65);
        }
    	else if (islower(ciphertext[i])) {
        	plaintext += char(int(ciphertext[i] + 26 - shift - 97) % 26 + 97);
        }
        else {
        	plaintext += ciphertext[i];
        }
    } 
    return plaintext; 
} 

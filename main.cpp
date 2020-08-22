#include "encrypt.h"
#include "decrypt.h"

// Driver program to test the above functions 
int main() 
{  
    ifstream in_ptr;
    ofstream out_ptr;

    int shift = 3;
    cout << "Caesar cipher" << endl;
    cout << "-------------\n" << endl;
    cout << "Shift : " << shift << endl;
    cout << "\n"; 

    //Encryption process
    string plaintext;
    in_ptr.open("plaintext.txt"); 
    getline(in_ptr, plaintext); 
    cout << "Encryption process :" << endl;
    cout << "Plaintext  - " << plaintext << endl; 
    string ciphertext = encrypt(plaintext, shift);
    cout << "Ciphertext - " << ciphertext << endl; 
    cout << "\n";
    in_ptr.close();

    // writing ciphertext to file
    out_ptr.open("ciphertext.txt");
    out_ptr << ciphertext << endl;
    out_ptr.close();

    //Decryption process
    ciphertext = "";
    cout << "Decryption process :" << endl;
    in_ptr.open("ciphertext.txt"); 
    getline(in_ptr, ciphertext);
    cout << "Ciphertext - " << ciphertext << endl;
    cout << "Plaintext  - " << decrypt(ciphertext, shift) << endl; 
    in_ptr.close();
    return 0; 
}  

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void rotationEncryption (char enCipher[], int enKey); //Declares Function rotationEncryption in the void
void rotationDecryption (char deCipher[], int deKey); //Declares Function rotationEncryption in the void

int main () {

    int n; //Declares n as an integer
    scanf("%d/n", &n); //Reads an integer from File Input and assigns it to n
    
    switch(n){
        case 1:
        ; //a label can only be part of a statement and a declaration is not a statement, a label must follow a case statement
            char enCipher[101]; //Declares enCipher as a Character String and limits the String to 101 characters
            int enKey; //Declares enKey as an Integer
        
            scanf("%s\n", enCipher); //Reads a Character from the File Input and assigns it to enCipher    
            scanf("%d", &enKey); //Reads an integer from the File Input and assigns it to enKey
        
            rotationEncryption (enCipher, enKey); //Reads and prints the result of the Function rotationEncryption
          
            return 0;
        
        case 2:
        ; //a label can only be part of a statement and a declaration is not a statement, a label must follow a case statement
            char deCipher[101]; //Declares deCipher as a Character String and limits the String to 101 characters
            int deKey; ////Declares deKey as an Integer
            
            scanf("%s\n", deCipher); //Reads a Character from the File Input and assigns it to deCipher
            scanf("%d", &deKey); //Reads an integer from the File Input and assigns it to deKey
            
            rotationDecryption (deCipher, deKey); //Reads and prints the result of the Function rotationDecryption
          
            return 0;
        
        case 3:
        ; //a label can only be part of a statement and a declaration is not a statement, a label must follow a case statement
        char* encrypt(char *message,char code[]){ //Declares encrypt as a char and a pointer and begins the function in terms of the message and code.
          int length = strlen(message); //declares length as an integer and makes it equal to the string length of the message
          char *enMessage = (char *) malloc(sizeof(char)*length); //Declares enMessage as a pointer and char and equates it to memory allocation 'malloc' of the size of length
        
          for(int i = 0; i < length; i++){ //creates a loop while i is less than size of the length.
            int encryption_index = toupper(message[i]) - 'A'; //Makes the Encryption Index under 26
            if(encryption_index >= 0 && encryption_index < 26){
              enMessage[i] = code[encryption_index];
            }else{
              enMessage[i] = message[i];
            }
          }
          return enMessage;
        }
        char *message = "test message";
        
        char code[26] = {'j','a','x','y','s','f','u','h','i','b','k','l','d','n','z','p','q','r','e','o','v','g','w','c','y','t'};
  
          char *enMessage = encrypt(message,code); //Makes enMessage equal to the encrypt function.
          printf("Original Message: %s\nEncrypted Message: %s\n",message,enMessage); //Prints the Original Message and Encrypted Message
                    
        case 4:
        ; //a label can only be part of a statement and a declaration is not a statement, a label must follow a case statement
        int find_index(char code[],char char_to_find){ 
          for(int i = 0 ; i < 26; i ++){
            if(code[i] == char_to_find){
              return i;
            }
          }
          return -1;
        }
        
        char *decrypt(char *message,char code[]){ //Declares decrypt as a char and a pointer and begins the function in terms of the message and code.
          int length = strlen(message); //declares length as an integer and makes it equal to the string length of the message
          char *deMessage = (char *) malloc(sizeof(char)*length); //Declares deMessage as a pointer and char and equates it to memory allocation 'malloc' of the size of length
          for(int i = 0; i <length; i++){ //creates a loop while i is less than size of the length.
            int decryption_index = tolower(message[i]) - 'A'; //Makes the Decryption Index under 26
            if(decryption_index >= 0 && decryption_index < 26){
              int code_index = find_index(code,tolower(message[i]));
              deMessage[i] = 'a' + code_index;
            }else{
              deMessage[i] = message[i];
            }
          }
          return deMessage;
        }

          char *deMessage = decrypt(message,code); //Makes deMessage equal to the decrypt function.
          printf("Decrypted Message: %s\n",deMessage); //Prints the Original Message and Encrypted Message
              
}
}

        void rotationEncryption (char enCipher[], int enKey) { //allows the rotationEncryption Function to be coded.
        
            for(int i=0; enCipher[i] != '\0'; i++) //runs the loop until it hits a space.
                enCipher[i] = 65 + (enCipher[i]-65+enKey)%26; //Mathematical equation to find each ASCII Letter
            printf("Cipher text: %s\n", enCipher); //Prints the string of letters
        }  
        
        void rotationDecryption (char deCipher[], int deKey) { //allows the rotationDecryption Function to be coded.

            for(int i=0; deCipher[i] != '\0'; i++) //runs the loop until it hits a space.
                deCipher[i] = 65 + (deCipher[i]-65-deKey)%26; //Mathematical equation to find each ASCII Letter
            printf("Cipher text: %s\n", deCipher); //Prints the string of letters
        }
        
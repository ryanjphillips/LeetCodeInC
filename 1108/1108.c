#include "1108.h"

char *defangIPaddr(char *address){
   char *finalDefrang = (char *) malloc(44 * sizeof(char));
   char *defrang = "[.]";
   char loopCharacter = address[0];

   for (int counter = 0, defrangCounter = 0; loopCharacter != '\0' ; counter++, defrangCounter++) {
        loopCharacter = address[counter];

        if (loopCharacter == '.') {
            finalDefrang[defrangCounter] = defrang[0];
            finalDefrang[defrangCounter + 1] = defrang[1];
            finalDefrang[defrangCounter + 2] = defrang[2];
            defrangCounter += 2;

        } else {
            finalDefrang[defrangCounter] = loopCharacter; 
        }
    }

   return(finalDefrang);
}

int main(int argc, char *argv[]){
    char* ipAddress = "192.168.0.1";
    char* modifiedAddress = defangIPaddr(ipAddress);

    printf("Modified IP address: %s\n", modifiedAddress);

    free(modifiedAddress);  // Free the dynamically allocated memory

    return (0);
}

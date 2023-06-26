#include "14.h"

char * longestCommonPrefix(char ** strs, int strsSize) {

    // Create the size of the final string and init to 0. 200 is a constraint for the problem.
    char * finalString = (char *)calloc(sizeof(char) * 200, 1);
    size_t finalStringSize = 0;

    // Create a string and memcopy it to the value. Here we are copying the value from the first element of the array.
    memcpy(finalString, strs[0], strlen(strs[0]));
    finalStringSize = strlen(finalString);

    // Loop through each of the elements in the array
    for (int counter = 1; counter < strsSize; counter++) {

        int secondCounter = 0;
        // Loop through each item in the string
        for (secondCounter = 0; secondCounter < finalStringSize; secondCounter++) {

            if (finalString[secondCounter] == strs[counter][secondCounter]) {

                finalString[finalStringSize] = strs[counter][secondCounter];
                finalStringSize += 1;
            } else {
                finalString[finalStringSize - 1] = '\0';
            }

        }
        memcpy();



        if (secondCounter == 0) {
            return ("");
        }
    }

    return finalString;
}

int main(int argc, char *argh[]) {
    char *strs[] = {"flower","flow","flight"};
    char * finalString = longestCommonPrefix(strs, 3);
    printf("%s", finalString);
    return (0);
}

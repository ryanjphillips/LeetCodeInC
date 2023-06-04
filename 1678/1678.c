#include "1678.h"

char * interpret(char * command){
    
    //char * finalChar = (char *)malloc(sizeof(char) * strlen(command) + 1);
    char * finalChar = (char *)malloc(sizeof(char) * 100);
    int finalCounter = 0;

    for(int commandCounter = 0; command[commandCounter] != '\0'; commandCounter++, finalCounter++){
    
        if (command[commandCounter] == '(' && command[commandCounter + 1] == ')') {
                finalChar[finalCounter] = 'o';
                commandCounter += 1;

        } else if( command[commandCounter] == '(' && command[commandCounter + 1] == 'a') {
            finalChar[finalCounter] = 'a';
            finalChar[finalCounter + 1] = 'l';
            finalCounter += 1;
            commandCounter += 3;

        } else if (command[commandCounter] == 'G') {
            finalChar[finalCounter] = command[commandCounter]; 
        }
    }

    return finalChar;
}

int main(int argc, char *argv[]) {
    char * command = "(al)G(al)()()G";

    char * finalChar = interpret(command);
    printf("%s\n", finalChar);
    return (0);
}

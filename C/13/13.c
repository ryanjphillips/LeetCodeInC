#include "13.h"

int convertRoman(char s) {
    switch (s) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
    }
    return 0;
}

int romanToInt(char *s) {
    int finalInt = 0;
    for (int counter = 0; s[counter] != '\0'; counter++) {

        char currentChar = s[counter];
        char nextChar = s[counter + 1];
        int currentInt = convertRoman(currentChar);
        int nextInt = convertRoman(nextChar);
        bool intGreaterCheck = currentInt < nextInt;

        if (nextChar != '\0') {

            if (currentChar == 'I' && intGreaterCheck) {
                finalInt += nextInt - 1;
                counter++;
            }
            else if (currentChar == 'X' && intGreaterCheck ) {
                finalInt += nextInt - 10;
                counter++;
            }
            else if (currentChar == 'C' && intGreaterCheck) {
                finalInt += nextInt - 100;
                counter++;
            } 
            else {
                finalInt += currentInt;
            }
        } else {
            finalInt += currentInt;
        }
    }

    return finalInt;
}

int main(int argc, char *argh[]) {

    char *roman = "III";

    int finalInt = romanToInt(roman);
    printf("%d\n", finalInt);
    return (0);
}

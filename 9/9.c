#include "9.h"

bool isPalindrome(int x) {
    int numbComp = x;
    int finalNumb = 0;
    int length = ((int)(log10(x)));

    while (numbComp > 0) {
        finalNumb += (numbComp % 10) * (pow(10, length));
        numbComp /= 10;
        length--;
    }

    return (finalNumb == x ? true : false);
}

int main(int argc, char *argh[]) {
    int x = 1;

    isPalindrome(x);
    return (0);
}

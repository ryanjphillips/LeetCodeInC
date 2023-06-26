#include "2011.h"

int main(int argc, char *argv[]) {

    int operationSize = 4;
    char *operations[] = {"++X", "X++", "X--", "X++"};
    int x = 0;

    for (int counter = 0; counter < operationSize; counter++) {
        if (operations[counter][1] == '+') {
            x += 1;
        } else {
            x -= 1;
        }
    }

    printf("X is: %d", x);
    return(0);
}

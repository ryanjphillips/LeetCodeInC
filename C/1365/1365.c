#include "1365.h"

int *smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize){
    int *returnArray = (int *)malloc(sizeof(int) * numsSize);

    if (returnArray == NULL) {
        printf("Memory Allocation Failed\n");
        *returnSize = 0;
        return NULL;
    }

    for (int counter = 0; counter < numsSize; counter++) {
        int smallerThan = 0;
        for (int insideCounter = 0; insideCounter < numsSize; insideCounter++) {
            if (nums[counter] > nums[insideCounter]) {
                smallerThan += 1;
            }
        }

        returnArray[counter] = smallerThan;
    }

    *returnSize = numsSize;
    return (returnArray);
}

int main(int argc, char *argv[]) {

    int nums[] = {2,29,30,10,55,100};
    int numsSize = 6;
    int returnSize = 6;

    int *returnArray = smallerNumbersThanCurrent(nums, numsSize, &returnSize);
    
    for (int printCounter = 0; printCounter < numsSize; printCounter++) {
        printf("%d", *returnArray);
    }

    return (0);
}

#include "1.h"

int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
   *returnSize = 2;
   int *returnArray = (int *)malloc(sizeof(int) * (*returnSize));

   // Null Guard
   if (returnArray == NULL) {
      return(NULL);
   }

   for (int counter = 0; counter < numsSize; counter++) {
      for (int insideCounter = counter + 1; insideCounter < numsSize ; insideCounter++) {
            if (nums[counter] + nums[insideCounter] == target && counter != insideCounter) {
               returnArray[0] = counter;
               returnArray[1] = insideCounter;

               return(returnArray);
            }
      }
   }

   *returnSize = 0;
   return(NULL);
}

int main(int argc, char *argh[]) {
   int  nums[]      = { 3,3 };
   int  returnSize  = 2;
   int  numsSize    = 2;
   int  target      = 9;
   int *returnArray = twoSum(nums, numsSize, target, &returnSize);

   /*

   for (int counter = 0; counter < returnSize; counter++) {
      printf("%d", returnArray[counter]);
   }

   */

   free(returnArray);
}

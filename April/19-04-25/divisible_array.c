#include <stdio.h>

int main() {
    int nums[7] = {3, 1, 2, 2, 2, 1, 3};
   int k = 2;
   //int n = sizeof(nums) / sizeof(nums[0]);
   int count = 0;

 
    for (int i = 0; i < 7; i++) {
        for (int j = i + 1; j < 7; j++) {
            if (nums[i] == nums[j] ){
               if ((i * j) % k == 0) {
                    count++;
                }
            }
        }
    }

    printf(" Count equal and divisible pair an array : %d\n", count);
    return 0;
}
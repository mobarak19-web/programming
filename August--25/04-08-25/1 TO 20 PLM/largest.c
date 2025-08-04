/*6. Find the Largest of Two Numbers
Description: Read two numbers and print the larger one.

Input: 10 20

Output: 20

Test Cases:
*/
#include <stdio.h>
int main() {
    while(1){
    int num1, num2;
  printf(" input :");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2) {
        printf("output=%d\n", num1);
    } else if(num1==num2){
        printf("Both are equal\n ");
    }
    else {
        printf("output=%d\n", num2);
    }
}

    return 0;
}

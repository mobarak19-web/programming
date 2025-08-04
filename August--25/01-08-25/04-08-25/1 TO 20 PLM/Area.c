/*4. Area of a Circle
Description: Read radius (float) and calculate area.

Formula: Area = π × r² (use π = 3.1416)

Input: 5.5

Output: 95.0331
*/
#include<stdio.h>
int main (){
    float r, area;
    printf("Enter the value R : ");
    scanf("%f", &r);
    area= (3.1416*r * r);
    printf("The area of the Circle is: %.2f\n", area);
    return 0;
}
/* write a program to print a float number. If the float number 
has decimal value than print with decimal else not print decimal places 
*/
#include <stdio.h>
#include <conio.h>

int main()
{
    float num;
    printf("Enter the number");
    scanf("%f",&num);
    
    /* here the whole variable is to store the whole number part of num
    like num=2.403
    then whole=2 
    */

    int whole = (int)num;
    // here decimal store the decimal values of num
    float decimal = num - whole;

    if (decimal == 0) {
        printf("%d\n", whole);

    //here .2 specifies that to print upto 2 decimal place of that float number 
    } else {
        printf("%.2f\n", num);
    }

    return 0;
}
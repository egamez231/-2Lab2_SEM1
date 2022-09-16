//This program sums up two numbers
#include <stdio.h>
int sum (int, int); //function prototype
int main()
{ int x,y, result; //variables declaration
printf("Enter x and y : ");
scanf("%d %d", &x, &y);
result = sum(x,y); //function call
printf("\nSum is : %d\n", result);
return 0;
}
int sum (int num1, int num2) //function definition
{ int add;
add = num1+num2;
return(add); //return the result of summation
} //two numbers to the main function.

#include <stdio.h>
int add(int,int);  // Function Prototype for additon
int subtract(int,int); // Function Prototype for subtraction
int multiply(int,int); // Function Prototype for multiplication
void print_result(int); // Function Prototype for result


int add (int iNum1 ,int iNum2)
{
    int iSum1 = iNum1 + iNum2;
    return (iSum1);
}

int subtract (int iNum1 ,int iNum2)
{
    int iSum1 = iNum1 - iNum2;
    return (iSum1);
}

int multiply (int iNum1 ,int iNum2)
{
    int iSum1 = iNum1 * iNum2;
    return (iSum1);
}

void print_result(answer)
{
    printf ("Answer : %d", answer);
}



int main()
{
int num1,num2,answer;
char op;
printf("Enter two numbers and operator: ");
scanf("%d %d %c", &num1,&num2,&op);
switch(op)
{
case '+' : answer=add(num1,num2);
void print_result (int);
break;

case '-' : answer=subtract(num1,num2);
void print_result (int);
break;

case '*' : answer=multiply(num1,num2);
void print_result (int);
break;

default : printf("Invalid operator");
break;


}
print_result(answer);

return 0;

//function call

}



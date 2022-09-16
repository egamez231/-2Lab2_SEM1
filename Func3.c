//This program sums up two numbers
#include <stdio.h>
double area(double,double);
double peri(double,double);

int main()
{
     double num1,num2;
     int answer1;
     int answer2;
     printf("Enter length and width : ");
     scanf("%lf %lf", &num1,&num2);

     answer1 = area (num1,num2);
     answer2 = peri (num1,num2);

     printf ("Area : %d Peri : %d", answer1, answer2);

     return 0;
}

double area (double iNum1 ,double iNum2)
{
    double area;
    area = iNum1 * iNum2;
    return (area);
}

double peri (double iNum1 ,double iNum2)
{
    double Peri;
    Peri = (iNum1 + iNum1)+(iNum2 + iNum2);
    return (Peri);
}

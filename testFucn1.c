//This program sums up two numbers
#include <stdio.h>
float area(float,float);
float perimeters(float,float);
void print_result(int);

int main()
{
     float num1,num2;
     int answer1;
     int answer2;
     printf("Enter length and width : ");
     scanf("%f %f", &num1,&num2);

     answer1 = perimeters (num1,num2);
     answer2 = area (num1,num2);

     printf("Area : %d Perimeters : %d", answer2, answer1);

     return 0;
}

float area(float num1, float num2)
 {
     float area;
     area=num1*num2;
     return(area);
 }

float perimeters(float num1, float num2)
 {
     float perimeters;
     perimeters=(num1+num1)+(num2+num2);
     return(perimeters);
 }

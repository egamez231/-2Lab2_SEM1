#include <stdio.h>

float calc_usage_cost (int,int);
int calc_unpaid_cost (int);
float calc_total_bill (float,int);
void print_bill (int , float);


int main()
{
    int  Acc, Unpaid_Count, PrevRead, CurtRead, UnpaidO;
    char sel;
    float total, usage;
    float collect = 0;

    printf ("\n-----------------Perlis Water----------------------\ntThis program generates monthly water bill\n-------------------------------------------------------");

    do
    {
        printf ("\nEnter Account Number :");
        scanf("%d", &Acc);
        printf ("Enter Unpaid Bill :");
        scanf("%d",&Unpaid_Count);
        printf ("Enter Previous Month & Current Meter Reading:");
        scanf("%d%d", &PrevRead, &CurtRead);


        UnpaidO = calc_unpaid_cost (Unpaid_Count);

        usage = calc_usage_cost (PrevRead, CurtRead);

        total = calc_total_bill (usage,UnpaidO);

        print_bill (Acc, total);

        collect = collect + total ;




        printf("\n\nWould you like to calculate another(y/n): "); // Selection
        getchar();
        scanf("%c", &sel);

    }
    while (sel=='Y' || sel=='y');


    printf("\n\nPerlis Water Collection : RM %.2f\n\n", collect );

void print_bill (int , float);

return 0;
}




// Usage Cost Function

float calc_usage_cost (int Pre , int Curt)
{
    float Calc;
    Calc = (Curt - Pre) * 0.0011;
    return (Calc);
}

// Unpaid Cost Function

int calc_unpaid_cost (int uPaid)
{
    int Unpaid;
    if (uPaid > 0)
    {
    Unpaid = uPaid + 2;
    }

    return (Unpaid);
}

// Total Bill Function

float calc_total_bill (float Usage , int Unpaid)
{
    float total;
    total = 5 + (Usage + Unpaid);
    return (total);
}

void print_bill ( int Acc , float calc_total_bill)
{
    printf ("\n\nAcct No. : %d", Acc);
    printf ("\nTotal Paid is RM %.2f", calc_total_bill);
}


/*
project: payroll system
Author: lewis obuba
date: 22,oct 2021
compiler: GNU GCC
Language: c99
Licence: MIT
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //variable declaration
    char name [100],pin[10];
    int emp_no,hours;
    int normal_pay;
    float overtime_pay,tax,gross,net;
    const int rate = 1000;

    printf(" \tGitonga\'s factory payroll system\n");

    // capture input
    printf("Employee name: ");
    gets(name);
    printf("KRA PIN: ");
    gets (pin);
    printf("employment number: ");
    scanf("%d",&emp_no);
    printf("Hours Worked: ");
    scanf("%d",&hours);


    //computation
    if( hours > 40 ) {
        normal_pay = rate*40;
        overtime_pay = (hours-40)*1.5*rate;
    }
    else {
          normal_pay = rate*hours;
          overtime_pay =0;

     }
    gross = normal_pay + overtime_pay;
    tax = 0.3 * gross;
    net = gross - tax;

        //output
         printf("Employement No: %d\n",emp_no);
         printf("Employee Name:  %s\n",name);
         printf("KRA PIN:        %s\n",pin);
         printf("normal pay:     %d\n",normal_pay);
         printf("overtime pay:   %f\n",overtime_pay);
         printf("Tax paid:       %f\n",tax);
         printf("Net Income:     %f\n",net);
         return 0;
}

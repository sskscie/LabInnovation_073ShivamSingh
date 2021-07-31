#include <stdio.h>
#include <stdlib.h>
#include "matadd.h"
#include "matsub.h"
#include "matmul.h"
#include "mattran.h"
void printinfo()
{
    printf("\n");
    printf("####################################################\n");
    printf("#                       MATCAL                     #\n");
    printf("#                  Matrix Calculator               #\n");
    printf("#               Author: Shivam Singh               #\n");
    printf("#               Date  : 24 July 2021               #\n");
    printf("#    Enrollment number: 07313302720                #\n");
    printf("####################################################\n");
    printf("\n");
    printf("\nPress 1 to launch Matrix Calculator or 0 to exit\n");
    printf("\nTo exit out of the program at any time press Ctrl+c.\n");
    int opt1;
    scanf("%d", &opt1);
    printf("\n");
    if (opt1 == 1)
    {
        printf("Select the operation you want to perform.\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Transpose\n");
    }
    else if (opt1 == 0)
    {
        printf("\nExiting Program\n");
        exit;
    }
    else
    {
        printf("Please enter a valid input.\n");
    }
}
int main()
{
    printinfo();
    int opt2;

    scanf("%d", &opt2);

    if(opt2 == 1){
        matadd();
    }else if(opt2 == 2){
        matsub();
    }else if(opt2 == 3){
        matmul();
    }else if(opt2 == 4){
        mattran();
    }else{
        printf("Please Enter a valid Input\n");
        printf("Exiting program\n");
    }

}

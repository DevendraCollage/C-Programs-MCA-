/*
TODO : WAP to check whether the given number is odd or even
Date : 06/08/2023
Author : Devendra Parmar
*/

#include <stdio.h>
void main()
{
    int num;

    printf("Enter The Number Here : ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The Entered Number %d Is Even!", num);
    }
    if (num % 2 != 0)
    {
        printf("The Entered Number %d Is Odd!", num);
    }
}

/* Output
Enter The Number Here : 12
The Entered Number 12 Is Even!

Enter The Number Here : 15
The Entered Number 15 Is Odd!
*/
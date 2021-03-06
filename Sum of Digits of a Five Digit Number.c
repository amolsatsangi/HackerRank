/*********
Objective

In order to get the last digit of a number, we use modulo operator \%. When the number is modulo divided by 10 we get the last digit.

To find first digit of a number we divide the given number by  until number is greater than . At the end we are left with the first digit.

Task

In this challenge, you have to input a five digit number and print the sum of digits of the number.

Input Format

The input contains a single five digit number, 

Output Format

Print the sum of the digits of the five digit number.

Sample Input 0

10564
Sample Output 0

16
********/

#include<stdio.h>
int main()
{
    int n,i=0,s=0,q;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        i=q%10;
        s=s+i;
        q=q/10;
    }
    printf("%d",s);
    return 0;
}


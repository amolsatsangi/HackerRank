/*******
Given a string, , consisting of alphabets and digits, find the frequency of each digit in the given string.

Input Format

The first line contains a string,  which is the given number.

Constraints


All the elements of num are made of english alphabets and digits.

Output Format

Print ten space-separated integers in a single line denoting the frequency of each digit from  to .

Sample Input 0

a11472o5t6
Sample Output 0

0 2 1 0 1 1 1 1 0 0 
Explanation 0

In the given string:

 occurs two times.
 and  occur one time each.
The remaining digits  and  don't occur at all.
Sample Input 1

lw4n88j12n1
Sample Output 1

0 2 1 0 1 0 0 0 2 0 
Sample Input 2

1v88886l256338ar0ekk
Sample Output 2

1 1 1 2 0 1 2 0 5 0 
**********/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i=0,j=0;
    char a[105];
    scanf("%s",a);
    int b[10]={0,0,0,0,0,0,0,0,0,0};
    for(j=0;j<10;j++)
    {
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==j+48)
        {
            b[j]=b[j]+1;
        }
    }
    }
    for(j=0;j<10;j++)
    {
        printf("%d ",b[j]);
    }

    return 0;
}

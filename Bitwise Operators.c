/*******
Objective
This challenge will let you learn about bitwise operators in C.

Inside the CPU, mathematical operations like addition, subtraction, multiplication and division are done in bit-level. To perform bit-level operations in C programming, bitwise operators are used which are explained below.

Bitwise AND operator & The output of bitwise AND is 1 if the corresponding bits of two operands is 1. If either bit of an operand is 0, the result of corresponding bit is evaluated to 0. It is denoted by &.

Bitwise OR operator | The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1. It is denoted by |.

Bitwise XOR (exclusive OR) operator ^ The result of bitwise XOR operator is 1 if the corresponding bits of two operands are opposite. It is denoted by .

For example, for integers 3 and 5,

3 = 00000011 (In Binary)
5 = 00000101 (In Binary)

AND operation        OR operation        XOR operation
  00000011             00000011            00000011
& 00000101           | 00000101          ^ 00000101
  ________             ________            ________
  00000001  = 1        00000111  = 7       00000110  = 6
Task
Given set , find:

the maximum value of  which is less than a given integer , where  and  (where ) are two integers from set .

the maximum value of  which is less than a given integer , where  and  (where ) are two integers from set .

the maximum value of  which is less than a given integer , where  and  (where ) are two integers from set .

Input Format

The only line contains  space-separated integers,  and , respectively.

Constraints

Output Format

The first line of output contains the maximum possible value of .

The second line of output contains the maximum possible value of .

The second line of output contains the maximum possible value of .

Sample Input 0

5 4
Sample Output 0

2
3
3
**********/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n,k,c=0,d=0,e=0,a[10],b[10],and[10],or[10],xor[10],i,j,l, an=0,o=0,x=0,y=0,z=0;
    scanf("%d",&n);
    scanf("%d",&l);
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            y=i;
            z=j;
            for(k=0;k<10;k++)
            {

                a[9-k]=y%2;
                y=y/2;
                b[9-k]=z%2;
                z=z/2;
                if(a[9-k]==1&&b[9-k]==1)
                {
                    and[9-k]=1;
                }
                else
                {
                    and[9-k]=0;
                }
                   if(a[9-k]==0&&b[9-k]==0)
                {
                    or[9-k]=0;
                }
                else
                {
                    or[9-k]=1;
                }
                  if((a[9-k]==0&&b[9-k]==0)||(a[9-k]==1&&b[9-k]==1))
                {
                    xor[9-k]=0;
                }
                else
                {
                    xor[9-k]=1;
                }
            }
            for(k=0;k<10;k++)
            {
                an=an+and[9-k]*pow(2,k);
                o=o+or[9-k]*pow(2,k);
                x=x+xor[9-k]*pow(2,k);
            }
            if(an>c&&an<l)
            {
                c=an;
            }
            if(o>d&&o<l)
            {
                d=o;
            }
            if(x>e&&x<l)
            {
                e=x;
            }
            an=o=x=0;
        }
    }
    printf("%d\n",c);
    printf("%d\n",d);
    printf("%d\n",e);
    return 0;
}

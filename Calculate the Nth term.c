/****Objective
This challenge will help you learn the concept of recursion.

A function that calls itself is known as a recursive function. The C programming language supports recursion. But while using recursion, one needs to be careful to define an exit condition from the function, otherwise it will go into an infinite loop.

To prevent infinite recursion,  statement (or similar approach) can be used where one branch makes the recursive call and other doesn't.

void recurse() {
    .....
    recurse()  //recursive call
    .....
}
int main() {
    .....
    recurse(); //function call
    .....
}
Task

There is a series, , where the next term is the sum of pervious three terms. Given the first three terms of the series, , , and  respectively, you have to output the nth term of the series using recursion.

Recursive method for calculating nth term is given below.

Input Format

The first line contains a single integer, .

The next line contains 3 space-separated integers, , , and .

Constraints

Output Format

Print the nth term of the series, .

Sample Input 0

5
1 2 3
Sample Output 0

11
*****/
#include<stdio.h>
int r(int a,int b,int c,int n)
{
    int re=0,j;
    if(n==0)
    {
        re=a+b+c;
    }
  else
    {
    re=re+r(b,c,b+c+a,--n);
    }
    return re;
}
int main()
{
    int n,a,b,c,res;
    scanf("%d",&n);
    scanf("%d %d %d",&a,&b,&c);
    res=r(a,b,c,n-4);
    printf("%d",res);
    return 0;
}

/******
In this problem, you need to print the pattern of the following form containing the numbers from  to .

                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4   
Input Format

The input will contain a single integer .

Constraints


Output Format

Print the pattern mentioned in the problem statement.

Sample Input 0

2
Sample Output 0

2 2 2
2 1 2
2 2 2
Sample Input 1

5
Sample Output 1

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5
Sample Input 2

7
Sample Output 2

7 7 7 7 7 7 7 7 7 7 7 7 7 
7 6 6 6 6 6 6 6 6 6 6 6 7 
7 6 5 5 5 5 5 5 5 5 5 6 7 
7 6 5 4 4 4 4 4 4 4 5 6 7 
7 6 5 4 3 3 3 3 3 4 5 6 7 
7 6 5 4 3 2 2 2 3 4 5 6 7 
7 6 5 4 3 2 1 2 3 4 5 6 7 
7 6 5 4 3 2 2 2 3 4 5 6 7 
7 6 5 4 3 3 3 3 3 4 5 6 7 
7 6 5 4 4 4 4 4 4 4 5 6 7 
7 6 5 5 5 5 5 5 5 5 5 6 7 
7 6 6 6 6 6 6 6 6 6 6 6 7 
7 7 7 7 7 7 7 7 7 7 7 7 7 

*******/

#include<stdio.h>
int main()
{
    int n,i=0,j=0,k=0;
    scanf("%d",&n);
  
    for(i=1;i<2*n;i++)
    {
          k=n;
          if(i<=n)
          {
              for(j=1;j<2*n;j++)
        {
            printf("%d ",k);
            if(i>j)
            {
                k--;
            }
            if(i+j>=2*n)
            {
                k++;
            }
        }
          }
          if(i>n)
          {
              for(j=1;j<2*n;j++)
              {
                  printf("%d ",k);
            if(i+j<2*n)
            {
                k--;
            }
             if(j>=i)
            {
                k++;
            }
       
        }
          }
        printf("\n");
    }
    return 0;
}

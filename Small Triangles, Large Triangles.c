/*********
You are given  triangles, specifically, their sides ,  and . Print them in the same style but sorted by their areas from the smallest one to the largest one. It is guaranteed that all the areas are different.

The best way to calculate a volume of the triangle with sides ,  and  is Heron's formula:

 where .

Input Format

First line of each test file contains a single integer .  lines follow with ,  and  on each separated by single spaces.

Constraints

, and 
Output Format

Print exactly  lines. On each line print  integers separated by single spaces, which are ,  and  of the corresponding triangle.

Sample Input 0

3
7 24 25
5 12 13
3 4 5
Sample Output 0

3 4 5#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
struct t{
    int a1;
    int b1;
    int c1;
    double s;
};
typedef struct t t;

void sort_by_area(triangle* tr, int n) {
    float p=0,te1;
     t q[n];
    int i=0,j=0,te2,te3,te4;
    for(i=0;i<n;i++)
    {
        p=((float)tr[i].a+(float)tr[i].b+(float)tr[i].c)/2;
        q[i].s=sqrt(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
        q[i].a1=tr[i].a;
        q[i].b1=tr[i].b;
        q[i].c1=tr[i].c;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(q[j].s>q[j+1].s)
            {
                te1=q[j].s;
                q[j].s=q[j+1].s;
                q[j+1].s=te1;
                te2=q[j].a1;
                q[j].a1=q[j+1].a1;
                q[j+1].a1=te2;
                 te3=q[j].b1;
                q[j].b1=q[j+1].b1;
                q[j+1].b1=te3;
                 te4=q[j].c1;
                q[j].c1=q[j+1].c1;
                q[j+1].c1=te4;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        tr[i].a=q[i].a1;
        tr[i].b=q[i].b1;
        tr[i].c=q[i].c1;
    }
   /* for (int i = 0; i < n; i++) {
        printf("%f\n", q[i].s);
    }*/
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
5 12 13
7 24 25
*********/

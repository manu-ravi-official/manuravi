#include<stdio.h>
void sq(int *);
void main()
{
int num;
printf("enter a number");
scanf("%d",&num);
sq(&num);
}
void sq(int *p)
{
int s;
s=*p * *p;
printf("square is %d ",s);
}

#include<stdio.h>
int fact(int);
void main()
{
int s,num;
printf("enter a number");
scanf("%d",&num);
s=fact(num);
printf("factorial is %d",s);
}
int fact(int a)
{
    if (input == 0 || input == 1)
        return 1;
else
{
    int temp = 1;
    for (int i = 1; i <= input; i++)
        temp = temp * i;
    return temp;
    }
}

/*
 {
    if (input == 0 || input == 1)
        return 1;
else
{
    int temp = 1;
    for (int i = 1; i <= input; i++)
        temp = temp * i;
    return temp;
    }
}
  */

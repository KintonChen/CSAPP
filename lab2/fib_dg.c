#include<stdio.h>
int fib_dg1(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return fib_dg1(n - 1) + fib_dg1(n - 2);
	}
}
long fib_dg4(int n)
{
	if (n == 1 || n == 2)
	{
		return ((unsigned int)1);
	}
	else
	{
		return fib_dg4(n - 1) + fib_dg4(n - 2);
	}
}

unsigned int fib_dg2(int n)
{
	if (n == 1 || n == 2)
	{
		return ((unsigned int)1);
	}
	else
	{
		return fib_dg2(n - 1) + fib_dg2(n - 2);
	}
}
unsigned long fib_dg3(int n)
{
	if (n == 1 || n == 2)
	{
		return ((unsigned long)1);
	}
	else
	{
		return fib_dg3(n - 1) + fib_dg3(n - 2);
	}
}
int main()
{
	int n1,n2,n3,n4;
	n1=3;
	while(fib_dg1(n1)>0)
    {
        n1++;
    }
	printf("int��nΪ %d\n",n1);
	n4=3;
	while(fib_dg1(n4)>0)
    {
        n4++;
    }
    printf("long��nΪ %d\n",n4);

	n2 = 3;
	while(fib_dg2(n2)>fib_dg2(n2-1)){
        n2++;
	}
    printf("unsigned int��nΪ %d\n",n2);
    n3=3;
    while(fib_dg3(n3)>fib_dg3(n3-1))
	{
	    n3++;
	}
    printf("unsigned long��nΪ %d\n",n3);
    return 0;
}

#include<stdio.h>
#include<conio.h>

long Fibonacci_Series(long);
void main()
{
	int Number,i;
	long Fibonacci;
	clrscr();
	for(i=1;i<=5;i++)
	{
	printf("\n Please Enter the Number to find Nth Fibonacci Number :  ");
	scanf("%d", &Number);

	Fibonacci = Fibonacci_Series(Number);

	printf("\n %d Fibonacci Number = %ld", Number, Fibonacci);
	}
	getch();

}

long Fibonacci_Series(long Number)
{
	if ( Number == 0 )
	return 0;
	else if ( Number == 1 )
	return 1;
	else
	return ( Fibonacci_Series(Number - 1) + Fibonacci_Series(Number - 2) );

}

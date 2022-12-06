#include<stdio.h>
#include<conio.h>
void main()
{
int a[5] = { 1,2,3,4,5},i;
clrscr();

	printf("Nubers In Orderd =");
	for(i=0;i<=4;i++)
	{
		printf(" %d",a[i]);
	}
	printf("\n");
	printf("Numbers In Reverse Orderd =");
	for(i=4;i>=0;i--)
	{
		printf(" %d",a[i]);
	}
getch();
}

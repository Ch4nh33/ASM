#include<stdio.h>
#include <conio.h>
#define pause getch()

int main(void) 
{
	int num1;
	int num2;
	int num3;

	scanf_s("%d %d",&num1,&num2);
	_asm 
	{
		mov eax,num1; // input the num1 to eax
		add eax, num2; // eax + num2 = num1 + num2 
		mov num3, eax; // input the num3 to eax -> int num3 = num1 + num2
	}
	printf("%d + %d = %d\n",num1,num2, num3);
	_asm 
	{
		mov eax, num1;
		sub eax, num2;
		mov num3, eax;
	}
	printf("%d - %d = %d\n", num1, num2, num3);
	_asm
	{
		mov eax, num1;
		imul eax, num2;
		mov num3, eax;
	}
	printf("%d x %d = %d\n", num1, num2, num3);
	printf("%d / %d = %d\n", num1, num2, num1/num2);
	return 0;
}

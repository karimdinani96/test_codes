// C program to demonstrate heap overflow
// by continuously allocating memory
#include<stdio.h>
#include<stdlib.h>

int main()
{
	for (int i=0; 1; i++)
	{
	// Allocating memory without freeing it
	int *ptr = (int *)malloc(sizeof(int));
	}
}


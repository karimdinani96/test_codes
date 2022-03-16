#include<stdio.h>


void myprint1()
{

	printf("inside my print 1\n");

}


void myprint2()
{
	printf("inside my print 2\n");
}

int main() 
{


	void (*p[4]) (); //array of function pointers;
	
	p[0]=myprint1;
	p[1]=myprint2;
		
	for(int i =0;i<2;i++)
	{

		p[i]();	
	}

	return 0;
}

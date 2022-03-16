#include<stdio.h>


static int a=10;

fun()
{
static int a=5;
printf("inside function %d\n",a);
}

int main(){

fun();
printf("inside main function %d\n",a);

}

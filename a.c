#include<stdio.h>
#include<stdlib.h>

int main()
{

int i=1;
while(i)
{
	
void *ptr=malloc(10000);
if(ptr==NULL){
perror("failure");
exit(-1);
}
printf("%d\n",i--);
}

exit(0);



int j=0;
int n=13;
int arr[13]={0,0,1,2,0,0,0,1,0,4,0,3,2};

for(int i=0;i<n;i++)
{
	if(arr[i]!=0)
	{
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		
		++j;	
		
	}

}

for(int i=0;i<n;i++)
{
	printf("%d ",arr[i]);
}
printf("\n");
}

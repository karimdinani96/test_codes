#include<stdio.h>


int myatoi(const char *str)
{

		int ans=0;

		if(str==NULL)
			return 0;
	
		while(*str)
		{
				if(*str>'9' || *str<'0')
					return -1;
				
				ans*=10;
				ans +=*str-'0'; 

				str++;
		}
		return ans;
}

int  main()
{
		char *str="1278";
		printf("myatoi of string %s is %d\n",str,myatoi(str));
		return 0;
}

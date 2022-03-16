

	int** func(int r,int c)
	{

		auto int **arr;

		// int r=3,c=2; 


		arr =(int*) malloc(r*sizeof(int*));

		for(int i=0;i<r;i++)
		{
				arr[i]=(int*)malloc(c*sizeof(int));
		}

		return arr;

}

	unsigned char func2(unsigned char x)
	{
			
		unsigned char ans=0;
			
		ans = (x<<6) | ( (x&0x0C)<<2 ) | ( (x&0x30) >>2 ) | (x>>6);  
		return ans;
	}

int main()
{

		(int **)(*fptr)(int , int) = func;

		int** darr= (*fptr)(3,2);

}

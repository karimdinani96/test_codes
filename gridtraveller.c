


#include<stdio.h>



int gridtravel(int i,int j,int maxi,int maxj)
{
	
	static int gridval[500][500]={0};

	if(maxi==0||maxj==0)
		return 0;
	

	if( (i == maxi) || (j == maxj))
		return 1;
	
	
	if(gridval[i][j]!=0)
		return gridval[i][j];

	//go right
	
	int n=0;

	if(j < maxj)
	{
		n+=	gridtravel(i,j+1,maxi,maxj);
	}

	//go down

	if(i < maxi)
	{
		n+= gridtravel(i+1,j,maxi,maxj);
	}
	
	//store

	gridval[i][j]=n;
	
	return n;
}


int main()
{

int row=3,col=3;

scanf("%d%d",&row,&col);
int ans=gridtravel(0,0,row-1,col-1);

printf("\nans %d\n",ans);
return 0;
}

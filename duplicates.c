// program to find duplicates in array in 
// constant space and O(n) time complexity

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void find_dup1(int arr[],int size)
{

    printf("%d\n",size);
    int *a = (int *)malloc(sizeof(int)*size);
    memset(a,0,size);

    for(int i=0;i<size;i++)
    {
        if(a[arr[i]] > 0)
        {
            printf("duplicate %d\n",arr[i]);
        }
        a[arr[i]]+=1;
    }
    return;
}

//caveat : the code handles non zero array
//to handle 0 cases, increment all nos by one in the beginning
void find_dup2(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        if( arr[ abs(arr[i]) ] >= 0 )
        {
            //positive

            arr[ abs(arr[i]) ]*=-1;

        }
        else if ( arr[ abs(arr[i]) ] < 0  )
        {
            //negative
            printf("duplicate %d\n",abs(arr[i]));
        }
    }

    return;
}


int main()
{

    int arr[]={1,2,3,4,5,1,2,3,4,4,5,5,5};

    //find_dup1(arr,sizeof(arr)/sizeof(arr[0]));
    find_dup2(arr,sizeof(arr)/sizeof(arr[0]));

    return 0;
}
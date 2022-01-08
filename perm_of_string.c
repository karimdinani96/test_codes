#include<stdio.h>
#include<string.h>

void swap(char *str, int i, int j)
{
    if (i != j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int perm(char* str,int i,int j)
{
    if(i==j){
        printf("%.*s\n",j+1,str);
        return 1;
    }
    int ans=0;
    for(int k=i;k<=j;k++)
    {
        swap(str,i,k);
        ans += perm(str,i+1,j);
        swap(str,i,k);
    }
    return ans;
}

int main()
{
    char arr[]="ABC";
    printf("no of permutations of string:%d\n",perm(arr,0,strlen(arr)-1));
    return 0;
}
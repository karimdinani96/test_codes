#include <stdio.h>

int count(int num)
{
    int ans = 0;
    while (num != 0)
    {
        if (num & 0x01)
            ans++;
        num = num >> 1;
    }
    return ans;
}

// Brian Kernighan Algorithm
int count_bk(int num)
{
    // O(log n) ?
    int ans = 0;
    while (num != 0)
    {
        num = num & (num - 1);
        ans++;
    }
    return ans;
}

int main()
{
    int x = 0b1010101010;

    printf("set bits in %d is %d\n",x,count(x));
    printf("set bits in %d using BK algorithm is %d\n",x,count_bk(x));

    return 0;
}
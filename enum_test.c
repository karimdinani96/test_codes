#include<stdio.h>

enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};
  
int main()
{
    enum week day;
    day = 99;
    //day = Wed;
    printf("%d",day);
    return 0;
} 

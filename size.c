#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("%d\t",sizeof(2.5));
    printf("%d\t",sizeof(2));
    printf("%d\t%d",sizeof('A'),'A');
    printf("%c\t",sizeof('A'));
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    scanf('%d', &a);
    if(a&1)
        printf('Odd\n');
    else
        printf('Even\n');
    
    return 0;
}
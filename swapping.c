#include <stdio.h>
int main()
{
    int a=10,b=30;
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("a=%d\nb=%d\n",a,b);
}

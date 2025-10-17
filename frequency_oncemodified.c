#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
int fre[6]={0},value;
    for(int i=0;i<n;i++)
    {
     value=a[i];
     fre[value]++;
    }

for(int i=0;i<6;i++)
{
    printf("%d -> %d\n",i,fre[i]);
}

}
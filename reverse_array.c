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
    int i=0;
    int j=n-1;
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      
    }
     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);

    }


}
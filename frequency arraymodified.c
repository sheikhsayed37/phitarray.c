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
int fre[6]={0};
    for(int i=0;i<n;i++)
    {
       if(a[i]==0) 
       {
        fre[0]++;
       }
       if(a[i]==1) 
       {
       fre[1]++;

       }
       if(a[i]==2)
       {
        fre[2]++;
       }
       if(a[i]==3) 
       {
        fre[3]++;
       }
       if(a[i]==4) 
       {
        fre[4]++;
       }
        if(a[i]==5) 
        {
       fre[5]++;
        }


    }
printf("%d -> %d\n", 0, fre[0]);
printf("%d -> %d\n", 1, fre[1]);
printf("%d -> %d\n", 2, fre[2]);
printf("%d -> %d\n", 3, fre[3]);
printf("%d -> %d\n", 4, fre[4]);
printf("%d -> %d\n", 5, fre[5]);

}
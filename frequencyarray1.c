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
    int count=0,count1=0,count2=0,count3=0,count4=0,count5=0;
    for(int i=0;i<n;i++)
    {
       if(a[i]==0) 
       {
        count++;
       }
       if(a[i]==1) 
       {
        count1++;

       }
       if(a[i]==2)
       {
        count2++;
       }
       if(a[i]==3) 
       {
        count3++;
       }
       if(a[i]==4) 
       {
        count4++;
       }
        if(a[i]==5) 
       {
        count5++;
       }


    }
printf("%d-> %d\n",0,count);
printf("%d-> %d\n",1,count1);
printf("%d-> %d\n",2,count2);
printf("%d-> %d\n",3,count3);
printf("%d-> %d\n",4,count4);
printf("%d-> %d\n",5,count5);
     

}
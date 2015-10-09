#include<stdio.h>
main()
{
    int n,i,a[10],b[10],c,d[10],maximum;
    while(1)
    {
    printf("\nMENU");
    printf("\n1.Insert");
    printf("\n2.Rearrange array elements");
    printf("\n3.Array reversal");
    printf("\n4.Repeating elements");
    printf("\n5.Frequency count");
    printf("\n6.Binary search");
    printf("\n7.Exit");
    printf("\nPlease enter your choice-:");
    scanf("%d",&c);
    if(c==1)
    {
        printf("\nHow many elements do you wanna enter-:");
        scanf("%d",&n);
        printf("\nEnter elements-:");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            d[i]=a[i];
        }

    }
    if(c==2)
    {
        int j,max;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(a[j]<a[j+1])
                {
                    max=a[j];
                    a[j]=a[j+1];
                    a[j+1]=max;
                }
            }
        }
        maximum=a[0];
        printf("\nThe result is-:");
        for(i=n-1;i>=0;i--)
            printf("\t%d",a[i]);
    }
    if(c==3)
    {
        printf("\nThe reversed array elements are-:");
        for(i=n-1;i>=0;i--)
        {
            printf("\t%d",d[i]);

        }
    }
    if(c==4)
    {
        for(i=0;i<maximum;i++)
        {
            b[i]=0;
        }
        for(i=0;i<n;i++)
        {
            b[a[i]]++;
        }
        printf("\nThe repeating elements are-:");
        for(i=0;i<maximum;i++)
        {
            if(b[i]>1)
            {
                printf("\t%d",i);
            }

        }
    }
    if(c==5)
    {
        printf("\nThe frequencies are-:");
        for(i=0;i<maximum;i++)
        {
            printf("\t%d times %d",b[i],i);
        }
    }
    if(c==6)
    {
        int key,mid;
        printf("\nEnter the number you wanna search-:");
        scanf("%d",&key);
        int front=0,flag=0,last=n-1;
        mid=(front+last)/2;
        while((front<=last)&&(a[mid]!=key))
        {
            if(key>a[mid])
            {
                front=mid+1;
            }
            else
            {
                last=mid-1;
            }
            mid=(front+last)/2;
        }
        if(a[mid]==key)
            printf("\nFound");
        else
            printf("\nNot found");
    }
    if(c==7)
        return;
    }
}



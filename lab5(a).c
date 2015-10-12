#include<stdio.h>

int n,top,stack[20];
void display()
{
           int j=top;
           while(j!=-1)
           {
                      printf("\n%d",stack[j]);
                      j--;
           }
}
void pop()
{
           printf("The popped element is-:%d",stack[top]);
           top--;
}
void peek()
{
           printf("%d",stack[top]);
}
           
           
main()
{
           int i,c;
           printf("\nEnter the number of elements you wanna enter-:");
           scanf("%d",&n);
           printf("\nPush elements-:");
           for(i=0;i<n;i++)
           {
                      scanf("%d",&stack[i]);
           }
           top=i-1;
           while(1)
           {
           printf("\n1.Display");
           printf("\n2.Pop");
           printf("\n3.Peek");
           printf("\n4.Exit");
           printf("\nPlease enter your choice-:");
           scanf("%d",&c);
           if(c==1)
           {
                      display();
           }
           if(c==2)
           {
                      pop();
           }
           if(c==3)
           {
                      peek();
           }
           if(c==4)
                      return;
           }
}
                      

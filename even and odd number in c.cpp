#include<stdio.h>
int isEven(int n)
{
     if(n%2==0)
          return 1;
     else
          return 0;
}
int main()
{
     float num,ans,i;
     
          printf("\nEnter Number : ");
          scanf("%f",&num);
          ans=isEven(num);
          if(ans==1)
               printf("%f is Even\n",num);
          if(ans==0)
               printf("%f is Odd\n",num);
     
     return 0;
}

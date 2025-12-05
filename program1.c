#include <stdio.h>

int main()
{
    int s1,s2,s3,s4,s5,s6,avg,a;
    printf("\n enter the subject mark:");
    scanf("%d %d %d %d %d %d",&s1,&s2,&s3,&s4,&s5,&s6);
    a=s1+s2+s3+s4+s5+s6;
    printf("%d\n",a);
    avg=a/6;
    printf("%d\n",avg);
     if(avg>=90 && avg<=100)
    {
        printf("excellent\n");
    }
    else if(avg>75 && avg<=90)
    {
        printf("very good\n");
    }
   else if (avg>50 && avg<=75)
   {
      printf("average\n");
   }
   else if(avg>50)
   {
       printf("needs improvement\n");
   }
   else if(avg>100)
   {
       printf("invalid");
   }
   
    
    return 0;
}

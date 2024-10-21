#include<stdio.h>
int main()
   {
       int age;
       printf("Enter your age:");
       scanf("%d",&age);
       
       if(age>=18)
          printf("your are eligible to vote.\n");
        else
        printf("your are not eligible to vote.you must be at least 18 years old.\n");
        return 0;
   }

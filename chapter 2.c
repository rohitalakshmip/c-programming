#include<stdio.h>
int main()
{
    int b,c;
    b=c=1;
    int a=b+c;
    int power= pow(b,c);
    printf("%d\n",power);
    //type conservation
    printf("%f\n",2.0*2.0);
    printf("%f\n",4.0/2);
    //explicit conversion (forcefull convert)
    int x=(int)1.9999;
    printf("%d\n",x);
    //operator precedence (BODMAS)
   int p = 4 + 9 * 10;
   printf("%d\n",p);
   //associvity (for same precedence) left to right 
   int q = 4 * 3 / 6 * 2;
   printf("%d\n",q);
   //operators
   int y;
   printf("enter a number");
   scanf("%d",&y);
   printf("%d\n",y % 2 == 0);
   //even-> 1
   //odd-> 0
   int z;
   printf(" enter the number");
   scanf("%d",&z);
   printf("%d", z % 2 == 0);
   //are the following valid or not//a question
   printf("%d",8^8);
   //b question
   int r;int o=r;
   //c question
   int h,i=h; //error
   //d question
   char stars = '**';
   //if its sunday && its snowing
   int isSunday=1;
   int isSnowing=1;
   printf("%d\n",isSunday && isSnowing);
   //if its monday or is raining
   int isMonday=0;
   int isRaining=1;
   printf("%d\n",isMonday || isRaining);
   //if num is> 9 && < 100
   int num;
   printf("enter the number\n");
   scanf("%d",&num);
   printf("%d",num>9 && num<100);
   return 0;

}
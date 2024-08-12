#include <stdio.h>

void main()
{
   char operator;
   int no1,no2,result;

   printf("enter an operator for perform operation(+,-,*,/,%%):-");
   scanf("%c",&operator);

      printf("\n Enter Two Numbers:-");
      scanf("%d %d",&no1,&no2);

   switch(operator)
   {
      case '+':
      result=no1+no2;
      printf("Addition of no1 and no2:%d",result);
      break;

      case '-':
      result=no1-no2;
      printf("subtraction for no2 in no1:%d",result);
      break;

      case '*':
      result=no1*no2;
      printf("multiplication of no1 and no2:%d",result);
      break;

      case '/':
      result=no1/no2;
      printf("division of no1 and no2:%d",result);
      break;

      case '%':
      if(no2!=0)
      {
         result=(int)no1 % (int)no2;
         printf("result:-%d\n",result);
      }
      else
      {
         printf("error! modulo by Zero is not allowed.\n");
      }
      break;

      default:
         printf("Invalid operator.....(please use +,-,*,/ or %%");
   }

}
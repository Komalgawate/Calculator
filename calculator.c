#include<stdio.h>

int main()
 {
   float num1;
   float num2;
   char op;
   float result;
   printf("Enter the First Number\n");
   scanf("%f", &num1);
   printf("Enter the operation\n");
   scanf(" %c", &op); 
   printf("Enter the Second Number\n");
   scanf("%f", &num2);

   switch (op)
    {
      case '+':
         result = num1 + num2;
         break;
      case '-':
         result = num1 - num2;
         break;
      case '*':
         result = num1 * num2;
         break;
      case '/':
         result = num1 / num2;
         break;
      default:
         printf("wrong choice");
         break;
   }
   printf("Result: %f\n", result);
   return 0;
}

#include "calculator.h"

int main()
{
int operation;
int number1, number2;
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("5. Modulus\n");
printf("6. Power\n");
printf("7. Factorial\n");
	
scanf("%d", &operation);

switch(operation)
{
       case 1:  printf("Enter first operand\n");
	        scanf("%d", &number1);
	        printf("Enter second operand\n");
	        scanf("%d", &number2);
	        printf("Result is:%d\n",addition(number1,number2));
	        break;
    
	case 2: printf("Enter first operand\n");
	        scanf("%d", &number1);
	        printf("Enter second operand\n");
	        scanf("%d", &number2);
	        printf("Result is:%d\n",subtraction(number1,number2));
	        break;
			
	case 3: printf("Enter first operand\n");
	        scanf("%d", &number1);
	        printf("Enter second operand\n");
	        scanf("%d", &number2);
	        printf("Result is:%d\n",multiplication(number1,number2));
	        break;
			
	case 4: printf("Enter first operand\n");
	        scanf("%d", &number1);
	        printf("Enter second operand\n");
	        scanf("%d", &number2);
	        printf("Result is:%d\n",division(number1,number2));
	        break;
			
	case 5: printf("Enter first operand\n");
	        scanf("%d", &number1);
	        printf("Enter second operand\n");
	        scanf("%d", &number2);
	        printf("Result is:%d\n",addition(number1,number2));
	        break;
			
	case 6: printf("Enter first operand\n");
	        scanf("%d", &number1);
	        printf("Enter second operand\n");
	        scanf("%d", &number2);
	        printf("Result is:%d\n",power(number1,number2));
	        break;
			
	case 7: printf("Enter a number\n");
	        scanf("%d", &number1);
	        printf("Result is:%d\n",factorial(number1));
	        break;
			 
}
      return 0;
}	

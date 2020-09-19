#include<calculator.h>
int main()
{
char operand;

switch(operand)
{
    case 1: addition(int number1,int number2);
	        break;
    
	case 2: subtraction(int number1,int number2);
	        break;
			
	case 3: multiplication(int number1,int number2);
	        break;
			
	case 4: division(int number1,int number2);
	        break;
			
	case 5: modulus(int number1,int number2);
	        break;
			
	case 6: power(double number1,double number2);
	        break;
			
	case 7: factorial(int number);
	         break;
			 
	default: printf("Invalid operation\n");
}
}	

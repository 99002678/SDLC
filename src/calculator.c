#include <calculator.h>

int addition(int number1,int number2)
{
   int sum=0;
   sum=number1+number2;
   return sum;
}

 int subtraction(int number1,int number2)
{
	int subtract=0;
	subtract = number1-number2;
	return subtract;
}

int multiplication(int number1,int number2)
{
	int multiply=0;
	multiply = number1*number2;
	return multiply;
}

int division(int number1,int number2)
{
	int division=0;
	
	if(number2==0)
		return 0;
	else
	{
		division = number1/number2;
		return division;
	}
}

int modulus(int number1,int number2)
{
	int modulus=0;
	modulus = number1%number2;
	return modulus;
}

double power(double number,double power)
{
	int result;
	power=pow(number,power);
	return result;
}

double factorial(int number)
{
	int temp;
	double fact=1;
	if(number<0)
	{
		printf("Enter positive number\n");
	}
	for(temp=1;temp<=number;temp++)
	{
		fact=fact*temp;
	}
	return fact;
}
	
	
#include <calculator.h>

long addition(int number1,int number2)
{
   long sum=0;
   sum=number1+number2;
   return sum;
}

 int subtraction(int number1,int number2)
{
	int subtract=0;
	subtract = number1-number2;
	return subtract;
}

long multiplication(int number1,int number2)
{
	int multiply=0;
	multiply = number1*number2;
	return multiply;
}

int division(int number1,int number2)
{
	int division;
	
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
	int modulus;
	modulus = number1%number2;
	return modulus;
}

long power(int number,int power)
{
	long result=1;
	power=pow(number,power);
	return result;
}

long factorial(int number)
{
	int temp;
	long fact=1;
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
	
	

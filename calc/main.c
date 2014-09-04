/*
	Description: This software will do something.
	Author: Lucas Reis
	Email: lucas@programmer.com.br
	Date: 09/03/2014
	GitHub: Synchronized

*/

#include <stdio.h>
#include <stdlib.h>

double calculator(double x, double y, char type){
	double z;
	switch (type)
	{
		case '+': 
			z = x + y;
			break;
		case '-': 
			z = x - y;
			break;
		case '*': 
			z = x * y;
			break;
		case '/': 
			z = x / y;
			break;
		default:
			break;
	}
	return z;
}

int main(void){
	double x, y, rs;
	char type = 's';
	printf("Type the first number \n");
	scanf("%d",&x);
	printf("Type the second number \n");
	scanf("%d",&y);
	printf("Type the operation \n 1_ + \n 2_ - \n 3_ * \n 4_ / \n");
	scanf("%s",type);
	rs = calculator(x,y,type);
	printf("The result of your operation is: %.2d",rs);
	 return 0;
}


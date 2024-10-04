//program to find compound interest
/*
program to find compound interest
Author: Victory
Reg no:CT101/G/22171/24
Date:29/9/2024
*/
//preprocwssor directive
#include<stdio.h>
#include<math.h>

int main(){
	//declaration and initialisation
	double principal, rate, amount, time, period,n, compoundinterest;
	//input of principal, time and rate
	
	printf("Enter the principal amount:\n");
	scanf("%lf",&principal);
	
	printf("enter the time(in years):\n");
	scanf("%lf",&time);
	
	printf("enter the rate of interest:\n");
	scanf("%lf",&rate);
	
	period = n* time;
	
	//amount of interest calculation
	amount=principal*pow((1 +rate/n), period);
	
	//calculate compound interest
	printf("compoundinterest=:%.2lf\n", compoundinterest);
	printf("total amount = %.2f\n", amount);
	
	return 0;
	}
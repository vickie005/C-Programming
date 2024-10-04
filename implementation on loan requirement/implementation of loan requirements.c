//program to implement loan requirements
/*
program to implement loan requirement
Author: Victory
Date: 29/9/2024
Reg no: CT101/G/22171/24
*/
//preprocessor directive
#include<stdio.h>

int main(){
	//user prompt
	int age;	
	double annualincome;
	
	printf("enter your age:\n");
	scanf("%d", &age); 
	
	printf("enter your annual income in ksh.:\n");
	scanf("%.2f", &annualincome);
	
	if (age>=21&annualincome>=21000){
		printf("congractulations you qualify for a loan\n");}
		
		else{
			printf("unfortunately, we are unable to offer you a loan at this time.\n");}
			
	return 0;
}
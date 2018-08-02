#include <stdio.h>
#include <conio.h>
int main()
{
	float n,a,b,c,d,f;
	printf("Program atomatic");
	printf("\nEnter a number ="); // \n new line
	scanf("%f",&n);
	
	if (n>100)
		printf("Error");
	else if(n>=80)
		printf("Grade A"); 
	else if (n>=70)
		printf("Grade B"); 
	else if(n>=60)
		printf("Grade C"); 
	else if(n>=50)
		printf("Grade D"); 
	else 
		printf("Grade F"); 
	
}

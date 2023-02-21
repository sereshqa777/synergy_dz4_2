#include <stdio.h>

int main() 
{
	printf("========== TASK 1 ==========\n");	
	int mas[7];
	for(int i=0;i<7;i++)
	{
		printf("Vvedite element[%i]: ",i+1);
		scanf("%i",&mas[i]);	
	}
	printf("\n============================\n");
	printf("Result: ");
	for(int i=0;i<7;i++)
	{
		printf("%4i",mas[i]);		
	}
		

	printf("\n\n========== TASK 2 ==========\n");
	int n;
	int mas2[100];
	printf("Kolichestvo elementov: ");
	scanf("%i",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("Vvedite element[%i]: ",i+1);
		scanf("%i",&mas2[i]);	
	}
	printf("\n============================\n");
	printf("Result: ");
	for(int i=0;i<n;i++)
	{
		printf("%4i",mas2[i]);	
	}
	return 0;
}

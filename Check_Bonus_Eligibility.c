#include<stdio.h>
#include<ctype.h>
int main()
{
	int age;
	char gen,ms;
	ms=tolower(ms);
	gen=tolower(gen);
	printf("Enter your martial statu (M)arried / (U)nmarried: ");
	scanf(" %c",&ms);
	
	
	if(ms=='m')
		printf("Elglible for Bonus:)");
	else		
		if(ms=='u')

	{
		printf("Enter your age:");
		scanf("%d",&age);
		printf("Enter your gender:");
		scanf(" %c",&gen);
		if(gen=='f')
			if(age>=25)
				printf("U are Eligible for Bonus:)");
		else 
				printf("Not Eligible for Bonus:(");
	else 
		if(gen=='m')
			if(age>=30 )
				printf("U are Eligible for Bonus:)");
		else 
				printf("u are not eligible for Bonus:(");
	else 
		printf("\a\aPlease enter a valid Gender Format\a\n\n");
	}
	else 
		printf("\a\aPlease Enter a valid Matial Status\n\n");
//	getch();

}

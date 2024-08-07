#include<stdio.h>
#include<conio.h>


int main()
{
	int marks;
	char grade;


	//input details
	printf("Enter your Score : ");
	scanf("%d",&marks);


	//Grade
	if(marks>90)
	{
		grade='A';
		printf("\nYour Grade is : %c",grade);
	}
	else if(marks>80)
	{
		grade='B';
		printf("\nYour Grade is : %c",grade);
	}
	else if(marks>70)
	{
		grade='C';
		printf("\nYour Grade is : %c",grade);
	}
	else if(marks>60)
	{
		grade='D';
		printf("\nYour Grade is : %c",grade);
	}
	else if(marks>50)
	{
		grade='E';
		printf("\nYour Grade is : %c",grade);
	}
	else if(marks>33)
	{
		grade='F';
		printf("\nYour Grade is : %c",grade);
	}
	else
	{
		printf("\nWrong Input");
	}

	switch(grade)
	{
		case 'A':
		{
			printf(" \nExcellent Work!");
			break;
		}
		case 'B':
		{
			printf(" \nWell Done!");
			break;
		}
		case 'C':
		{
			printf(" \nGood Job!");
			break;
		}
		case 'D':
		{
			printf(" \nYou Passed!");
			break;
		}
		case 'E':
		{
			printf(" \nLow Performance!");
			break;
		}
		case 'F':
		{
			printf(" \nSorry! You Failed");
			break;
		}
	    }

	    if(grade=='A'||grade=='B'||grade=='C'||grade=='D'||grade=='E')
	    {
		printf(" You are Eligible for Next Level");
	    }
	    else if(grade=='F')
	    {
		printf(" Please try again next time...");
	    }


	return 0;
}
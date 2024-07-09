#include<stdio.h>

main()
{
	int percentage;
	char grade;
	
	printf("enter your percentage :");
	scanf("%d",&percentage);
	
	grade = (percentage>=95) ?  'A':
		    (percentage>=85) ?  'B':
		  	(percentage>=69) ?  'C':
		  	(percentage>=42) ?  'D': 'F';
			  
			printf("your gread is %c\n",grade);  	
}
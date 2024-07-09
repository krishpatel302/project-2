#include<stdio.h>

main()
{
	int percentage;
	printf("enter your markss =");
	scanf("%d",&percentage);
	
	switch(percentage)
	{
		case 92 ... 100:
			           printf("your grade is A excellent work");
					   break;
		case 82 ... 91:
		               printf("your grade is B well done");
					   break;
		case 72 ... 81:
		               printf("your grade is C good job");
					   break;
		case 62 ... 71:
		               printf("your grade is D you passed but your better luck next timr");
					   break;
		case 52 ... 61:
		               printf("your gread is E you need prectice");
					   break;
		case 42 ... 51:
		               printf("your gread is F you are failed");
					   break;
		default:
		     printf("please enter valid percentage");
			 break;			   			   			   			   			   			    
	}
}
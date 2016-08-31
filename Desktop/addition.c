#include<stdio.h>


main()
{
	add();
	sub();





}
	
	void add()
	{
	float a,b;
	printf("\nEnter first number: ");
	scanf("%f",&a);
	
	printf("\nEnter second number: ");
	scanf("%f",&b);

	float sum=a+b;

	printf("\nThe sum of %f and %f is %f .",a,b,sum);
	}



	void sub()
         {
	         float a,b;
		 printf("\nEnter first number: ");
		 scanf("%f",&a);

		 printf("\nEnter second number: ");
		 scanf("%f",&b);
          
	 	 float sub=a-b;
                 printf("\nThe subtraction of %f and %f is %f .",a,b,sub);
	}
	void mul()
         {
	         float a,b;
		 printf("\nEnter first number: ");
		 scanf("%f",&a);

		 printf("\nEnter second number: ");
		 scanf("%f",&b);
          
	 	 float prod=a*b;
                 printf("\nThe product of %f and %f is %f .",a,b,sub);
	}
	
									 

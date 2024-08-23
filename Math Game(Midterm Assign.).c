#include <stdio.h>
#include <stdlib.h>
time_t t;


 
void mechanics ();
int gradelevel ();
void tryagain ();
void operation (int question, int grade);
 
/* PROTOTYPES */


void mechanics ()
{
	printf ("============== WELCOME TO MATH GAME! ==============\n\n");
	printf ("This game Helps you to enhance your math skills based on your grade Level!\n\n");
	printf ("Mechanics: \n\nComposed of 10 Easy random math equation!");
	printf ("\nGrade 1 : composed of 1 - digit number\n");
	printf ("Grade 2 : composed of 2 - digit number\n");
	printf ("Grade 3 : composed of 3 - digit number\n");
	printf ("\nAre you Ready? Lets get started\n \n");
	system ("pause");
	puts ("==============================");
}

int gradelevel ()
{
	system ("cls");
	int gradelvl;
	puts ("==============================");
	printf ("Enter your Grade Level: ");
	scanf ("%d",&gradelvl);
	if ((gradelvl == 1) ||(gradelvl == 2) ||(gradelvl == 3))
		return  (gradelvl);
	
	else
		gradelevel ();	
}

void operation (question,grade)
{

	 /* Intializes random number generator */
	srand(time(0));
	int opp ;
	int x  , y ;
	//if grade is 1 Generate One digit number
	
	if (grade == 1){
		x = rand ()%9+1;
		y = rand ()%9+1;
		opp = rand ()%4+1;

		if (opp == 3){
		/* Makes the first number divisible by the second number 
			if the operation is division to avoid Remainder */
			while (x%y!=0){
			x = rand ()%9+1;
			y = rand ()%9+1;
				}
			}
		else if (opp == 4 ){
			/* Makes the first number bigger if the operation is Subraction to avoid negative */
			while (x<y){
				x = rand ()%9+1;
				y = rand ()%9+1;	
				}
			}		
	}
	//if grade is 2 Generate two digit number
	else if (grade == 2){
		x = rand ()%90+10;
		y = rand ()%90+10;
		opp = rand ()%4+1;
	
		if (opp == 3){
			/* Makes the first number divisible by the second number 
			if the operation is division to avoid Remainder */
			while (x%y!=0){
				x = rand ()%90+10;
				y = rand ()%90+10;
				}
			}
		else if (opp == 4 ){
			/* Makes the first number bigger if the operation is Subraction to avoid negative */
			while (x<y){
				x = rand ()%90+10;
				y = rand ()%90+10;	
				}
			}
	}
	//if grade is 3 Generate three digit number
	else {
		x = rand ()%900+100;
		y = rand ()%900+100;
		opp = rand ()%4+1;
	
	
		if (opp == 3){
			/* Makes the first number divisible by the second number 
			if the operation is division to avoid Remainder */
			while (x%y!=0){
				x = rand ()%900+100;
				y = rand ()%900+100;
				}		
			}
		else if (opp == 4 ){
			/* Makes the first number bigger 
				if the operation is Subraction to avoid Negative */
			while (x<y){
				
				x = rand ()%900+100;
				y = rand ()%900+100;	
				}	
			}
		
	}
	
	switch (opp)
	{
		case 1 : {
			int product ,answer ;
			product = x * y;
			printf ("%d: %d * %d = ",question,x,y);
			scanf ("%d",&answer);
			if (answer == product){
				
				printf ("Good Job you got it right!\n");
				puts ("==============================");
			}
				
			else {
				printf ("The Correct answer is %d\n",product);
				puts ("==============================");
			}
				
			break;
			}
		
		case 2 : {
			int sum ,answer ;
			sum = x + y;
			printf ("%d: %d + %d = ",question,x,y);
			scanf ("%d",&answer);
			if (answer == sum){
			
				printf ("Good Job you got it right!\n");
				puts ("==============================");
			}
				
			else {
				printf ("The Correct answer is %d\n",sum);
				puts ("==============================");
			}
				
			break;
			}
			
		case 3 : {
			float  quotient ,answer ;
			quotient = x / y;
			printf ("%d: %d / %d = ",question,x,y);
			scanf ("%f",&answer);
			if (answer == quotient){
			
				printf ("Good Job you got it right!\n");
				puts ("==============================");
			}
				
			else {
				printf ("The Correct answer is %.2f\n",quotient);
				puts ("==============================");
			}
				
			break;
			}
		default : {
			int difference ,answer;
			difference = x - y;
			
			printf ("%d: %d - %d = ",question,x,y);
			scanf ("%d",&answer);
			if (answer == difference){
			
				printf ("Good Job you got it right!\n");
				puts ("==============================");
			}
			
			else {
				printf ("The Correct answer is %d\n",difference);
				puts ("==============================");
			}
			
		}	
		
	}
}



void tryagain ()
{
	char let;
	puts ("==============================");
	printf ("Do you want to try again? yes = Y or no = N\n");
	scanf ("%c",&let);
	system("cls");
	
	if ((let == 'N')||(let == 'n')){
		printf ("\n********************************************************\n");
		printf ("\nThank you see you again! :)");
	}
	else if ((let == 'Y')||(let == 'y'))
		main ();
	else {
		tryagain ();
	}
}





int main ()
{
	int question ,grade;

	mechanics ();
	grade =	gradelevel ();
	for (question = 1 ; question<=10 ; question++){
		operation (question,grade);
	}
	tryagain ();


	
	
	
}





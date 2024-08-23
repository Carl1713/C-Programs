#include<Stdio.h>
#include<stdlib.h>
#define c 250000000
time_t t;
// Creator/ Author: Carl Silvestre
// guessing Game v2.0
// Assingment
main()
{
	play();
	while(tryagian()!=2)
	{
		system("cls");
		play();
	}
}
play()
{
	
	int a,b=0,c1,c2=0,score=0,time=3;
	printf("******* The Guessing Game *********\n\n");
	printf("Title: Nasaan Na ang Bato Ko??\n\n");
	printf("Author: Carl Silvestre\n\n");
	printf("Discription: Sa Game na ito ay masusubukan mo ang iyong kakayahang Mang Hula :3 \n\n");
	system("pause");
	system("cls");
	printf("Are You Ready? \n\n");
	system("pause");
	system("cls");
	printf("The Game Begin in... \n\n");
	delay();
		while(time>=1)
	{
		system("cls");
		printf("********** %d *********\n",time);
		delay();
		
		time--;
	}
	
	system("cls");
	delay();
	printf("Lets Play \n\n");
	while(1){
		delay();
		printf("Where is the stone ?\n\n");
		for(a=1;a<=2+b;a++)
		{
			
			printf("[ %d ] ",a);
			c2=rand()%a+1;
	
		
		}
		
		
		printf("\n=>");
		scanf("%d",&c1);
		if(c1==c2)
		{
			printf("Correct\n\n\n");
			b+=2;
			score+=1;
			system("pause");
			system("cls");
	
		}
		else{
		printf("\n\nYour Score: %d\n=======================================================\n\n",score);
		return 0;
		
	}
		
	}
	
}
delay()
{
long int x;
for(x=0;x<c;x++);
}
tryagian()
{
	int y;
	printf("\nDo You want To try again??\n");
	printf("1 - Yes \t2 - No\n\n=>");
	scanf("%d",&y);
	return(y);
}

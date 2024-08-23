#include<stdio.h>
#include <time.h>
#define p 250000000
time_t t;


FILE *Reciept;	
int b;
int select,total=0,c;
int item,x,Or=1;
float change,cash,vat_a,vat ;
char cashier[50];

// prototypes
void intro();
void menu();
void dessert();
void drink();
void selection();
void header();
void pay();
void salads();
void sandwitch();





void intro()
{
	printf("L O A D I N G . . . .");
	delay();delay();delay();delay();delay();delay();
	system("cls");
	system("color 0e");
	puts("\t\t*>*<*>*<*>*<*>*<*>*<*>*<*>*<*>*<*>*<*>*<*>*");
	puts("\t\tv                                         v");
	puts("\t\t*                 WeLcome                 *");
	puts("\t\t^                                         ^");
	puts("\t\t*                   to                    *");
	puts("\t\tv                                         v");
	puts("\t\t*               TM  Palawan               *");
	puts("\t\t^                                         ^");
	puts("\t\t*>*<*>*<*>*<*>*<*>*<*>*<*>*<*>*<*>*<*>*<*>*\n\n");
	system("pause");
	system("cls");
	puts("\t\t*>*<*>*<*>*<*>*<*>*<*>*<*>*<*>*<*>*<*>*<*>*");
	puts("\t\tv                                         v");
	puts("\t\t*                 Created                 *");
	puts("\t\t^                                         ^");
	puts("\t\t*                   By:                   *");
	puts("\t\tv                                         v");
	puts("\t\t*            Carl E. Silvestre            *");
	puts("\t\t^                                         ^");
	puts("\t\t*>*<*>*<*>*<*>*<*>*<*>*<*>*<*>*<*>*<*>*<*>*\n\n");
	system("pause");
	system("cls");
	
	printf("\t\t<+> Enter Cashier Name: ");
	gets (cashier);

}


void sandwitch(){
	Reciept= fopen("Reciept.txt","a");
	while(select!=-1){
		system("cls");
	
		puts("\t|*--------------------------------------------------------------------------*|");
		puts("\t|*|========================================================================|*|");
		puts("\t|*|                                  Sandwitch                             |*|");
		puts("\t|*|========================================================================|*|");
		puts("\t|*|  1  = Chicken Sandwitch      [ 50  ] ||  6  = Beef Burger      [ 50  ] |*|");
		puts("\t|*|                                      ||                                |*|");
		puts("\t|*|  2  = Tasty Beef Sandwitch   [ 50  ] ||  7  = Crab Burger      [ 50  ] |*|");
		puts("\t|*|                                      ||                                |*|");
		puts("\t|*|  3  = Ham Salad  Sandwitch   [ 65  ] ||                                |*|");
		puts("\t|*|                                      ||                                |*|");
		puts("\t|*|  4  = Tuna Sandwitch         [ 50  ] ||                                |*|");
		puts("\t|*|                                      ||                                |*|");
		puts("\t|*|  5  = TM Special Sandwitch   [ 100 ] ||                                |*|");
		puts("\t|* ======================================================================== *|");
		puts("\t|*__________________________________________________________________________*|");
		puts("\t\t\t\t\t[ -1 to back to menu ]");

		puts("\n\t\t\t\t\tEnter you want to buy");
		printf("\t\t\t\t\t=>");
		scanf("%d",&select);
		
	switch(select){
		
	case 1:
		c=0;
		printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
		scanf("%d",&b);
		c=50*b;
		item+=b;
		total+=c;
		fprintf(Reciept,"%5dpcs     Chicken Sandwitch       %8d.00\n",b,c);
		
		break;
		
	case 2:
		c=0;
		printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
		scanf("%d",&b);
		c=50*b;
		item+=b;
		total+=c;
		fprintf(Reciept,"%5dpcs     Tasty Beef Sandwitch    %8d.00\n",b,c);
		
		break;
	
	case 3:
		c=0;
		printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
		scanf("%d",&b);
		c=65*b;
		item+=b;
		total+=c;
	    fprintf(Reciept,"%5dpcs     Ham Salad  Sandwitch    %8d.00\n",b,c);
		
		break;
	
	case 4:
		c=0;
		printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
		scanf("%d",&b);
		c=50*b;
		item+=b;
		total+=c;
	    fprintf(Reciept,"%5dpcs     Tuna Sandwitch          %8d.00\n",b,c);
		
		break;
		
		
	case 5:
		c=0;
		printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
		scanf("%d",&b);
		c=100*b;
		item+=b;
		total+=c;
	    fprintf(Reciept,"%5dpcs     TM Special Sandwitch    %8d.00\n",b,c);
		
		break;
		
	case 6:
		c=0;
		printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
		scanf("%d",&b);
		c=50*b;
		item+=b;
		total+=c;
	    fprintf(Reciept,"%5dpcs     Beef Burger             %8d.00\n",b,c);
		
		break;
		
	case 7:
		c=0;
		printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
		scanf("%d",&b);
		c=50*b;
		item+=b;
		total+=c;
	    fprintf(Reciept,"%5dpcs     Crab Burger             %8d.00\n",b,c);
		
		break;
	}

		
		
		
		
		
		
		
	}
	fclose(Reciept);	
	menu();
	
}
void salads()
{
	system("color 02");
	Reciept = fopen("Reciept.txt","a");
	while(select!= -1){
	
	
		system("cls");

puts("\t|*-----------------------------------------------------------------------------*|");
puts("\t|*|===========================================================================|*|");
puts("\t|*|                                    Salads                                 |*|");
puts("\t|*|===========================================================================|*|");
puts("\t|*|  1  = Ampalaya salad         [ 80  ] ||  6  = Macaroni Salad      [ 100 ] |*|");
puts("\t|*|                                      ||                                   |*|");
puts("\t|*|  2  = Papaya apple  Salad    [ 150 ] ||  7  = Pineapple Salad     [ 120 ] |*|");
puts("\t|*|                                      ||                                   |*|");
puts("\t|*|  3  = Buko Salad             [ 40  ] ||  8  = Egg Salad           [ 30  ] |*|");
puts("\t|*|                                      ||                                   |*|");
puts("\t|*|  4  = Pickled Mangoes        [ 70  ] ||  9  = Lime Jello          [ 150 ] |*|");
puts("\t|*|                                      ||                                   |*|");
puts("\t|*|  5  = Medley Salad           [ 100 ] ||  10 = Chip Salad          [ 35  ] |*|");
puts("\t|* =========================================================================== *|");
puts("\t|*_____________________________________________________________________________*|");
puts("\t\t\t\t\t[ -1 to back to menu ]");

puts("\n\t\t\t\t\tEnter you want to buy");
printf("\t\t\t\t\t=>");
scanf("%d",&select);

switch(select)
{
	case 1:
		c=0;
		printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
		scanf("%d",&b);
		c=80*b;
		item+=b;
		total+=c;
		fprintf(Reciept,"%5dpcs     Ampalaya Salad          %8d.00\n",b,c);
		
		break;
		
	case 2:
		c=0;
		printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
		scanf("%d",&b);
		c=150*b;
		item+=b;
		total+=c;
		fprintf(Reciept,"%5dpcs     Papaya Apple Salad      %8d.00\n",b,c);
		break;
		
	case 3:
		c=0;
		printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
		scanf("%d",&b);
		c=40*b;
		item+=b;
		total+=c;
		fprintf(Reciept,"%5dpcs     Buko Salad              %8d.00\n",b,c);
		break;
	case 4:
		c=0;
		printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
		scanf("%d",&b);
		c=70*b;
		item+=b;
		total+=c;
		fprintf(Reciept,"%5dpcs     Pickled Mangoes         %8d.00\n",b,c);
		break;
	case 5:
		c=0;
		printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
		scanf("%d",&b);
		c=100*b;
		item+=b;
		total+=c;
		fprintf(Reciept,"%5dpcs     Medley Salad            %8d.00\n",b,c);
		break;
		
	case 6:
		c=0;
		printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
		scanf("%d",&b);
		c=100*b;
		item+=b;
		total+=c;
		fprintf(Reciept,"%5dpcs     Macaroni Salad          %8d.00\n",b,c);
		break;
		
	case 7:
		c=0;
		printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
		scanf("%d",&b);
		c=120*b;
		item+=b;
		total+=c;
		fprintf(Reciept,"%5dpcs     Pineapple Salad         %8d.00\n",b,c);
		break;
		
	case 8:
		c=0;
		printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
		scanf("%d",&b);
		c=30*b;
		item+=b;
		total+=c;
		fprintf(Reciept,"%5dpcs     Egg Salad               %8d.00\n",b,c);
		break;
	
	case 9:
		c=0;
		printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
		scanf("%d",&b);
		c=150*b;
		item+=b;
		total+=c;
		fprintf(Reciept,"%5dpcs     Lime Jello              %8d.00\n",b,c);
		break;
	
	case 10:
		c=0;
		printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
		scanf("%d",&b);
		c=35*b;
		item+=b;
		total+=c;
		fprintf(Reciept,"%5dpcs     Chip Salad              %8d.00\n",b,c);
		break;
		
		
		
		
		
		
}
}
fclose(Reciept);
menu();

}

void drink(){
	system("color 05");
	while(select!= -1){
		system("cls");
puts("\t\t =========================================================================");
puts("\t\t||                                Drinks                                 ||");
puts("\t\t||=======================================================================||");
puts("\t\t||             Regular              ||                 Large             ||");
puts("\t\t||=======================================================================||");
puts("\t\t||  1  = Lemon juice        [  10 ] ||  7  = Lemon juice         [  20 ] ||");
puts("\t\t||                                  ||                                   ||");
puts("\t\t||  2  = Orange juice       [  10 ] ||  8  = Orange juice        [  20 ] ||");
puts("\t\t||                                  ||                                   ||");
puts("\t\t||  3  = Apple juice        [  10 ] ||  9  = Apple juice         [  20 ] ||");
puts("\t\t||                                  ||                                   ||");
puts("\t\t||  4  = manggo Juice       [  10 ] ||  10 = manggo Juice        [  20 ] ||");
puts("\t\t||                                  ||                                   ||");
puts("\t\t||  5  = Buko juice         [  10 ] ||  11 = Buko juice          [  20 ] ||");
puts("\t\t||                                  ||                                   ||");
puts("\t\t||  6  = Pineapple juice    [  10 ] ||  12 = Pineapple juice     [  20 ] ||");
puts("\t\t =========================================================================");
puts("\t\t\t\t\t[ -1 to back to menu ]");
puts("\n\t\t\t\t\tEnter you want to buy");
printf("\t\t\t\t\t=>");
scanf("%d",&select);


switch(select)
{
		case 1:
			c=0;
			Reciept = fopen("Reciept.txt","a");
			printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
			scanf("%d",&b);
			c=10*b;
			item+=b;
			total+=c;
			fprintf(Reciept,"%5dpcs     Lemon juice      Regular%8d.00\n",b,c);
			fclose(Reciept);
			break;
			
		
		
			
			
		case 2:
			c=0;
			Reciept = fopen("Reciept.txt","a");
		printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
			scanf("%d",&b);
			c=10*b;
			item+=b;
			fprintf(Reciept,"%5dpcs     Orange juice     Regular%8d.00\n",b,c);
			total+=c;
			fclose(Reciept);
			break;
			
	case 3:

			c=0;
			Reciept = fopen("Reciept.txt","a");
			printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
			scanf("%d",&b);
			c=10*b;
			item+=b;
			fprintf(Reciept,"%5dpcs     Apple juice      Regular%8d.00\n",b,c);
			total+=c;
			fclose(Reciept);
			break;
						
			
		case 4:
			c=0;
			Reciept = fopen("Reciept.txt","a");
			printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
			scanf("%d",&b);
			c=10*b;
			item+=b;
			fprintf(Reciept,"%5dpcs     manggo Juice     Regular%8d.00\n",b,c);
			total+=c;
			fclose(Reciept);
			break;
					
		case 5:
			c=0;
			Reciept = fopen("Reciept.txt","a");
			printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
			scanf("%d",&b);
			c=10*b;
			item+=b;
			fprintf(Reciept,"%5dpcs     Buko juice       Regular%8d.00\n",b,c);
			total+=c;
			fclose(Reciept);
			break;
						
		case 6:
			c=0;
			Reciept = fopen("Reciept.txt","a");
		printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
			scanf("%d",&b);
			c=20*b;
			item+=b;
			fprintf(Reciept,"%5dpcs     Pineaplle Juice  Regular%8d.00\n",b,c);
			total+=c;
			fclose(Reciept);
			break;
				
		case 7:
			c=0;
			Reciept = fopen("Reciept.txt","a");
			printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
			scanf("%d",&b);
			c=20*b;
			item+=b;
			total+=c;
			fprintf(Reciept,"%5dpcs     Lemon juice      Large  %8d.00\n",b,c);
			fclose(Reciept);
			break;
			
			
		case 8:
			c=0;
			Reciept = fopen("Reciept.txt","a");
			printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
			scanf("%d",&b);
			c=20*b;
			item+=b;
			fprintf(Reciept,"%5dpcs     Orange juice     Large  %8d.00\n",b,c);
			total+=c;
			fclose(Reciept);
			break;
			
			
			
			
			
			
		
			
			
			
			
		case 9:

			c=0;
			Reciept = fopen("Reciept.txt","a");
			printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
			scanf("%d",&b);
			c=20*b;
			item+=b;
			fprintf(Reciept,"%5dpcs     Apple juice      Large  %8d.00\n",b,c);
			total+=c;
			fclose(Reciept);
			break;
			
			

			
			
		case 10:
			c=0;
			Reciept = fopen("Reciept.txt","a");
			printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
			scanf("%d",&b);
			c=20*b;
			item+=b;
			fprintf(Reciept,"%5dpcs     manggo Juice     Large  %8d.00\n",b,c);
			total+=c;
			fclose(Reciept);
			break;
			
			
			

		
			
		case 11:
			c=0;
			Reciept = fopen("Reciept.txt","a");
		printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
			scanf("%d",&b);
			c=20*b;
			item+=b;			
			fprintf(Reciept,"%5dpcs     Buko juice       Large  %8d.00\n",b,c);
			total+=c;
			fclose(Reciept);
			break;
			
			

			
			
		case 12:
			c=0;
			Reciept = fopen("Reciept.txt","a");
			printf("\t\t\t\t\tHow many Pcs?\n\t\t\t\t\t=>");
			scanf("%d",&b);
			c=20*b;
			item+=b;
			fprintf(Reciept,"%5dpcs     Pineaplle Juice  Large  %8d.00\n",b,c);
			total+=c;
			fclose(Reciept);
			break;


}

}
	menu();
}
void desserts(){
	
	
while(select!= -1){
	
	
system("cls");

puts("\t|*-------------------------------------------------------------------------*|");
puts("\t|*|=======================================================================|*|");
puts("\t|*|                               Dessert                                 |*|");
puts("\t|*|=======================================================================|*|");
puts("\t|*|             Regular              ||               Special             |*|");
puts("\t|*|=======================================================================|*|");
puts("\t|*|  1  = Fruit Cake         [ 50  ] ||  6  = Fruit Cake          [ 100 ] |*|");
puts("\t|*|                                  ||                                   |*|");
puts("\t|*|  2  = Leche Flan         [ 60  ] ||  7  = Leche Flan          [ 120 ] |*|");
puts("\t|*|                                  ||                                   |*|");
puts("\t|*|  3  = Buko Salad         [ 40  ] ||  8  = Buko Salad          [ 80  ] |*|");
puts("\t|*|                                  ||                                   |*|");
puts("\t|*|  4  = Apple Pie          [ 35  ] ||  9  = Apple Pie           [ 70  ] |*|");
puts("\t|*|                                  ||                                   |*|");
puts("\t|*|  5  = Kamote Cake        [ 100 ] ||  10 = Kamote Cake         [ 200 ] |*|");
puts("\t|* ======================================================================= *|");
puts("\t|*_________________________________________________________________________*|");
puts("\t\t\t\t[ -1 to back to menu ]");

puts("\n\t\t\t\tEnter you want to buy");
printf("\t\t\t\t=>");
scanf("%d",&select);

switch(select)
{
	case 1:
			c=0;
			Reciept = fopen("Reciept.txt","a");	
			printf("\t\t\t\tHow many Pcs?\n\t\t\t\t=>");
			scanf("%d",&b);
			c=50*b;
			item+=b;
			fprintf(Reciept,"%5dpcs     Fruit cake       Regular%8d.00\n",b,c);
			total+=c;
			fclose(Reciept);
			break;

		
			
	case 2:
			c=0;
			Reciept = fopen("Reciept.txt","a");
			printf("\t\t\t\tHow many Pcs?\n\t\t\t\t=>");
			scanf("%d",&b);
			c=60*b;
			item+=b;
			fprintf(Reciept,"%5dpcs     Leche Flan       Regular%8d.00\n",b,c);
			total+=c;
			fclose(Reciept);
			break;
						
	case 3:
			c=0;
			Reciept = fopen("Reciept.txt","a");
			printf("\t\t\t\tHow many Pcs?\n\t\t\t\t=>");
			scanf("%d",&b);
			c=40*b;
			item+=b;
			fprintf(Reciept,"%5dpcs     Buko Salad       Regular%8d.00\n",b,c);
			total+=c;
			fclose(Reciept);
			break;
						
	case 4:
			c=0;
			Reciept = fopen("Reciept.txt","a");
			printf("\t\t\t\tHow many Pcs?\n\t\t\t\t=>");
			scanf("%d",&b);
			c=35*b;
			item+=b;
			fprintf(Reciept,"%5dpcs     Apple Pie        Regular%8d.00\n",b,c);
			total+=c;
			fclose(Reciept);
			break;
			
	case 5:
			c=0;
			Reciept = fopen("Reciept.txt","a");
			printf("\t\t\t\tHow many Pcs?\n\t\t\t\t=>");
			scanf("%d",&b);
			c=100*b;
			item+=b;
			fprintf(Reciept,"%5dpcs     Kamote Cake      Regular%8d.00\n",b,c);
			total+=c;
			fclose(Reciept);
			break;
						
	case 6:
			c=0;
			Reciept = fopen("Reciept.txt","a");	
			printf("\t\t\t\tHow many Pcs?\n\t\t\t\t=>");
			scanf("%d",&b);
			c=100*b;
			item+=b;
			fprintf(Reciept,"%5dpcs     Fruit cake       Special%8d.00\n",b,c);
			total+=c; 
			fclose(Reciept);
			break;
			
			
	case 7:
			c=0;
			Reciept = fopen("Reciept.txt","a");
			printf("\t\t\t\tHow many Pcs?\n\t\t\t\t=>");
			scanf("%d",&b);
			c=120*b;
			item+=b;
			fprintf(Reciept,"%5dpcs     Leche Flan       Special%8d.00\n",b,c);
			total+=c;
			fclose(Reciept);
			break;
			

	case 8:
			c=0;
			Reciept = fopen("Reciept.txt","a");
			printf("\t\t\t\tHow many Pcs?\n\t\t\t\t=>");
			scanf("%d",&b);
			c=80*b;
			item+=b;
			fprintf(Reciept,"%5dpcs     Buko Salad       Special%8d.00\n",b,c);
			total+=c;
			fclose(Reciept);
			break;
			
			
			
			

			
	case 9:
			c=0;
			Reciept = fopen("Reciept.txt","a");
			printf("\t\t\t\tHow many Pcs?\n\t\t\t\t=>");
			scanf("%d",&b);
			c=70*b;
			item+=b;
			fprintf(Reciept,"%5dpcs     Apple Pie        Special%8d.00\n",b,c);
			total+=c;
			fclose(Reciept);
			break;
			
			
			
			
			
			
			
			

			
			
	case 10:
			c=0;
			Reciept = fopen("Reciept.txt","a");
			printf("\t\t\t\tHow many Pcs?\n\t\t\t\t=>");
			scanf("%d",&b);
			c=200*b;
			item+=b;
			fprintf(Reciept,"%5dpcs     Kamote Cake      Special%8d.00\n",b,c);
			total+=c;
			fclose(Reciept);
			break;
			


}
	
}
menu();

}


void menu()
{
	system("color 03");
	system("cls");
	puts("\t\t\t|----------------------------------------------|");
	puts("\t\t\t|==============================================|");
	puts("\t\t\t|=|                => MENU <=                |=|");
	puts("\t\t\t|=|                                          |=|"); 
	puts("\t\t\t|=|    *==========*     *=================*  |=|");
	puts("\t\t\t|=|    | 0 -> Pay |     |  1 -> SANDWITCH |  |=|");
	puts("\t\t\t|=|    *==========*     *=================*  |=|");
	puts("\t\t\t|=|                                          |=|");
	puts("\t\t\t|=|   *=============*    *===============*   |=|");
	puts("\t\t\t|=|   | 2 -> DRINKS |    | 3 -> DESSERTS |   |=|");
	puts("\t\t\t|=|   *=============*    *===============*   |=|");
	puts("\t\t\t|=|                                          |=|");
	puts("\t\t\t|=|   *=============*      *============*    |=|");
	puts("\t\t\t|=|   | 4 -> SALADS |      | 5 -> EXIT  |    |=|");
	puts("\t\t\t|=|   *=============*      *============*    |=|");
	puts("\t\t\t|=|                                          |=|");
	puts("\t\t\t|==============================================|");
	puts("\t\t\t|______________________________________________|");
	printf("\t\t\t\t\t\t=>");
	
	scanf("%d",&select);
	
	
	switch(select)
	{
		case 0:
			if(total!=0)
				{			
				pay();
				system("Reciept.txt");
				}
			else
				{
					system("cls");
					puts("\t\t*=*=*=*=*=*=*=*=**=*=*=*=*=*=*=*=*=*=*");
					puts("\t\t|>>>>> You have to order first! <<<<<|");
					puts("\t\t*=*=*=*=*=*=*=*=**=*=*=*=*=*=*=*=*=*=*\n\n\n");
					
					system("pause");
					system("cls");
					menu();
				}
			break;
			
			
		case 1:
			sandwitch();
			break;
		case 2:
			 drink();
			break;
		case 3:
			desserts();
			break;
		case 4:
			salads();
			break;

		case 5:
			if(total!=0)
					{			
					system("cls");
					puts("\t\t*=*=*=*=*=*=*=*=**=*=*=*=*=*=*=*=*=*=*");
					puts("\t\t|>>>> Pay First Before you Leave <<<<|");
					puts("\t\t*=*=*=*=*=*=*=*=**=*=*=*=*=*=*=*=*=*=*\n\n\n");
					
					
					system("pause");
					system("cls");
					pay();
					system("Reciept.txt");
					
					}
					
			break;
			
		default:
			menu();
	}


}
buyagian()
{
	system("CLs");
	int a;
	
	puts("\t\t*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=");
	puts("\t\t\"    Do you want to Order again?   \"");
	puts("\t\t\"                                  \"");
	puts("\t\t\"                                  \"");
	puts("\t\t\"   *-*-*-*-*-*        *-*-*-*-*   \"");
	puts("\t\t\"   | 1 = Yes |        | 2 = No |  \"");
	puts("\t\t\"   *-*-*-*-*-*        *-*-*-*-*   \"");
	puts("\t\t\"                                  \"");
	puts("\t\t\"                                  \"");
	puts("\t\t\"                                  \"");
	puts("\t\t*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=");
	printf("\t\t\t\t=>");
	scanf("%d",&a);
	if(a==1)
	{
		item=0;
		total=0;
		header();
		menu();
	}
	else
	{
		system("cls");
	puts("\t\t*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
	puts("\t\t\"                                 \"");
	puts("\t\t*                                 *");
	puts("\t\t\"                                 \"");
	puts("\t\t*         Thank you!! :)          *");
	puts("\t\t\"                                 \"");
	puts("\t\t*       Please come  again        *");
	puts("\t\t\"                                 \"");
	puts("\t\t*                                 *");
	puts("\t\t\"                                 \"");
	puts("\t\t*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
		
	}
	return (a);
}
void header()
{
	time(&t);
	Reciept = fopen("Reciept.txt","w");
		   
	
		
	
		fprintf(Reciept,"                    TM PALAWAN MAIN\n");
		fprintf(Reciept,"                 FREE FOODS CORPORATION\n");
		fprintf(Reciept,"            Junction 9, Puerto Princesa City\n");
		fprintf(Reciept,"               VAT Reg TIN: 003-460-168-159\n");
		fprintf(Reciept,"                   POSO2-SN:KSF20897\n");
		fprintf(Reciept,"                MIN#15043011123456789\n\n");
    	fprintf(Reciept,"     Cashier: %s",cashier);
	    fprintf(Reciept,"\n    ================================================\n");
	    fprintf(Reciept,"     %s",ctime(&t));
	    fprintf(Reciept,"\n\n     OR#0000000%d\n",Or++);
		fprintf(Reciept,"    ================================================\n");
		fprintf(Reciept,"    ----------------------DINE-IN-------------------\n");
		
		fclose(Reciept);
		
	
	
	
	
	
	
	
	
	
	
}

int main(){
	intro();
	
	header();
	menu();
	while(buyagian()==1){
	
	buyagian();
}
	
}

void pay ()
{
	float  c;
	printf ("\n\n\t\t======= Amount to pay    :%d.00 =============",total);
	printf ("\n\n\t\t======= Enter your Money :");
	scanf ("%f",&cash);
	while(cash<total)
	{
	printf("\n\n\t\t======== Please Add your Money: ");
		scanf("%f",&c);
		cash+=c;
	}
	
	
	change = cash - total;
	vat_a = total*.12;
	vat = total - vat_a;
  Reciept = fopen("Reciept.txt","a");
	fprintf(Reciept,"   ------------                       ------------\n");
	fprintf(Reciept,"%8d Item(s)%29d.00 \n\n",item,total);
	fprintf(Reciept,"          TOTAL DUE             %7d.00 \n\n",total);
	fprintf(Reciept,"          CASH                     %7.2f \n",cash);
	fprintf(Reciept,"          CHANGE DUE               %7.2f \n\n",change);
	fprintf(Reciept,"          VATable Sales            %7.2f \n",vat);	
	fprintf(Reciept,"          VAT Amount               %7.2f \n\n",vat_a);	
	fprintf(Reciept,"    ================================================\n");
	fprintf(Reciept,"          Thank you, and please come again.\n");
	fprintf(Reciept,"           For feedback, please call us at \n");
	fprintf(Reciept,"         898-9999 or text us at 0917-800713\n\n");
	fprintf(Reciept,"           Email : feedback@TM.com.ph\n");
	fprintf(Reciept,"         Visit us also at www.tropangmonggo.com.ph\n\n");
	fprintf(Reciept,"          This serves as an OFFICIAL RECEIPT\n");
	fprintf(Reciept,"            ANSI Information Systems, Inc.\n");
	fprintf(Reciept,"                  Tytana St., PPC\n");
	fprintf(Reciept,"            VAT Reg TIN: 000-330-515-0000\n");
	fprintf(Reciept,"       ACCREDITATION NO.03000033051500000712638\n");
	fprintf(Reciept,"               Date Issued: 03/01/2016\n");
	fprintf(Reciept,"          PTU No. FP042015-125-0032032-00159\n");
	fprintf(Reciept,"        THIS INVOICE/RECEIPT SHALL BE VALID FOR\n");
	fprintf(Reciept,"          FIVE (5) YEARS FORM THE DATE OF THE\n");
	fprintf(Reciept,"                     PERMIT TO USE.");
	fclose(Reciept);
}
delay()
{
long int x;
for(x=0;x<p;x++);
}

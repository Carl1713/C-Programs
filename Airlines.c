// Created by: Carl Silvestre
// date created: january 2016
// assignment in programming 2
// version: Airline v1.0
// #include<stdio.h>
#define p 250000000
int air[15][6] = {{1, 2, 3, 4, 5, 6},
				  {7, 8, 9, 10, 11, 12},
				  {13, 14, 15, 16, 17, 18},
				  {19, 20, 21, 22, 23, 24},
				  {25, 26, 27, 28, 29, 30},
				  {31, 32, 33, 34, 35, 36},
				  {37, 38, 39, 40, 41, 42},
				  {43, 44, 45, 46, 47, 48},
				  {49, 50, 51, 52, 53, 54},
				  {55, 56, 57, 58, 59, 60},
				  {61, 62, 63, 64, 65, 66},
				  {67, 68, 69, 70, 71, 72},
				  {73, 74, 75, 76, 77, 78},
				  {79, 80, 81, 82, 83, 84},
				  {85, 86, 87, 88, 89, 90}};
main()
{

	loading();
	menu();
}

loading()
{
	int a, time = 5;
	system("color 03");
	printf("Opening...");
	delay(), delay(), delay(), delay();
	system("Cls");
	printf("Starting Program......");
	delay(), delay(), delay();
	system("Cls");
	printf("+++++++| Created By: Carl Silvestre |<<<<<<<<<<<<<<\n\n");
	delay();
	printf("+++++++| Version: Airline v1.0 \n\n");
	system("Pause"), system("Cls");
	printf("+++++++++++++++++| Program start in |+++++++++++++++++++++ \n");
	delay(), delay();
	while (time >= 1)
	{
		system("cls");
		printf("****************************| %d |**********************************\n", time);
		delay();
		time--;
	}
	system("cls");
	printf("=========================| Welcome |=================================\n");
	delay(), delay();
	printf("=============| to PSU - Airlines Booking system |====================\n\n\n");
	delay();
	printf("loading....");
	delay(), delay(), delay(), delay(), delay();
}
menu()
{
	int a, b;
	system("color f2");
	system("cls");
	printf("===================    PSU Airlines    ====================== \n");
	delay();
	printf("===================   Booking System   ====================== \n\n\n");
	delay();

	printf(">>>>>>>>>>>>>>>>>>|   1 - Resevation  |<<<<<<<<<<<<<<<<<<<<<<\n"),
		delay();
	printf(">>>>>>>>>>>>>>>>>>|   2 - View Seats  |<<<<<<<<<<<<<<<<<<<<<<\n");
	delay();
	printf(">>>>>>>>>>>>>>>>>>|   3 - Exit        |<<<<<<<<<<<<<<<<<<<<<<\n=>");
	delay();
	scanf("%d", &a);

	if (a == 1)
	{
		reserve();
	}
	else if (a == 2)
	{
		system("cls");
		system("color 02");
		printf("=============== PSU - Airline Seat View =================\n\n");
		delay();

		printf(">>>>>>>>>|    'X' = Means Already Reserved    |<<<<<<<<<<<<<< \n");
		delay();
		printf(">>>>>>>>>|          Enter -1 to back          |<<<<<<<<<<<<<<\n");
		delay();
		printf(">>>>>>>>>|   or Enter any Integer to Exit     |<<<<<<<<<<<<<<\n\n\n");
		delay();
		seat(0, 0);
		printf("\n\n=> ");
		scanf("%d", &b);
		if (b == -1)
		{
			menu();
		}
		else
		{

			oops();
		}
	}
	else
		oops();
}
reserve()
{
	int a;
	system("color 0a");

	system("cls");
	printf("|====================| Reservation Area |===================|\n\n");
	delay();
	printf("|((((((((((((((((((|* 1 - Business Class *|))))))))))))))))))|\n");
	delay();
	printf("|((((((((((((((((((|* 2 - Economy Class  *|))))))))))))))))))|\n");
	delay();
	printf("|((((((((((((((((((|* 3 - Back           *|))))))))))))))))))|\n=>"), scanf("%d", &a);

	if (a == 1)
		business();
	else if (a == 2)
		Economy();
	else if (a == 3)
		menu();
	else
		oops();
}

business()
{
	system("color 02");
	int a, b, c;
	system("cls");

	printf("**************** Business Class Reservation ******************\n");
	printf(">>>>>>>>>|    'X' = Means Already Reserved    |<<<<<<<<<<<<<< \n\n");
	seat(10, 0);
	printf("\n\n*****************| -1 to Back |*********************\n");
	printf("************| Enter the seat you want |*************\n\t\t\t");
	scanf("%d", &c);
	system("cls");
	if (c != -1)
	{

		for (a = 0; a < 5; a++)
		{
			for (b = 0; b < 6; b++)
			{
				if (air[a][b] == c)
				{
					air[a][b] = 'x';
				}
			}
		}

		system("cls");
		seat(10, 0);
		system("cls");
		business();
	}

	else
	{
		reserve();
	}
}
Economy()
{
	int a, b, c;
	system("color 05");
	system("cls");

	printf("=================| Economy Class Reservation |==================\n");
	printf(">>>>>>>>>>>>|    'x' = Means Already Reserved    |<<<<<<<<<<<<<< \n\n");
	seat(0, 6);
	printf("\n\n<<<<<<<<<<<<<<<<<<<| -1 to Back |>>>>>>>>>>>>>>>>>\n");
	printf("<<<<<<<<<<<<<| Enter the seat you want |>>>>>>>>>>\n\t\t\t");
	scanf("%d", &c);
	if (c != -1)
	{

		for (a = 6; a < 15; a++)
		{
			for (b = 0; b < 6; b++)
			{
				if (air[a][b] == c)
				{
					air[a][b] = 'x';
				}
			}
		}
		system("cls");
		seat(0, 6);
		system("cls");
		Economy();
	}

	else
	{
		reserve();
	}
}
seat(int n1, int n2)
{
	int a, b, c;

	for (a = 0 + n2; a < 15 - n1; a++)
	{
		printf("%3d |", a + 1);
		for (b = 0; b < 3; b++)
		{
			if (air[a][b] == 'x')
			{
				printf("[%3c ]|", air[a][b]);
			}
			else
			{
				printf("[%3d ]|", air[a][b]);
			}
		}

		printf("       ");

		for (c = 3; c < 6; c++)
		{
			if (air[a][c] == 'x')
			{
				printf("|[%3c ]", air[a][c]);
			}
			else
			{
				printf("|[%3d ]", air[a][c]);
			}
		}
		printf("\n");
	}
}
oops()
{
	int a;
	system("Cls");
	printf(">>>>| Are you sure you want to Exit?? |<<<<\n\n");
	printf(">> 1 = Yes <<\n");
	printf(">> 2 = No  <<\n=>");
	scanf("%d", &a);
	if (a == 2)
	{
		menu();
	}
	else
	{
		printf("\n*************| Thank You!! :) |**************\n");
		return 0;
	}
}
delay()
{
	long int x;
	for (x = 0; x < p; x++)
		;
}

// ConsoleApplication5.cpp: определ€ет точку входа дл€ консольного приложени€.
//

#include "stdafx.h"
#include "math.h"
#include "windows.h"


int main()
{
	//ќбъ€вл€ем переменные
	int day, month, year;		//день, мес€ц, год
	int eastern_year_index;		//индекс года дл€ определени€ соответсви€ восточному календарю

	printf("Enter your birthday in format: dd.mm.yyyy\n");
	scanf_s("%d.%d.%d", &day, &month, &year);

	printf("Date is %02d.%02d.%d\n", day, month, year);

	//ќпредел€ем високосный год
	if (year % 4 == 0)
	{
		printf("You were born on a leap year\n");
	}
	else
	{
		printf("You were born on a non-leap year\n");
	}

	//ќпредел€ем индекс года по восточному календарю
	eastern_year_index = year % 12;

	//»щем соответсвие дл€ названи€ года
	switch (eastern_year_index)
	{
		case 0:
		{
			printf("Your year according to the eastern calendar is the Monkey\n");
		}
			break;
		case 1:
		{
			printf("Your year according to the eastern calendar is the Rooster\n");
		}
			break;
		case 2:
		{
			printf("Your year according to the eastern calendar is the Dog\n");
		}
			break;
		case 3:
		{
			printf("Your year according to the eastern calendar is the Pig\n");
		}
			break;
		case 4:
		{
			printf("Your year according to the eastern calendar is the Rat\n");
		}
			break;
		case 5:
		{
			printf("Your year according to the eastern calendar is the Ox\n");
		}
			break;
		case 6:
		{
			printf("Your year according to the eastern calendar is the Tiger\n");
		}
			break;
		case 7:
		{
			printf("Your year according to the eastern calendar is the Rabbit\n");
		}
			break;
		case 8:
		{
			printf("Your year according to the eastern calendar is the Dragon\n");
		}
			break;
		case 9:
		{
			printf("Your year according to the eastern calendar is the Snake\n");
		}
			break;
		case 10:
		{
			printf("Your year according to the eastern calendar is the Horse\n");
		}
			break;
		case 11:
		{
			printf("Your year according to the eastern calendar is the Sheep\n");
		}
			break;
		default:
		{
			printf("Something wrong");
		}
	}

	//ќпредел€ем знак задиака
	if ((day > 20 && month == 3) || (day < 21 && month == 4)) { printf("Your zodiac sign is Aries\n"); }
	if ((day > 20 && month == 4) || (day < 22 && month == 5)) { printf("Your zodiac sign is Taurus\n"); }
	if ((day > 21 && month == 5) || (day < 22 && month == 6)) { printf("Your zodiac sign is Gemini\n"); }
	if ((day > 21 && month == 6) || (day < 24 && month == 7)) { printf("Your zodiac sign is Cancer\n"); }
	if ((day > 23 && month == 7) || (day < 24 && month == 8)) { printf("Your zodiac sign is Leo\n"); }
	if ((day > 23 && month == 8) || (day < 24 && month == 9)) { printf("Your zodiac sign is Virgo\n"); }
	if ((day > 23 && month == 9) || (day < 24 && month == 10)) { printf("Your zodiac sign is Libra\n"); }
	if ((day > 23 && month == 10) || (day < 23 && month == 11)) { printf("Your zodiac sign is Scorpio\n"); }
	if ((day > 22 && month == 11) || (day < 22 && month == 12)) { printf("Your zodiac sign is Sagittarius\n"); }
	if ((day > 21 && month == 12) || (day < 21 && month == 1)) { printf("Your zodiac sign is Capricorn\n"); }
	if ((day > 20 && month == 1) || (day < 20 && month == 2)) { printf("Your zodiac sign is Aquarius\n"); }
	if ((day > 19 && month == 2) || (day < 21 && month == 3)) { printf("Your zodiac sign is Pisces\n"); }
	system("pause");
}


#include<stdio.h>
int main()
{
	int coin, cpn, hero, heroprice, skin, skinprice, rem1, rem2, rem3;
	char user[30], deal, Y, y;
	printf("************** Welcome to Garenona Online **************\n");
	printf("Hero No. 1:\n");
	printf("Violet (Carry, Life:15, Power attack:90)\n");
	printf("Hero's price: Coin  = 13888\n");
	printf("Skin's price: skin1 = 490 coupon\n");
	printf("Skin's price: skin2 = 179 coupon\n");
	printf("--------------------------------------------------------\n");
	printf("Hero No. 2:\n");
	printf("Airi (Fighter/Assassin, Life:25, Power attack:100)\n");
	printf("Hero's price: Coin  = 28888\n");
	printf("Skin's price: skin1 = 510 coupon\n");
	printf("Skin's price: skin2 = 375 coupon\n");
	printf("--------------------------------------------------------\n");
	printf("Hero No. 3:\n");
	printf("Fennik (Carry, Life:15, Power attack:90)\n");
	printf("Hero's price: Coin  = 18888\n");
	printf("Skin's price: skin1 = 450 coupon\n");
	printf("Skin's price: skin2 = 510 coupon\n");
	printf("--------------------------------------------------------\n");
	printf("********************************************************\n");
	printf("Please enter your detail:\n");
	printf("Enter username\t\t\t: "); scanf("%s", &user);
	printf("Enter coin balance\t\t: "); scanf("%d", &coin);
	printf("Enter coupon balance\t\t: "); scanf("%d", &cpn);
	printf("Enter Hero no. (1,2,3)\t\t: "); scanf("%d", &hero);
	if (hero >= 1 && hero <= 3)
	{
		printf("Do you want to buy skin(Y/N)\t: "); scanf("%s", &deal);
		if ((deal == 'Y') || (deal == 'y'))
		{
			printf("Enter Skin no. (1,2)\t: "); scanf("%d", &skin);
			if (hero == 1)
			{	heroprice = 13888;
				if (skin == 1)
				{	skinprice = 490;	}
				else if (skin == 2)
				{	skinprice = 179;	}
				else
				{	heroprice = 0; skinprice = 0;	}
			}
			else if (hero == 2)
			{	heroprice = 28888;
				if (skin == 1)
				{	skinprice = 510;	}
				else if (skin == 2)
				{	skinprice = 375;	}
				else
				{	heroprice = 0; skinprice = 0;}	
			}
			else if (hero == 3)
			{	heroprice = 18888;
				if (skin == 1)
				{	skinprice = 450;	}
				else if (skin == 2)
				{	skinprice = 510;	}
				else
				{	heroprice = 0; skinprice = 0;}	}
			if ((skin >=1) && (skin <= 2) && (coin >= heroprice) && (cpn >= skinprice))
			{
				rem1 = coin - heroprice; rem2 = cpn - skinprice;
				if (hero == 1)
				{
					printf("\nTotal coin = %d, coupon = %d\n", heroprice, skinprice);
					printf("This transaction is completed. You got Violet for fighting.\n\n");
					printf("********************************************************\n");
					printf("Thank you %s\n", user);
					printf("Your balance of coin = %d, coupon = %d", rem1, rem2);
				}
				else if (hero == 2)
				{
					printf("\nTotal coin = %d, coupon = %d\n", heroprice, skinprice);
					printf("This transaction is completed. You got Airi for fighting.\n\n");
					printf("********************************************************\n");
					printf("Thank you %s\n", user);
					printf("Your balance of coin = %d, coupon = %d", rem1, rem2);
				}
				else if (hero == 3)
				{
					printf("\nTotal coin = %d, coupon = %d\n", heroprice, skinprice);
					printf("This transaction is completed. You got Fennik for fighting.\n\n");
					printf("********************************************************\n");
					printf("Thank you %s\n", user);
					printf("Your balance of coin = %d, coupon = %d", rem1, rem2);
				}
			}
			else if ((skin > 2) && (coin >= heroprice) && (cpn >= skinprice))
			{
				printf("\nTotal coin = %d, coupon = %d\n", heroprice, skinprice);
				printf("Not completed because skin uncorrect.\n\n");
				printf("********************************************************\n");
				printf("Thank you %s\n", user);
				printf("Your balance of coin = %d, coupon = %d", coin, cpn);
			}
			else if ((skin >=1) && (skin <= 2) && (coin < heroprice) || (cpn < skinprice))
			{
				printf("\nTotal coin = %d, coupon = %d\n", heroprice, skinprice);
				printf("Not completed because you not have enough coin/coupon.\n\n");
				printf("********************************************************\n");
				printf("Thank you %s\n", user);
				printf("Your balance of coin = %d, coupon = %d", coin, cpn);
			}
		}
		else
		{
			printf("\n********************************************************\n");
			printf("\t\tThank you %s\n", user);
			printf("Your balance of coin = %d, coupon = %d", coin, cpn);
		}
		
	}
	else 		
	{
		printf("\t\tHero not found!!!");
		printf("\n********************************************************\n");
		printf("Thank you %s\n", user);
		printf("Your balance of coin = %d, coupon = %d", coin, cpn);
		return (0);
	}
	return(0);
}

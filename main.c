#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <MMsystem.h>
#pragma comment(lib,"winmm.lib") 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int hp=5;
	int randnum;
	int guess;
	srand(time(NULL));
	printf("Guess the number 1 ~ 50\n");
	randnum=rand()%50+1;
	PlaySound(TEXT("maple.wav"),NULL,SND_LOOP|SND_ASYNC);
//	while(1)	
//	{
//		PlaySound(TEXT("maple.wav"),NULL,SND_SYNC|SND_LOOP);
//	}
	while(1)
	{
		printf("Your left hp : %d\n",hp);
		scanf("%d",&guess);
		if(guess!=randnum)
		{
			if(guess>=randnum)
			{
				printf("It's too big\n");
				hp--;
				if(hp==0)
				{
					printf("You die.\n");
					printf("The number is %d\n",randnum);
					return 0;
				}
			}
			else if(guess<=randnum)
			{
				printf("It's too small\n");
				hp--;
				if(hp==0)
				{
					printf("You die.\n");
					printf("The number is %d\n",randnum);
					return 0;
				}
			}
		}
		else if(guess==randnum)
		{
			printf("congratulation\n");
			return 0;
		}
	}
}

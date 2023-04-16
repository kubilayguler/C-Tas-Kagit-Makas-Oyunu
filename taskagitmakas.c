#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int oyuncu,Bot;
	char ch;
	
	tekrar:
	printf("TAS-KAGIT-MAKAS OYUNU\n");
	printf("**************************");
	printf("\n1 => TAS\n");
	printf("\n2 => KAGIT\n");
	printf("\n3 => MAKAS\n");
	printf("**************************\n\n");
	
	secim:	
	printf("1,2,3'ten birini yazmalisin: ");
	scanf("%d",&oyuncu);
	if(oyuncu==1 || oyuncu==2 || oyuncu==3)
	{
		Bot = rand()%3+1;
		//Oyuncu:Tas Bot:Tas
		if(oyuncu==1 && Bot==1)
		{
			system("color 0E");
			printf("\nOyuncu => Tas | Tas <= BOT \n");
			printf("\nSonuc: BERABERE !.. ");
		}
		//Oyuncu:Tas Bot:Kagit
		else if(oyuncu==1 && Bot==2)
		{
			system("color 0C");
			printf("\nOyuncu => Tas | Kagit <= BOT \n");
			printf("\nSonuc: KAYBETTIN !.. ");
		}
		//Oyuncu:Tas Bot:Makas
		else if(oyuncu==1 && Bot==3)
		{
			system("color 0a");
			printf("\nOyuncu => Tas | Makas <= BOT \n");
			printf("\nSonuc: KAZANDIN !.. ");
		}
		
		
		//Oyuncu:Kagit Bot:Tas
		if(oyuncu==2 && Bot==1)
		{
			system("color 0A");
			printf("\nOyuncu => Kagit | Tas <= BOT \n");
			printf("\nSonuc: KAZANDIN !.. ");
		}
		//Oyuncu:Kagit Bot:Kagit
		else if(oyuncu==2 && Bot==2)
		{
			system("color 0E");
			printf("\nOyuncu => Kagit | Kagit <= BOT \n");
			printf("\nSonuc: BERABERE !.. ");
		}
		//Oyuncu:Kagit Bot:Makas
		else if(oyuncu==2 && Bot==3)
		{
			system("color 0C");
			printf("\nOyuncu => Kagit | Makas <= BOT \n");
			printf("\nSonuc: KAYBETTIN !.. ");
		}
		
		
		//Oyuncu:Makas Bot:Tas
		if(oyuncu==3 && Bot==1)
		{
			system("color 0C");
			printf("\nOyuncu => Makas | Tas <= BOT \n");
			printf("\nSonuc: KAYBETTIN !.. ");
		}
		//Oyuncu:Kagit Bot:Kagit
		else if(oyuncu==3 && Bot==2)
		{
			system("color 0A");
			printf("\nOyuncu => Makas | Kagit <= BOT \n");
			printf("\nSonuc: KAZANDIN !.. ");
		}
		//Oyuncu:Kagit Bot:Makas
		else if(oyuncu==3 && Bot==3)
		{
			system("color 0E");
			printf("\nOyuncu => Makas | Makas <= BOT \n");
			printf("\nSonuc: BERABERE !.. ");
		}
	}
		else
		{
			goto secim;
		}
	
		printf("Tekrar Oynamak ister misin?(E/H) : ");
		soru:
		scanf("%c",&ch);
		if(ch=='E' || ch=='e'){
			system("cls");
			system("color 0F");
			goto tekrar;
		}
		else if(ch=='H' || ch=='h'){
			exit(0);
		}
		else{
			goto soru;
		}
		
	return 0;
}

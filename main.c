#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero;
	int sorteado;
	int chutes = 0;
	
	srand(time(NULL));
	
	sorteado = rand()% 1000;
	

	
	while(chutes < 10 && numero != sorteado)
	{
		printf("Chute um numero:");
		scanf("%d",&numero);
		
		
		if(numero == sorteado)
		{
			printf("VOC\322 GANHOU!!!!!!!!!!!!!!!\n");
		}
		else
		{
			if(chutes < 9){
			
				printf("\nTente outra vez\n");
				printf("Voc\210 tem mais %d tentetiva\n", 9-chutes);
				
				if(numero > sorteado)
				{
					printf("O numero \202 maior!!!\n\n"); 
				}
				else
				{
					printf("O numero \202 menor!!!\n\n");
				}
		    }
		}
		chutes++;
	}
	
	if(chutes == 10)
	{
		printf("\n\nVOC\322 PERDEU!!!!!!!!!!!!!\nO numero era %d", sorteado);
		
	}

	getch();
	return 0;
}

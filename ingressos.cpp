// compra de ingressos basicos!!!!!!

#include<stdio.h>
#include<math.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese"); //continuação da biblioteca acima 
	int ingressos,pagamento;

	printf(" INGRESSOS DOS JOGOS \n   COPA DO BRASIL\n");
	printf("\n----------------\n\n");
	printf("1- sao paulo X palmeiras - morumbis\n \n");
	printf("2- corinthians X ponte preta - moises lucarelli\n\n");
	printf("3- juventude X crb - alfredo jaconi\n\n");
	printf("4- guarani X cruzeiro - brinco de ouro da princesa\n\n" );
		scanf("%d",&ingressos);
	printf("\n----------------\n\n");
 switch (ingressos){
 	case 1:
 		printf("sao paulo x palmeiras \njogo as 17:00, occorrera no Morumbis\n");
 		printf("setor C - $450 - até 12 anos $225");
 		break;

    case 2:
    	printf("corinthians X ponte preta \njogo as 17:30, ocorrera no Moises Lucarelli\n");
    	printf("setor A - $120 - até 12 anos $60");
    	break;
    	
    case 3:
	printf("juventude X crb \n jogo as 21:00, ocorrera no Alfredo Jaconi\n");
	printf("setor A - $100 - até 12 anos $50");
        break;
		
	case 4: 
	printf("guarani X cruzeiro \njogo as 19:00, ocorrera no Brinco de Ouro da Princesa\n");
	printf("setor B- $70 - até 12 anos $35");
	break;
}
	printf("\n----------------\n\n");
	
	printf("gostaria de concluir o pagamento? \n 1-sim 2-não\n\n");
	scanf("%d",&pagamento);
		printf("\n----------------\n\n");
		
switch(pagamento){
	case 1:
		printf("PAGAMENTO CONCLUIDO!!");
		break;
		
	case 2:
		printf("NÃO FOI DESTA VEZ!! OBRIGADO PELA PREFERÊNCIA :)");
		break;
}
	
	
	
	
	return 0;
}

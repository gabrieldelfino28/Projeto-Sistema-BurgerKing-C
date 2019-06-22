#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <String.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	system("COLOR 09");
 	setlocale(LC_ALL, "Portuguese"); //Variaveis
 	int vet[4], y, maior, posMaior, menor, posMenor;
 	int z,x,i;
 	int c1=0,c2=0,c3=0,c4=0,ct;
 	int cont=1,op;
 	float vlt=0,total,pag;
 	int a, b, aux;
 	char add[2];
 	
	printf("\nQuantos funcionários irão participar do evento? ");
	scanf("%d", &z);
for (x=0;x<z;x++) { //For Principal
	system("CLS");
	printf("\n%dº Funcionario: \n", x+1);
for (i=0;i<3;i++) { //For dos Pedidos
	printf("\n\t\t\t\t\tMENU\n");
 	printf("\nSelecione um Combo:\n");	
 	printf("\n1 - para 1x Combo WHOPPER_______________________________________R$19,90\n");
	printf("\n2 - Para 1x Cheddar Duplo + 1x Batata Suprema + 1x Free Refill__R$19,90\n");
	printf("\n3 - Para 1x Combo WHOPPER + 1x Cheedar__________________________R$24,90\n");
	printf("\n4 - Para 2x Combo WHOPPER + 1x Batata Média + 1x Free Refill____R$26,90\n\n");
	
	scanf("%d", &op);
	
	switch(op) {
		case 1: 
		printf("\nVoce selecionou 1x Combo WHOPPER\n");
		c1++;
		vlt=vlt+19.90;
		printf("\nDeseja Pedir mais um combo? (Sim/Não) ");
		scanf("%s",&add);
		if (strcmp(add,"Sim")==0) {
			break;
		}
		
		else {
			i=3;
		}
		break;
		case 2: 
		printf("\nVoce selecionou 1x Cheddar Duplo + 1x Batata Suprema + 1x Free Refill\n"); 
		c2++;
		vlt=vlt+19.90;
		printf("\nDeseja Pedir mais um combo? (Sim/Não) ");
		scanf("%s",&add);
		if (strcmp(add,"Sim")==0) {
			break;
		}
		
		else {
			i=3;
		}
		break;
		
		case 3: 
		printf("\nVoce selecionou 1x Combo WHOPPER + 1x Cheedar\n");
		c3++; 
		vlt=vlt+24.90;
		printf("\nDeseja Pedir mais um combo? (Sim/Não) ");
		scanf("%s",&add);
		if (strcmp(add,"Sim")==0) {
			break;
		}
		
		else {
			i=3;
		}
		break;
		
		case 4: 
		printf("\nVoce selecionou 2x Combo WHOPPER + 1x Batata Média + 1x Free Refill\n"); 
		c4++;
		vlt=vlt+26.90;
		printf("\nDeseja Pedir mais um combo? (Sim/Não) ");
		scanf("%s",&add);
		if (strcmp(add,"Sim")==0) {
			break;
		}
		
		else {
			i=3;
		}
		break;
		
		default: 
		printf("\nValor Invalido\n");
		i=3;
		break;
	}

	
	cont++;
}// Fim do For dos Pedidos

}// Fim do For Principal

	printf("\nQuantidade de Combos vendidos:\n1o Combo: %d vezes\n2o Combo: %d vezes\n3o Combo: %d vezes\n4o Combo: %d vezes\n",c1,c2,c3,c4);

	
    //preenche o vetor
    vet[0]=c1;
	vet[1]=c2;
	vet[2]=c3;
	vet[3]=c4;

    //encontra o maior valor
    maior    = vet[0];
    posMaior = 0;
    for (y = 1; y < 4; y++) {
        if (vet[y] > maior) {
            maior    = vet[y];
            posMaior = y;
        }
    }

    //encontra o menor valor
    menor    = vet[0];
    posMenor = 0;
    for (y = 1; y < 4; y++) {
        if (vet[y] < menor) {
            menor    = vet[y];
            posMenor = y;
        }
    }

    //mostra o vetor
    
    printf("\nO mais vendido foi Combo %d\nQuantidade: %d\n", posMaior+1,maior);
    printf("\nO menos vendido foi Combo %d\nQuantidade: %d\n\n", posMenor+1,menor);
		
	total= total + vlt;
	printf("\nValor Total Arrecadado: %.2f\n\n",total);		
 	system ("PAUSE");
 	
	return 0;
}

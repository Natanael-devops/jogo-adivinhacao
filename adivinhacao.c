#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	printf("**************************************\n");
	printf("***Bem-vindo ao jogo de adivinhação***\n");
	printf("**************************************\n");

	int segundos = time(0);
	srand(segundos);

	int numerogrande = rand();

	int numerosecreto = numerogrande % 100;
	int chute;
	int tentativas = 1;
	double pontos = 1000;
	int acertou = 0;

	int numerodetentativas;
	int nivel;

	printf(" Qual o nível de dificuldade:\n");
	printf("(1) Fácil   (2) Médio  (3) Difícil \n\n");
	printf("Escolha: ");
	scanf("%d", &nivel);
	switch(nivel){
		case 1:
			numerodetentativas = 20;
			break;
		case 2:
			numerodetentativas = 15;
			break;
		case 3:
			numerodetentativas = 6;
			break;
		case 13:
			numerodetentativas = 100;
				printf("⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢉⣴⣶⣤⠀⣿⣿  \n");
				printf("⡿⢛⣉⣉⣉⣉⡛⠻⠿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠛⣡⣴⠏⠁⠀⡚⠀⢸⣿  \n");
				printf("⠁⣿⠉⢀⡉⠉⢿⣷⣄⠈⠉⠁⣠⣀⣤⡀⣤⣤⣀⣴⠂⢺⠧⠀⠀⠀⠀⠀⣾⣿  \n");
				printf("⢷⣀⠀⠀⠀⠈⠙⣷⠀⠀⣿⣿⣿⣿⣿⢿⣿⡟⠃⠠⢄⣀⢀⡴⠀⣠⣾⣿⣿  \n");
				printf("⣧⠈⠣⣦⠀⠀⠀⠀⠉⠸⠛⠃⠉⠋⠹⠀⠃⠁⠀⠀⠀⠺⣟⣷⣦⣄⠙⠿⣿⣿  \n");
				printf("⣿⣇⢈⢿⣷⣾⣦⡤⢴⣿⣶⡀⢠⣔⣤⣤⡀⠀⠲⣾⣿⣶⣿⣿⣿⣿⣷⣄⠈⢻  \n");
				printf("⣿⠏⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠿⡻⣿⠀⠘⠿⡟⠡⠄⢉⡼⢿⣿⣿⣦⠈  \n");
				printf("⡏⣨⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⡁⠐⠃⠈⠀⠐⠀⠀⣀⢠⡤⣾⠃⠀⠉⠛⠛⢠  \n");
				printf("⠁⣿⣿⣿⣿⣿⣿⣿⠏⠁⠘⠿⣶⣤⠴⠶⢟⣰⣶⣾⣿⣷⣤⣀⠀⠀⠀⠀⣠⣾  \n");
				printf("⡀⢿⣿⣿⣿⡿⠋⠁⠀⠀⠀⠀⠉⠁⢠⣴⣿⣿⣿⣿⢿⣟⠿⣿⡆⠀⢀⣾⣿⣿  \n");
				printf("⣷⡄⠛⠟⠃⠀⠀⠀⠀⠀⠀⢠⣤⣶⣿⣿⣿⣿⣿⡃⠈⠁⠀⠘⣡⣾⣿⣿⣿⣿  \n");
				printf("⣿⣿⣶⣤⣤⣤⣄⣀⣀⣀⣀⣀⣈⣛⣉⣉⡙⠋⠋⠁⠀⢀⣠⣾⣿⣿⣿⣿⣿⣿  \n");
				printf(" Autor: Natanael Cordeiro (Guaxinim) \n\n");
			break;		
	}
	for (int i = 1; i <= numerodetentativas; i++) {
		
		printf("Tentativa %d\n", tentativas);
		printf("Qual é o seu chute? ");
		scanf("%d", &chute);
		printf("O seu chute foi %d\n", chute);

		if (chute < 0) {
			printf("Seu chute não pode ser menor que zero!\n");

			continue;
		}

		acertou = (chute == numerosecreto);
		int maior = (chute > numerosecreto);
		if (acertou) {
			break;
		}

		else if(maior){
			printf("Seu chute foi maior que o número secreto.\n");
		}

		else{
			printf("Seu chute foi menor que o número secreto.\n");
		}

		tentativas++;

		double pontosperdidos = abs(chute - numerosecreto) / (double)2;

	pontos = pontos - pontosperdidos;
		
	}

	printf("Fim de jogo. \n");

	if (acertou) {

		 printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");

	printf("Você acertou em %d tentativas\n", tentativas);
	printf("Total de pontos: %.1f\n", pontos);
	} else {

		printf("       \\|/ ____ \\|/    \n");   
        printf("        @~/ ,. \\~@      \n");   
        printf("       /_( \\__/ )_\\    \n");   
        printf("          \\__U_/        \n");


		printf("Você perdeu! Tente de novo\n");
	}
	
}
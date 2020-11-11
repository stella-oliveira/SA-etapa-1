/* Algoritmo por: STELLA OLIVEIRA E SILVA
SENAI Centro - Turma: TII2001M
Situa��o de Aprendizagem da Unidade Curricular "L�gica de Programa��o"
 
Descri��o: algoritmo para uma escola de ingl�s, que l� o nome e as 4 notas de um aluno, 
calcula e imprime o total e a m�dia das notas. */

#include <stdio.h>
#include <stdlib.h> // system("cls")
#include <conio.h>	// getch()
#include "BibliotecaViana.c"

char nome[30];
float soma=0, media=0.0;

void cabecalho(){
	cor(244); corFundo(244);
	int i=0;
	
	gotoxy(1,1); printf("%c", 201);		// Canto superior esquerdo do cabe�alho
	for(i=0;i<66;i++){
		printf("%c", 205);				// Tra�o horizontal do cabe�alho
	}
	printf("%c", 187);					// Canto superior direito do cabe�alho
	
	printf("\n%c", 186);				// Tra�o vertical esquerdo do cabe�alho
	gotoxy(2,23); printf("ESCOLA DE INGL%cS ATHENA", 210);	// CABE�ALHO
	gotoxy(2,68); printf("%c", 186);	// Tra�o vertical direito do cabe�alho
	
	printf("\n%c", 200);				// Canto inferior esquerdo do cabe�alho
	for(i=0;i<66;i++){
		printf("%c", 205);				// Tra�o horizontal do cabe�alho
	}
	gotoxy(3,68); printf("%c", 188);	// Canto inferior direito do cabe�alho
}

void tabelaDados(){
	cabecalho();
	int i=0;
	
	gotoxy(4,1); printf("%c", 218);		// Canto superior esquerdo da tabela de dados
	for(i=0; i<66; i++){
		printf("%c", 196);				// Tra�o horizontal da tabela de dados
	}
	printf("%c", 191);					// Canto superior direito da tabela de dados
	
	printf("\n%c", 179);				// Tra�o vertical esquerdo da tabela de dados (linha 5)
	gotoxy(5,68); printf("%c", 179);
	
	gotoxy(6,1); printf("%c", 195); 	// Tra�o vertical esquerdo com linha no meio
	for(i=0; i<66; i++){
		printf("%c", 196);				// Tra�o horizontal da tabela de dados
	}
	printf("%c", 180);					// Tra�o vertical direito com linha no meio
	
	printf("\n%c", 179);				// Tra�o vertical esquerdo da tabela de dados (linha 7)
	gotoxy(6,18); printf("%c", 194);	// T para baixo
	gotoxy(6,35); printf("%c", 194);
	gotoxy(6,51); printf("%c", 194);
	gotoxy(7,18); printf("%c", 179);
	gotoxy(7,35); printf("%c", 179);
	gotoxy(7,51); printf("%c", 179);
	gotoxy(7,68); printf("%c", 179);
	
	printf("\n%c", 192); 				// Canto inferior esquerdo da tabela de dados
	for(i=0; i<66; i++){
		printf("%c", 196);				// Tra�o horizontal da tabela de dados
	}
	printf("%c", 217); 					// Canto inferior direito da tabela de dados
	
	gotoxy(8,18); printf("%c", 193);	// T para cima
	gotoxy(8,35); printf("%c", 193);
	gotoxy(8,51); printf("%c", 193);
}

void tabelaResultado(){
	cabecalho();
	int i=0;
	
	gotoxy(4,1); printf("%c", 218);		// Canto superior esquerdo da tabela de dados
	for(i=0; i<66; i++){
		printf("%c", 196);				// Tra�o horizontal da tabela de dados
	}
	printf("%c", 191);					// Canto superior direito da tabela de dados
	
	printf("\n%c", 179);				// Tra�o vertical esquerdo da tabela de dados (linha 5)
	gotoxy(5,68); printf("%c", 179);
	
	gotoxy(6,1); printf("%c", 195); 	// Tra�o vertical esquerdo com linha no meio
	for(i=0; i<66; i++){
		printf("%c", 196);				// Tra�o horizontal da tabela de dados
	}
	printf("%c", 180);					// Tra�o vertical direito com linha no meio
	
	printf("\n%c", 179);				// Tra�o vertical esquerdo da tabela de dados (linha 7)
	gotoxy(6,33); printf("%c", 194);	// T para baixo
	gotoxy(7,33); printf("%c", 179);
	gotoxy(7,68); printf("%c", 179);
	
	printf("\n%c", 192); 				// Canto inferior esquerdo da tabela de dados
	for(i=0; i<66; i++){
		printf("%c", 196);				// Tra�o horizontal da tabela de dados
	}
	printf("%c", 217); 					// Canto inferior direito da tabela de dados
	
	gotoxy(8,33); printf("%c", 193);	// T para cima
}

void dados(){
	tabelaDados();
	float nota1=0.0, nota2=0.0, nota3=0.0, nota4=0.0;
	
	gotoxy(4,4); printf(" Nome do aluno (a) ");
	
	gotoxy(6,22); printf(" Notas (valor m%cximo: 25) ", 160);
	gotoxy(7,4); printf("1%c nota:", 166);
	gotoxy(7,21); printf("2%c nota:", 166);
	gotoxy(7,37); printf("3%c nota:", 166);
	gotoxy(7,54); printf("4%c nota:", 166);	
	
	cor(240);
	gotoxy(5,5); gets(nome);	
	gotoxy(7,13); scanf("%f", &nota1);
	gotoxy(7,30); scanf("%f", &nota2);
	gotoxy(7,46); scanf("%f", &nota3);	
	gotoxy(7,63); scanf("%f", &nota4);
	
	soma = nota1+nota2+nota3+nota4;
	media = (float)soma/4;
}

void resultado(){
	tabelaResultado();

	cor(244); gotoxy(4,4); printf(" Nome do aluno (a) ");
	cor(240); gotoxy(5,5); printf("%s", nome);
	
	cor(244); gotoxy(6,4); printf(" Total das notas (em 100) ");
	cor(240); gotoxy(7,13); printf("%.2f", soma);
	
	cor(244); gotoxy(6,37); printf(" M%cdia das notas (em 25) ", 130);
	cor(240); gotoxy(7,45); printf("%.2f", media);
}

int main(){
	dados();
	system("cls");
	resultado();
	printf("\n");
	getch();
}

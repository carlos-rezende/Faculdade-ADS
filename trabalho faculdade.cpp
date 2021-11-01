#include <iostream>
#include <locale.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main (){
	int i;
	int aluno[3], total = 0;
		
	
	for (i=0; i<3; i++){
		
		printf("\n informe a nota do aluno %i: ", i+1);
		scanf("%i", &aluno[i]);
		}
	
	for (i=0; i<3; i++){
		printf("\n notas adicionadas pelo usuario: %d", aluno[i]);	
	}
	
	printf("\n Pressione qualquer tecla para confirmar.");

	return 0;
}
	

	
	
	

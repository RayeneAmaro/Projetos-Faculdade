// #include <stdio.h>
// #include <stdlib.h>

int main () {
	
    int A, B;
	//declarar variavel tipo inteira, 2 variaveis inteiras;
    
	printf("\n Digite o valor 1: \t");
    //printf mostra algo para o usuario
    // \n pula uma linha antes de aparecer o texto
    // \t da um espaço depois do texto
    
	scanf("%d", &A);
    //scanf atribui um valor a variavel, mas o usuario quem digitar
    //%d representa o tipo da variavel exibida ou scaneada
    //todo scanf tem que ser acompanhado do & com a variavel.

    printf("\n Digite o valor 2: \t");
    scanf("%d", &B);

	printf("\n valor 2: \t %d", B);
	//%d equivale a variavel inteira, float seria %f, char seria %c
	//sempre que for exibir a variavel coloca , e o nome da variavel apenas; no scanf coloca o & e no printf coloca a variavel normal.




	// variaveis int (numero inteiro), float (numero real), char (texto).
	// sempre colocar ;
	//compilar = rodar

    return 0;
}


int main () {
	
//	int A = 5, i, vet[A];
//	vet[0] = 1; //a posição 0 do vetor vale 1
//	vet[1] = 2;
//	printf("%d", vet[0]);
//	vet[2] = A+vet[1]; //a posiçao 2 do vetor vai receber a soma entre o valor da variavel a e o valor da posição 1 do vetor (nessa caso, 5+2 = 7).
//	printf("\n%d", vet[2]);	
//	return 0;
// ou, de forma mais pratica, pode-se usar o for

	int A=5, i, vet[5];
	
	for ( i=0; i<6; i++){
		printf("\nDigite o numero %d: \t", i);
		scanf("%d", &vet[i]); // a posição do vetor sera determinado pela variavel i
		// quando o i for 0, vai acessar o vet de i ou de 0, e assim suscessivamente
		// e o numero que escanear no scanf vai ser atribuido a posição numero i do vetor, se i = 0 vai ser atribuido a posição 0 do vetor, e assim por diante
		
	}
	
		for ( i=0; i<6; i++){
		printf("\nA posicao %d e igual a %d \t", i, vet[i]);
		
	}
	
	
	return 0;
	
	//vetores sao tipo variaveis que podem guardar um determinado numero de itens dentro dele
	//dentro das chaves fica o numero de posições do vetor, as posições sempre começam por 0.
	//existem ainda as matrizes, que sao como se fossem um vetor duplo, basicamente é semelhante a um vetor, porem
	//ela tem uma linha e uma coluna: mat [5] [8] , que seria 5 linhas e 8 colunas.
}

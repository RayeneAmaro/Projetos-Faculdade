int main () {
	float A, B, X;
	
	printf("\nDigite o valor 1: \t");
	scanf("%f", &A);
	
	if(A < 0){
		printf("\nNumero invalido\n");
		printf("\Digite o valor 1: \t");
		scanf("%f", &A);
	}
	
	printf("\nDigite o valor 2: \t");
	scanf("%f", &B);
	
	if(B < 0){
		printf("\nNumero invalido\n");
		printf("\Digite o valor 2: \t");
		scanf("%f", &B);
	}
	
	printf("Valores digitados: A=%f B=%f", A, B);
	X = A+B;
	printf("\nResultado: %f", X);
	
return 0;	
}

int main () {
	int Idade, Filme; char Nome[100];
	
	printf("\nQual seu nome? \t");
	scanf("%s", &Nome);
	
	printf("\nDigite a idade: \t");
	scanf("%d", &Idade);
	
	printf("\nDigite a classificacao do filme: \t");
	scanf("%d", &Filme);
	
		printf("\nCliente: %s\n", Nome);
		printf("\Idade: %d\n", Idade);
		printf("\Classificacao do filme: %d anos\n", Filme);
		
	
	if(Idade >= Filme){
		printf("\nEste filme e indicado para sua faixa etaria");
	} else {
		printf("\nEste filme nao e indicado para sua faixa etaria, pegue outro!");
	}
	
return 0;
}

int main () {
	int Idade, Classificacao, Tempo; char Nome[100], Filme[200], Estoque[100];
	
	printf("\nQual seu nome? \t");
	scanf("%s", &Nome);
	
	printf("\nDigite a idade: \t");
	scanf("%d", &Idade);
	
	printf("\nQual Filme deseja locar? \t");
	scanf("%s", &Filme);
	
	printf("\nDigite a classificacao do filme: \t");
	scanf("%d", &Classificacao);
	
	printf("\nInforme se o filme esta disponivel no estoque - (Sim) para Disponivel e (Nao) Para Indisponivel): \t");
	scanf("%s", &Estoque);
	
	printf("\nCliente: %s", Nome);
	printf("\nIdade: %d", Idade);
	printf("\nFilme: %s", Filme);
	printf("\nClassificacao do filme: %d anos", Classificacao);
	printf("\nFilme disponivel para Locacao? %s", Estoque);
		
	if(Idade >= Classificacao && Estoque > 1){
		printf("\nEste filme pode ser locado por voce se tiver em estoque");
	} else {
		Tempo = Classificacao - Idade;
		printf("\nEste filme nao e indicado para sua faixa etaria.");
		printf("\nFaltam %d anos para voce ter autorizacao para locar esse filme.", Tempo);
	} 
	
	
	
	
return 0;
}

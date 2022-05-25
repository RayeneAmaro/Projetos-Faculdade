int main () {
	
	float Salario, INSS, IR, desc_inss, desc_ir, Salario_Inss, Remuneracao ; char Nome[100];
	
	printf("\nDigite seu salario: \t");
	scanf("%f", &Salario);
	printf("\nDigite seu nome: \t");
	scanf("%s", &Nome);
	
	
	// Desconto INSS
	
	if (Salario <= 1212.00){
		desc_inss = Salario * 0.075;
		} else if (Salario <= 2427.35){
			desc_inss = Salario * 0.09;
			} else if (Salario <= 3641.03){
				desc_inss = Salario * 0.12;
				} else {
					desc_inss = Salario * 0.14;
				};
	
	Salario_Inss = Salario - desc_inss;
	
	// Desconto IR
	
	if (Salario_Inss <= 1903.98){
		desc_ir = 0;
		} else if (Salario_Inss <= 2826.65){
			desc_ir = Salario_Inss * 0.075;
			} else if (Salario_Inss <= 3751.05){
				desc_ir = Salario_Inss * 0.15;
				} else if (Salario_Inss <= 4664.68){
					desc_ir = Salario_Inss * 0.225;
					} else {
						desc_ir = Salario_Inss * 0.275;
					};
	
	
	Remuneracao = Salario_Inss - desc_ir;
	
	
	printf("\nNome: %s", Nome);
	printf("\nSalario Bruto: R$ %f", Salario);
	printf("\nDesconto INSS: R$ %f", desc_inss);
	printf("\nDesconto IR: R$ %f", desc_ir);
	printf("\nSalario Liquido: R$ %f", Remuneracao);
	
	
	return 0;
}

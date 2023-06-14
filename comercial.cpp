#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void) {
	setlocale(LC_ALL, "PORTUGUESE");
	system("color F2");
	int i,senha_digitada,controle,qnt=0,vendas=0;
	float total_dia=0,total_conta=0,total_produto=0,valor=0;
	
	//desenho inicio
	
	printf("\t%c",16);
	for (i=0; i < 39; i++){
		printf("%c",31);
	};
	printf("%c",17);
	printf("\n\t%c\t\t\t\t\t%c",16,17);
	printf("\n\t%c\t                      (\t\t%c",16,17);
	printf("\n\t%c\t        &@o@@#@#@      (  ) (\t%c",16,17);
	printf("\n\t%c\t       @@@#o&@O@Q@     )    )\t%c",16,17);
	printf("\n\t%c\t      @@&O#@@ç@Q@&@     (  ( (\t%c",16,17);
	printf("\n\t%c\t      @$( O   O )$@       )\t%c",16,17);
	printf("\n\t%c\t       #|   U   |#       (\t%c",16,17);
	printf("\n\t%c\t ___oOO_\\_______/__OOo____(\t%c",16,17);
	printf("\n\t%c\t(_________________________)(\t%c",16,17);
	printf("\n\t%c\t\t\t\t\t%c",16,17);
	printf("\n\t%c\t\ttabacão\t\t\t%c",16,17);
	printf("\n\t%c\t\t  do\t\t\t%c",16,17);
	printf("\n\t%c\t\t gutão\t\t\t%c",16,17);
	printf("\n\t%c\t\t\t\t\t%c",16,17);
	printf("\n\t%c digite a senha para prosseguir \t%c",16,17);
	printf("\n\t%c\t\t\t\t\t%c",16,17);
	printf("\n\t%c",16);
	for (i=0; i < 39; i++){
		printf("%c",30);
	};
	printf("%c\n\n",17);
	
	//desenho fim
	
	scanf("%d",&senha_digitada);
	
	if (senha_digitada == 582002) {
	system("cls");
		
		//caixa acesso concedido
		
	printf("\t%c",16);
	for (i=0; i < 39; i++){
		printf("%c",31);
	};
	printf("%c",17);
	printf("\n\t%c\tacesso concedido\t\t%c",16,17);
	printf("\n\t%c\tentrando no sistema\t\t%c",16,17);
	printf("\n\t%c",16);
	for (i=0; i < 39; i++){
		printf("%c",30);
	};
	printf("%c\n\n",17);
	
	//fim caixa acesso concedido
	
	// instruções
		
	printf("\t%c",16);
	for (i=0; i < 87; i++){
		printf("%c",31);
	};

	printf("%c",17);
	printf("\n\t%c\tINSTRUÇÕES PARA USO DO SISTEMA\t\t\t\t\t\t\t%c",16,17);
	printf("\n\t%c\tPara selecionar a função digite o algarismo e tecle enter.\t\t\t%c",16,17);
	printf("\n\t%c\tOs valores devem ser digitados em algarismos, \t\t\t\t\t%c",16,17);
	printf("\n\t%c\tapós digitado o número correto tecle enter. \t\t\t\t\t%c",16,17);
	printf("\n\t%c\tCadastrar é usado para cadastrar o valor do produto sendo vendido, \t\t%c",16,17);
	printf("\n\t%c\tpara somar um produto diferente a venda basta alterar o valor cadastrado. \t%c",16,17);
	printf("\n\t%c\tVender é usado para somar a quantidade do produto  \t\t\t\t%c",16,17);
	printf("\n\t%c\tpreviamente cadastrado à conta do cliente. \t\t\t\t\t%c",16,17);
	printf("\n\t%c\tFechar conta é usado para obter o valor da conta do cliente, esta função \t%c",16,17);
	printf("\n\t%c\tdeve ser usada apenas ao fechar a conta do cliente. \t\t\t\t%c",16,17);
	printf("\n\t%c\tRelatório da a quantidade de produtos vendidos desde que o programa \t\t%c",16,17);
	printf("\n\t%c\tfoi aberto, assimcomo o valor de tais. \t\t\t\t\t\t%c",16,17);
	printf("\n\t%c\tSair fechará o programa. \t\t\t\t\t\t\t%c",16,17);
	printf("\n\t%c",16);
	for (i=0; i < 87; i++){
		printf("%c",30);
	};
	printf("%c\n\n",17);
	
	//fim instruções
	
	
	}else{
		printf("senha incorreta"); //a senha informada esta errada, pro razoes de segurança o programa fechará
		exit(0);
	}
	
	
	system("PAUSE");
	
	//fim tela inicial
	
	//menu
	
	do {
		system("cls");
		
	printf("\t%c",16);
	for (i=0; i < 39; i++){
		printf("%c",31);
	};
	printf("%c",17);
	
	printf("\n\t%c\t\tMENU\t\t\t%c",16,17);
	printf("\n\t%c   digite o número do indice de acordo\t%c",16,17);
	printf("\n\t%c\tcom o que quer fazer\t\t%c",16,17);
	printf("\n\t%c\t\t\t\t\t%c",16,17);
	printf("\n\t%c\t\t1 - Cadastrar\t\t%c",16,17);
	printf("\n\t%c\t\t2 - Vender\t\t%c",16,17);
	printf("\n\t%c\t\t3 - Fechar conta\t%c",16,17);
	printf("\n\t%c\t\t4 - Relatório\t\t%c",16,17);
	printf("\n\t%c\t\t5 - Sair\t\t%c",16,17);
	printf("\n\t%c\t\t\t\t\t%c",16,17);
	
	printf("\n\t%c",16);
	for (i=0; i < 39; i++){
		printf("%c",30);
	};
	printf("%c\n\n",17);
	
	//fim menu
	
	scanf("%d",&controle);
	 
	if (controle !=1 && controle !=2 && controle !=3 && controle !=4 && controle !=5){ 	//numero fora do indice
		system("cls");
		printf("\t%c",16);
	for (i=0; i < 39; i++){
		printf("%c",31);
	};
	printf("%c",17);
	printf("\n\t%c\to numero informado é invalido\t%c",16,17);
	printf("\n\t%c\ttente novamente\t\t\t%c",16,17);
	printf("\n\t%c",16);
	for (i=0; i < 39; i++){
		printf("%c",30);
	};
	printf("%c\n\n",17);
	}
	else{
	switch(controle){ //switch
			
	case 1: //cadastro
	system("cls");
	printf("\t%c",16);
	for (i=0; i < 39; i++){
		printf("%c",31);
	};
	printf("%c",17);
	printf("\n\t%c\t\t\t\t\t%c",16,17);
	printf("\n\t%cdigite o valor do produto a ser vendido%c",16,17);
	printf("\n\t%c\t\t\t\t\t%c",16,17);
	printf("\n\t%c",16);
	for (i=0; i < 39; i++){
		printf("%c",30);
	};
	printf("%c\n\n",17);
	scanf("%f",&valor);
	break;

	case 2: //vender
	system("cls");
	printf("\t%c",16);
	for (i=0; i < 47; i++){
		printf("%c",31);
	};
	printf("%c",17);
	printf("\n\t%c\t\t\t\t\t\t%c",16,17);
	printf("\n\t%cdigite a quantidade do produto a ser vendido\t%c",16,17);
	printf("\n\t%c\t\t\t\t\t\t%c",16,17);
	printf("\n\t%c",16);
	for (i=0; i < 47; i++){
		printf("%c",30);
	};
	printf("%c\n\n",17);
	scanf("%d",&qnt);
	total_produto = qnt * valor;
	total_conta = total_conta + total_produto;
	vendas++;
	break;

	case 3: //fechar conta
	system("cls");
	printf("\t%c",16);
	for (i=0; i < 47; i++){
		printf("%c",31);
	};
	printf("%c",17);
	printf("\n\t%c\t\t\t\t\t\t%c",16,17);
	printf("\n\t%c\tA conta do cliente totaliza RS %.2f\t%c",16,total_conta,17);
	printf("\n\t%c\t\t\t\t\t\t%c",16,17);
	printf("\n\t%c",16);
	for (i=0; i < 47; i++){
		printf("%c",30);
	};
	printf("%c\n\n",17);
	total_dia = total_dia + total_conta;
	total_conta = 0;
	system("pause");
	break;

	case 4: //relatorio
	system("cls");
	printf("\t%c",16);
	for (i=0; i < 47; i++){
		printf("%c",31);
	};
	printf("%c",17);
	printf("\n\t%c\t\t\t\t\t\t%c",16,17);
	printf("\n\t%c\tNo dia de hoje foram feitas %d vendas\t%c",16,vendas,17);
	printf("\n\t%c\tque totalizam %.2f reais\t\t%c",16,total_dia,17);
	printf("\n\t%c\t\t\t\t\t\t%c",16,17);
	printf("\n\t%c",16);
	for (i=0; i < 47; i++){
		printf("%c",30);
	};
	printf("%c\n\n",17);
	system("pause");
	break;
	}
	}
	}while (controle != 5);
	
	printf("\nSaindo...");
	exit(0);
	return 0;
}

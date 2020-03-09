#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

	FILE *arquivo;//arquivo com as numerações
	char nomearq[20];//nome do arquivo txt

	arquivo=fopen(argv[1],"r");//abre do prompt
	
	if(arquivo==NULL){ //se não abrir do prompt, especificar o nome do arquivo
	
		printf("\n arquivo .txt: ");
	
		scanf("%s",nomearq);//precisa estar na mesma pasta
		
		arquivo=fopen(nomearq,"r");
	
	}
	
	int qtd_numeros,x;
	int numerosl[50];// armazena os numeros(para linha)
	
	int i=0,j=0;

	qtd_numeros=fgetc(arquivo);//pega o primeiro elemento do arquivo

	while(x=fgetc(arquivo)!=EOF){//pega cada caractere do arquivo e insere na variável numeros
		
		numerosl[i]=x;
		i++;	
	}
	
	int numerosc[50];//armazena os numeros(para coluna)
		
	for(i=0,i=<qtd_numeros,i++){

		numerosc[i]=numerosl[i];//copia 1 var para a outra
	}

	int mat[50][50];//matriz para comparação
	
	for(i=0,i<=qtd_numeros,i++){
		for(j=0;j<=qtd_numeros;j++){
		
			mat[i][j]=

			}
		

		}

	for(i=0;i<=qtd_numeros;i++){//imprime a matriz
		for(j=0;j<=qtd_numeros;j++){
		
			printf("%c",mat[i][j]);

		}
		
		printf("\n");
	}

	fclose(arquivo);//fecha arquivo



	return 0;
}


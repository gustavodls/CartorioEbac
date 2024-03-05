#include  <stdio.h>   // Biblioteca de comunica��o com o usu�rio.
#include  <stdlib.h> // Biblioteca de aloca��o de espa�o em mem�ria.
#include <locale.h> // Biblioteca de aloca��es de texto por regi�o.
#include <string.h>// Biblioteca responsavel por cuidar da string.

  
int registro() //Fun��o responsavel para cadastrar o usu�rio.
    
   {   
        setlocale(LC_ALL, "Portuguese"); //Defindo a linguagem.
        
      //Inio da cria��o das vari�veis/string.
        char arquivo[40];
	    char cpf[40];
        char nome[40];
        char sobrenome[40];
        char cargo[40];
      //Fim da cria��o das vari�veis/string.
    
        printf("Digite o CPF para o cadastro!");//Coletando o CPF do usu�rio.
        scanf("%s", cpf); //"%s" Armazenando as string no Cpf.
	
        strcpy(arquivo, cpf); // Responsavel por copiar os valores das string.
    
        FILE *file; //Cria o arquivo
        file=fopen(arquivo, "w"); // Cria o arquivo. "w" signirfica escrever
        fprintf(file, "\nCPF: ");
        fprintf(file,cpf); //Salva o dados.
        fclose(file);  // Fecha o arquivo.
    
        file=fopen(arquivo, "a");  //Abre o arquivo e o "a" significa atualizar o arquivo.
        fprintf(file, "\nNome: "); //Perguntando o Nome do usu�rio.
        fclose(file); //Fecha o arquivo
    
    
        printf("Digite o nome de usu�rio!"); //Coletando o Nome do usu�rio.
        scanf("%s", nome); //"%s" Armazena as string.
    
	    file=fopen(arquivo, "a"); //Abre o arquivo e atualiza.
        fprintf(file, nome);
        fclose(file); // Fecha o arquivo
    
        file=fopen(arquivo, "a"); //Abre o arquivo e atualiza.
        fprintf(file, "\nSobrenome: ");
        fclose(file); //Fecha o arquivo.
  
  
        printf("Digite o sobrenome!"); //Coletando o sobrenome do usu�rio.
        scanf("%s", sobrenome); // "%s"Armazena as string
    
	    file=fopen(arquivo, "a"); //Abre o arquivo e atualiza.
        fprintf(file, sobrenome);
        fclose(file); //Fecha o arquivo.
    
        file=fopen(arquivo, "a"); //Abre o arquivo e atualiza.
        fprintf(file, "\nCargo: ");
        fclose(file); //Fecha o arquivo.
    
    
        printf(" Qual o seu cargo?"); //Coletando o cargo do usu�rio.
        scanf("%s", cargo); //"%s"Armazena as string.
        file=fopen(arquivo, "a"); //Abre o arquivo e atuliza.
        fprintf(file, cargo);
        fprintf(file, "\n\n"); //  "\n"Significa pular linha.
        fclose(file); //Fecha o arquivo.
    
        file=fopen(arquivo, "a"); //Abre o arquivo e atualiza. 
        fclose(file); //Fecha o arquivo. 
    
        system("pause"); //responsavel por pausar o sistema.
    } 
     
      // Fim da fun��o responsavel para cadastrar o usu�rio.     
      
int consultar() //Fun��o respons�vel por consultar os nomes.
    
    {  
        setlocale(LC_ALL, "Portuguese"); //Defindo a linguagem.
      //Inicio  da  cria��o das vari�veis.
	    char cpf [40];
	    char conteudo[200];
	  // Fim da cria��o das vari�veis.
	    printf(" Digite o CPF que deseje consultar");
	    scanf("%s", cpf); //"%s" Armazena a strintg dentro do cpf.
	
	    system("cls"); //Respons�vel por limpar a tela do usu�rio
	
	    FILE *file;
	    file=fopen(cpf, "r"); //Abre o arquivo/ "r" respons�vel por ler o arquivo.
	
	    if(file == NULL) //Respoons�vel para informar que se o arquivo nulo.
	
    {
        printf("N�o foi poss�vel abrir esse arquivo, N�o localizado!/n");	
    }
    
        printf("\nEssas s�o as informa��es do usu�rio:\n\n");

while(fgets(conteudo, 200, file) != NULL) //Respons�vel por fazer um ciclo de repeti��o at� for diferente de nulo.
    {     
    
        printf("%s" , conteudo); // "%" Armazena a string dentro do conteudo.
	
    }   
        system("pause"); //Respons�vel por pausar o sistema.
    } 
    
      // Fim fun��o respons�vel por consultar os nomes.
	      
int deletar() //Fun��o respons�vel por deletar os nomes.
	
    { //Inici da crian��o da vari�vel
        char cpf[40]; //Gerenciador das string.
      //Fim da cria��o da vari�vel
        printf("Digite o CPF que deseje deletar:");
        scanf("%s", cpf); //"%s" Armazenando as string no Cpf.
        
        remove(cpf); //Respons�vel por deletar o cpf do usu�rio do sistema.
        
	    FILE*file; // Busca o arquivo e abre.
	    file= fopen(cpf,"r");// abre o arquivo.
	    
	    if(file == NULL) //Se n�o encontrar o arquivo.
	    
	{
		printf(" O usu�rio n�o possui cadastro no sistema!\n");
		system("pause"); //Respons�vel por pausar o sistema.
		
	}    
	
    }	
    
      //Fim da fun��o respons�vel por deletar os nomes.
    
    
    
int main() //Criando a fun��o.
    {
	
	  // Definindo Vari�veis.
        int opcao=0; 
        int ciclo=1;
    
        for(ciclo=1;ciclo=1;) //La�o de repeti��o.
    {
    	
	    system("cls");//Respons�vel por limpar a tela do usu�rio.
	
        setlocale(LC_ALL, "Portuguese"); //Defindo a linguagem.
                                 
    // In�cio do Menu					 
        printf("### Cart�rio da EBAC ###\n\n");
    	printf("escolha a op��o desejada:\n\n");
        printf("\t1 - Registrar Nomes\n");
        printf("\t2 - Consultar Nomes\n");
        printf("\t3 - Deletar Nomes\n");
        printf("\t4 - Sair do sistema\n\n");
        printf("Op��o:");
    // Fim do menu: 
 
        scanf("%d", &opcao);//Armazenando as escolhas.
    
        system("cls");//Respos�vel por limpar a tela do usu�rio.
        
        switch (opcao)//Respons�vel por chamar a v�riavel
		{   
	  
		case 1:
			
		    registro();// chamando a fun��o
            break; // Fim da chamada/fun��o.
            
        case 2:
            
            consultar();// chamando a fun��o
	        break; // Fim da chamada/fun��o.
	        
	    case 3:
	        
	        deletar();// chamando a fun��o
            break; // Fim da chamada/fun��o.
            
        case 4:
		
		    printf ("Obrigado por utilizar o sistema!\n");
			return 0; //Retorna ao valor 0 (quebra la�os e fun��o.
			break; // Fim da chamada da fun��o.
            
        default://Respond�vel para caso encontre uma op��o invalida.
            	
            printf("Essa op��o n�o est� dispon�vel!\n");
            system("pause");	
            break; // Fim da chamada/fun��o.
		}
    }

	   
}

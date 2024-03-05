#include  <stdio.h>   // Biblioteca de comunicação com o usuário.
#include  <stdlib.h> // Biblioteca de alocação de espaço em memória.
#include <locale.h> // Biblioteca de alocações de texto por região.
#include <string.h>// Biblioteca responsavel por cuidar da string.

  
int registro() //Função responsavel para cadastrar o usuário.
    
   {   
        setlocale(LC_ALL, "Portuguese"); //Defindo a linguagem.
        
      //Inio da criação das variáveis/string.
        char arquivo[40];
	    char cpf[40];
        char nome[40];
        char sobrenome[40];
        char cargo[40];
      //Fim da criação das variáveis/string.
    
        printf("Digite o CPF para o cadastro!");//Coletando o CPF do usuário.
        scanf("%s", cpf); //"%s" Armazenando as string no Cpf.
	
        strcpy(arquivo, cpf); // Responsavel por copiar os valores das string.
    
        FILE *file; //Cria o arquivo
        file=fopen(arquivo, "w"); // Cria o arquivo. "w" signirfica escrever
        fprintf(file, "\nCPF: ");
        fprintf(file,cpf); //Salva o dados.
        fclose(file);  // Fecha o arquivo.
    
        file=fopen(arquivo, "a");  //Abre o arquivo e o "a" significa atualizar o arquivo.
        fprintf(file, "\nNome: "); //Perguntando o Nome do usuário.
        fclose(file); //Fecha o arquivo
    
    
        printf("Digite o nome de usuário!"); //Coletando o Nome do usuário.
        scanf("%s", nome); //"%s" Armazena as string.
    
	    file=fopen(arquivo, "a"); //Abre o arquivo e atualiza.
        fprintf(file, nome);
        fclose(file); // Fecha o arquivo
    
        file=fopen(arquivo, "a"); //Abre o arquivo e atualiza.
        fprintf(file, "\nSobrenome: ");
        fclose(file); //Fecha o arquivo.
  
  
        printf("Digite o sobrenome!"); //Coletando o sobrenome do usuário.
        scanf("%s", sobrenome); // "%s"Armazena as string
    
	    file=fopen(arquivo, "a"); //Abre o arquivo e atualiza.
        fprintf(file, sobrenome);
        fclose(file); //Fecha o arquivo.
    
        file=fopen(arquivo, "a"); //Abre o arquivo e atualiza.
        fprintf(file, "\nCargo: ");
        fclose(file); //Fecha o arquivo.
    
    
        printf(" Qual o seu cargo?"); //Coletando o cargo do usuário.
        scanf("%s", cargo); //"%s"Armazena as string.
        file=fopen(arquivo, "a"); //Abre o arquivo e atuliza.
        fprintf(file, cargo);
        fprintf(file, "\n\n"); //  "\n"Significa pular linha.
        fclose(file); //Fecha o arquivo.
    
        file=fopen(arquivo, "a"); //Abre o arquivo e atualiza. 
        fclose(file); //Fecha o arquivo. 
    
        system("pause"); //responsavel por pausar o sistema.
    } 
     
      // Fim da função responsavel para cadastrar o usuário.     
      
int consultar() //Função responsável por consultar os nomes.
    
    {  
        setlocale(LC_ALL, "Portuguese"); //Defindo a linguagem.
      //Inicio  da  criação das variáveis.
	    char cpf [40];
	    char conteudo[200];
	  // Fim da criação das variáveis.
	    printf(" Digite o CPF que deseje consultar");
	    scanf("%s", cpf); //"%s" Armazena a strintg dentro do cpf.
	
	    system("cls"); //Responsável por limpar a tela do usuário
	
	    FILE *file;
	    file=fopen(cpf, "r"); //Abre o arquivo/ "r" responsável por ler o arquivo.
	
	    if(file == NULL) //Respoonsável para informar que se o arquivo nulo.
	
    {
        printf("Não foi possível abrir esse arquivo, Não localizado!/n");	
    }
    
        printf("\nEssas são as informações do usuário:\n\n");

while(fgets(conteudo, 200, file) != NULL) //Responsável por fazer um ciclo de repetição até for diferente de nulo.
    {     
    
        printf("%s" , conteudo); // "%" Armazena a string dentro do conteudo.
	
    }   
        system("pause"); //Responsável por pausar o sistema.
    } 
    
      // Fim função responsável por consultar os nomes.
	      
int deletar() //Função responsável por deletar os nomes.
	
    { //Inici da crianção da variável
        char cpf[40]; //Gerenciador das string.
      //Fim da criação da variável
        printf("Digite o CPF que deseje deletar:");
        scanf("%s", cpf); //"%s" Armazenando as string no Cpf.
        
        remove(cpf); //Responsável por deletar o cpf do usuário do sistema.
        
	    FILE*file; // Busca o arquivo e abre.
	    file= fopen(cpf,"r");// abre o arquivo.
	    
	    if(file == NULL) //Se não encontrar o arquivo.
	    
	{
		printf(" O usuário não possui cadastro no sistema!\n");
		system("pause"); //Responsável por pausar o sistema.
		
	}    
	
    }	
    
      //Fim da função responsável por deletar os nomes.
    
    
    
int main() //Criando a função.
    {
	
	  // Definindo Variáveis.
        int opcao=0; 
        int ciclo=1;
    
        for(ciclo=1;ciclo=1;) //Laço de repetição.
    {
    	
	    system("cls");//Responsável por limpar a tela do usuário.
	
        setlocale(LC_ALL, "Portuguese"); //Defindo a linguagem.
                                 
    // Início do Menu					 
        printf("### Cartório da EBAC ###\n\n");
    	printf("escolha a opção desejada:\n\n");
        printf("\t1 - Registrar Nomes\n");
        printf("\t2 - Consultar Nomes\n");
        printf("\t3 - Deletar Nomes\n");
        printf("\t4 - Sair do sistema\n\n");
        printf("Opção:");
    // Fim do menu: 
 
        scanf("%d", &opcao);//Armazenando as escolhas.
    
        system("cls");//Resposável por limpar a tela do usuário.
        
        switch (opcao)//Responsável por chamar a váriavel
		{   
	  
		case 1:
			
		    registro();// chamando a função
            break; // Fim da chamada/função.
            
        case 2:
            
            consultar();// chamando a função
	        break; // Fim da chamada/função.
	        
	    case 3:
	        
	        deletar();// chamando a função
            break; // Fim da chamada/função.
            
        case 4:
		
		    printf ("Obrigado por utilizar o sistema!\n");
			return 0; //Retorna ao valor 0 (quebra laços e função.
			break; // Fim da chamada da função.
            
        default://Respondável para caso encontre uma opção invalida.
            	
            printf("Essa opção não está disponível!\n");
            system("pause");	
            break; // Fim da chamada/função.
		}
    }

	   
}

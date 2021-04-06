 #include <stdio.h>
#include <stdlib.h>
#include <string.h> //necessario para strcmp
#include <conio.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// procedimento
void Menu_principal () // Funcao menu
{
	
	printf ("---------------------------\n\t   Menu \n---------------------------");
	printf ("\n| [1] Para logar              |\n");
	printf ("| [2] Para efetuar o cadastro |\n");
			
}

int Menu_trabalho() // Funcao menu trabalho

{
	//variavel
	int Num2;
	char resp,rec2;

	//menu
	system ("cls");

	printf ("---------------------------------\n\t Menu de trabalho \n---------------------------------");
    printf ("\n| [1] Cadastro de paciente     |\n");
    printf ("| [2] Cadastro de medico       |\n");
    printf ("| [3] Agendamento              |\n");
    printf ("| [4] Cancelamento de consulta |\n");
    printf ("| [5] Feedback dos pacientes   |\n");
    printf ("| [6] Cadastro de produtos     |\n");
    printf ("| [7] Relatorio                |\n");
	printf ("| [8] Sair                     |\n");
	scanf ("%d",&Num2);
    return Num2;
    
}

int cadastroPacientes () // // funcao cadastro Paciente 
{
	
	struct c_pac
	{
		char Nome[50];
		char Sexo[20];
		int  RG;
		char Convenio[30]; 
		int  Telefone;
		int  Celular;		
	}cad_pac;
	
	// Variavel
	
	int i;
	char resp2;
	
	// desenvolvimento
	
	
	printf ("\n------------------------\n Cadastro de paciente \n------------------------\n");
	
	printf (" Nome: ");
	fflush(stdin);
	fgets (cad_pac.Nome,50,stdin);
	
	printf (" RG: ");
	scanf ("%d",&cad_pac.RG);
	
	printf (" Sexo: ");
	fflush(stdin);
	fgets (cad_pac.Sexo,20,stdin);
	
	printf (" Telefone: ");
	scanf ("%d", &cad_pac.Telefone);
	
	printf (" Convenio: ");
	fflush(stdin);
	fgets  (cad_pac.Convenio,30,stdin);
	
	printf (" Celular: ");
	scanf("%d",&cad_pac.Celular);
	
	
	system("cls");

	
	printf ("-------------------- Paciente Cadastrado ------------------");
	
	printf ("\n Nome: %s", cad_pac.Nome);
	printf ("\n Sexo: %s", cad_pac.Sexo);
	printf ("\n RG: %d", cad_pac.RG);
	printf ("\n Convenio: %s", cad_pac.Convenio);
	printf ("\n Telefone: %d", cad_pac.Telefone );
	printf ("\n Celular: %d", cad_pac.Celular);

}

int cadastroMedico() // funcao cadastro Medico
{
	struct c_medico
	{
		char nome[50];
		char funcao[50];
		int RG; 
	
	}cad_medico;
	
	// variavel
	char Bot, Rec;
	// desenvolvimento

	system ("cls");
	printf ("\n-----------------------------------\n\tCadastro de medico\n----------------------------------");
	
	printf ("\n Nome: ");
	fflush (stdin);
	fgets  (cad_medico.nome,50,stdin);
	
	printf ("\n Especialidade: ");
	fflush (stdin);
	fgets  (cad_medico.funcao,50,stdin);
	
	printf ("\n RG: ");
	scanf  ("%d", &cad_medico.RG);

	system ("cls");
	
	printf ("-----------------------------------\n\tMedico cadastrado\n----------------------------------");
	
	printf ("\n Nome: %s", cad_medico.nome);
	printf ("\n Especialidade: %s", cad_medico.funcao);
	printf ("\n RG: %d", cad_medico.RG);
	
	printf ("\n\n\n\t\t CADASTRO CONCLUIDO COM SUCESSO\n");

}

int feedbackPaciente ()
{
    struct f_pac
    {
		char nome[50];
		int  nota;
		char obs[50];
    }feed_pac;
	
	system ("cls");
	
	printf ("\n------------------------\n Feedback do paciente \n------------------------\n");

	printf ("\n Digite seu nome: ");
	fflush (stdin);
	fgets  (feed_pac.nome,50,stdin);
	
	
	printf ("\n Digite um numero de 0 a 10 para a nota do atendimento da clinica: " );
	scanf ("%d", &feed_pac.nota);
	
	
	printf ("\n Digite seu comentario (opcional): " );
	fflush(stdin);
	fgets (feed_pac.obs,50,stdin);	
	
	printf ("\n\n\t\t\tOBRIGADO PELA AVALIACAO\n\n");
}

int cadastroProdutos ()
{
    struct c_prod
    {
        char produto[50];
		char tipo[50];
		int  qtd;
		int valor;
    }cad_prod;

	system ("cls");
    printf ("\n------------------------\n Cadastro de produtos \n------------------------\n");


	printf ("\n Produto: ");
	fflush(stdin);
	fgets (cad_prod.produto,50,stdin);

	printf ("\n Tipo: ");
	fflush(stdin);
	fgets (cad_prod.tipo,50,stdin);

	printf ("\n Quantidade: ");
	scanf ("%d", &cad_prod.qtd);

	printf ("\n Valor: ");
	scanf ("%d", &cad_prod.valor);

	system("cls");


printf ("-------------------- Produto Cadastrado --------------------");

	printf ("\n Produto: %s", cad_prod.produto);
	printf ("\n Tipo: %s", cad_prod.tipo);
	printf ("\n Quantidade: %d", cad_prod.qtd);
	printf ("\n Valor: %d", cad_prod.valor);
}

int Num3;

int menuRelatorio ()

{
	int Num4;
	system ("cls");
	printf ("---------------------------------\n\t Menu de Relatorio \n---------------------------------");
    printf ("\n| [1] Anotar relatorio       |\n");
    printf ("| [2] Exibir relatorio       |\n");
    scanf ("%d",&Num4);
}

	int anotarRelatorio(){
		
		struct r_clinic
	{
		int numClinica;
		float faturClinica;
		int totPac;
		 
		
	}relat_clinica;
	
	
	system ("cls");	
			
			switch (menuRelatorio ()){
			
			case 1:
				system ("cls");	
				printf ("\n------------------------\n Anotar relatorio \n------------------------\n");
	
				printf ("\n Numero da clinica: ");
				fflush (stdin);
				scanf  ("%d", &relat_clinica.numClinica);
	
				printf ("\n Faturamento da clinica: ");
				fflush (stdin);
				scanf ("%f", &relat_clinica.faturClinica);
	
				printf ("\n Total de pacientes da clinica: ");
				fflush (stdin);
				scanf  ("%d", &relat_clinica.totPac);
				
			case 2:
				system ("cls");	
				printf ("\n------------------------\n Exibir relatorio \n------------------------\n");
	
				printf ("\n Numero da clinica: %d", relat_clinica.numClinica);
				printf ("\n Faturamento da clinica: %f", relat_clinica.faturClinica);
				printf ("\n Total de Paciente: %d", relat_clinica.totPac);
				break;
				
	
				system ("cls");
	}
}



int main(int argc, char *argv[]) {
	
	//variavel
	char c,cadastro_login[50],cadastro_senha[50],acesso_login[50],acesso_senha[50],resp2;
    int a=0,b=1,d=3;// d controlará a quantidade de erros ao logar no sistema	
	int Num=0,opcao=0;
	char rec, ret;
	
	
	
	// criando arquivo 
	FILE *arq_login; // arquivo de cadastramento 
		
	// Desenvolvimento	
do{	
	system ("cls");
	Menu_principal ();
	scanf ("%d", &Num);

	switch (Num){
		
		case 1:
           	printf("\nEntre com o login: ");
       		fflush(stdin);      //Limpando o buffer do teclado
       		gets(acesso_login);
       		printf("\nEntre com a senha: ");
            a=0;
         
		  	 do{
               	c=getch();
               	if(isprint(c)){ //Analisa se o valor de c é imprimível
           		acesso_senha[a]=c;
           		a++;
           		printf("*"); //Imprimindo apenas o asterisco *
               	}else if(c==8&&a){
              	acesso_senha[a]='\0';
               	a--;
               		printf("\b \b"); //Apagando os caracteres digitados
               		}
                
				}while(c!=13);//13 é o valor de ENTER na tabela ASCII
               		acesso_senha[a]='\0';

               			if(!strcmp(cadastro_login,acesso_login)&&!strcmp(cadastro_senha,acesso_senha)){
               			//strcmp retorna 0 se as variáveis forem iguais. !strcmp é o mesmo que strcmp==0
               			printf("\n\n\t\t\tLOGADO COM SUCESSO...\n\n");
						break;
						}
		case 2:
			
			system ("cls");			
	
			arq_login = fopen ("teste.txt", "a");						
			printf("\n\t\t\tCADASTRO\n\nDigite o login: ");
       		fflush(stdin); //Limpando o buffer do teclado
        	gets(cadastro_login);             
       		printf("\nDigite a senha: ");
       		
       		 do{
           		c=getch();
           			if(isprint(c)){ //Analisa se o valor da variável c é imprimivel
           			cadastro_senha[a]=c;  //Se for, armazena o caractere
           			a++;
          			printf("*");//imprime o * Anterisco
           			}else if(c==8&&a){//8 é o caractere BackSpace na tabela ASCII, && a analisa se a é diferente de 0
           			cadastro_senha[a]='\0';
           			a--;
          		    printf("\b \b");//Apagando o caractere digitado
          			}
        			fclose(arq_login);	
				}while(c!=13); //13 é o valor de ENTER na tabela ASCII
        		cadastro_senha[a]='\0';
       			printf("\n\nCadastro efetuado com sucesso...\n\n");
				
				system("cls"); 
				
	} 	
}

while (Num == 2);
			do{
				switch (Menu_trabalho()){
				
				case 1: 
					cadastroPacientes();
					printf ("\n\n Pressione qualquer tecla para voltar ao menu de trabalho ");
					fflush (stdin);
					scanf  ("%c",&rec);
					break;
				case 2:
					cadastroMedico();
					printf ("\n Pressione qualquer tecla para voltar ao menu de trabalho ");
					fflush (stdin);
					scanf  ("%c",&rec);
					break;
				case 3:
					printf ("\n\n\t\tDISPONIVEL NA PROXIMA ATUALIZACAO\n");
					printf ("\n Pressione qualquer tecla para voltar ao menu de trabalho ");
					fflush (stdin);
					scanf  ("%c",&rec);
					break;
				case 4:
					printf ("\n\n\t\tDISPONIVEL NA PROXIMA ATUALIZACAO\n");
					printf ("\n Pressione qualquer tecla para voltar ao menu de trabalho ");
					fflush (stdin);
					scanf  ("%c",&rec);
					break;
				case 5:
					feedbackPaciente ();
					printf ("\n Pressione qualquer tecla para voltar ao menu de trabalho ");
					fflush (stdin);
					scanf  ("%c",&rec);
					break;
				case 6:
					cadastroProdutos ();
					printf ("\n Pressione qualquer tecla para voltar ao menu de trabalho ");
					fflush (stdin);
					scanf  ("%c",&rec);
					break;
				case 7:
					anotarRelatorio();
					printf ("\n Pressione qualquer tecla para voltar ao menu de trabalho ");
					fflush (stdin);
					scanf  ("%c",&rec);				
					break;
				case 8:
					printf ("\n\n\t\t\tOBRIGADO\n");
					
					return 0;
		}
	}while (rec != '§§');
		return (Menu_trabalho());
			
	return 0;
}


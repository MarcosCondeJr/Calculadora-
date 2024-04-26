#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL,"portuguese");

     char operacao; 
     float num1, num2, resultado;

        // inicialização
        printf("       CALCULADORA        \n");
        printf("\nDIGITE A OPERAÇÃO QUE DESEJA FAZER (+)(-)(*)(/) : ");
        scanf("%s",&operacao);

        // 1° número
        printf("\nINFORME O 1° NÚMERO: ");
        scanf("%f", &num1);
     
        // 2° número
        printf("\nINFORME O 2° NÚMERO: ");
        scanf("%f", &num2);

            //operações
            switch(operacao){
				
				//adição
                case '+':
                    resultado = num1+num2;
                    printf("\nSOMA: %.2f + %.2f = %.2f",num1,num2,resultado);
                    break;

				//multiplicação
                case '-':
                    resultado = num1-num2;
                    printf("\nSUBTRAÇÃO: %.2f - %.2f = %.2f",num1,num2,resultado);

                    break;

				//multiplicação
                case '*':
                    resultado = num1*num2;
                    printf("\nMULTIPLICAÇÃO: %.2f * %.2lf = %.2f",num1,num2,resultado);

                    break;  
					   
                //divisão
                case '/':
                	
                	if(num1 == 0 || num2 == 0){
               			printf("Não é possivel dividir por 0");
               			
               			break;
               		}
					else{
				    	resultado = num1/num2;
	                    printf("\nDIVISÃO: %.2f / %.2f = %.2f",num1,num2,resultado);
					}						
                    break;
            }

          
    return 0;         
}            
    

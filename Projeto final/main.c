#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

void menu();
int lemenu();


int main()
{
    int opc=9;
    int totV=0,reqV=0,disP=0,totC=0;

    while(opc!=0)
    switch(opc = lemenu()){
        case 1:
            printf("1");
            break;

        case 2:
            printf("2");
            break;

        case 3:
            printf("3");
            break;

        case 4:
            printf("4");
            break;

        case 5:
            printf("5");
            break;

        case 6:
            printf("6");
            break;

        case 7:
            printf("7");
            break;

        case 0:
            printf("Babye!\n");
            break;

        default:
            printf("I've got so far, and tried so hard");
    }
    return 0;
}

//Esta função escreve o menu no ecrã
void menu(void){

    printf("\n\t\tGestao de Veiculos Eletricos\n");
    printf("Total de Viaturas: **\t\t Distancia percorrida(kms): ****\n");
    printf("Requisicoes de viaturas: **\t Total de carregamentos: ****\n");
    printf("\t1. Nova Viatura\n");
    printf("\t2. Registo de Carregamento\n");
    printf("\t3. Registo de Requisiçao\n");
    printf("\t4. Registo de Devoluçao\n");
    printf("\t5. Listagem\n");
    printf("\t6. Informacoes\n");
    printf("\t7. Gravar\n");
    printf("\t0. Sair\n");
    printf("\t\tSelecione a opcao:");

}

//esta funcao vai chamar a func menu e vai pedir a opcao
int lemenu(){
    int opc=9;
    menu();
    scanf("%d",&opc);
    while(opc>7){
        printf("Insira uma opcao valida: ");
        scanf("%d",&opc);
    }
    return opc;
}


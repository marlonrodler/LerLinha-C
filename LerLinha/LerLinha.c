/* le cada linha digitada via teclado e armazena no arquivo. O programa termina quando digita-se uma linha em branco */
#include <stdio.h>
#include <string.h>

void main(int argc, char *argv[]) {
    FILE *fptr;
    char string[81];

    if(argc != 2){
        printf("\nDigite: LeLinha nome_arquivo");
        exit(0);//Aborta a execução do programa
    }

    if((fptr = fopen(argv[1], "r")) == NULL){
        printf("\nArquivo não encontrado");
        exit(0);
    }

    while (fgets(string,20,fptr) != NULL) {
        printf("%s", string);
        getch();
    }

    fclose(fptr);
}//Fim main

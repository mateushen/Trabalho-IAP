#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void preencheX(char p1[2], char p2[2], char p3[2], char p4[2], char p5[2], char p6[2], char p7[2], char p8[2], char p9[2], int posicao){
    char X[2] = "X";
    if(posicao == 1){
            strcpy(p1, X);
        }else{
            if(posicao == 2){
                strcpy(p2, X);
            }else{
                if(posicao == 3){
                    strcpy(p3, X);
                }else{
                    if(posicao == 4){
                        strcpy(p4, X);
                    }else{
                        if(posicao == 5){
                            strcpy(p5, X);
                        }else{
                            if(posicao == 6){
                                strcpy(p6, X);
                            }else{
                                if(posicao == 7){
                                    strcpy(p7, X);
                                }else{
                                    if(posicao == 8){
                                        strcpy(p8, X);
                                    }else{
                                        if(posicao == 9){
                                            strcpy(p9, X);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
}
void preencheO(char p1[2], char p2[2], char p3[2], char p4[2], char p5[2], char p6[2], char p7[2], char p8[2], char p9[2], int posicao){
    char O[2] = "O";
    if(posicao == 1){
            strcpy(p1, O);
        }else{
            if(posicao == 2){
                strcpy(p2, O);
            }else{
                if(posicao == 3){
                    strcpy(p3, O);
                }else{
                    if(posicao == 4){
                        strcpy(p4, O);
                    }else{
                        if(posicao == 5){
                            strcpy(p5, O);
                        }else{
                            if(posicao == 6){
                                strcpy(p6, O);
                            }else{
                                if(posicao == 7){
                                    strcpy(p7, O);
                                }else{
                                    if(posicao == 8){
                                        strcpy(p8, O);
                                    }else{
                                        if(posicao == 9){
                                            strcpy(p9, O);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
}

int verificaX(char p1[2], char p2[2], char p3[2], char p4[2], char p5[2], char p6[2], char p7[2], char p8[2], char p9[2], char j1[20]){
    int opcao;
    if((strcmp(p1, p2) == 0) && (strcmp(p2, p3) == 0)){
        opcao = 0;
    }else{
        if((strcmp(p4, p5) == 0) && (strcmp(p5, p6) == 0)){
            opcao = 0;
        }else{
            if((strcmp(p7, p8) == 0) && (strcmp(p8, p9) == 0)){
                opcao = 0;
            }else{
                if((strcmp(p1, p4) == 0) && (strcmp(p4, p7) == 0)){
                    opcao = 0;
                }else{
                    if((strcmp(p2, p5) == 0) && (strcmp(p5, p8) == 0)){
                        opcao = 0;
                    }else{
                        if((strcmp(p3, p6) == 0) && (strcmp(p6, p9) == 0)){
                            opcao = 0;
                        }else{
                            if((strcmp(p1, p5) == 0) && (strcmp(p5, p9) == 0)){
                                opcao = 0;
                            }else{
                                if((strcmp(p3, p5) == 0) && (strcmp(p5, p7) == 0)){
                                    opcao = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return(opcao);
} 

int verificaO(char p1[2], char p2[2], char p3[2], char p4[2], char p5[2], char p6[2], char p7[2], char p8[2], char p9[2], char j2[20]){
    int opcao;
    if((strcmp(p1, p2) == 0) && (strcmp(p2, p3) == 0)){
        opcao = 0;
    }else{
        if((strcmp(p4, p5) == 0) && (strcmp(p5, p6) == 0)){
            opcao = 0;
        }else{
            if((strcmp(p7, p8) == 0) && (strcmp(p8, p9) == 0)){
                opcao = 0;
            }else{
                if((strcmp(p1, p4) == 0) && (strcmp(p4, p7) == 0)){
                    opcao = 0;
                }else{
                    if((strcmp(p2, p5) == 0) && (strcmp(p5, p8) == 0)){
                        opcao = 0;
                    }else{
                        if((strcmp(p3, p6) == 0) && (strcmp(p6, p9) == 0)){
                            opcao = 0;
                        }else{
                            if((strcmp(p1, p5) == 0) && (strcmp(p5, p9) == 0)){
                                opcao = 0;
                            }else{
                                if((strcmp(p3, p5) == 0) && (strcmp(p5, p7) == 0)){
                                    opcao = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return(opcao);
}    

int verificaVELHA(char p1[2], char p2[2], char p3[2], char p4[2], char p5[2], char p6[2], char p7[2], char p8[2], char p9[2]){
    int velha = 1;
    if((strcmp (p1,"1") != 0) && (strcmp (p2,"2") != 0) && (strcmp (p3,"3") != 0) && 
       (strcmp (p4,"4") != 0) && (strcmp (p1,"5") != 0) && (strcmp (p6,"6") != 0) && 
       (strcmp (p7,"7") != 0) && (strcmp (p1,"1") != 0) && (strcmp (p9,"9") != 0)){
        velha = 0;
    }
    return(velha);
}

int main()
{
    char jogador1[20];
    char jogador2[20];
    char j1[20], j2[20];
  
    printf("Nome do Jogador 1: ");
    scanf("%s", jogador1);
    printf("Nome do Jogador 2: ");
    scanf("%s", jogador2);
  
    srand(time(NULL));
    int num = rand()%2;
    if(num == 0){
        printf("%s é o primeiro a jogar e usará o simbolo X.\n", jogador1);
        strcpy(j1, jogador1);
        strcpy(j2, jogador2);
    }else{
        printf("%s é o primeiro a jogar e usará o simbolo X.\n", jogador2);
        strcpy(j1, jogador2);
        strcpy(j2, jogador1);
    }
    
    char p1[2] = "1";
    char p2[2] = "2";
    char p3[2] = "3";
    char p4[2] = "4";
    char p5[2] = "5";
    char p6[2] = "6";
    char p7[2] = "7";
    char p8[2] = "8";
    char p9[2] = "9";

    int opcao = 1, vez = 1, posicao, velha;
    while(opcao != 0){
        printf("\nTabuleiro - Jogo da velha.\n");
        printf("%s | %s | %s\n", p1, p2, p3);
        printf("---------\n");
        printf("%s | %s | %s\n", p4, p5, p6);
        printf("---------\n");
        printf("%s | %s | %s\n", p7, p8, p9);
        if(vez == 1){    
            printf("Vez de %s.\n", j1);
            printf("Digite a posição: ");
            scanf("%d", &posicao);
            if((posicao > 0) && (posicao < 10)){
                preencheX(p1, p2, p3, p4, p5, p6, p7, p8, p9, posicao);
                verificaX(p1, p2, p3, p4, p5, p6, p7, p8, p9, j1);
                opcao = verificaX(p1, p2, p3, p4, p5, p6, p7, p8, p9, j1);
                vez = 2;
            }else{
                printf("Posicao inválida.");
                vez = 1;
            }   
            if(opcao == 0){
                printf("%s venceu.\n", j1);
            }else{
                velha =verificaVELHA(p1, p2, p3, p4, p5, p6, p7, p8, p9);
                if(velha == 0){
                    printf("Ninguém venceu.");
                    opcao = 0;
                }
            }
        }else{    
            if(vez == 2){
                printf("Vez de %s.\n", j2);
                printf("Digite a posição: ");
                scanf("%d", &posicao);
                if((posicao > 0) && (posicao < 10)){
                preencheO(p1, p2, p3, p4, p5, p6, p7, p8, p9, posicao);
                verificaO(p1, p2, p3, p4, p5, p6, p7, p8, p9, j2);
                opcao = verificaO(p1, p2, p3, p4, p5, p6, p7, p8, p9, j2);
                vez = 1;
            }else{
                printf("Posicao inválida.");
                vez = 2;
            }
                if(opcao == 0){
                    printf("%s venceu.\n", j1);
                }else{
                    velha = verificaVELHA(p1, p2, p3, p4, p5, p6, p7, p8, p9);
                    if(velha == 0){
                        printf("Ninguém venceu.");
                        opcao = 0;
                    }
                }
            }
        }
    }
    
    printf("\nJogo finalizado.\n");
    printf(" \n");
    printf("%s | %s | %s\n", p1, p2, p3);
    printf("---------\n");
    printf("%s | %s | %s\n", p4, p5, p6);
    printf("---------\n");
    printf("%s | %s | %s\n", p7, p8, p9);

    return 0;
}


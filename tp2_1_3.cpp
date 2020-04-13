#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const int filas = 5;
int main(){
    //---------------PUNTO 3----------------
    srand(time(NULL));
    int aleatorio = rand()%(5,16);
    int columnas;
    columnas = aleatorio;
    int ** matriz;
    matriz = (int **) malloc(filas * sizeof(int*)); // reservo memoria para las filas

    for (int i = 0; i < filas; i++)
    {
        matriz[i] = (int*) malloc(columnas * sizeof(int*)); // reservo memoria para las columnas
    }

    int alea = 0;
    int resto, cont;
    for(int i = 0; i < 5; i++ ){ 
        cont = 0;
        for(int j = 0; j < 4; j++ ){
            alea = (1 + rand()%(100,999));
            matriz[i][j] = alea;

            resto = alea % 2;//---- APARTADO A----
            if(resto == 0){       
                cont ++;
            }
        }
       printf("la fila %d tine %d numeros pares \n\n", i+1, cont);
    }

    
    for(int i = 0; i < 5; i++ ){
        
        for(int j = 0; j < 4; j++ ){
            printf("%d ", matriz[i][j]);

        }  
        printf(" \n\n");
    }
    // punto 3_b
    int *cant_pares = (int*) malloc(15 * sizeof(int*));
    int controlador = 0;
    for(int i = 0; i < 5; i++ ){
        
        for(int j = 0; j < 4; j++ ){
           resto = matriz[i][j] % 2;
           if (resto == 0 && controlador < 15)
           {
               cant_pares[controlador] = matriz[i][j];
               controlador++;
           }

        }
    }
    printf(" Matriz de numeros pares: ");
    for (int i = 0; i < 15; i++)
    {
        printf ("[%d]", cant_pares[i]);
    }
    printf(" \n\n");
    getchar();
    return 0;
} 
 

      
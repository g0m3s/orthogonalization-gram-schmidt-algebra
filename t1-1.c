#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float versor ( float *n1[3] ) {




    return 0;
}

int main (  ) {

    int dimensao,
        qVetores,
        cont = 0,
        i = 0,
        j = 0;
        
    float v1[3] = {0,0,0},
          v2[3] = {0,0,0},
          v3[3] = {0,0,0},
          w1[3],
          w2[3],
          w3[3];

    printf(" Informe a dimensao e a quantidade de vetores :\n");
    scanf("%d %d", &dimensao, &qVetores);

    switch (dimensao) {

    case 3:

        switch ( qVetores ){

            case 1:

                for(i; i < dimensao; i++){
            
                    printf ("\nInforme o valor de v1 na posicao %d: ", i);                    
                    scanf ("%f", &v1[i]);

                }

                i = 0;

                w1 = versor(&v1);

            break;

            case 2:

                for(i; i < dimensao; i++){
            
                    printf ("\nInforme o valor de v1 na posicao %d: ", i);
                    scanf ("%f", &v1[i]);

                }

                i = 0;

                for(i; i < dimensao; i++){

                    printf ("\nInforme o valor de v2 na posicao %d: ", i);
                    scanf ("%f", &v2[i]);

                }

                i = 0;

            break;

            case 3:

                for(i; i < dimensao; i++){
            
                    printf ("\nInforme o valor de v1 na posicao %d: ", i);
                    scanf ("%f", &v1[i]);

                }

                i = 0;

                for(i; i < dimensao; i++){

                    printf ("\nInforme o valor de v2 na posicao %d: ", i);
                    scanf ("%f", &v2[i]);

                }

                i = 0;

                for(i; i < dimensao; i++){

                    printf ("\nInforme o valor de v3 na posicao %d: ", i);
                    scanf ("%f", &v3[i]);

                }

            break;


        }

    break;
    
    default:
        break;
    }

    return 0;
}
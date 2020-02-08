#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (  ) {

    int dimensao,
        qVetores,
        cont = 0,
        i = 0,
        j = 0;

    float v1[3] = {0,0,0},
          v2[3] = {0,0,0},
          v3[3] = {0,0,0},
          w1[3] = {0,0,0},
          w2[3] = {0,0,0},
          w3[3] = {0,0,0},
          a;

    printf(" Informe a dimensao e a quantidade de vetores :\n");
    scanf("%d %d", &dimensao, &qVetores);

    switch (dimensao) {

    case 3:

        switch ( qVetores ){

            case 1:

                for(i=0; i < dimensao; i++){

                    printf ("\nInforme o valor de v1 na posicao %d: ", i);
                    scanf ("%f", &v1[i]);

                }

                i = 0;

                for ( i = 0; i < dimensao; i++ ){

                    w1[i] = v1[i] * (1/ sqrt( (pow(v1[0],2)+ pow(v1[1],2) + pow (v1[2],2)) )); //ja calcula o versor //colocar vetores ao uadrado

                }

                for ( i = 0; i < dimensao; i++ ){

                    printf("w1 na posicao %d = %f\n",i, w1[i]);

                }



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

                for ( i = 0; i < dimensao; i++ ){

                    w1[i] = v1[i] * (1/ sqrt( (v1[0]+v1[1]+v1[2]) )); //ja calcula o versor



                }

                //w2 = v2 - projv2 em v1

                for ( i = 0; i < dimensao; i++ ) {

                    w2[i] = v2[i] - ( ( ( (v1[0] * v2[0]) + (v1[1] * v2[1]) + (v1[2] * v2[2]) ) / (pow(v1[0],2) + pow(v1[1],2) + pow(v1[2],2)) ) )* v1[i];

                    a = (pow(w2[0],2)+ pow(w2[1],2) + pow (w2[2],2));

                    w2[i] = w2[i] * (1/ sqrt(a));

                }

                for ( i = 0; i < dimensao; i++ ){

                    printf("w1 na posicao %d = %f\n",i, w1[i]);

                }

                for ( i = 0; i < dimensao; i++ ){

                    printf("w2 na posicao %d = %f\n",i, w2[i]);

                }


            break;

            case 3:

                for(i = 0; i < dimensao; i++){

                    printf ("\nInforme o valor de v1 na posicao %d: ", i);
                    scanf ("%f", &v1[i]);

                }

                

                for(i = 0; i < dimensao; i++){

                    printf ("\nInforme o valor de v2 na posicao %d: ", i);
                    scanf ("%f", &v2[i]);

                }


                for(i = 0; i < dimensao; i++){

                    printf ("\nInforme o valor de v3 na posicao %d: ", i);
                    scanf ("%f", &v3[i]);

                }

                for ( i = 0; i < dimensao; i++ ){

                    w1[i] = v1[i] / ( sqrt( pow(v1[0],2)+ pow(v1[1],2)+pow(v1[2],2) ) ); //ja calcula o versor

                }



                for ( i = 0; i < dimensao; i++ ) {   //calcula w2

                    w2[i] = v2[i] - ( ( ( (v1[0] * v2[0] ) + (v1[1] * v2[1]) + (v1[2] * v2[2]) ) / (pow(v1[0],2) + pow(v1[1],2) + pow(v1[2],2) ) )  * v1[i] );

                }

                for ( i = 0; i < dimensao; i++ ) {  // w2 normalizado (x o versor)

                    w2[i] = w2[i] / ( sqrt ((pow(w2[0],2)+ pow(w2[1],2) + pow (w2[2],2)) ) );

                }


                for ( i = 0; i < dimensao; i++ ) {

                    w3[i] = v3[i] - (   ( ( ( ( (v3[0] * w1[0]) + (v3[1] * w1[1] ) + (v3[2] * w1[2] ) ) / (pow(w1[0],2) + pow(w1[1],2) + pow(w1[2],2)) ) )* w1[i] )  -  ( ( ( ( (v3[0] * w2[0]) + (v3[1] * w2[1] ) + (v3[2] * w2[2] ) ) / (pow(w2[0],2) + pow(w2[1],2) + pow(w2[2],2)) ) )* w1[i] ) );

                }

                for ( i = 0; i < dimensao; i++ ) {

                    w3[i] = w3[i] / ( sqrt( (pow(w3[0],2)+ pow(w3[1],2) + pow (w3[2],2)) ));

                }


                for ( i = 0; i < dimensao; i++ ){

                    printf("w1 na posicao %d = %f\n",i, w1[i]);

                }

                for ( i = 0; i < dimensao; i++ ){

                    printf("w2 na posicao %d = %f\n",i, w2[i]);

                }

                for ( i = 0; i < dimensao; i++ ){

                    printf("w3 na posicao %d = %f\n",i, w3[i]);

                }



            break;


        }

    break;

    default:
        break;
    }

    return 0;
}

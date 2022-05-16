#include "atributo.h"
#include<stdlib.h>


T_ATRIBUTO* novo_atributo(int quantidade,int* elementos_discretos){
    T_ATRIBUTO* atributo = (T_ATRIBUTO*) malloc(sizeof(T_ATRIBUTO));
    atributo->elementos_discretos = (int*)malloc(sizeof(int)*quantidade);
    for (int i = 0; i < quantidade; i++)
        atributo->elementos_discretos[i] = elementos_discretos[i];
    return atributo;
}

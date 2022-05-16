#include<stdio.h>
#include "arvore.h"
#include <stdlib.h>
#include "./estruturas_aux/atributo.h"

#define QUANTIDADE_DE_PARAMETRO 2
#define QUANTIDADE_MAX_DE_VALORES_DISCRETOS_DOS_PARAMETROS 12


// aqui é passado os parametros em relação aos atributos
T_ATRIBUTO** inicializacao_atributos(){
    T_ATRIBUTO** atributos = (T_ATRIBUTO**) malloc(sizeof(T_ATRIBUTO)*QUANTIDADE_DE_PARAMETRO);
    int vetor[] = {2,4,6,8,10,12,14,16,18,20,22};
    atributos[0] = novo_atributo(12,vetor);
    int vetor1[] = {0,1,2,3,4,5,6};
    atributos[1] = novo_atributo(12,vetor1);
    return atributos;
}


using namespace SpaceTree;
int main(){
    T_ATRIBUTO** atributos = inicializacao_atributos();
    
    
    
}
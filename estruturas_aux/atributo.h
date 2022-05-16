typedef struct caracteristica_do_atributo{
    int quantidade_de_elementos_discreto;
    
    int* elementos_discretos;
}T_ATRIBUTO;


T_ATRIBUTO* novo_atributo(int quantidade,int* elementos_discretos);
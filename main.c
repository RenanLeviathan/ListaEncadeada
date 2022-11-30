/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Renan Duarte
 *
 * Created on 30 de Novembro de 2022, 13:05
 */
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#define SUCESSO 0

/*
 * 
 */
int main(int argc, char** argv) {
    Lista *l = NULL;
    l = inserir(l, 1);
    l = inserir(l, 2);
    l = inserir(l, 4);
    printf("\n");
    exibir(l);
    excluir(l, 2);
    printf("\nApós exclusão");
    exibir(l);
    l = inverter(l);
    printf("\nInversão lista");
    exibir(l);
    free(l);
    return (SUCESSO);
}


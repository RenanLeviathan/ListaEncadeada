#ifndef LISTA_H
#define LISTA_H

#include <stdio.h>
#include <stdlib.h>

typedef struct lista Lista;
struct lista{
    int info;
    Lista *prox;
};

Lista* inserir(Lista *l, int info){
    if(l==NULL){
        l=(Lista*)malloc(sizeof(Lista));
        l->info=info;
        l->prox=NULL;
    }else l->prox = inserir(l->prox, info);
    return l;
}

Lista* excluir(Lista *l, int info){
    if(l!=NULL){
        if(info == l->info){
            Lista *temp;
            temp = l->prox;
            free(l);
            l = temp;
        }else l->prox = excluir(l->prox, info);
    }else l->prox = excluir(l->prox, info);
    return l;
}

Lista* inverter(Lista *l){
    if(l->prox != NULL){
        Lista *temp;
        temp = inverter(l->prox);
        return inserir(temp,l->info);
    }
    return l;
}

void exibir(Lista *l){
    if(l!=NULL){
        printf("%d ", l->info);
        exibir(l->prox);
    }
}
#endif	// LISTA_H


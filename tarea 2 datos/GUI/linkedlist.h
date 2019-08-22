
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
struct nodo{
       int nro;        // en este caso es un numero entero
       struct nodo *sgte;
};
 
typedef struct nodo *Tlista;
 

int insertarInicio(Tlista &lista, int valor);
int insert(int valor);

#endif



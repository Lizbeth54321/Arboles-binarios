#include<iostream>
using namespace std;
struct Nodo{
	int valor;
	Nodo *izq,*der;
};
Nodo *raiz=NULL;

int main(int argc, char ** argv){
	Nodo *aux=raiz;
	raiz=new Nodo();
	raiz->valor=11;
	raiz->izq=new Nodo();
	raiz->der=new Nodo();
	aux=raiz->izq;
	aux->valor=10;
	aux->izq=new Nodo();
	aux->der=new Nodo();
	aux=aux->izq;
	aux->valor=5;
	aux->izq=NULL;
	aux->der=NULL;
	aux=raiz->izq;
	aux=aux->der;
	aux->valor=9;
	aux->izq=NULL;
	aux->der=NULL;
	aux=raiz->der;
	aux->valor=8;
	aux->izq=NULL;
	aux->der=new Nodo();
	aux=aux->der;
	aux->valor=1;
	aux->izq=NULL;
	aux->der=NULL;
	
	cout<<raiz->valor<<endl;
	cout<<raiz->izq->valor<<" "<<raiz->der->valor<<endl;
	cout<<raiz->izq->izq->valor<<" "<<raiz->izq->der->valor<<" "<<raiz->der->der->valor;	                                                                                                                                                                                                                                                                                                                                                                         
}



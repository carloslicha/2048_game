/*
 * Tablero.cpp
 *
 *  Created on: 26 de nov. de 2015
 *      Author: carlos
 */

#include "Tablero.h"
#include <cstdlib>
#include <iostream>



void inicializar(matriz &c,int TAM){
	int i;
	int j;
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			c[i][j].ocu=false;
		}
	}

}


void insertar_numero(matriz &c,int TAM,int &fila,int &col){
	int valor;
	bool insertado=false;
	srand(time(NULL));
	valor=rand()%4;//Error, creo que no genera entre 2 o 4;

	while(!insertado){
		fila=rand()%TAM;
		col=rand()%TAM;
		if(c[fila][col].ocu==false){

			c[fila][col].n=valor;
			c[fila][col].ocu=false;
			insertado=true;
		}
	}

}


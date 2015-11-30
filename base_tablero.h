/*
 * Tablero.h
 *
 *  Created on: 26 de nov. de 2015
 *      Author: carlos
 */

#ifndef TABLERO_H_
#define TABLERO_H_
const int TAM=8;
struct casilla{
	int n;
	bool ocu;
};


typedef casilla matriz[TAM][TAM];

//inicializa la matriz poniendo cada posicion a vacio ocu=false
void inicializar(matriz &c,int TAM);

//Genera un número aleatorio en una casilla no ocupada , pidiendo la matriz del tablero y el tamaño máximo de esta
//además de la fila y la columna en la que ha sido insertada para después poder mostrarla
void insertar_numero(matriz &c,int TAM,int &fila,int &col);



#endif /* TABLERO_H_ */

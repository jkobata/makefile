#include <iostream>
#include "carro.h"
#include <string>
using namespace std;
Carro::Carro(string a , int b , float c ,float d){
Modelo = a;
ano = b;
MAX = c;
KMporL = d;
QtdeCombustivel = 0;
DistanciaPercorrida = 0;
}

float Carro::getQtdeCombustivel(){
	return QtdeCombustivel;
}
float Carro::getDistanciaPercorrida(){
	return DistanciaPercorrida;
}
float Carro::getAutonomia(){
	Autonomia = (QtdeCombustivel - 1)*KMporL;
	return Autonomia;

}
void Carro::mover(float i){
	if(QtdeCombustivel > 1){
		DistanciaPercorrida = DistanciaPercorrida + i;
		 QtdeCombustivel = QtdeCombustivel - (i/KMporL);
}
	if(QtdeCombustivel <= 1){
		cout<< "Combustivel insuficiente para se locomover" << endl;
	}
}
void Carro::abastecer(float i){
	if(QtdeCombustivel <= MAX){
		QtdeCombustivel = QtdeCombustivel + i;
	}

}

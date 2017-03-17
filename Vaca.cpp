#include "Vacas.h"
#include <iostream>
using namespace std;

Vaca::Vaca()
{
}

Vaca::~Vaca()
{
}

void Vaca::setNombre(string n){
	nombre = n;
	
}
string Vaca::getNombre(){
	return nombre;
}
void Vaca::setRaza(string n){
	raza = n;
}
string Vaca::getRaza(){
	return raza;
}
void Vaca::setPeso(float n){
	peso = n;
}
float Vaca::getPeso(){
	return peso;
}
void Vaca::setLitros(float n){
	litros=n;
}
float Vaca::getLitros(){
	return litros;
}

#ifndef VACAS_H
#define VACAS_H
#include <iostream>
using namespace std;

class Vaca
{
	public:
		void setNombre(string n);
		string getNombre();
		void setRaza(string n);
		string getRaza();
		void setPeso(float n);
		float getPeso();
		void setLitros(float n);
		float getLitros();
		Vaca();
		~Vaca();
	private:
		string nombre, raza;
		float peso, litros;
		
};

#endif

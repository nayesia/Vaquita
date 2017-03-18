#include <iostream>
#include <conio.h>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<ctype.h>
#include "Vacas.h"
#include "Ancho.h"

using namespace std;

	char opc[1000]; //validacion de menu
	int cont=0;
	Vaca vaquita[ANCHO];
	
int main(int argc, char** argv ) {
	string nomb,nomb1;
	char nom[11], nom1[11];		
	int tam;
	string raza, raza1;
	char raz[20], raz1[20];
	int tama;
	string n; //nombre de la vaca
	string r; //Raza de la vaca
	int resp=0;
	system("cls");
	do{
		system("cls");
		cout<<"\t ## Bienvenidos al programa donde puedes \n";
		cout<<"\t ingresar datos de vacas y las misma se ordenaran ## \n";
		cout<<"\t 1. Ingrese datos de las vacas. \n";
		cout<<"\t 2. Lista ordenada de vacas. \n";
		cout<<"\t 3. Salir\n";
		cout<<"\t Ingrese una opcion: ";
		cin>>opc;
		int O=0;
		if(opc[1]!='\0'){
			opc[0]=0;
	    }
	    for(int t=0;t<1000;t++){
	    	if(opc[t]!='\0'){
	    		O++;
	    	}
		}
		if(O>=2){
			opc[0]=0;
		}
		switch (opc[0]){
			case'1':
				system("cls");
				int la,e,o;
				do{
					do{
				        e=0;
					    do{
						 cout << "Ingrese el nombre de la vaca: ";
					     cin >> n;
					     la=n.size();
					        if(la>10){
					    	  system("cls");
					    	  cout<<"El limete de letras a ingresar es de 14"<<endl;
					    	  system("pause");
						   } 
					    }while(la>10);
					    la=0;
					    if(cont>0){
						   do{
							   if(n==vaquita[la].getNombre()){
								  e=1;
								  system("pause");
							    }
							    la++;
						    }while(la<cont);
					    }
					 if(isalpha(n[0]));
				        else{
				    	 system("cls");
						 cout<<"Error el dato no puede comenzar con numeros"<<endl;
						 e=1;
						 system("pause");	
					    }
				    }while(e==1);
					vaquita[cont].setNombre(n);
					int h,i,j;
					do{
						i=0;
						do{
							cout<<"Ingrese la raza: \n";
					        cin>>r;
							h=r.size();
							if(h>10){
								system("cls");
								cout<<"ERROR el dato ingresado"<<endl;
								cout<<"es demasiado extenso"<<endl;
								cout<<"MAXIMO 10 LETRAS A INGRESAR!!!!"<<endl;
								system("pause");
							}
						}while(h>10);
						h=0;
						if(cont>0){
							do{
								if(r== vaquita[h].getRaza()){
									cout<<"Ya existe el dato ingresado"<<endl;
									cout<<"Por favor ingrese otro dato!!!"<<endl;
									i=1;
									system("pause");
								}
								h++;
							}while(h<cont);
						}
						if(isalpha(r[0]));
						else{
							cout<<"ERROR EL DATO A INGRESAR DEBE COMENZAR CON LETRAS!! "<<endl;
							i=1;
						}
					}while(i==1);
					vaquita[cont].setRaza(r);
					float numero;
					int contar = 0;
					bool continuar;
					do {
						continuar = false;
						cin.clear();
						
						if(contar >0 ) cin.ignore(1024, '\n');
						
						cout << "Introduce el peso: ";
						cin >> numero;
						vaquita[cont].setPeso(numero);
						contar++;
						if( numero<0 || cin.fail() && cin.rdstate()){
							cout << "DATO NO VALIDO...!" << endl;
							continuar = true;
						}
					} while (continuar);
					
					float numero1;
					int contan = 0;
					bool continuar1;
					do {
						continuar1 = false;
						cin.clear();
						if(contan > 0) cin.ignore(1024, '\n');
						cout << "Ingrese los litros de leche:  ";
						cin >> numero1;
						vaquita[cont].setLitros(numero1);
						contan++;
						if(numero1<0 ||cin.fail() && cin.rdstate()){
							cout << "ERROR INGRESE UN DATO VALIDO..." << endl;
                    	    continuar1 = true;
	                    }
    	            }while (continuar1);
					
					cont++;
					do{
						system("cls");
						cout<<"desea ingresar otra vaca?"<<endl;
						cout<<"1.Si"<<endl<<"2.No"<<endl<<"R:";
						cin>>resp;
					}while(resp!=1  && resp!=2);
				}while(resp!=2);
				system("pause");	  
			break;
		case '3':
	    	return 0;
	    break;
	    
	    default:
			system("cls");
			cout<<"Error opcion no valida \n";
			system("pause");
		break;
		
		}   	  
	}while(opc[0]!='3');
    system ("pause");
    return 0;		
   }
    	   
   




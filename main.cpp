#include <stdlib.h>
#include <string.h>
#include <iomanip>
#include <ctype.h>
#include "Vacas.h"
#include "Ancho.h"

using namespace std;

	char opc[1000]; //validacion de menu
	int cont=0;
	Vaca vaquita[ANCHO];
	Vaca temp;
void Ordenar_burbuja(){
	for(int i=0; i<cont ; i++){
		for(int k=cont-1 ; k>0; k--){
			if (vaquita[k].getLitros()<vaquita[k-1].getLitros()){
				temp= vaquita[k];
				vaquita[k]= vaquita[k-1];
				vaquita[k-1]=temp;
			}	
		}	
	}
}
void Muestra_Vector(){
	for(int t=0; t<cont; t++ ){
		cout<<" "<<vaquita[t].getLitros()<<" "<<vaquita[t].getNombre()<<endl;
	}
}
	
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
	   cout<<"\n\t   Bienvenidos al programa!!! \n\n";
	   cout<<"\t|------------------------------|\n\n";
	   cout<<"\t| 1. Ingrese datos de las vacas|\n\n";
	   cout<<"\t|------------------------------|\n\n";
	   cout<<"\t| 2. Ordenar vacas             |\n\n";
	   cout<<"\t|------------------------------|\n\n";
	   cout<<"\t| 3. Salir                     |\n\n";
	   cout<<"\t|------------------------------|\n\n";
	   
	   cout<<"  Ingrese una opcion: \n\n ";
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
						 cout << "\n Ingrese el nombre de la vaca: \n\n";
					     cin >> n;
					     la=n.size();
					        if(la>10){
					    	  system("cls");
					    	  cout<<"\n El limite de letras a ingresar es de 14\n\n"<<endl;
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
						 cout<<"\n ERROR!! EL DATO A INGRESAR NO DEBE COMENZAR CON NUMEROS!!\n\n"<<endl;
						 e=1;
						 system("pause");	
					    }
				    }while(e==1);
					vaquita[cont].setNombre(n);
					int h,i,j;
					do{
						i=0;
						do{
							cout<<"\n Ingrese la raza: \n\n";
					        cin>>r;
							h=r.size();
							if(h>10){
								system("cls");
								cout<<"\n ERROR! El dato ingresado"<<endl;
								cout<<"es demasiado extenso"<<endl;
								cout<<"MAXIMO 10 LETRAS A INGRESAR!!!!\n\n"<<endl;
								system("pause");
							}
						}while(h>10);
						h=0;
						if(isalpha(r[0]));
						else{
							cout<<"\n ERROR!! EL DATO A INGRESAR DEBE COMENZAR CON LETRAS!! \n\n"<<endl;
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
						
						cout << "\n Introduce el peso: \n\n";
						cin >> numero;
						vaquita[cont].setPeso(numero);
						contar++;
						if( numero<0 || cin.fail() && cin.rdstate()){
							cout << "\n DATO NO VALIDO...!\n\n" << endl;
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
						cout << "\n Ingrese los litros de leche: \n\n";
						cin >> numero1;
						vaquita[cont].setLitros(numero1);
						contan++;
						if(numero1<0 ||cin.fail() && cin.rdstate()){
							cout << "\nERROR INGRESE UN DATO VALIDO...\n" << endl;
                    	    continuar1 = true;
	                    }
    	            }while (continuar1);
					
					cont++;
					do{
						system("cls");
						cout<<"\n Desea ingresar otra vaca?\n"<<endl;
						cout<<"\n1.Si"<<endl<<"\n2.No"<<endl<<"\nR:";
						cin>>resp;
					}while(resp!=1  && resp!=2);
				}while(resp!=2);
				system("pause");	  
			break;
		case '2':
	   	 	//desde aqui modifique
		    	system("cls");
		    	cout<<"\n\t Menu para ordenar \n\n";
		    	cout<<"\t|----------------|\n\n";
	    		cout<<"\t| 1. Por litros  |\n\n";
	    		cout<<"\t| 2. Por peso    |\n\n";
	    		cout<<"\t| 3. Por nombre  |\n\n";
	    		cout<<"\t| 4. Por raza    |\n\n";
	    		cout<<"\t|----------------|\n\n";
	    		cout<<"\n Ingrese una opcion: \n\n";
	    		cin>>opc;
	    		switch(opc[0]){
	    			case '1':
						for(int i=0; i<cont ; i++){
							for(int k=cont-1 ; k>0; k--){
								if (vaquita[k].getLitros()<vaquita[k-1].getLitros()){
									temp= vaquita[k];
									vaquita[k]= vaquita[k-1];
									vaquita[k-1]=temp;
								}
							}	
						}
	    				//Ordenar_burbuja();   	
						cout<<"\n Lista ordenada:\n\n";
						cout<<setw(10)<<left<<"Nombre"<<setw(10)<<left<<"Raza"<<setw(10)<<left<<"Peso"<<setw(10)<<left<<"Litros de Leche"<<endl<<endl;
						for (int i =0; i<cont; i++){
							cout<<setw(10)<<left<<vaquita[i].getNombre()<<setw(10)<<left<<vaquita[i].getRaza()<<setw(10)<<left<<vaquita[i].getPeso()<<setw(10)<<left<<vaquita[i].getLitros()<<endl;
						}
						cout<<endl;
						system("pause");
					break;
				
					case '2':
						for(int i=0; i<cont ; i++){
							for(int k=cont-1 ; k>0; k--){
								if (vaquita[k].getPeso()<vaquita[k-1].getPeso()){
									temp= vaquita[k];
									vaquita[k]= vaquita[k-1];
									vaquita[k-1]=temp;
								}
							}	
						}
	    				//	Ordenar_burbuja();   	
						cout<<"\n Lista ordenada:\n\n";
						cout<<setw(10)<<left<<"Nombre"<<setw(10)<<left<<"Raza"<<setw(10)<<left<<"Peso"<<setw(10)<<left<<"Litros de Leche"<<endl<<endl;
						for (int i =0; i<cont; i++){
							cout<<setw(10)<<left<<vaquita[i].getNombre()<<setw(10)<<left<<vaquita[i].getRaza()<<setw(10)<<left<<vaquita[i].getPeso()<<setw(10)<<left<<vaquita[i].getLitros()<<endl;
						}
						cout<<endl;
						system("pause");
					break;
					
	    			case '3':
						for(int x=0; x<cont; x++ ){
							for(int y=0; y<=cont-2; y++){
								nomb=vaquita[y].getNombre();
								nomb1=vaquita[y+1].getNombre();
								tam=nomb.size();
								for (int a=0; a<tam; a++){
									nom[a]=nomb[a];
								}
								tam=nomb1.size();
								for (int b=0; b<tam; b++){
									nom1[b]=nomb1[b];
								}
								if(strcmp (nom , nom1) > 0) {
									for(int i=0; i<cont ; i++){
										for(int k=cont-1 ; k>0; k--){
											if (vaquita[k].getNombre()<vaquita[k-1].getNombre()){
												temp= vaquita[k];
												vaquita[k]= vaquita[k-1];
												vaquita[k-1]=temp;
											}
										}	
									}
								}
							}							
						}
					
					cout<<"\n Lista ordenada:\n\n";
					cout<<setw(10)<<left<<"Nombre"<<setw(10)<<left<<"Raza"<<setw(10)<<left<<"Peso"<<setw(10)<<left<<"Litros de Leche"<<endl<<endl;
					for (int i =0; i<cont; i++){
						cout<<setw(10)<<left<<vaquita[i].getNombre()<<setw(10)<<left<<vaquita[i].getRaza()<<setw(10)<<left<<vaquita[i].getPeso()<<setw(10)<<left<<vaquita[i].getLitros()<<endl;
					}
					cout<<endl;
				    break;
	    		    system("pause");
				case'4':
					for(int x=0; x<cont; x++ ){
							for(int y=0; y<=cont-2; y++){
								raza=vaquita[y].getRaza();
								raza1=vaquita[y+1].getRaza();
								tama=raza.size();
								for (int a=0; a<tama; a++){
									raz[a]=raza[a];
								}
								tama=raza1.size();
								for (int b=0; b<tama; b++){
									raz1[b]=raza1[b];
								}
								if(strcmp (raz , raz1) > 0) {
									for(int i=0; i<cont ; i++){
										for(int k=cont-1 ; k>0; k--){
											if (vaquita[k].getRaza()<vaquita[k-1].getRaza()){
												temp= vaquita[k];
												vaquita[k]= vaquita[k-1];
												vaquita[k-1]=temp;
											}
										}	
									}
								}
							}							
						}
					
					cout<<"\n Lista ordenada:\n\n";
					cout<<setw(10)<<left<<"Nombre"<<setw(10)<<left<<"Raza"<<setw(10)<<left<<"Peso"<<setw(10)<<left<<"Litros de Leche"<<endl<<endl;
					for (int i =0; i<cont; i++){
						cout<<setw(10)<<left<<vaquita[i].getNombre()<<setw(10)<<left<<vaquita[i].getRaza()<<setw(10)<<left<<vaquita[i].getPeso()<<setw(10)<<left<<vaquita[i].getLitros()<<endl;
					}
					cout<<endl;
					system("pause");	
	    		break;
			}
	    break;
		case '3':
	    	return 0;
	    break;
	    
	    default:
			system("cls");
			cout<<"\n\n ERROR!! Opcion no valida \n";
			system("pause");
		break;
		
		}   	  
	}while(opc[0]!='3');
    system ("pause");
    return 0;		
   }
    	   

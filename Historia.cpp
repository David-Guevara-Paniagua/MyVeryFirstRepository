//Proyecto Final de Programacion

#include<iostream>
using namespace std;

int main(){
	char secuenciaDeDecisiones[7];
	
	//Menu Principal
	cout<<"Eres un detective que tiene que resolver un caso. Aun eres un amateur. De este caso depende tu carrera."<<endl;
	cout<<"En la zona 6 se escucharon gritos de terror a media noche."<<endl:
	cout<<"Llegas a la casa de donde provienieron las cacofonias"<<endl;
	do{
		cout<<"Que haces?"<<endl;
		cout<<"a) Inspeccionar el suelo."<<endl;
		cout<<"b) Inspeccionar el estudio"<<endl;
		cout<<"e) Salir"<<endl;
		cin>>secuenciaDeDecisiones[0];
		switch (secuenciaDeDecisiones[0]){
			case 'a':
				cout<<"Encuentras sangre bajo una alfombra"<<endl;
			break;
			case 'b':
				cout<<"Un estudio viejo con muchas telaranias. En la mesa hay un par de libros y una pecera vacia"<<endl;
			break;
			case 'e':
				salir=true;
			break;
			default:
				cout<<"Elige una opcion valida"<<endl;
				opcionValida=false;
		}
	}while(false);
	
	
	
	return 0;
}

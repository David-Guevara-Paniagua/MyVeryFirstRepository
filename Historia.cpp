//Proyecto Final de Programacion

#include<iostream>
using namespace std;

int main(){
	char secuenciaDeDecisiones[7];
	bool opcionValida=false, salir=false;
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
	}while(!opcionValida);
	
	//Segundo menu
	do{
		cout<<"Que haces ahora?"<<endl;
		cout<<"a) Tomar una muestra"<<endl;
		cout<<"b) Inspeccionar el patio trasero"<<endl;
		cout<<"e) Salir"<<endl;
		switch (secuenciaDeDecisiones[1]){
			case 'a':
				cout<<"Tomas una muestra de la sangre en el piso y la guardas"<<endl;
			break;
			case 'b':
				cout<<"Encuentras un jardin bien cuidado, pero nada que destacar"<<endl;
			break;
			case 'e':
				salir=true;
			break;
			default:
				cout<<"Elige una opcion valida"<<endl;
				opcionValida=false;
		}
	}while(!salir && !opcionValida);
	
	//Tercer menu
	do{
		cout<<"Que haces ahora?"<<endl;
		cout<<"a) Analizar la muestra"<<endl;
		cout<<"b) Inspeccionar el patio frontal"<<endl;
		cout<<"e) Salir"<<endl;
		switch (secuenciaDeDecisiones[1]){
			case 'a':
				cout<<"La muestra pertenece a Janea Doe, desaparecida"<<endl;
			break;
			case 'b':
				cout<<"Encuentras un jardin bien cuidado, pero nada que destacar"<<endl;
			break;
			case 'e':
				salir=true;
			break;
			default:
				cout<<"Elige una opcion valida"<<endl;
				opcionValida=false;
		}
	}while(!salir && !opcionValida);
	
	//Cuarto menu
	do{
		cout<<"Que haces ahora?"<<endl;
		cout<<"a) Descansar"<<endl;
		cout<<"b) Subir el codigo del Aaron por cuarta vez"<<endl;
		cout<<"e) Salir"<<endl;
		switch (secuenciaDeDecisiones[1]){
			case 'a':
				cout<<"Recargas toda tu energia"<<endl;
			break;
			case 'b':
				cout<<"Subes el codigo. Una labor menos."<<endl;
			break;
			case 'e':
				salir=true;
			break;
			default:
				cout<<"Elige una opcion valida"<<endl;
				opcionValida=false;
		}
	}while(!salir && !opcionValida);
	
	//Quinto menu
	do{
		cout<<"Que haces ahora?"<<endl;
		cout<<"a) Seguir el rastro de la desaparecida"<<endl;
		cout<<"b) Jugar football americano"<<endl;
		cout<<"e) Salir"<<endl;
		switch (secuenciaDeDecisiones[1]){
			case 'a':
				cout<<"Descubres que recientemente habia tenido trato con una persona llamada Michael Fields"<<endl;
			break;
			case 'b':
				cout<<"Descubres que tienes grandes habilidades en este juego"<<endl;
			break;
			case 'e':
				salir=true;
			break;
			default:
				cout<<"Elige una opcion valida"<<endl;
				opcionValida=false;
		}
	}while(!salir && !opcionValida);
	
	return 0;
}

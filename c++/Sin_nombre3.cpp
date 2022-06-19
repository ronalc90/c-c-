#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;
//Use una estructura para llevar el registro de los nombres y la posición de los animales (los nombres son una T para la tortuga y una H para la liebre; los números de las posiciones sondel 1 al 70). 
struct registro{
	char nombre;
	int posicion = 0;
};

int main(){
	srand(time(NULL));
	int aleatorio = rand()% 10 + 1;

	struct registro tortuga;
	tortuga.nombre = 'T';

	struct registro liebre;
	liebre.nombre = 'H';
	int cont=0;
	int i = 0;
	int j = 0;
	while(tortuga.posicion <= 70 || liebre.posicion  <= 70){ 
	cont ++;
	if (cont<70){
	sleep(1);
	}
			aleatorio = rand()% 10 + 1;
		if(aleatorio == 1 || aleatorio == 2 || aleatorio == 3){//3 posiciones a la derecha
			tortuga.posicion += 3;
			cout<<"Tortuga "<< "Posicion actual "<< tortuga.posicion<< endl;
			i += 3;
		}else if(aleatorio == 4 || aleatorio == 5 || aleatorio == 6){//6 posiciones a la izquierda
			tortuga.posicion -= 6;
			i -= 6;
						cout<<"Tortuga "<< "Posicion actual "<< tortuga.posicion<< endl;
		}else if(aleatorio == 7 || aleatorio == 8 || aleatorio == 9){//1 posicion a la derecha
			tortuga.posicion += 1;
						cout<<"Tortuga "<< "Posicion actual "<< tortuga.posicion<< endl;
			i += 1;
		}else if(aleatorio == 10){//1 posicion a la derecha
			tortuga.posicion += 1;
			cout<<"Tortuga "<< "Posicion actual "<< tortuga.posicion<< endl;
			i += 1;
		}
		aleatorio = rand()% 10 + 1;
		if(aleatorio == 1 || aleatorio == 2){//3 posiciones a la derecha

			liebre.posicion += 9;
			cout<<"Liebre "<< "Posicion actual "<< liebre.posicion<< endl;
			j += 9;
		}else if(aleatorio == 3 || aleatorio == 4){//6 posiciones a la izquierda
			liebre.posicion -= 12;
			j -= 12;
			cout<<"Liebre "<< "Posicion actual "<< liebre.posicion<< endl;
		}else if(aleatorio == 5 || aleatorio == 6 || aleatorio == 7){//1 posicion a la derecha
			liebre.posicion += 1;
			j += 1;
			cout<<"Liebre "<< "Posicion actual "<< liebre.posicion<< endl;
		}else if(aleatorio == 8 || aleatorio == 9){//1 posicion a la derecha
			liebre.posicion += 2;
			j += 2;
			cout<<"Liebre "<< "Posicion actual "<< liebre.posicion<< endl;
		}else if(aleatorio == 10){//1 posicion a la derecha
			liebre.posicion -= 2;
			j -= 2;
			cout<<"Liebre "<< "Posicion actual "<< liebre.posicion<< endl;
		}
		if(tortuga.posicion < 1){
			tortuga.posicion = 1;
		}
		if(liebre.posicion < 1){
			liebre.posicion = 1;
		}
		//Print en la pantalla los nombres de los animales y sus respectivas posiciones.
		
		if(tortuga.posicion == 70 && liebre.posicion == 70){
			break;
		}
		
		if(tortuga.posicion >= 70){
			break;
		}
		if(liebre.posicion >= 70){
			break;
		}
	}

	if(tortuga.posicion == liebre.posicion){
		cout << "Empate." << endl;
	}else if(tortuga.posicion > liebre.posicion){
		cout << "Gana tortuga." << endl;
	}else{
		cout << "Gana liebre." << endl;
	}


	return 0;
}

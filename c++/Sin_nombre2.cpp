#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;
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
	

	while(tortuga.posicion <= 70 || liebre.posicion  <= 70){ 
			aleatorio = rand()% 10 + 1;
		if(aleatorio == 1 || aleatorio == 2 || aleatorio == 3){//3 posiciones a la derecha
			tortuga.posicion += 3;
			cout<<"Tortuga "<< "Posicion actual "<< tortuga.posicion<< endl;

		}else if(aleatorio == 4 || aleatorio == 5 || aleatorio == 6){//6 posiciones a la izquierda
			tortuga.posicion -= 6;

						cout<<"Tortuga "<< "Posicion actual "<< tortuga.posicion<< endl;
		}else if(aleatorio == 7 || aleatorio == 8 || aleatorio == 9){//1 posicion a la derecha
			tortuga.posicion += 1;
						cout<<"Tortuga "<< "Posicion actual "<< tortuga.posicion<< endl;

		}else if(aleatorio == 10){//1 posicion a la derecha
			tortuga.posicion += 1;
			cout<<"Tortuga "<< "Posicion actual "<< tortuga.posicion<< endl;

		}
		aleatorio = rand()% 10 + 1;
		if(aleatorio == 1 || aleatorio == 2){//3 posiciones a la derecha

			liebre.posicion += 9;
			cout<<"Liebre "<< "Posicion actual "<< liebre.posicion<< endl;

		}else if(aleatorio == 3 || aleatorio == 4){//6 posiciones a la izquierda
			liebre.posicion -= 12;

			cout<<"Liebre "<< "Posicion actual "<< liebre.posicion<< endl;
		}else if(aleatorio == 5 || aleatorio == 6 || aleatorio == 7){//1 posicion a la derecha
			liebre.posicion += 1;

			cout<<"Liebre "<< "Posicion actual "<< liebre.posicion<< endl;
		}else if(aleatorio == 8 || aleatorio == 9){//1 posicion a la derecha
			liebre.posicion += 2;

			cout<<"Liebre "<< "Posicion actual "<< liebre.posicion<< endl;
		}else if(aleatorio == 10){//1 posicion a la derecha
			liebre.posicion -= 2;

			cout<<"Liebre "<< "Posicion actual "<< liebre.posicion<< endl;
		}
		if(tortuga.posicion < 1){
			tortuga.posicion = 1;
		}
		if(liebre.posicion < 1){
			liebre.posicion = 1;
		}
		//Print en la pantalla los nombres de los animales y sus respectivas posiciones.
		sleep(1);
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

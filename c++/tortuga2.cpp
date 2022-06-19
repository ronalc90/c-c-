#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
using namespace std;

struct posicion {
	char nombre [10];
	int posicion;
};

int main(){
	srand(time(NULL));
	int aleatorio = rand()% 10 + 1;
	
	int posicion = 1;
	cout<<"Start: "<<endl;
	while (posicion <= 70){
		//sleep(1);

		if (aleatorio == 1 || aleatorio == 2 || aleatorio == 3 || aleatorio == 4 || aleatorio == 5){
			posicion += 3;
			cout<<"Tortuga paso pesado rapido 3 posiciones a la derecha. "<< "Posicion actual "<< posicion<< endl;
		}
		if (aleatorio == 6 || aleatorio == 7){
			posicion -= 6;
			cout<<"Tortuga resbalón 6 posiciones a la izquierda. "<< "Posicion actual "<< posicion<< endl;
		}
		if (aleatorio == 8 || aleatorio == 9 || aleatorio == 10){
			posicion += 1;
			cout<<"Tortuga paso pesado lento 1 posición a la derecha. "<< "Posicion actual "<< posicion<< endl;
		}
		aleatorio = rand()% 10 + 1;
		if (aleatorio == 1 || aleatorio == 2 || aleatorio == 3 || aleatorio == 4 || aleatorio == 5){
			posicion += 9;
			cout<<"Liebre gran salto 9 posiciones a la derecha. "<< "Posicion actual "<< posicion<< endl;
		}
		if (aleatorio == 6 || aleatorio == 7 || aleatorio == 8){
			posicion -= 12;
			cout<<"Liebre gran resbalón 12 posiciones a la izquierda. "<< "Posicion actual "<< posicion<< endl;
		}
		if (aleatorio == 9){
			posicion += 2;
			cout<<"Liebre pequeño salto 2 posiciones a la derecha. "<< "Posicion actual "<< posicion<< endl;
		}
		if (aleatorio == 10){
			posicion -= 2;
			cout<<"Liebre pequeño resbalón 2 posiciones a la izquierda. "<< "Posicion actual "<< posicion<< endl;
		}
		aleatorio = rand()% 10 + 1;
		
		if(posicion<=1){
			posicion = 1;
		}
	}
	cout<<"Finish"<<endl;
	return 0;
}

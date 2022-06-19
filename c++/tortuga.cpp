#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct competidor{
	char nombre;
	int posicion;
};

int main(){
	
	competidor tortuga;
	competidor liebre;
	
	tortuga.nombre = 'T';
	liebre.nombre = 'L';
	
	tortuga.posicion = 1;
	liebre.posicion = 1;
	
	srand(time(0));
	
	int x;
	
	cout << "Start: ";
	
	for(int i = 1; i < 70; i++){
		x = 1 + rand() % 10;
		
		if(x < 6){
			tortuga.posicion += 3;
			cout << tortuga.nombre << " ";
		}
		
		if(x > 6 && x < 8){
			tortuga.posicion -= 6;
			cout << tortuga.nombre << " ";
		}
		
		if(x > 8 && x < 10){
			tortuga.posicion += 1;
			cout << tortuga.nombre << " ";
		}
		
		if(x >= 10 && x < 20){
			cout << tortuga.nombre << " ";
		}
		
		if(x >= 20 && x < 26){
			tortuga.posicion += 9;
			cout << tortuga.nombre << " ";
		}
		
		if(x >= 26 && x < 28){
			tortuga.posicion -= 12;
			cout << tortuga.nombre << " ";
		}
		
		if(x >= 28 && x < 30){
			tortuga.posicion += 1;
			cout << tortuga.nombre << " ";
		}
		
		if(x >= 30 && x < 40){
			cout << tortuga.nombre << " ";
		}
		
		if(x >= 40 && x < 45){
			liebre.posicion += 12;
			cout << tortuga.nombre << " ";
		}
		
		if(x >= 45 && x < 47){
			liebre.posicion -= 2;
			cout << tortuga.nombre << " ";
		}
		
		if(x >= 47 && x < 49){
			liebre.posicion += 1;
			cout << tortuga.nombre << " ";
		}
		
		if(x >= 49 && x < 59){
			cout << tortuga.nombre << " ";
		}
		
		if(x >= 59 && x < 64){
			liebre.posicion += 5;
			cout << tortuga.nombre << " ";
		}
		
		if(x >= 64 && x < 66){
			liebre.posicion -= 3;
			cout << tortuga.nombre << " ";
		}
		
		if(x >= 66 && x < 68){
			liebre.posicion += 1;
			cout << tortuga.nombre << " ";
		}
		
		if(x >= 68 && x < 78){
			cout << tortuga.nombre << " ";
		}
		
		if(x >= 78 && x < 81){
			liebre.posicion -= 6;
			cout << tortuga.nombre << " ";
		}
		
		if(x >= 81 && x < 83){
			liebre.posicion += 1;
			cout << tortuga.nombre << " ";
		}
		
		if(x >= 83 && x < 93){
			cout << tortuga.nombre << " ";
		}
		
		if(x >= 93 && x < 96){
			liebre.posicion += 1;
			cout << tortuga.nombre << " ";
		}
		
		if(x >= 96 && x < 98){
			liebre.posicion -= 2;
			cout << tortuga.nombre << " ";
		}
		
		if(x >= 98 && x < 100){
			cout << tortuga.nombre << " ";
		}
		
		if(tortuga.posicion < 1){
			tortuga.posicion = 1;
		}
		
		if(liebre.posicion < 1){
			liebre.posicion = 1;
		}
		
		if(liebre.posicion == 70){
			break;
		}
		
		if(tortuga.posicion == 70){
			break;
		}
	}
	
	if(tortuga.posicion >= liebre.posicion){
		cout << "\nLa tortuga gana";
	}
	else{
		cout << "\nLa liebre gana";
	}
	
	cout << "\n\nLa posicion de la tortuga es: " << tortuga.posicion;
	cout << "\nLa posicion de la liebre es: " << liebre.posicion;
	
	return 0;
}

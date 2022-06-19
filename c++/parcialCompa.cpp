#include <iostream>
#include <vector>

using namespace std;

class ProcesoTextil {
protected:
    string nombre;
    int tiempoProduccion;
    bool activo;
public:
    ProcesoTextil(string nombre, int tiempoProduccion, bool activo) : nombre(nombre), tiempoProduccion(tiempoProduccion), activo(activo) {}

    string getNombre() {
        return nombre;
    }

    int getTiempoProduccion() {
        return tiempoProduccion;
    }

    bool getActivo() {
        return activo;
    }

    void setActivo(bool activo) {
        this->activo = activo;
    }

    int calcularTiempoProduccion(int cantidadPolos) {
        return cantidadPolos * tiempoProduccion;
    }
};

class Tejido : public ProcesoTextil {
public:
    Tejido() : ProcesoTextil("Tejido", 5, true) {}
};

class Tenido : public ProcesoTextil {
public:
    Tenido() : ProcesoTextil("Teñido", 7, true) {}
};

class Acabado : public ProcesoTextil {
public:
    Acabado() : ProcesoTextil("Acabado", 3, true) {}
};

class Confeccion : public ProcesoTextil {
public:
    Confeccion() : ProcesoTextil("Confección", 10, true) {}
};

void imprimirDatosProceso(vector<ProcesoTextil> procesos) {
    for (int i = 0; i < procesos.size(); i++) {
        if (procesos[i].getActivo()) {
            cout << "Nombre del proceso: " << procesos[i].getNombre() << " - ";
            cout << "Tiempo de producción: " << procesos[i].getTiempoProduccion() << endl;
        }
    }
}

int main() {
    int cantidadPolos;

    Tejido t;
    Tenido te;
    Acabado a;
    Confeccion c;


    vector<ProcesoTextil> procesos = {t, te, a, c};

    cout << "Ingrese la cantidad de polos: ";
    cin >> cantidadPolos;

    // Un proceso de tejido-teñido-acabado
    cout << "***** Un proceso de tejido-teñido-acabado *****" << endl;

    procesos[0].setActivo(true);
    procesos[1].setActivo(true);
    procesos[2].setActivo(true);
    procesos[3].setActivo(false);

    int tiempoTotal = 0;

    for (int i = 0; i < procesos.size(); i++) {
        if (procesos[i].getActivo()) {
            tiempoTotal += procesos[i].calcularTiempoProduccion(cantidadPolos);
        }
    }

    imprimirDatosProceso(procesos);

    cout << "Tiempo total de producción: " << tiempoTotal << " minutos" << endl;

    // Un proceso de tejido-teñido-acabado-confección
    cout << "***** Un proceso de tejido-teñido-acabado-confección *****" << endl;

    for (int i = 0; i < procesos.size(); i++) {
        procesos[i].setActivo(true);
    }

    tiempoTotal = 0;

    for (int i = 0; i < procesos.size(); i++) {
        if (procesos[i].getActivo()) {
            tiempoTotal += procesos[i].calcularTiempoProduccion(cantidadPolos);
        }
    }

    imprimirDatosProceso(procesos);

    cout << "Tiempo total de producción: " << tiempoTotal << " minutos" << endl;

    // Un proceso de solo tejido y teñido
    cout << "***** Un proceso de solo tejido y teñido *****" << endl;

    procesos[0].setActivo(true);
    procesos[1].setActivo(true);
    procesos[2].setActivo(false);
    procesos[3].setActivo(false);

    tiempoTotal = 0;

    for (int i = 0; i < procesos.size(); i++) {
        if (procesos[i].getActivo()) {
            tiempoTotal += procesos[i].calcularTiempoProduccion(cantidadPolos);
        }
    }

    imprimirDatosProceso(procesos);

    cout << "Tiempo total de producción: " << tiempoTotal << " minutos" << endl;

    return 0;
}

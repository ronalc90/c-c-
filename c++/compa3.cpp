#include <iostream>
#include <string>

using namespace std;

class ProcesoTextil {
protected:
    string nombre;
    int tiempoProduccion;
    bool activo;
public:
    ProcesoTextil(string n, int t) {
        nombre = n;
        tiempoProduccion = t;
        activo = true;
    }
    virtual int getTiempoProduccion() {
        return tiempoProduccion;
    }
    void setActivo(bool a) {
        activo = a;
    }
    bool getActivo() {
        return activo;
    }
    string getNombre() {
        return nombre;
    }
};

class Tejido : public ProcesoTextil {
public:
    Tejido() : ProcesoTextil("Tejido", 5) {

    }
};

class Tenido : public ProcesoTextil {
public:
    Tenido() : ProcesoTextil("Teñido", 7) {

    }
};

class Acabado : public ProcesoTextil {
public:
    Acabado() : ProcesoTextil("Acabado", 3) {

    }
};

class Confeccion : public ProcesoTextil {
public:
    Confeccion() : ProcesoTextil("Confección", 10) {

    }
};

int main() {
    ProcesoTextil* procesos[4];
    procesos[0] = new Tejido();
    procesos[1] = new Tenido();
    procesos[2] = new Acabado();
    procesos[3] = new Confeccion();

    int nPolos;

    cout << "Ingrese la cantidad de polos a producir: ";
    cin >> nPolos;

    // Proceso 1: Tejido-Teñido-Acabado
    int tiempoTotal = 0;
    for (int i = 0; i < 3; i++) {
        if (procesos[i]->getActivo()) {
            tiempoTotal += procesos[i]->getTiempoProduccion() * nPolos;
        }
    }

    cout << "Tiempo de producción para " << nPolos << " polos: " << tiempoTotal << " minutos" << endl;

    // Proceso 2: Tejido-Teñido-Acabado-Confección
    tiempoTotal = 0;
    for (int i = 0; i < 4; i++) {
        if (procesos[i]->getActivo()) {
            tiempoTotal += procesos[i]->getTiempoProduccion() * nPolos;
        }
    }

    cout << "Tiempo de producción para " << nPolos << " polos: " << tiempoTotal << " minutos" << endl;

    // Proceso 3: Tejido-Teñido
    tiempoTotal = 0;
    for (int i = 0; i < 2; i++) {
        if (procesos[i]->getActivo()) {
            tiempoTotal += (procesos[i]->getTiempoProduccion() * 2) * nPolos;
        }
    }

    cout << "Tiempo de producción para " << nPolos << " polos: " << tiempoTotal << " minutos" << endl;

    return 0;
}

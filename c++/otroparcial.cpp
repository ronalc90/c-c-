#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

class ProcesoTextil
{
protected:
    string nombre;
    int tiempoProduccion;
    bool estado;
public:
    ProcesoTextil(string, int);
    void setNombre(string);
    string getNombre();
    void setTiempoProduccion(int);
    int getTiempoProduccion();
    void setEstado(bool);
    bool getEstado();
    virtual int calcularTiempoProceso() = 0;
};

ProcesoTextil::ProcesoTextil(string nombre, int tiempoProduccion)
{
    this->nombre = nombre;
    this->tiempoProduccion = tiempoProduccion;
}

void ProcesoTextil::setNombre(string nombre)
{
    this->nombre = nombre;
}

string ProcesoTextil::getNombre()
{
    return nombre;
}

void ProcesoTextil::setTiempoProduccion(int tiempoProduccion)
{
    this->tiempoProduccion = tiempoProduccion;
}

int ProcesoTextil::getTiempoProduccion()
{
    return tiempoProduccion;
}

void ProcesoTextil::setEstado(bool estado)
{
    this->estado = estado;
}

bool ProcesoTextil::getEstado()
{
    return estado;
}

class Tejido: public ProcesoTextil
{
public:
    Tejido(string, int);
    int calcularTiempoProceso();
};

Tejido::Tejido(string nombre, int tiempoProduccion): ProcesoTextil(nombre, tiempoProduccion)
{

}

int Tejido::calcularTiempoProceso()
{
    return getTiempoProduccion() * 1;
}

class Teniedo: public ProcesoTextil
{
public:
    Teniedo(string, int);
    int calcularTiempoProceso();
};

Teniedo::Teniedo(string nombre, int tiempoProduccion): ProcesoTextil(nombre, tiempoProduccion)
{

}

int Teniedo::calcularTiempoProceso()
{
    return getTiempoProduccion() * 1;
}

class Acabado: public ProcesoTextil
{
public:
    Acabado(string, int);
    int calcularTiempoProceso();
};

Acabado::Acabado(string nombre, int tiempoProduccion): ProcesoTextil(nombre, tiempoProduccion)
{

}

int Acabado::calcularTiempoProceso()
{
    return getTiempoProduccion() * 1;
}

class Confeccion: public ProcesoTextil
{
public:
    Confeccion(string, int);
    int calcularTiempoProceso();
};

Confeccion::Confeccion(string nombre, int tiempoProduccion): ProcesoTextil(nombre, tiempoProduccion)
{

}

int Confeccion::calcularTiempoProceso()
{
    return getTiempoProduccion() * 1;
}

int main()
{
    int opcion, cantidadPolos, totalTiempo = 0;
    string nombreProceso;
    bool estadoProceso;
    vector <ProcesoTextil*> procesos;

    procesos.push_back(new Tejido("Tejido", 5));
    procesos.push_back(new Teniedo("Teñido", 7));
    procesos.push_back(new Acabado("Acabado", 3));
    procesos.push_back(new Confeccion("Confeccion", 10));

    do
    {
        cout<<"Menu: "<<endl;
        cout<<"1. Tejido-Teñido-Acabado"<<endl;
        cout<<"2. Tejido-Teñido-Acabado-Confeccion"<<endl;
        cout<<"3. Solo Tejido y Teñido"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Ingrese una opcion: ";
        cin>>opcion;

        switch (opcion)
        {
        case 1:
            cout<<"Ingrese cantidad de polos: ";
            cin>>cantidadPolos;

            for(int i = 0; i < 3; i++)
            {
                procesos[i]->setEstado(true);
            }

            for(int i = 0; i < procesos.size(); i++)
            {
                if(procesos[i]->getEstado() == true)
                {
                    totalTiempo += procesos[i]->calcularTiempoProceso() * cantidadPolos;
                }
            }

            cout<<"El tiempo total de produccion es: "<<totalTiempo<<" minutos"<<endl;

            for(int i = 0; i < procesos.size(); i++)
            {
                if(procesos[i]->getEstado() == true)
                {
                    cout<<procesos[i]->getNombre()<<": "<<procesos[i]->calcularTiempoProceso() * cantidadPolos<<" minutos"<<endl;
                }
            }

            totalTiempo = 0;

            break;

        case 2:
            cout<<"Ingrese cantidad de polos: ";
            cin>>cantidadPolos;

            for(int i = 0; i < procesos.size(); i++)
            {
                procesos[i]->setEstado(true);
            }

            for(int i = 0; i < procesos.size(); i++)
            {
                if(procesos[i]->getEstado() == true)
                {
                    totalTiempo += procesos[i]->calcularTiempoProceso() * cantidadPolos;
                }
            }

            cout<<"El tiempo total de produccion es: "<<totalTiempo<<" minutos"<<endl;

            for(int i = 0; i < procesos.size(); i++)
            {
                if(procesos[i]->getEstado() == true)
                {
                    cout<<procesos[i]->getNombre()<<": "<<procesos[i]->calcularTiempoProceso() * cantidadPolos<<" minutos"<<endl;
                }
            }

            totalTiempo = 0;

            break;

        case 3:
            cout<<"Ingrese cantidad de polos: ";
            cin>>cantidadPolos;

            for(int i = 0; i < 3; i++)
            {
                procesos[i]->setEstado(true);
            }

            for(int i = 0; i < procesos.size(); i++)
            {
                if(procesos[i]->getEstado() == true)
                {
                    totalTiempo += procesos[i]->calcularTiempoProceso() * cantidadPolos * 2;
                }
            }

            cout<<"El tiempo total de produccion es: "<<totalTiempo<<" minutos"<<endl;

            for(int i = 0; i < procesos.size(); i++)
            {
                if(procesos[i]->getEstado() == true)
                {
                    cout<<procesos[i]->getNombre()<<": "<<procesos[i]->calcularTiempoProceso() * cantidadPolos * 2<<" minutos"<<endl;
                }
            }

            totalTiempo = 0;

            break;
        }

        system("pause");
        system("cls");

    }while(opcion != 4);

    return 0;
}

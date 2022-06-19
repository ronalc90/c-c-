#include <iostream>
#include <string>
#include "Time.h"

using namespace std;
 

 
int main()
{
	int a,b,c;
	cout << "Digite hora :";
	cin>>a;
	if(a>=24 || a<0){
		cout<<"Digito la hora mal saliendo del programa.";
		return 0;
	}
	cout << "Digite minuto :";
	cin>>b;
		if(b>=60 || a<0){
		cout<<"Digito minuto mal saliendo del programa.";
		return 0;
	}
	cout << "Digite segundo :";
	cin>>c;
		if(c>=60 || a<0){
		cout<<"Digito segundo mal saliendo del programa.";
		return 0;
	}
	
	
	Time T1(a,b,c), T2(1,0,0), T3(2,6,15);
	T1.printTimeP();
    T3 = T1 + T2;

    cout << "T1 == T2 ? " << (T1 == T2) << endl;
    cout << "T1 < T2 ? " << (T1 < T2) << endl;
    cout << "T2 > T1 ? " << (T2 > T1) << endl;
    T3 = T1 * 2;
    T3.printTime(6);
    T3 = T2 / 2;
    T3.printTime(6);
    T3 = T1 - T2;
    T3.printTime(6);
    return 0;
}

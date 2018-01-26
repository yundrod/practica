#include"arreglo.h"
using namespace std;

int main () {
	int n;
	cout<<"ingrese numero: ";
	cin>>n;
	arrv a(n);
	cout<<"ola"<<endl;
	punto q(8,4);
	punto w(1,5);
	vector e(q,w);
	//a.insertar(e);??????????
	cout<<"ola"<<endl;
	a.v[n-1].print();
	cout<<"ola"<<endl;
	cout<<a.v[1].star.x<<endl;
	
	e=a.retornar(1);
	e.print();
	
	a.eliminar(1);
	return 0;
}


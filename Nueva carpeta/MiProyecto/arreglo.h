#ifndef VECTORES_H
#define VECTORES_H
#include <iostream>
using namespace std;
class punto{
public:
	float x,y;
	punto(float,float);
	punto();
	punto(punto &o);
	void print();
};
class vector{
public:
	punto star;
	punto end;
	vector(punto,punto);
	vector();
	vector(vector &o);
	void print ();
	
	
};
class arrv{
public:
	int size;
	arrv(int a);
	arrv();
	vector *v;
	void insertar(vector);
	void eliminar(int);
	vector retornar(int);
	~arrv();
};

#endif

#ifndef HEADER_H
#define HEADER_H
#include <iostream>
using namespace std;
class punto{
public:
	float x,y;
	punto(float,float);
	punto();
	punto(punto &o);
	void print(){
		cout<<"("<<x<<","<<y<<")";}
};


class punto3d: public punto{
public:
	float z;
	punto3d(float,float,float);
	punto3d();
	punto3d(punto3d &o);
	void print(){
		cout<<"("<<x<<","<<y<<","<<z<<")";}
};

class vector{
public:
	punto star;
	punto end;
	vector(punto,punto);
	vector();
	vector(vector &o);
	void print (){
		star.print();cout<<",";end.print();
	}
};
class vector3d:public vector{
	punto3d star;
	punto3d end;
	vector3d(punto3d,punto3d);
	vector3d();
	vector3d(vector3d &o);
	void print (){
		star.print();cout<<",";end.print();
	}
};

class arrv{
public:
	int size;
	vector *v=new vector[size];
	arrv(int a);
	arrv();
	void insertar(vector a){
		vector *ptr=(v+size);
		*ptr=a;
		size++;
	};
	void eliminar(int a){
		
	}
	vector retornar(int a){
		return v[a-1];
	};
	~arrv(){
		delete v;
	}
};
#endif

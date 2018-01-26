#include "arreglo.h"
using namespace std;

punto::punto(float a,float b){
		x=a;y=b;
	}
punto::punto(){
	x=0;y=0;
}
punto::punto (punto &o){
		x=o.x;y=o.y;
	}
void punto::print(){
	cout<<"("<<x<<","<<y<<")";}


vector::vector(punto x,punto y){
		star=x;end=y;		
	}
vector::vector(){
	punto a;
	punto b;
	star=a;end=b;
}
vector::vector(vector &o){
		star=o.star;end=o.end;
	}
void vector::print (){
	star.print();cout<<",";end.print();
}

arrv::arrv(){size=0;v=new vector[size];}
arrv::arrv(int a){size=a;v=new vector[size];}

void arrv::insertar(vector a){
	vector *v2 =new vector[size+1];
	for(int i=0;i<size-1;i++){
		v2[i]=v[i];
	}
	v2[size]=a;
	
	v=v2;
	
}
void arrv::eliminar(int a){
	for(int i=a-1;i<size-1;i++){
		v[i]=v[i+1];
	}
	size--;
}
vector arrv::retornar(int a){
	return v[a-1];
};
arrv::~arrv(){
	delete []v;
}

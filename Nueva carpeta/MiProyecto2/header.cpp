#include "header.h"
punto::punto(float a,float b){
	x=a;y=b;
}
punto::punto(){
	x=0;y=0;
}
punto::punto (punto &o){
	x=o.x;y=o.y;
}

punto3d::punto3d(float a,float b,float c){
	x=a;y=b;z=c;
}
punto3d::punto3d(){
	x=0;y=0;z=0;
}
punto3d::punto3d (punto3d &o){
	x=o.x;y=o.y;z=o.z;
}


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

vector3d::vector3d(punto3d x,punto3d y){
	star=x;end=y;		
}
vector3d::vector3d(){
	punto3d a;
	punto3d b;
	star=a;end=b;
}
vector3d::vector3d(vector3d &o){
	star=o.star;end=o.end;
}


arrv::arrv(){size=0;}
arrv::arrv(int a){
	size=a;
}

#include<iostream>
#include "header.h"
using namespace std;

int main () {
	punto a(1,5);
	punto3d b(2,4,8);
	punto *p1=&b;
	p1->print();
	
	return 0;
}


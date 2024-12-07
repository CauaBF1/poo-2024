#include <iostream>
#include "fracao.h"

using std::cout;
using std::cin;
using std::endl;

Fracao multiplica(Fracao f1, Fracao f2){
	Fracao resultado;
	resultado.setNum(f1.getNum()*f1.getNum());
	resultado.setDen(f1.getDen()*f2.getDen());
	return resultado;
}
 
// definida de forma global para acessar f1.num precisa ser friend
Fracao operator *(Fracao f1, Fracao f2){
	Fracao resultado;
	resultado.setNum(f1.num*f2.getNum());
	resultado.setDen(f1.getDen()*f2.getDen());
	return resultado;
}

// definida de forma global precisa ser friend da classe
bool operator>(int n, Fracao f){	
	if ( n > (double)f.num/f.den)
		return true;
	return false;
}


int main(){
	Fracao f1(1,4), f2(1,2), f3, f4(7,2);
	cout << "f1 = ";
	f1.imprime();

	cout << "f2 = ";
	f2.imprime();	
	
	cout << "f3 = ";
	f3 = f1.operator*(5);
	f3.imprime();

	cout << "f4 = ";
	f4.imprime();
// operator > frações
	if(f1 > f2) { 
		cout << "f1 maior que f2" << endl;
	}else{
		cout << "f1 menor que f2" << endl;
	}
// operator > fracao <-> int
	if(f4>1) { 
		cout << "f4 maior que 1" << endl;
	}else{
		cout << "f4 menor que 1" << endl;
	}
// operator > int <-> fracao
	if(1>f2) { 
		cout << "1 maior que f2" << endl;
	}else{
		cout << "1 menor que f2" << endl;
	}
// incremento fracao
	++f2;
	f2.imprime();


	return 0;
}

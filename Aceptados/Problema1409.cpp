/*Resuelto*/
#include <iostream>
using namespace std;
int main(){
	int valor1,valor2,r1,r2,suma;
	cin>>valor1>>valor2;
	if(valor1+valor2>11){
		return 0;
	}
	suma=valor2+valor1-1;
	r1=suma-valor1;
	r2=suma-valor2;
	cout<<r1<<" "<<r2<<endl;

	return 0;
}
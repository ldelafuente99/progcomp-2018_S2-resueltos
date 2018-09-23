/*RESUELTO*/
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	double latitud1[128*1024],latitud2[128*1024];
	int k,ejex,ejey;
	do{
		cin>>k;
		if(k==0) {
			break;
		}
		cin>>ejex>>ejey;
		for(int i=0;i<k;i++){
			cin>>latitud1[i]>>latitud2[i];
			if(latitud1[i]==ejex || latitud2[i]==ejey){
				cout<<"divisa"<<endl;

			}else if(latitud1[i]>ejex && latitud2[i]>ejey){
				cout<<"NE"<<endl;

			}else if(latitud1[i]>ejex && latitud2[i]<ejey){
				cout<<"SE"<<endl;

			}else if(latitud1[i]<ejex && latitud2[i]>ejey){
				cout<<"NO"<<endl;

			}else if(latitud1[i]<ejex && latitud2[i]<ejey){
				cout<<"SO"<<endl;

			}
		}

	}while(k!=0);
	return 0;
}
/*la segunda linea que se ingresa determina la linea divisora*/
/*<< desplazado 1 bit a la izquierda*/

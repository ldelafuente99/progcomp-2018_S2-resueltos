/*RESUELTO*/
#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int casos,miedo,cantidad[100],mayor=0,imprimir[100];  
	cin>>casos;
	for(int i=0;i<casos;i++){
		mayor=0;
		cin>>miedo;
		for(int j=0;j<miedo;j++){
			cin>>cantidad[j];
		}
		for(int k=0;k<miedo;k++){
			if(cantidad[k]>mayor){
				mayor=cantidad[k];
			}
		}
		imprimir[i]=mayor;
	}
	for(int i=0;i<casos;i++){
		cout<<"Case "<<i+1<<": "<<imprimir[i]<<endl;
	}
	return 0;
}

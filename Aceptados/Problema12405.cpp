/*Resuelto*/
#include <iostream>
#include <vector>
using namespace std;
int main(){
	int casos,cantidad/*N*/,contador=0;
	char temp1,temp2,temp0;	
	cin>>casos;
	for(int i=0;i<casos;i++){
		cin>>cantidad;
		contador=0;
		char array[cantidad+2];
		array[cantidad]='#';
		array[cantidad+1]='#';
		for(int j=0;j<cantidad;j++){
			cin>>array[j];
		}
		for(int k=0;k<cantidad;k++){
			/*if((array[k]=='.' && array[k+1]=='#') && k<cantidad-1){
				array[k]='#';
				array[k+1]='#';
				contador++;
			}
			*/
			if(array[k]=='.'){ /*Condicional basado en una solucion de internet*/
				array[k]='#';
				array[k+1]='#';
				array[k+2]='#';
				contador++;	
			}	
		}
		cout<<"Case "<<i+1<<": "<<contador<<endl;
	}
	return 0;
}
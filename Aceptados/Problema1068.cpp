/*Resuelto*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int entero,suma=0,uno=1;
	cin>>entero;
	if(entero==1){
		cout<<uno<<endl;
		return 0;
	}else if(entero>1){
		for(int i=entero;i>=1;i--){
			suma=suma+i;
		}
	}else if(entero<1){
		for(int i=entero;i<=1;i++){
			suma=suma+i;
		}
	}
	cout<<suma<<endl;
	return 0;
}
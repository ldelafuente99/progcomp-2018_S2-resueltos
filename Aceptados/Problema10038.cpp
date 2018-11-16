/*Resuelto*/
/*VERIFICA QUE LA RESTA DE LOS ELEMENTOS, SEA UNA SECUENCIA DECRECIENTE AUN SI NO ESTAN ORDENADOS*/
#include <iostream>
using namespace std;
int main(){
	int valor,array1[3000],array2[3000],temp1,temp2,temp3,aux,cont=0;
	while(cin>>valor){
		cont=0;
		if(valor==0) break;
		for(int i=0;i<valor;i++){
			cin>>array1[i];
			array2[i]=valor-(i+1);
			//cout<<"array "<<i<<" = "<<array2[i]<<endl;
		}
		for(int i=0;i<valor;i++){
			/*if(valor==1 && array[i]>1){
				cout<<"Jelly"<<endl;
				break;
			}
			*/
			temp1=array1[i];//abs(array1[i]);
			temp2=array1[i+1];//abs(array1[i+1]);
			aux=temp1-temp2;
			temp3=abs(aux);
			for(int j=0;j<valor;j++){
				if(temp3==array2[j] && temp3!=0){
					array2[j]=0;
					cont++;
				}
			}			
		}
		if(cont==(valor-1)){
			cout<<"Jolly"<<endl;
		}else cout<<"Not jolly"<<endl;
		cont=0;
		for(int i=0;i<valor;i++){
			array2[i]=0;
		}
	}
	return 0;
}
/*Resuelto*/
#include <iostream> 
using namespace std;
int main(){
	int k,aux,par,impar,array[100],array1[100],suma=0;
	cin>>k;
	if(k<1 || k>101){
		return 0;
	}
	for(int i=0;i<k;i++){
		cin>>array[i];
	}
	for(int i=0;i<k;i++){
		for(int j=i;j<k;j++){
			if(array[j]<array[i]){
				aux=array[i];
				array[i]=array[j];
				array[j]=aux;
			}
		}
	}
	for(int i=0;i<=(k/2);i++){
		if(array[i]%2 != 0){
			array1[i]=((array[i])/2)+1;
			suma=suma+array1[i];
		}else{
			array1[i]=(array[i])/2;
			suma=array1[i]+suma;
		}
		
	}
	cout<<suma<<endl;
	return 0;
}
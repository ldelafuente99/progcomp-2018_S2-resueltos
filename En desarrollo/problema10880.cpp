/*IMPRIME LO DEL EJEMPLO, PERO MANDA TIEMPO EXCEDIDO*/
/*
Cada invitado comio q galletas. 
Se hicieron c galletas y se invitaron g personas.
Sobraron r galletas.
r<q

*/
#include <iostream>
using namespace std;
int main(){
	double resultados[128*1024],contador[128*1024];
	int casos,C,R,cantidad,temp,cont=0,q=0,w=0;
	cin>>casos;
	for(int i=0;i<casos;i++){
		cin>>C>>R;
		cantidad=C-R;
		for(int j=R;j<=cantidad;j++){
			if(j==0){
				temp=cantidad%(1+j);
				if(temp==0){
					resultados[q]=1;
					cont=cont+1;
					q++;
					j++;
				}
			}else{
				temp=cantidad%(j);
				if(temp==0){
					resultados[q]=j;
					cont=cont+1;
					q++;
				}

			}
		}
		contador[i]=cont;
		cout<<"Case #"<<i+1<<": ";
		while(w<contador[i]){
				cout<<resultados[w]<<" ";
				w++;
		}
		cout<<endl;

	}
	/*int i,j=0;
	for(i=0;i<casos;i++){
		cout<<"Case #"<<i+1<<": ";
		while(j<contador[i]){
				cout<<resultados[j]<<" ";
				j++;
		}
		cout<<endl;
	}
	cout<<endl;*/
	return 0;
}

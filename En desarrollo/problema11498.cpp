/**/
#include <iostream>
#include <queue>
#include <string.h>
using namespace std;
int main(){
	queue<int> lat1,lat2,res;
	int k,latitud1[128*1024],latitud2[128*1024],ejex,ejey,j=0,resp[128*1024];
	do{
		cin>>k;
		if(k==0) break;
		cin>>ejex>>ejey;
		for(int i=j;i<(k+j);i++){
			cin>>latitud1[i]>>latitud2[i];
		}
		for(int i=j;i<(k+j);i++){
			if(latitud1[i]==ejex || latitud2[i]==ejey){
				resp[i]=1;

			}else if(latitud1[i]>ejex && latitud2[i]>ejey){
				resp[i]=2;

			}else if(latitud1[i]>ejex && latitud2[i]<ejey){
				resp[i]=3;

			}else if(latitud1[i]<ejex && latitud2[i]>ejey){
				resp[i]=4;

			}else if(latitud1[i]<ejex && latitud2[i]<ejey){
				resp[i]=5;

			}
		}
		j=j+k;

	}while(k!=0);
	for(int i=0;i<j;i++){
		if(i==1){
			cout<<"divisa"<<endl;
		}else if(resp[i]==2){
			cout<<"NE"<<endl;
		}else if(resp[i]==3){
			cout<<"SE"<<endl;
		}else if(resp[i]==4){
			cout<<"NO"<<endl;
		}else if(resp[i]==5){
			cout<<"SO"<<endl;
		}
	}
	/*for(int q=0;q<j;q++){
		for(int i=0;i<k[q];i++){
			if((latitud1[i]>=-10^4 || latitud1[i]<=10^4) && latitud2[i]==ejey){
				cout<<"divisa"<<endl;
			}else if((latitud2[i]>=-10^4 || latitud2[i]<=10^4) && latitud1[i]==ejex){
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
	}*/
	return 0;
}
/*la segunda linea que se ingresa determina la linea divisora*/
/*<< desplazado 1 bit a la izquierda*/
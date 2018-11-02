/**/
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main(){
	int array1[20000],array2[20000],cabezas,caballeros,total,k=0,j=0,cant=0;
	bool poder1=true,poder2=false,imprimir=false;
	while(true){

		cin>>cabezas>>caballeros;
		if(cabezas == 0 && caballeros ==0) break;
		for(int i=0;i<cabezas;i++){
			cin>>array1[i]; /*diametros*/
		}
		for(int i=0;i<caballeros;i++){//
			cin>>array2[i]; /*altura caballeros*/
		}
		total=0;
		imprimir=true;
		sort(array1,array1+cabezas);
		sort(array2,array2+caballeros);

		/*for(int i=0;i<cabezas;i++){
			while(j<caballeros){
				if(array1[i]==array2[j] && poder1){
					total=total+array2[j];
					array2[j]=0;
					j=0;
					imprimir=true;
					cant++;
					break;
				}
				if(array1[i]+k==array2[j] && poder2){
					total=total+array2[j];
					array2[j]=0;
					j=0;
					imprimir=true;
					cant++;
					break;

				}
				if(j==caballeros-1){
					j=0;
					poder1=false;
					poder2=true;
					k++;
				}

				j++;

			}
		}
		if(imprimir){
			cout<<total<<endl;
		}else{
			cout<<"Loowater is doomed!"<<endl;
		}
		total=0;
		imprimir=false;
		*/
		for(int i = 0,z = 0;i < cabezas && imprimir;i++){ /*CONDICION EXTRAIDA DE UNA SOLUCION DE INTERNET PORQUE LA QUE CREE NO FUNCIONABA EN TODOS LOS CASOS, IGUAL LA DEJE COMENTADA ARRIBA.*/
            while(z < caballeros && array2[z] < array1[i]) z++;
            
            if(z == caballeros) imprimir = false; /*Se usa para determinar si es posible encontrar un caballero que pueda cortar la cabeza de un dragon.*/
            else total += array2[z++];
        }
        
        if(!imprimir) cout<<"Loowater is doomed!"<<endl;
        else cout<<total<<endl;
	
	}
	return 0;
	       
}

/*Resuelto*/
#include <iostream>
#include <queue>
#include <algorithm> 
using namespace std;
/*3
1 2 3
1+2=3; 3+3=6 -> 3+6=9 // 1+3=4; 4+2=6 -> 4+6=10 // 2+3=5; 5+1=6 ->5+6=11 IMPRIME EL MENOR*/
int main(){
	int cantidad,valor,costo=0,total=0;
	priority_queue<int,vector<int>,greater<int> > mypq;/*DECLARACION EXTRAIDA DE SOLUCION DE INTERNET.SE ME OCURRIO PRIORITY_QUEUE PERO DECLARANDOLA DE FORMA priority_queue<int> mypq y declarandola de esa manera, no funciona correctamente.*/
	while(cin>>cantidad){
		if(cantidad==0) break;
		costo=0;
		total=0;
		for(int i=0;i<cantidad;i++){
			cin>>valor;
			mypq.push(valor);
		}
		while(mypq.size()>1){/*CONDICION EXTRAIDA DE UNA SOLUCION DE INTERNET PORQUE NO ME RESULTABA NINGUNA QUE CREABA YO.*/
			total=mypq.top();/*Se le asigna a top el valor mas alto de la cola*/
            mypq.pop();/*Se elimina el valor de la cola*/
            total=total+mypq.top();/*Se suma el valor anterior junto al actual mas alto*/
            mypq.pop();/*Se elimina el valor de la cola*/
            costo=costo+total;/*Se almacena el valor de las operaciones anteriores junto a los de iteraciones anteriores*/
            mypq.push(total);/*Se agrega el valor actual de total en la cola*/
		}
		cout<<costo<<endl;
		mypq.pop();/*Se elimina el valor que tenga costo para los nuevos valores que se podrian ingresar posteriormente*/
	}
	return 0;
}

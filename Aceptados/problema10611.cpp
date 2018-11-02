/*Funciona el siguiente codigo solo para algunos casos*/
/*#include <iostream>
using namespace std;
int main(){
	double array1[124*1024]/*ALTURA CHIMPANCE,array2[1024*124];
	int valor,consulta,max,min,cont;
	cin>>valor;
	for(int i=0;i<valor;i++){
		cin>>array1[i];
	}
	cin>>consulta;
	for(int i=0;i<consulta;i++){
		cin>>array2[i];
	}
	max=array1[valor-1];
	min=array1[0];
	for(int i=0;i<consulta;i++){
		cont=0;
		for(int j=0;j<valor;j++){
			if(array2[i]==array1[j]){
				if(array1[j]==array1[j+1]){
					cont++;
				}
				if(array2[i]-1<min && array2[i]+1>max){
					cout<<"X X"<<endl;
					break;
				}
				if(array2[i]+1>max){
					cout<<array1[valor-1]<<" X "<<endl;
					break;
				}else if(array2[i]-1<min){
					cout<<" X "<<array1[0]<<endl;
					break;
				}
				if((array1[j]!=array1[j+1]) && cont==0){
					cout<<array1[j-1]<<" "<<array1[j+1]<<endl;
				}else if((array1[j]!=array1[j+1]) && cont>0){
					cout<<array1[j-(cont+1)]<<" "<<array1[j+1]<<endl;
				}
			}else{
				if(array2[i]+1>max && array2[i]-1<min){
					cout<<"X X"<<endl;
				}
				if(array2[i]>max){
					cout<<array1[valor-1]<<" X "<<endl;
					break;
				}else if(array2[i]<min){
					cout<<" X "<<array1[0]<<endl;
					break;
				}
				if(array2[i]>min && array2[i]<max){
					if(array2[i]>array1[j-1] && array2[i]<array1[j]){
						cout<<array1[j-1]<<" "<<array1[j]<<endl;
						break;
					}

				}
			}
		}
	}

	return 0;
}*/

#include <iostream>
#include <algorithm>

using namespace std;

unsigned int heights[50005];

int main()
{
    int N;
    cin >> N;
    
    for (int i = 0; i < N; ++i)
        cin >> heights[i]; 
    
    int Q;
    cin >> Q;
    
    while (Q--)
    {
        int height;
        cin >> height;//Se lee un valor
        
        unsigned int * above = upper_bound(heights, heights + N, height);//Retorna el primer valor del rango y lo guarda en un puntero
        unsigned int * below = above; --below;//Se almacena el valor de above en below con un decremento
        while (below >= heights && *below == height)//
           --below;
       
        if (below >= heights)//Si el valor es mayor al minimo, imprime el valor, sino imprime X
            cout << *below << ' ';
        else
            cout << "X ";
       
        if (above == heights + N)//Si el valor se encuentra en la ultima posicion, imprime X, sino el valor
            cout << "X\n";
        else
            cout << *above << '\n';
    }
}

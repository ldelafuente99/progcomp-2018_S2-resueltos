/*Solucion extraida de internet*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main (){
    int k;/*Se declaran dos variables, una int y una bool igual a false*/
    bool blank = false; 
    while (scanf ("%d", &k) && k) { /*Se lee la cantidad de datos*/
        if ( blank )/*Se verifica el valor de la variable para imprimir un salto de linea si el valor es true*/
            printf ("\n");
        blank = true;
        int x [13]; /*Se declara un arreglo de tamaño 13*/
        for ( int i = 0; i < k; i++ )/*Se leen los valores que se ingresan posterior a la cantidad de datos*/
            scanf ("%d", &x [i]); 
        for ( int a = 0; k - a > 5; a++ ) {/*Se recorre el arreglo desde 6 for distintos donde la posicion inicial de cada for distinto al primero es la posicion +1 que el anterior 
        hasta el tamaño-1 con el objetivo de intercambiar los valores segun corresponda. Luego en cada iteracion se imprimen.*/
            for ( int b = a + 1; k - b > 4; b++ ) {
                for ( int c = b + 1; k - c > 3; c++ ) {
                    for ( int d = c + 1; k - d > 2; d++ ) {
                        for ( int e = d + 1; k - e > 1; e++ ) {
                            for ( int f = e + 1; k - f > 0; f++ ) {
                                printf ("%d %d %d %d %d %d\n", x [a],
                                x [b], x [c], x [d], x [e], x [f]);
                            }
                        }
                    }
                }
            }
        }
 
    }
    return 0;
}
/*int main(){
	int caso,i,j,array1[6],array2[1000],sum=0;	
	while(cin>>caso){
		if(caso == 0) break;
		vector<int> array(caso);
		for(i=0;i<caso;i++){
			cin>>array[i];
		}
		sort(array.begin(),array.end());
		/*for(int i=0;i<caso;i++){
			cout<<array[i]<<endl;
		}
		for(j=0;j<6;j++){
			array1
			
		}

	}
	
	return 0;
}*/
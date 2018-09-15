/*SOLUCION DE INTERNET*/
#include <bits/stdc++.h>
using namespace std;
bool b[18]; /* Se declara un array de boolean de manera global para poder ocupar sus datos tanto en el main() como en get().*/
void get(int a,int piedra){
    for (int i=0;i<piedra;i++){
        if (a%2==0) b[i]=false;/*Si la posicion con la que se llama al metodo es par, la misma posicion del array de boolean es false, en caso contrario es true y luego se divide por 2 y continua el for*/
        else b[i]=true;
        a=a/2;
    }
}
int main(){
    int piedra,pesos[18],dn;/*Se declaran las variables que se ocuparan*/
    int s1=0,s2=0,dx,dk;
    cin>>piedra; /* Se lee la cantidad de piedras que tendra*/
    for (int i=0;i<piedra;i++){/* Se leen los pesos de las piedras junto con la suma total de todos los pesos*/
        cin>>pesos[i];
        s1=s1+pesos[i];
    }
    dx=abs(s1-s2);/* Se obtiene el valor absoluto de la resta de la suma de los pesos con 0*/
    dn=(1<<piedra);/*Manejo de mascaras de bit*/
    s1=0;
    for (int i=1;i<dn;i++){
        get(i,piedra); /*Llamada al metodo get() pasando los valores de piedra y la posicion en que se encuentre del for.*/
        s1=0;s2=0;
        for (int j=0;j<piedra;j++){
        if (b[j]) s2=s2+pesos[j]; /*Dependiendo del valor de la posicion del array de boolean determinados en el metodo get(), se suma en la variable s1 o s2.*/
        else s1=s1+pesos[j];
        }
        dk=abs(s1-s2); /*Se obtiene el valor absoluto de la resta de los nuevos valores de s1 y s2.*/
        dx=min(dx,dk); /*Se obtiene el minimo entre dx calculado antes del segundo for del main() y el dx obtenido.*/
    }
    cout<<dx<<endl;/*Se imprime el valor minimo entre los dos conjuntos*/
    return 0;
}/*NOTA: no guardaron los valoeres en array, los sumaron directamente.*/
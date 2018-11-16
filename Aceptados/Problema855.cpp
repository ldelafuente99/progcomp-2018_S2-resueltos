/*EXTRAIDO DE INTERNET*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
  int t, r, c, f;
  int streets[50000]; /*Creacion de 2 arreglos*/
  int avenues[50000];

  cin >> t;/*Se lee el numero de casos*/

  for(int j=0;j<t;j++) {/*Ciclo dura hasta t-1*/
    cin >> r >> c >> f;/*Se lee el numero de calles,avenidas y amigos*/

    for (int i = 0; i < f; i++) {
      cin >> streets[i] >> avenues[i]; /*Se lee y almacenan los valores de las calles y avenidas*/
    }

    sort(streets, streets + f); /*Se ordenan los valores de las calles*/
    sort(avenues, avenues + f); /*Se ordenan los valores de las avenidas*/

    pair<int,int> result; /*Vector que almacena dos valores, uno en el first y otro en el second */

    result.first = streets[(f-1)/2]; /*Almacena el valor del arreglo de las calles con el indice que es el valor de los (amigos-1)/2*/
    result.second = avenues[(f-1)/2];/*Almacena el valor del arreglo de las avenidas con el indice que es el valor de los (amigos-1)/2*/

    cout << "(Street: " << result.first << ", Avenue: " << result.second << ")" << endl;/*Imprime los valores anteriormente calculados*/
  }

  return 0;
}
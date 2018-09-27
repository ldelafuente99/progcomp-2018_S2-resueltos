/*Extraido de internet.*/
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

#define maxn (int)(1e5)+1
int n;
map<vector<int>, int> m; /*Se utiliza map para facilitar el desarrollo, donde un valor tiene una llave asociada, ambas de valor int.*/
int main() {
    while(cin >> n, n) {
	m.clear(); /*Remueve todos los elementos que se encuentren.*/
	for(int i=0; i<n; i++) {
	    vector<int> c(5); /*Crea un vector de tamaño 5*/
	    for(auto &x: c) cin >> x; /*Se lee una variable de cualquier tipo.*/
	    sort(c.begin(), c.end()); /*Se ordena los elementos del vector*/
	    m[c]++;
	}
	int max_val = 0;
	for(map<vector<int>, int>::iterator it=m.begin(); it!=m.end(); ++it) { 
	    max_val = max(max_val, it->second); /*Asigna el valor maximo de todos los valores utilizando el for.*/
	}
	int cnt = 0;
	for(map<vector<int>, int>::iterator it=m.begin(); it!=m.end(); ++it) {
	    if(it->second == max_val) cnt++; /*Utiliza un contador que suma solo si se cumple la condicion.*/
	}
	cout << max_val*cnt << '\n';/*Imprime la multiplicacion de ambos valores.*/
    }
}
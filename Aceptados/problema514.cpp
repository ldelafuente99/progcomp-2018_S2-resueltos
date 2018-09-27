/*Extraido de internet.*/
#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n, target[1000];
	int i;

	while (true) {
		cin >> n;
		if (n == 0) /*Condicion de termino*/
			break;

		while (true) {
			cin >> target[0];/*Se lee un valor y se guarda en la primera posicion del arreglo.*/
			if (target[0] == 0){
				cout << endl;
				break;
			}
			for (i = 1; i < n; i++) {
				cin >> target[i];/*Se leen los valores y se guardan en las posiciones del arreglo.*/
			}

			int currCoach = 1, targetIndex = 0;
			stack<int> station; /*Se crea un stack.*/
			while(currCoach<=n){
				station.push(currCoach);/*Se agrega el valor de la variable en el stack.*/

				while(!station.empty() && station.top() == target[targetIndex]){/*Mientras queden elementos y el ultimo elemento del stack sea igual a un valor.*/
					station.pop();/*Se extrae el ultimo elemento del stack.*/
					targetIndex++;
					if(targetIndex>=n) break;
				}

				currCoach++;
			}

			if(station.empty()) cout << "Yes" << endl;/*Si no quedan elementos, imprime Yes, en caso contrario imprime No.*/
			else cout << "No" << endl;
		}
	}

	return 0;
}
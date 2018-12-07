#include <cstdio>
#include <algorithm>
using namespace std;

int find(int p, int arr[]) {
	int i;
	for (i = 0; i < 8; i++) {
		if (arr[i] == p)
			break;
	}
	return i;
}

int main() {
	int n, m; /*Se crean 3 variables, una de ellas una matriz de 20 filas y 3 columnas*/
	int constraints[20][3];

	while (scanf("%d %d", &n, &m), n || m) {/*Se leen dos variables*/
		for (int i = 0; i < m; i++) {/*Se llena el arreglo dependiendo del tamaño de m*/
			scanf("%d %d %d", &constraints[i][0], &constraints[i][1],
					&constraints[i][2]);
		}

		int arr[8] = { 0, 1, 2, 3, 4, 5, 6, 7 };/*Se crea un arreglo de tamaño 8 con valores determinados*/

		int ans = 0;/*Se crea una variable de valor igual a cero*/
		do {
			bool sat = true;/*Se crea una variable de valor igual a true*/
			for (int i = 0; i < m; i++) {/*Se recorre el for dependiendo del tamaño de m*/
				int pos1 = find(constraints[i][0], arr);/*Se llama a la funcion find, donde se le pasa el arreglo junto con la fila que corresponda del for y la posicion 0, ademas se almacena el valor en una variable*/
				int pos2 = find(constraints[i][1], arr);/*Se llama a la funcion find, donde se le pasa el arreglo junto con la fila que corresponda del for y la posicion 1, ademas se almacena el valor en una variable*/
				if (constraints[i][2] > 0) {/*Si la poisicion de la matriz tiene un valor mayor a 0*/
					if (abs(pos1 - pos2) > constraints[i][2]) {/*Si el valor absoluto es mayor a la posicion, se cambia el valor de la variable sat y sale de esa iteracion del for*/
						sat = false;
						break;
					}
				}
				if (constraints[i][2] < 0) {/*Si la posicion de la matriz tiene un valor menor a 0*/
					if (abs(pos1 - pos2) < (-constraints[i][2])) {/*Se calcula el valor absoluto y si es menor a la posicion negativa, se cambia el valor de la variable sat a false y se sale de esa iteracion del for*/
						sat = false;
						break;
					}
				}
			}

			if (sat) /*Si sat es true, aumenta el valor de ans en uno*/
				ans++;
		} while (next_permutation(arr, arr + n));/*Mientras el metodo next_permutation acepte los parametros ingresados, continuara*/

		printf("%d\n", ans);/*Se imprime el valor de ans*/
	}

	return 0;
}
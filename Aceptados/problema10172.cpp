/*Extraido de internet*/
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
	int n, s, q, TC;

	cin >> TC;

	for (; TC > 0; TC--) {/*for desde el ultimo elemento al valor 1.*/
		stack<int> carrier;
		queue<int> stationQueue[100];/*Se crea un stack y una queue.*/

		cin >> n >> s >> q;

		for (int i = 0; i < n; i++) {
			int nc;
			cin >> nc;
			for (int j = 0; j < nc; j++) {
				int target;
				cin >> target;/*Se leen los valores*/
				stationQueue[i].push(target - 1); /*Se ingresa el valor*/
			}
		}

		int currPos = 0, time = 0;
		while (true) {
			while (!carrier.empty()
					&& (carrier.top() == currPos
							|| stationQueue[currPos].size() < q)) {/*Mientras no se encuentre sin elementos el stack, la cantidad de elemtnos sea menor a q, y el ultimo elemento sea igual a currPos.*/
				if (carrier.top() != currPos) {
					stationQueue[currPos].push(carrier.top()); /*Ingresa el ultimo elemento del stack.*/
				}
				carrier.pop();/*Luego lo elimina del stack.*/
				time++;
			}
			while ((carrier.size() < s) && !stationQueue[currPos].empty()) {/*Mientras el tamaño del stack sea menor a s y no este vacia la queue.*/
				carrier.push(stationQueue[currPos].front()); /*Se agrega al stack el primer elemento de la queue.*/
				stationQueue[currPos].pop();/*Se elimina el primer elemento de la queue.*/
				time++;
			}

			bool clear = carrier.empty(); /*clear tiene el valor de verdad si el stack esta vacio y falso si hay elementos.*/
			for (int i = 0; i < n; i++) {
				clear &= stationQueue[i].empty();
			}
			if (clear)/*Si clear es true, sale del while*/
				break;
			currPos = (currPos + 1) % n;/*Guarda el resto.*/
			time += 2;
		}

		cout << time << endl;/*Imprime el valor alcanzado de la variable.*/
	}

	return 0;
}
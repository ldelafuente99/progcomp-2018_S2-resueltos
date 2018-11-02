

#include <iostream>
#include <vector>
using namespace std;

int main()
{  
    int T;
    cin >> T;
    while ( T-- )
    {
        int n;
        cin >> n;

        vector<int> values;
        for (int i = 0; i < n; ++i)
        {
            int value;
            cin >> value;
            values.push_back(value);//Se almacena el valor
        }

        int sum = 1;
        int coins = values.size() > 1? 2 : 1;//Consigue la mayor cantidad de monedas de valores más pequeños como sea posible.
        for (int i = 1; i < values.size() - 1; ++i)
            if (sum + values[i] < values[i + 1])//Asegura que no se ha superado el limite que puede sacar
            {
                sum += values[i];
                ++coins;//Indica la cantidad de monedas que tiene
            }

        cout << coins << endl;
    }
    return 0;
}
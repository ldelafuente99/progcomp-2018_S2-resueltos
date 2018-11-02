/**/
/*string key,val, str;
stringstream ss;
while(getline(cin, str) && str.size()){
        ss.clear();
        ss << str;
        ss >> val;
        ss >> key;
        ...
}*/
/*#include <iostream>
#include <map>
#include <string>
#include <string.h>
using namespace std;
int main(){
	string array1[124*1024],array2[124*1024],key,value,compare="";
	int i=0,cont=1;
	while(cin>>value>>key){ //No sale de este ciclo while debido a que no reconoce el if.
		if(value=="" || key=="") break;
		array1[i]=key;
		array2[i]=value;		
		i++;
		cont++;
	}
	while(cin>>key){
		for(int j=0;j<cont;j++){
			if(array1[j]==key){
				cout<<array2[j]<<endl;
			}else{
				cout<<"eh"<<endl;
			}

		}
	}
	return 0;
}*/
/*int main(){
	map<string/*key/,string/value/> valor;
	map<string,string>iterator it;
	string key,value;
	cin>>value>>key;
	while(value!="" && key!=""){
		cin>>value>>key;
		valor[second]=value;
		valor[first]=key;
	}
	if(value=="" && key==""){
		while(true){
			cin>>key;
			it= valor.find(key);
			if()

		}
	}

	cout<<key<<" "<<valor<<endl;

	return 0;
}*/
#include <iostream>
#include <map>
#include <string>
#include <iterator>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    map<string, string> conversion; //Se declara un map con valor y llave de tipo string
    
    string temp, second;
    getline(cin, temp); //Se lee el valor temp
    
    while (temp != "")//Temp sera igual a "" si y solo si no se ingresa ningun valor
    {
        stringstream ss(temp);
        
        ss >> temp >> second; //Se almacenan los valores en las variables
        
        conversion[second] = temp;//Se le asigna la posicion de valor del mapa al valor de temp
        
        getline(cin, temp);//Se lee de nuevo el valor emp
    }
    
    while (cin >> temp)//Condicion para comenzar a leer las claves e imprimir el valor
    {
        map<string, string>::const_iterator iter = conversion.find(temp);//Encuentra el valor
        
        if (iter == conversion.end())//Si no esta en el final del map, imprime eh, si lo encuentra, imprime el valor de la key
        
            cout << "eh\n";
        
        else
            cout << iter->second << '\n';
    }
    
}
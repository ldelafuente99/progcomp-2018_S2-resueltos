/*Resuelto*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double valor1[128*1024];
double valor2[128*1024];
using namespace std;
int main(){
	int i=0;
	while(cin>>valor1[i]){
		valor2[i]=sqrt(valor1[i]);
		i++;
	}
	cout<<endl;
	for(int j=i-1;j>=0;j--){
		printf("%.4f\n",valor2[j]);
	}
	return 0;
}
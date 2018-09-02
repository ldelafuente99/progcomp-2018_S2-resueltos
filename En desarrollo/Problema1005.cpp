/**/
#include <iostream>
using namespace std;
int main(){
	int piedra,pesos[20];
	cin>>piedra;
	if(piedra<0 ||piedra>20){
		return 0;
	}
	for(int i=0;i<piedra;i++){
		cin>>pesos[i];
	}
	
	cout<<endl;
	return 0;
}
/*#include <bits/stdc++.h>
using namespace std;
bool b[18];
int n;
void get(int a,int n)
{
    for ( int i= 0; i < n; i ++)
    {
        if (a%2==0) b[i]=false;
        else b[i]=true;
        a/=2;
    }
}
int main ()
{
    int n,a[18],dn;
    __int64 s1=0,s2=0,dx,dk;
    cin >> n;
    for ( int i = 0; i < n; i++)
    {
        cin >> a[i];
        s1+=a[i];
    }
    dx=abs(s1-s2);
    dn=(1<<n);
    s1=0;
    for (int i = 1; i < dn; i++)
    {
        get(i,n);
        s1=0;s2=0;
        for (int j=0;j<n;j++)
        {
        if (b[j]) s2=s2+a[j];
        else s1=s1+a[j];
        }
        dk=abs(s1-s2);
        dx=min(dx,dk);
    }
    cout<<dx;
}*/
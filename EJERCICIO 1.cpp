#include<iostream>
using namespace std;

int main(){
	int a[20],n,s=0;
	cout<<"ingresar cantidad de numeros: "<<endl;
	cin>>n;
	cout<<"ingresr numeros: "<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
		s=s+a[i];
	}
	

	system("pause");
}



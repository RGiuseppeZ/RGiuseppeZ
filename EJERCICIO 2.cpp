#include<iostream>
using namespace std;

int bus(int b[],int n,int x);

int main(){
	int b[40],n,x,r;
	
	cout<<" ingresar canidad de numeros: "<<endl;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"ingresar los numeros"<<i+1<<":"<<endl;
		cin>>b[i];
	}
	
	cout<<" ingrese el dato a buscar: "<<endl;
	cin>>x;
	cout<<endl;
	r=bus(b,n,x);
	if(r==1){
		cout<<"EL ELEMENTO se encontro "<<endl;
	}
	else
	{
		cout<<"el elemnto no se encontro"<<endl;
	}
	
	system("pause");
}

int bus(int b[],int n,int x){
	if(n==0){
		return 0;
	}
	else
	{
		if(b[n-1]==x){
			return 1;
		}
		else{
			return bus(b,n-1,x);
		}
		
	}
}

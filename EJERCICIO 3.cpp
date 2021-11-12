#include<iostream>
using namespace std;

int mayor(int a[],int n,int may);
int main(){
	int a[20],n,may,m;
	
	cout<<"ingresar cantidad de numeros: "<<endl;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"ingresar los numeros"<<i+1<<":";
		cin>>a[i];
	}
	m=mayor( a, n, may);
	cout<<"el mayor es: "<<m;
	
  system("pause");
} 


int mayor(int a[],int n,int may){
	if(n==0){
		return 0;
	}
	else{
		if(a[n]>may){
			 may=a[n];
		
			 mayor(a,may,n+1);
		}
		
	}
	
}

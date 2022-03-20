#include<iostream>

using namespace std;

int main(){
	int m,n;
	cout<<"ingrese las filas"<<endl;
	cin>>m;
	cout<<"ingrese las columnas"<<endl;
	cin>>n;
	system("cls");
	
	int s1[m][n],s2[m][n];
	
	cout<<"datos de la matriz 1"<<endl;
	for (int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"ingrese su numero ";
			cin>>s1[i][j];
		}
	}
	
	
	system("cls");
	cout<<"\n";
	cout<<"llenado de matriz 2"<<endl;;
	for (int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"ingrese su numero ";
			cin>>s2[i][j];
		}
	}
	
	system("cls");
	cout<<"\n";
	cout<<"datos ingresados en matriz 1"<<endl;
	for (int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<s1[i][j];
		}
		cout<<endl;
	}
	
	cout<<"datos ingresados en matriz 2"<<endl;
	for (int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<s2[i][j];
		}
		cout<<endl;
	}
	
	
	cout<<"la suma de cada matriz es: "<<endl;
	for (int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<s1[i][j]+s2[i][j];
		}
		cout<<endl;
	}
	
	
	
	return 0;
}

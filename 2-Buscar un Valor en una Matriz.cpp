#include<iostream>

using namespace std;


int main()
{
	int n; 
	int matriz[3][3]={
		{1, 2, 3},
		{4, 2, 6},
		{7, 2, 9},
	};
		
	
	
	for (int i=0; i<3; i++)
	{
		if(i==0)
		{
			cout<<"Matriz: "<<endl;
		}
		for(int j=0; j<3; j++)
		{
			cout<<matriz[i][j]<<" ";
		}	
	
		cout<<endl;
	}
	cout<<"\nValor a buscar: ";
	cin>>n;
	cout<<endl;
	
	cout<<"Matriz: \tEl valor "<< n <<" se encuentra en: "<<endl;

	for (int i=0; i<3; i++)
	{		
		for(int j=0; j<3; j++)
		{
			cout<<matriz[i][j]<<" ";
		}	
		cout<<"\t\t";				
		for(int j=0; j<3; j++)
		{
			if(matriz[i][j]==n)
			{
				cout<<"Fila "<< i <<", Columna "<< j;
			}
			
		}
		cout<<endl;
	}
	return 0; 

}

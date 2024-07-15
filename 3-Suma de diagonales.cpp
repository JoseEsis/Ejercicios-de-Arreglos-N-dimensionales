#include<iostream>

using namespace std;

int main()
{
	int matriz[4][4]={
		{1, 2, 3, 4},
		{5, 1, 2, 3},
		{4, 5, 6, 7},
		{8, 9, 1, 2},
		
	};
	int diagonalPrincipal=0;
	int diagonalSecundaria=0;
	
	for(int i=0; i<4; i++)
	{
		diagonalPrincipal+=matriz[i][i];
	}
	
	for(int i=0; i<4; i++)
	{
		diagonalSecundaria+=matriz[i][3-i];
	}
	
	cout<<"Matriz: "<<endl;
	for (int i=0; i<3; i++)
	{		
		for(int j=0; j<3; j++)
		{
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"\nLos valores de la diagonal principal: "<<endl;
	for(int i=0; i<4; i++)
	{		
	 	cout<<matriz[i][i]<<" ";		
	}
	cout<<"\nLos valores de la diagonal secundaria: "<<endl;
	for(int i=0; i<4; i++)
	{		
	 	cout<<matriz[i][3-i]<<" ";		
	}
	cout<<endl;
	cout<<"\nLa suma de la diagonal principal es: "<<diagonalPrincipal<<endl;	
	cout<<"La suma de la diagonal secundaria es: "<<diagonalSecundaria<<endl;
	
	return 0; 
}

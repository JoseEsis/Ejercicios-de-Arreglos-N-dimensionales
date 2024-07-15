#include<iostream>

using namespace std;


int main()
{
	int matrizA[4][4]={
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16},
	
	};
	
	int fila1, fila2;
	int guardarMatriz[4][4];
	cout<<"Matriz: "<<endl;
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			cout<<matrizA[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\nFilas a intercambiar: "<<endl;
	cin>>fila1; 
	cin>>fila2;
	cout<<endl; 
	for(int i=0;i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			guardarMatriz[i][j]=matrizA[i][j];
		}
	}
	
	for(int j=0; j<4; j++)
	{
		int matriz=matrizA[fila1][j];
		if(fila2>fila1 or fila1>fila2)
		{
			matrizA[fila1][j]=matrizA[fila2][j];;
			matrizA[fila2][j]=matriz;
			
		}
		
	}	
	
	cout<<"Matriz: \t\tMatriz resultante: "<<endl;
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			cout<<guardarMatriz[i][j]<<" ";
		}
		cout<<"\t\t";
		for(int j=0; j<4; j++)
		{
			cout<<matrizA[i][j]<<" ";			
		}
		cout<<endl;
	}

	
	
	return 0; 	
}

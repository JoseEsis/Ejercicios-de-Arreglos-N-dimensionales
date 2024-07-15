#include<iostream>

using namespace std;

int main()
{
	int matrizResultante[3][3];
	int matrizA[3][3]={
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9},
	};
	int matrizB[3][3]={
		{9, 8, 7},
		{6, 5, 4},
		{3, 2, 1},
	};
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			matrizResultante[i][j]=0;	
			for(int k=0; k<3; k++)
			{
				matrizResultante[i][j]+=(matrizA[i][k]*matrizB[k][j]);
			}					
		}
	}
	
	cout<<"Matriz A: \tMatriz B: \tResultado: "<<endl;	

	for(int i=0; i<3; i++)
	{		
		for(int j=0; j<3; j++)
		{
			cout<<matrizA[i][j]<<" ";
		}
		cout<<"\t\t";		
		for(int j=0; j<3; j++)
		{
			cout<<matrizB[i][j]<<" ";
		}
		cout<<"\t\t";
		for(int j=0; j<3; j++)
		{
			cout<<matrizResultante[i][j]<<" ";	
		}
		cout<<endl;
	}
	
	return 0; 
}

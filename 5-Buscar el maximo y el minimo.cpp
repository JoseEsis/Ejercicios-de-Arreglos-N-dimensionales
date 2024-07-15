#include<iostream>

using namespace std;

int main()
{
	int matrizA[4][4]={
		{2, 4, 5, 6},
		{5, 6, 1, 8},
		{9, 10, 11, 12},
		{13, 20, 15, 16},
	
	};
	
	int maximo, minimo;
	int maxPosI=0, maxPosJ=0, minPosI=0, minPosJ=0;
	maximo=matrizA[0][0];
	minimo=matrizA[0][0];
	
	for(int i=0;i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			if(matrizA[i][j]>maximo)
			{
				maximo=matrizA[i][j];
				maxPosI=i; 
				maxPosJ=j;
			}
			else if(matrizA[i][j]<minimo)
			{
				minimo=matrizA[i][j];
				minPosI=i; 
				minPosJ=j;

			}
		}
	}
	cout<<"La matriz:\n "<<endl;
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			cout<<matrizA[i][j]<<" ";
		}
		cout<<endl; 
	}
	cout<<endl; 

	cout<<"El numero maximo de la matriz 4x4 es "<< maximo <<" y esta en la  posicion ["<<maxPosI<<"]["<<maxPosJ<<"] "<<endl;
	cout<<"El numero minimo de la matriz 4x4 es "<< minimo <<" y esta en la posicion ["<<minPosI<<"]["<<minPosJ<<"] "<<endl;
	

	
	
	return 0; 	
}

#include<iostream>

using namespace std;


int main()
{
	int matrizA[4][4]={
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 1, 2, 3},
		{4, 5, 6, 7},
	};
	
	int matrizGirada[4][4];
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		{
			matrizGirada[j][3-i]=matrizA[i][j];
		}
	
	}
	
	cout<<"Matriz: \t\tMatriz rotada 90 grados en sentido horario: "<<endl;
	
	for(int i=0; i<4; i++)
	{
		
		for(int j=0; j<4; j++)
		{
			cout<<matrizA[i][j]<<" ";
		}
		cout<<"\t\t";
		for(int j=0; j<4; j++)
		{
			cout<<matrizGirada[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0; 
}
	
	

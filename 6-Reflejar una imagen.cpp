#include<iostream>

using namespace std;


int main()
{
	int matrizA[6][6]={
		{1, 2, 3, 4, 5, 6},
		{7, 8, 9, 1, 2, 3},
		{4, 5, 6, 7, 8, 9},
		{1, 2, 3, 4, 5, 6},
		{7, 8, 9, 1, 2, 3},
		{4, 5, 6, 7, 8, 9},
	};
	int matriz[6][6];
	for(int i=0; i<6; i++)
	{
		for(int j=0; j<6; j++)
		{
			matriz[i][j]=matrizA[i][j];
		}
		
	}

		
	for(int i=0; i<6; i++)
	{
		for(int j=0; j<3; j++)
		{
			int g=matrizA[i][j];
			matrizA[i][j]=matrizA[i][5-j];
			matrizA[i][5-j]=g;
		}
		
	}
	
	cout<<"Matriz: \t\tMatriz reflejada horizontalmente: "<<endl;
	
	for(int i=0; i<6; i++)
	{
		
		for(int j=0; j<6; j++)
		{
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\t\t";
		for(int j=0; j<6; j++)
		{
			cout<<matrizA[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0; 	
}

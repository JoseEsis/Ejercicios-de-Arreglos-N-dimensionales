#include<iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Ingrese el orden del cuadrado latino: ";
    cin>>n;
    int cuadradoLatino[n][n];
    for(int i=0; i<n; i++)
    {
    	cuadradoLatino[0][i]=i+1;
	}
	for(int i=1; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cuadradoLatino[i][j]=cuadradoLatino[i-1][(j+n-1)%n];
		}
	}
	cout<<endl;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			cout<<cuadradoLatino[i][j]<<" ";
		}
		cout<<endl;
	}
    return 0;
}
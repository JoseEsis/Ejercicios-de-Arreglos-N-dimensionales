#include <iostream>

using namespace std;

int main() 
{
    int matriz[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    
	int izquierda=0;
    int derecha=4;
    int arriba=0;
    int abajo=4;
    
    cout<<"Matriz: "<<endl;
    for(int i=0; i<5; i++)
    {
    	for(int j=0; j<5; j++)
    	{
    		cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}	
	cout<<endl;
	
	cout<<"Recorrido en espiral: "<<endl;

    while (arriba <= abajo and izquierda <= derecha) 
	{
        for(int i=izquierda; i<=derecha ; i++) 
		{
            cout<<matriz[arriba][i]<<" ";
        }
        arriba++;

        for(int i=arriba; i<=abajo; i++) 
		{
            cout<<matriz[i][derecha]<<" ";
        }
        derecha--;

        if(arriba<=abajo) 
		{
            for(int i=derecha; i>=izquierda; i--) 
			{
                cout<<matriz[abajo][i]<<" ";
            }
            abajo--;
		}
        if(izquierda<=derecha) 
		{
            for(int i=abajo; i>=arriba ; i--) 
			{
                cout<<matriz[i][izquierda]<<" ";
            }
            izquierda++;
        }
        
    }

    return 0;
}

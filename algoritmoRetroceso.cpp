#include <iostream>

using namespace std;

int algoritmoBusquedaRetroceso(int arr[], int n, int x);


int main()
{
    //BUSQUEDA Exhaustiva-Retroceso
    int arreglo[10]={1,14,18,21,41};

    int n=21;
    int x;
    
	cout<<"Arreglo es: "<<endl;
    for(int i=0;i<5;i++){
        cout<<"["<<arreglo[i]<<"]";
    }
    cout<<endl;
    cout<<"Elemnto a buscar: "<<n<<endl;
	algoritmoBusquedaRetroceso(arreglo,n,x);


    return 0;
}

int algoritmoBusquedaRetroceso(int arr[], int n, int x){ 
    if (x == 4){
        cout<<"Elemento Encontrado: "<<n<<endl;
		cout<<"Pocision :"<<x;      
		return 1;
	}

    for (int i=1; i<6; i++){
    	algoritmoBusquedaRetroceso(arr,n,x+i);
	}
}



















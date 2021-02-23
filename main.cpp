#include <iostream>
#include <fstream>
using namespace std;

void algoritmoInserccion(int a[], int n);

void algoritmoInterpolacion (int a[], int n,int num);

void impirmirElementos(int a[], int n);


int main()
{
  ofstream archivo;
  archivo.open("interpolacion.txt", ios::app);
  int A[7]= {1,5,8,9,2,3,7};
  int num;
    archivo<<"\nArreglo original: "<<endl;
    impirmirElementos (A,7);
    cout<<"\n";
    algoritmoInserccion(A,7);
    cout<<"\n";
    archivo<<"\n\nArreglo ordenado: "<<endl;
    impirmirElementos (A,7);
    cout<<"\n";

    cout<<"\nElemento a buscar: ";
    cin>>num;
    archivo<<"\nElemento a buscado: "<<num;

    algoritmoInterpolacion(A,7,num);

}


void impirmirElementos(int a[], int n)
{
  ofstream archivo;
  archivo.open("interpolacion.txt", ios::app);
    for(int i=0; i<n; i++)
    {
      archivo<<"|"<<a[i]<<"|";
        cout<<"|"<<a[i]<<"|";
    }
}


void algoritmoInserccion(int a[], int n)
{
    int pos,aux;
    for(int i=0; i<n; i++)
    {
        pos=i;

        aux=a[i];

        while((pos>0)&&(a[pos-1]>aux))
        {
            a[pos] = a[pos-1];

            pos--;

        }

        a[pos]=aux;
    }

}


void algoritmoInterpolacion (int a[], int n, int num)
{
    int primero = 0;

    int ultimo = n-1;

    int medio;

    int cont=0;
  ofstream archivo;
  archivo.open("interpolacion.txt", ios::app);

    while(a[primero] != num && cont<=7 )
    {
        medio = primero + ((num - a[primero])*(ultimo-primero))/(a[ultimo]-a[primero]);
        if(a[medio]<num)
        {
            primero = medio +1;
        }
        else if(a[medio]>num)
        {
            ultimo = medio-1;
        }
        else
        {
            primero = medio;
        }
        cont++;
    }
    if(a[primero]==num)
    {
        cout<<"Elemento encontrado en la posicion: "<<primero;
        archivo<<"\n\nElemento encontrado en la posicion: "<<primero;
    }
    else
    {
        cout<<"ELEMENTO NO ENCONTRADO";
        archivo<<"\n\nELEMENTO NO ENCONTRADO";
    }

}
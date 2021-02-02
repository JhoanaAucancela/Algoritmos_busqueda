#include <iostream>
#include <fstream>
using namespace std;
#define tam 50

void ingresarElementosArreglo(int arr[], int t);
int busqueda(int arr[], int t, int dato);
void imprimirElementosArreglo(int arr[], int t);


int main() {
  ofstream archivo;
  archivo.open("demo.txt", ios::app);

  int arreglo[tam];
  int t,dato;
  cout<<"Ingrese el tamaño del arreglo: ";
  cin>>t;
  ingresarElementosArreglo(arreglo,t);
  cout<<"Ingrese el numero que desea buscar: ";
  cin>>dato;
  archivo<<"El numero a buscar: "<<dato<<endl;
  if(busqueda(arreglo, t, dato)==-1){
      cout<<"Elemento no encontrado";
      archivo<<"Elemento no encontrado\n";
    }
  else {cout<<"Elemento encontrado en la posicion: "<<busqueda(arreglo, t, dato)<<endl;
  archivo<<"Elemento encontrado en la posicion: "<<busqueda(arreglo, t, dato)<<endl<<endl;}
  imprimirElementosArreglo(arreglo, t);

archivo.close();
}



void ingresarElementosArreglo(int arr[], int t){
  ofstream archivo;
  archivo.open("demo.txt", ios::app);
  for(int i = 0; i<t;i++){
    cout<<"Ingrese el elemento "<<i<<": ";
    cin>>arr[i];
    archivo<<"["<<arr[i]<<"]";
  }
  archivo<<endl;
  archivo.close();
}

int busqueda(int arr[], int t, int dato){
  int aux =  -1;
  for(int i = 0; i<t;i++){
    if(arr[i]==dato){
      aux = i;
    }
  }
  return aux;
}

void imprimirElementosArreglo(int arr[], int t){
   for(int i = 0; i<t;i++){
    cout<<"["<<arr[i]<<"] ";   
  }
}
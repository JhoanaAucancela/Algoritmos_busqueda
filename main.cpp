#include <iostream>
#include <fstream>
using namespace std;
#define tam = 50



int main() {
  int arreglo[]={6,2,7,1,9,10,3,4,5,8};
  int n, aux=0;
  ofstream archivo;
  archivo.open("demo.txt", ios::app);

  for(int j=0;j<10;j++){
    archivo<<"["<<arreglo[j]<<"]";
  }
  archivo<<endl;
  cout<<"Ingrese el numero a buscar [1-10]: ";
  cin>>n;
  archivo<<"El numero a buscar: "<<n<<endl;
  for(int i = 0; i<10;i++){
    if(arreglo[i]==n){
      cout<<"Numero encontrado en la posicion "<<i+1<<endl;
      aux =1;
      archivo<<"Posicion: "<<i<<endl<<endl;
    }
  }
  if(aux==0){
    cout<<"Numero no encontrado";
    archivo<<"Numero no encontrado";
  }

archivo.close();

}
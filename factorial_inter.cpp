#include <iostream>

using namespace std;

int main()
{
  int i;
  int numero;
  int factorial=1;
  cout<<"Ingrese el número: "<<endl;
  cin >>numero;
  if(numero<0)
    {
      factorial=0;
    } else if(numero==0){
    factorial=1;
  }else{
    for (i=1; i<=numero;i++){
      factorial= factorial*i;
}
  }

  cout <<"El factorial de "<<numero<<" es = "<<factorial<<endl;
}

#include<iostream>
using namespace std;

int main() {

  int i;
  int n1=7;
  int n2=77;
  int factorial1=1;
  int factorial2=1;
  
  for(i=1;i<=n1;i++){
      factorial1=i*factorial1;
}
  for (i=1;i<=n2;i++){
    factorial2=i*factorial2; 

}
  cout <<"El factorial de 7 es = "<<factorial1<<endl;
  cout <<"El factorial de 77 es = "<<factorial2<<endl;
  return 0;

}

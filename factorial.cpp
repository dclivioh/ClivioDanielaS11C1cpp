#include<iostream>
using namespace std;

int main() {

  int i;
  int n=7;
  int factorial=0;
  cin>>n;
  for(i=1;i<=n;i++){
      factorial=factorial*i;
}
  
  cout <<factorial<<endl;
  return 0;

}

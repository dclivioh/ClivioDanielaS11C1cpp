#include  <iostream>
using namespace std;

int main()
{

  int n=0;
  int i;

  for(i=0;i<=100;i++){

    if(i%3==0 && i%5!=0){
      n=i;
	cout<<n<<endl;
}
  }
    return 0;
}

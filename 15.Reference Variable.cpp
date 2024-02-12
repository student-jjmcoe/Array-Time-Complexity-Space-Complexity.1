#include<iostream>
using namespace std;

// int main(){
//   int n =5;//Normal integer variable

//   // k is a reference variable referring to n;
//   int &k = n;//nick name given to 'n'

//   // c is a reference variable referring to n;
//   int &c = n;//nick name given to 'n'

//   cout<<"n: "<<n<<endl;
//   cout<<"k: "<<n<<endl;
//   cout<<"c: "<<n<<endl;
//    //error that &t=6
//   k++;
//   cout<<"n: "<<n<<endl;
//   cout<<"k: "<<n<<endl;
//   cout<<"c: "<<n<<endl;
// }

// // Call by Value i.e different address
// int incrementBy1(int n){
//   n = n+1;
//   return n;
// }

// int main(){
//   int n;
//   cin>>n;
//   n = incrementBy1(n);
//   cout<<"n: "<<n<<endl;

//   return 0;
// }

// Call by reference i.e at same address
int incrementBy1(int &n){
  n = n+1;
  //no need to return any value
}

int main(){
  int n;
  cin>>n;
  incrementBy1(n);
  cout<<"n: "<<n<<endl;

  return 0;
}
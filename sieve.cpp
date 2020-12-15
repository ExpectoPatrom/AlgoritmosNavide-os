#include <bits/stdc++.h>
using namespace std;

vector<int> primos;
bool numeros[90000001];
void sieve(){

  int size = 90000000;
  numeros[0] = numeros[1] = true;

  for(int i=2; i*i<=size; i++){
    if(!numeros[i]){
      for(int j = i*i; j<=size; j+=i){
        numeros[j] = true;
      }
      //primos.push_back(i);
    }
  }

  for(int i =2 ; i<=size; i++){
    if(!numeros[i])primos.push_back(i);
  }
  
}
int main(){
  int cases; cin>>cases;
  int k;
  sieve();
  //cout<<"size "<<primos.size()<<endl;
  //for(int i=0; i<10;i++){
  //cout<<"aaa "<<primos[i]<<endl;}
  while(cases--){
    cin>>k;
    cout<<primos[k-1]<<endl;
  }
}

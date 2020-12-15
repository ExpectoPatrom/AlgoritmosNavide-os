#include <bits/stdc++.h>
using namespace std;

int size = 10001;
bool numeros[10001];
vector<int> primos;
void sieve(){
  for(int i=2; i*i<=size; i++){
    if(!numeros[i]){
      for(int j=i*i; j<=size; j+=i){
        numeros[j] = true;
      }
    }
  }
}
int main(){
  sieve();
  int l,r;
  cin>>l>>r;
  for(int i=l; i<=r; i++){
    if(!numeros[i])cout<<i<<" ";
  }
  cout<<endl;
  return 0;
}

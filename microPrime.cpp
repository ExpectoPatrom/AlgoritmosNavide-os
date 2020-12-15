#include <bits/stdc++.h>
using namespace std;


bool numeros[1000001];
bool primePrime[1000001];
int result[1000001];

void sieve(){

  int size = 1000000;
  numeros[0] = numeros[1] = true;

  for(int i=2; i*i<=size; i++){
    if(!numeros[i]){
      for(int j = i*i; j<=size; j+=i){
        numeros[j] = true;
      }
    }
  }

  int total = 0;
  for(int i=0; i<=size; i++){
    //cout<<"numeros "<<numeros[i]<<endl;
    if(!numeros[i]){
      total+=1;
    }
    if(!numeros[total]){
      primePrime[i] = true;
    }
  }
  
  int total2 = 0;
  for(int i=2; i<=size; i++){
    //cout<<"aa "<<sizetal<<endl;
    if(primePrime[i]==1){
      //cout<<"here"<<endl;
    total2++;
    }
    result[i] = total2;
  }
  
}

int main(){
  int t; cin>>t;
  sieve();
  int l,r; 
  while(t--){
    cin>>l>>r;
    cout<<result[r]-result[l-1]<<endl;
  }
  return 0;
}

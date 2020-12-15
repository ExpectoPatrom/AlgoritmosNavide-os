#include <bits/stdc++.h>
using namespace std;

int numbers[1000001];
int size = 1000000;
void sieve(){
  for(int i=0; i<=size; i++)numbers[i]=-1;

  for(int i=2; i<=size; i++){
    if(numbers[i]==-1){
      for(int j=i; j<=size; j+=i){
        numbers[j] = i;
      }
    }
  }
  //for(int i=0; i<10; i++){
  //  cout<<numbers[i]<<endl;
  //}
}

void primeFact(int n){

  if(n==1)return;
  cout<<numbers[n]<<endl;
  return (primeFact(n/numbers[n]));

}
int main(){
  sieve();
  primeFact(54);
  return 0;
}

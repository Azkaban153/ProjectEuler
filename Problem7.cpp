#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
  for(int i=2; i<=sqrt(n); i++){
    if(n%i == 0)
      return false;
  }
  return true;
}

int main()
{
  int count = 0,i;
  for(i=2; count < 1000001; i++){
    if(isPrime(i)){
      count++;
    }
  }

  cout << --i << endl;

}

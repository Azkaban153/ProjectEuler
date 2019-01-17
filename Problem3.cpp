#include<bits/stdc++.h>
using namespace std;

int main()
{
  unsigned long long n = 600851475143;
  int factor = 2;
  int lastFactor = factor;

  while(n > 1){
    if(n%factor == 0){
      lastFactor = factor;
      while(n%factor == 0){
        n /= factor;
      }
    }
    factor += 1;
  }

  cout << lastFactor << endl;
}

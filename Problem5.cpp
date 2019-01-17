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
  int n = 20;
  unsigned long long answer=1;
  vector<int> v;
  for(int i=2; i<=n; i++){
    if(isPrime(i)){
      v.push_back(i);
    }
  }

  for(int i=0; i<v.size(); i++){
    int exp = floor(log(n)/log(v[i]));
    answer *= pow(v[i],exp);
  }

  cout << answer << endl;
}

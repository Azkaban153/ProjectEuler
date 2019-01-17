#include<bits/stdc++.h>
using namespace std;

// READ ABOUT SIEVE OF ERASTOTHENES
int useSieve(int limit){
  vector<int> sieve;
  unsigned long long answer=0;
  for(int i=0; i<limit; i++)
  {
    sieve.push_back(i);
  }

  for(int i=2; i<limit; i++)
  {
    for(int j=2; i*j<limit; j++){
      if(sieve[i*j])
      {
        sieve[i*j] = 0;
      }
    }
  }

  for(int i=0; i<sieve.size(); i++)
  {
    //cout << sieve[i] << endl;
    if(sieve[i])
    {
      answer += sieve[i];
    }
  }

  return answer-1;
}

bool isPrime(int n){
  for(int i=2; i<=sqrt(n); i++){
    if(n%i == 0)
      return false;
  }
  return true;
}

int main()
{
  int limit = 2000000;
  unsigned long long count = 0,i=2;
  while(i < limit){
    if(isPrime(i)){
      count += i;
    }
    i++;
  }

  cout << count << endl;

}

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int limit = 12500,totalDivisors,temp;
  vector<int> sieve(limit+1,1);
  unsigned long long triangle_number;

  for(int i=2; i*i<sieve.size(); i++){
    for(int j=2*i; j<sieve.size(); j+=i){
      if(sieve[j]){
        sieve[j] = 0;
      }
    }
  }

  for(unsigned long long i=1; i<limit; i++){
    totalDivisors = 1;
    triangle_number = (i*(i+1))/2;
    temp_triangle_number = triangle_number;
    for(unsigned long long j=2; j<sieve.size(); j++){
      if(sieve[j]){
        if(temp_triangle_number%j == 0){
          int count = 0;
          while(temp_triangle_number%j == 0){
            temp_triangle_number /= j;
            count++;
          }
          totalDivisors *= (count+1);
        }
      }
    }
    if(totalDivisors > 500){
      cout << triangle_number << " " << totalDivisors << endl;
      return 0;
    }
  }

}

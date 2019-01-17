#include<bits/stdc++.h>
using namespace std;

unsigned long long binomial_coefficient(int n, int r){
  if(r > n-r){
    r = n-r;
  }
  unsigned long long binomial_coefficient_array[n+1][r+1];

  for(int i=0; i<=n; i++){
    for(int j=0; j<=r; j++){
      if(j==0 || j==i){
        binomial_coefficient_array[i][j] = 1;
      } else {
        binomial_coefficient_array[i][j] = binomial_coefficient_array[i-1][j-1] + binomial_coefficient_array[i-1][j];
      }
    }
  }

  return binomial_coefficient_array[n][r];
}

int main()
{
  cout << binomial_coefficient(40,20) << endl;
  cout << binomial_coefficient(150,120) << endl;
  return 0;
}

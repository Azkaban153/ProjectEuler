#include<bits/stdc++.h>
using namespace std;

int squareSum(int n){
  return pow(n*(n+1)/2,2);
}

int sumSquare(int n){
  return n*(n+1)*(2*n+1)/6;
}

int main()
{
  int n = 100;
  cout << squareSum(n) - sumSquare(n) << endl;
}

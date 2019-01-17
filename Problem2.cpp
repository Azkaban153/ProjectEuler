#include<bits/stdc++.h>
using namespace std;

int fib(int n){
  if(n == 1 || n == 2)
    return 1;
  return fib(n-1) + fib(n-2);
}

int main()
{
  int n = 3,answer = 0;
  while(fib(n) < 4000000)
  {
    answer += fib(n);
    n += 3;
  }
  cout << answer << endl;
}

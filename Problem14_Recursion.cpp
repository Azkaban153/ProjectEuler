#include<bits/stdc++.h>
using namespace std;

int collatz(long input){
  if(input <= 1){
    return 1;
  } if(input%2==0){
    return 1 + collatz(input/2);
  } else {
    return 1 + collatz(3*input+1);
  }
}

int main()
{
  long max_length = -1,current_length = 0, max_term = 0;
  for(long i=2; i<1'00'000'0; i++){
    current_length = collatz(i);
    if(max_length < current_length){
        max_term = i;
    }
    max_length = max(max_length,current_length);
  }
  cout << max_term << " " << max_length << endl;
}

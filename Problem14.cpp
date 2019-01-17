#include<bits/stdc++.h>
using namespace std;

int main()
{
  long max_length = -1,current_length = 0, max_term = 0;
  for(long i=2; i<1'00'000'0; i++){
    vector<long> chain;
    long term = i;
    chain.push_back(i);
    while(term != 1){
      if(term%2 == 0){
        chain.push_back(term/2);
        term = term/2;
      } else {
        chain.push_back(3*term+1);
        term = 3*term+1;
      }
    }
    current_length = chain.size();
    if(max_length < current_length){
        max_term = i;
    }
    max_length = max(max_length,current_length);
  }

  cout << max_term << " " << max_length << endl;
}

#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){

  string input = to_string(n);
  int length = input.length();
  for(int i=0; i<length/2; i++){
    //cout << input[i] << " " << input[length-i-1] << endl;
    if(input[i] != input[length-i-1]){
      return false;
    }
  }
  return true;
}

int main()
{
  int answer = -1;
  for(int i=999; i>100; i--){
    for(int j=999; j>i; j--){
      if(i*j < answer)
        break;
      if(isPalindrome(i*j)){
        answer = max(answer,i*j);
      }
    }
  }
  cout << answer << endl;
}

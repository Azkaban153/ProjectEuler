// Help from https://www.geeksforgeeks.org/writing-power-function-for-large-numbers/

#include<bits/stdc++.h>
using namespace std;

int multiply(int base, int result[], int result_size){
  int carry = 0;

  for(int i=0; i<result_size; i++){
    int product = result[i]*base + carry;
    result[i] = product%10;
    carry = product/10;
  }

  while(carry){
    result[result_size] = carry%10;
    carry /= 10;
    result_size++;
  }

  return result_size;
}

void power(int base, int exponent){

  if(exponent == 0){
    cout << 1 << endl;
  }

  int answer = 0;
  int MAX = 1'000;
  int result[MAX];
  int result_size = 0;
  int temp = base;

  while(temp != 0){
    result[result_size++] = temp%10;
    temp /= 10;
  }

  for(int i=0; i<exponent-1; i++){
    result_size = multiply(base,result,result_size);
  }

  for(int i=result_size-1; i>=0 ; i--){
    answer += result[i];
    cout << result[i];
  }

  cout << endl << answer << endl;
}

int main()
{
  power(2,1000);
  return 0;
}

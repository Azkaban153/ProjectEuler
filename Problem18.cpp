#include<bits/stdc++.h>
using namespace std;

int main()
{
  int answer = 0, divCount = 1, temp;
  vector<string> ones = {"one","two","three","four","five","six","seven","eight","nine"};
  vector<string> teens = {"eleven","twelve","thirteen","fourteen","fifteen"
  ,"sixteen","seventeen","eighteen","nineteen"};
  vector<string> tens = {"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
  string And = "and";
  string hundred = "hundred";
  string thousand = "thousand";

  for(int i=1; i<=1000 ; i++){
    divCount = 1;
    temp = i;

    while(temp){
      temp /= 10;
      if(temp != 0){
        divCount++;
      }
    }

    temp = i;

    if(divCount == 1){
      answer += ones[(temp%10)-1].length();
    }

    if(divCount == 2){
      int last = temp%10;
      temp /= 10;
      int first = temp%10;
      temp /= 10;
      if(first == 1){
        if(last == 0){
          answer += tens[0].length();
        } else {
          answer += teens[last-1].length();
        }
      } else {
        answer += ( tens[first-1].length() + ones[last-1].length() );
      }
    }

    if(divCount == 3){
      int last = temp%10;
      temp = temp/10;
      int mid = temp%10;
      temp /= 10;
      int first = temp%10;
      if(mid == 0 && last == 0){
        answer += ( ones[first-1].length() + hundred.length() + tens[mid-1].length() + ones[last-1].length());
      } else if(mid == 1 && last != 0){
        answer += (ones[first-1].length() + hundred.length() + And.length() + teens[last-1].length());
      } else {
        answer += ( ones[first-1].length() + hundred.length() + And.length() + tens[mid-1].length() + ones[last-1].length());
      }
    }

    if(divCount == 4){
      answer += (ones[0].length() + thousand.length());
    }

  }
  cout << answer << endl;
}

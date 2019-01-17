#include<bits/stdc++.h>
using namespace std;

int main()
{
  for(int i=1; i<=1000; i++){
    for(int j=i; j<1000; j++){
      int temp = 1000 - j - i;
      if(i*i + j*j == temp*temp){
        cout << i << " " << j << " " << temp << endl;
        cout << i*j*temp << endl;
        break;
      }
    }
  }
}

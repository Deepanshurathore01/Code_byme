#include<bits/stdc++.h>
using namespace std;

// chek wether a number is power of two or not 
bool isPowerTwo(int num){
  if(num<=0) return false;
  while(num>1){
    if((num & 1) !=0){
      return false;
    }
    num>>=1;
  }
  return true;
}


bool isPower2(int num){
  return (num >0) && ((num &(num -1))==0);
}

// inbuit method
bool isPower3(int num){
  return (num >0) && (__builtin_popcount(num) ==1);
}

int main(){
  int n=4;
  cout<<isPower3(n)<<endl;
  return 0;
}
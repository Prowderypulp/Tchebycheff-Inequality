#include<iostream>
using namespace std;
bool isPrime(int x){
  int y;
  for(int i = 2; i < x; i++){
    if(x%i != 0){
    //cout << "Computing" << endl;
    y = y + 1;
    }
    else{
      return false;
      break;
    }
  }
  if(y == (x-2)){
    return true;
  }
}
int main(){
  int i = 8;
  int m, n = 0;
  while(true){
    //int i = 8;
    for(int j = 2; j<i; j++){
      if(isPrime(j) == true){
        if((j-1)%4 == 0){
          m = m + 1;
        }
        else if((j-3)%4 == 0){
          n = n + 1;
        }
        else{
          //continue;
        }

      }
    }
    if(m > n){
      cout << m << endl;
      break;

    }
    i = i + 1;


  }
}

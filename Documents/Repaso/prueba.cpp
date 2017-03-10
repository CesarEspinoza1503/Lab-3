#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  string num;
  cin>>num;
  int temp = num[0];
  for (int i = 0; i < num.length(); i++) {
    num[i]= num[i+1];
  }
  num[num.length()-1]=temp;
  cout<<num;
  cout<<endl;


  return 0;
}

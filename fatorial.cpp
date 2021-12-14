

#include <iostream>

using namespace std;

int main()
{
  int num, contador, fat, res=1;
  
  cout <<"um numero e descubra seu fatorial: ";
  cin >>num;
  for(contador=1;contador<=num;contador++)
{
  res*=contador;
   
    
}
  cout<< "o fatorial de : " <<num <<" é : " <<res;
}

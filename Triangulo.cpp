

#include <iostream>

using namespace std;

int main()
{
  int limite, contador, num;
  
  cout <<"digite um limite: ";
  cin >>limite;
  for(contador=1;contador<=limite;contador++)
{
    cout <<"\n";
    for(num=1;num<=contador;num++)
    {
        cout <<"*";
    }
}
  
}

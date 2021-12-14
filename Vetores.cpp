
#include <iostream>

using namespace std;

int main()
{
    string nomes[5];
    int indice;
    for (indice=0;indice<=4;indice++)
    {
        cout <<"Informe o nome do "<<indice+1<<"o. aluno: ";
        cin >>(nomes[indice]);
    }
    for (indice=0;indice<=4;indice++)
    {
        cout <<nomes[indice]<<"\n";
    }
    
}

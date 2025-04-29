#include <iostream>
#include <cmath>
#include <string>
#include <conio.h>
#include <vector>

using namespace std;

// Declaran Funciones
vector<int> MyFunc(int n);
void Mostrar(vector<int> v);

// Programa Principal
int main(int argc, char const *argv[])
{
  int n;
  vector<int> numeros;
  cout << "\nIngresa el tamanio del vector: ";
  cin >> n;
  numeros = MyFunc(n);
  Mostrar(numeros);
  getch();
  return 0;
}

// Funciones
vector<int> MyFunc(int n)
{
  vector<int> tmp;
  int x;
  cout << "\n";
  for (int i = 0; i < n; i++)
  {
    cout << "Ingresa el valor " << i + 1 << " :  ";
    cin >> x;
    tmp.push_back(x);
  }
  return tmp;
}

void Mostrar(vector<int> v)
{
  cout << "\nValores del Vector:\n";
  for (int i = 0; i < v.size(); i++)
  {
    cout << "Valor " << i + 1 << " : " << v[i] << "\n";
  }
}
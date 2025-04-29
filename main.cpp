#include <iostream>
#include <cmath>
#include <string>
#include <conio.h>

using namespace std;

int MyFunc(int x);

int main(int argc, char const *argv[])
{
  int rep = 0;
  cout << "\nIngresa el # de repeticiones: ";
  cin >> rep;
  MyFunc(rep);
  getch();
  return 0;
}

int MyFunc(int x)
{
  cout << "\n";
  for (int i = 0; i <= x; i++)
  {
    cout << " N " << i << " --> " << pow(i, 2) << "\n";
  }  
  cout << "\n";
  return 0;
}
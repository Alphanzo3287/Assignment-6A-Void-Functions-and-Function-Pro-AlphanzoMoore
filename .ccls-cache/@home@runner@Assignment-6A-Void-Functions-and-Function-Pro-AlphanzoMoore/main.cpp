   //Alphanzo Moore
   //CIS-5 Online
   //Sept 28, 2023
   //Assignment 6A: Void Functions and Function Prototypes

#include <iostream>
using namespace std;

void displayHello();
void displayGoobye();

int main() 
{
    int num =10;
  for (int i = 1; i <= num; i++)
    {   
      cout << i << ": ";
        displayHello();
    }
  system("pause");
  return 0;
}

void displayHello() 
{
  cout << "Hello \n";
  displayGoobye();
}
void displayGoobye()
{
  cout << "Goodbye \n";
}
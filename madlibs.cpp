#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  string color, pluralNoun, celebrity;
  
  cout << "Enter a color: ";
  getLine(cin, color);
  cout << "Enter a Plural Noun";
  getLine(cin, pluralNoun);
  cout << "Enter a Celebrity";
  getLine(cin, celebrity);
  
  
  cout << "Roses are " << color << endl;
  cout << pluralNoun << " are blue" << endl;
  cout << "I love " << celebrity << endl;

}

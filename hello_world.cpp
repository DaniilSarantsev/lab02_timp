#include <iostream>
#include <string>


int
main()
{
  string name; //name of user
  cout << "Name: "; 
  std::cin >> name; //enter a name of user
  cout << "Hello, World from " << name << endl;
}

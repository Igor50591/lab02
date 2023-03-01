#include <iostream>
#include <string>

int main(){
std::string name; // Declaring a string with a name (@name)
std::cout << "Enter name>> "; // Name request output (@name)
std::cin >> name; // Getting a name (@name) from the keyboard
std::cout << "Hello world from " << name <<"!"; // Printing the Hello world from @name message
return  0;
}

#include <iostream>
#include <string>

int main(){
std::string name; // Объявление строки с именем (@name)
std::cout << "Enter name>> "; // Вывод запроса имени (@name)
std::cin >> name; // Получение имени (@name) с клавиатуры 
std::cout << "Hello world from " << name <<"!"; //Печать сообщения Hello world from @name 
return 0;
}

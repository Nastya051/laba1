#include <string>
#include <iostream>
#include "Exception.hpp"

using namespace std;

//класс route
class Route{
	/*геттеры и сеттеры*/
public:
	string& _start();
	string& _end();
	string& _number();
private:
	string start;//начальный пункт
	string end;//конечный пункт
	string number;//номер маршрута
	/*Констуркторы и деструкторы*/
public:
	Route();
	Route(const Route& r);
	~Route();
	
};
#include <string>
#include <iostream>
#include "Exception.hpp"

using namespace std;

//����� route
class Route{
	/*������� � �������*/
public:
	string& _start();
	string& _end();
	string& _number();
private:
	string start;//��������� �����
	string end;//�������� �����
	string number;//����� ��������
	/*������������ � �����������*/
public:
	Route();
	Route(const Route& r);
	~Route();
	
};
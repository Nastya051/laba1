#include "Route.hpp"
#include <cstdlib>

using namespace std;

//����������
int cmp(const void *a, const void *b){
	return ((Route*)a)->_number() > ((Route*)b)->_number();
}

int main(){
	const int size = 8;//������
	setlocale(LC_ALL, "");
	Route routes[size];//������ ������
	int choice;
	while(true){
		 cout << "\n1. �������\n2. �����\n3. �����\n_ ";
		 cin >> choice;
		 if(choice == 1){
			 cout << "������ ����� �����\n";
			 try{
				 //��������� ������
				for(int i = 0; i < size; ++i){
				   cout << "������ ����� �����\n";
				   cin >> routes[i]._start() >> routes[i]._end() >> routes[i]._number();
				}
				/*���������*/
				qsort(routes, size, sizeof(Route), cmp);
			 }
			 catch(const Exception& e){
				cout << "\n" << e.what();
			 }
		 }
		 else if(choice == 2){
			 cout << "������� ��������: ";
			 string name;
			 cin >> name;
			 int i;
			 for(i = 0; i < size; ++i){
				if(routes[i]._end() == name || routes[i]._start() == name){
					cout << "\n" << routes[i]._start() << ' ' << 
						routes[i]._end() << ' ' << routes[i]._number();
				}
			 }
			 if(i > size){
				cout << "�� �������";
			 }
		 }
		 else if(choice == 3){
			 return 0;
		 }
	}
}
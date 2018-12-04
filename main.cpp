#include "Route.hpp"
#include <cstdlib>


using namespace std;

//компаратор
int cmp(const void *a, const void *b){
	return ((Route*)a)->_number() > ((Route*)b)->_number();
}

int main(){
	const int size = 8;//размер
	setlocale(LC_ALL, "");
	Route routes[size];//массив знаков
	int choice;
	while(true){
		 cout << "\n1. Считать\n2. Поиск\n3. Выход\n_ ";
		 cin >> choice;
		 if(choice == 1){
			 cout << "Начало Конец Номер\n";
			 try{
				 //считываем данные
				for(int i = 0; i < size; ++i){
				   cout << "Начало Конец Номер\n";
				   cin >> routes[i]._start() >> routes[i]._end() >> routes[i]._number();
				}
				/*Сортируем*/
				qsort(routes, size, sizeof(Route), cmp);
			 }
			 catch(const Exception& e){
				cout << "\n" << e.what();
			 }
		 }
		 else if(choice == 2){
			 cout << "Введите название: ";
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
				cout << "Не найдено";
			 }
		 }
		 else if(choice == 3){
			 return 0;
		 }
	}
}
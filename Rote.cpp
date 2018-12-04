#include "Route.hpp"

//public:
string& Route::_start(){ return start;}
string& Route::_end(){ return end; }
string& Route::_number(){ return number; }
Route::Route(){ cout << "\nКонструктор"; }
Route::Route(const Route& r):start(r.start), end(r.end), number(r.number){ cout << "\nКонструктор копирования";}
Route::~Route(){ cout << "\nДеструктор"; }
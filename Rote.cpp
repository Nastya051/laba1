#include "Route.hpp"

//public:
string& Route::_start(){ return start;}
string& Route::_end(){ return end; }
string& Route::_number(){ return number; }
Route::Route(){ cout << "\n�����������"; }
Route::Route(const Route& r):start(r.start), end(r.end), number(r.number){ cout << "\n����������� �����������";}
Route::~Route(){ cout << "\n����������"; }
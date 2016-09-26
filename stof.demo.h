//#include"stof.h"
#include"strlib.h"
#include<iostream>
#include<iomanip>

using namespace std;

int demo_stof()
{
	string s = "1.2383279e-03";
	cout.setf( ios::scientific );
	int prec = 24, w = prec + 10;
	cout.precision( prec );
	cout << "s : " << setw(w) << s << endl;
	cout << "f : " << setw(w) << strlib_stof<float>( s ) << " Float" << endl;
	cout << "f : " << setw(w) << strlib_stof<double>( s ) << " Double" << endl;
	cout << "f : " << setw(w) << strlib_stof<long double>( s ) << " LDouble" << endl;
	return 0;
}

int main()
{
	return demo_stof();
}

#ifndef __STOI_HPP__
#define __STOI_HPP__
#include"strlib.h"

int strlib_stoi( char const * s, int base ){ return strlib_stoi( s, strlen( s ), base ); }
int strlib_stoi( std::string const & s, int base ) { return strlib_stoi( s.c_str(), s.size(), base ); }

int strlib_ctoi(int c)
{
	if( c >= int('a') && c <= int('z') )
		return c - int('a') + 10;
	else if( c >= int('A') && c <= int('Z') )
		return c - ('A') + 10;
	else if( c >= int('0') && c <= int('9') )
		return c - int('0');
	else return -1;
}

int strlib_stoi(char const * s, int size, int base )
{
	int value = 0;
	for(int i = 0; i < size; ++i)
	{
		value *= base;
		value += strlib_ctoi( s[i] );
	}
	return value;
}

#endif//__STOI_HPP__

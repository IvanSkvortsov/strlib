#ifndef __STRTOK_HPP__
#define __STRTOK_HPP__
#include"strlib.h"

// split std::string variable into words :
// delimiter " \t{},=;!()+:.[]"
void strlib_strtok( std::vector<std::string>& v, std::string const & s, char const * delim )
{
	v.clear();
	std::string str = s;
	char * buf = &str[0], * pch;
	pch = strtok(buf, (char *)delim);
	while(pch != 0 )
	{
		v.push_back(pch);
		pch = strtok(0, (char *)delim );
	}
}

// split std::string variable into words :
// number of words == n
void strlib_strtok( std::vector<std::string>& vs, std::string const & s, int n, char const * delim)
{
	std::string str = s;
	char * buf = &str[0], * pch;
	vs.clear();
	vs.reserve( n );
	pch = strtok(buf, (char *)delim);
	vs.push_back( pch );
	for(int i = 1; i < n; ++i)
	{
		pch = strtok(0 ,(char *)delim);
		if( pch == 0 ) break;
		vs.push_back( pch );
	}
}

#endif//__STRTOK_HPP__

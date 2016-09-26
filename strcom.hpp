#ifndef __STRLIB_STRCOM_HPP__
#define __STRLIB_STRCOM_HPP__
#include"strlib.h"

// comments:
//
// # - Bash
// % - LaTeX
// # - Maple
// ! - Molpro
std::string strlib_cut_comment( std::string const & s, const char com)
{
	for(int i = 0; i < s.size(); ++i)
	{
		if(s[i] != com) continue;
		else if( i == 0 )
			return "";
		else return s.substr(0,i);
	}
	return s;
}

bool strlib_is_comment( const std::string & str, const char com)
{
	int n = str.find_first_not_of(" \t");
	if( n == -1)
		return false;// didn't find not of " \t" -> 'empty line'
	if( str[n] == com )
		return true;
	else return false;
}

#endif//__STRLIB_STRCOM_HPP__

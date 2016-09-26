#ifndef __STOF_HPP__
#define __STOF_HPP__
#include"strlib.h"

template<typename T> void strlib_stof( const char * str, T & value ){ value = atof( str ); }
template<typename T> void strlib_stof( std::string const & str, T & value ){ strlib_stof<T>( str.c_str(), value ); }
template<typename T> T strlib_stof( std::string const & str ){ return strlib_stof<T>( str.c_str() ); }
template<typename T> T strlib_stof( const char *  str )
{
	T value;
	strlib_stof<T>( str, value );
	return value;
}

#define __STRLIB_STOF_SPEC( float_type )\
template void strlib_stof<float_type>( std::string const & str, float_type & value );\
template float_type strlib_stof<float_type>( const char * str );\
template float_type strlib_stof<float_type>( std::string const & str );

#endif//__STOF_HPP__

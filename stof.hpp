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

template void strlib_stof<float>( const char * str, float & value );
template void strlib_stof<double>( const char * str, double & value );
template<> __STRLIB_INLINE void strlib_stof<long double>( const char * str, long double & value ){ value = strtold( str, (char **)0 ); }
__STRLIB_STOF_SPEC( float );
__STRLIB_STOF_SPEC( double );
__STRLIB_STOF_SPEC( long double );

#endif//__STOF_HPP__

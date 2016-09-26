#include"strlib.hpp"
template void strlib_stof<float>( const char * str, float & value );
template void strlib_stof<double>( const char * str, double & value );
template<> __STRLIB_INLINE void strlib_stof<long double>( const char * str, long double & value ){ value = strtold( str, (char **)0 ); }
__STRLIB_STOF_SPEC( float );
__STRLIB_STOF_SPEC( double );
__STRLIB_STOF_SPEC( long double );


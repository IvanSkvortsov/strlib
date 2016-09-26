#ifndef __STRLIB_H__
#define __STRLIB_H__

#include<cstring>// strtok, strlen
#include<cstdlib>// atof, strtold
#include<string>
#include<vector>

#define __STRLIB_INLINE

// 'strtok.h'
__STRLIB_INLINE void strlib_str2tok( std::vector<std::string> & v, std::string const & s, char const delim[] = "{}()[],;.:+!\t " );
__STRLIB_INLINE void strlib_str2tok( std::vector<std::string> & v, std::string const & s, int n, char const delim[] = "{}()[],;.:+!\t " );
// 'stof.h'
template<typename T> __STRLIB_INLINE void strlib_stof( const char * str, T & value );
template<typename T> __STRLIB_INLINE void strlib_stof( std::string const & str, T & value );
template<typename T> __STRLIB_INLINE T strlib_stof( const char *  str );
template<typename T> __STRLIB_INLINE T strlib_stof( std::string const & str );
// 'stoi.h'
__STRLIB_INLINE int strlib_ctoi(int c);
__STRLIB_INLINE int strlib_stoi( char const * s, int size, int base );
__STRLIB_INLINE int strlib_stoi( char const * s, int base = 10 );
__STRLIB_INLINE int strlib_stoi( std::string const & s, int base = 10 );
// 'strcom.h'
__STRLIB_INLINE bool strlib_is_comment(const std::string &, const char);
__STRLIB_INLINE std::string strlib_cut_comment(const std::string &, const char);

#endif//__STRLIB_H__

/****************************************
*   global functions
****************************************/

#ifndef JADE_FUNCTIONS_HPP
#define JADE_FUNCTIONS_HPP

#include "jade_common.hpp"

std::ostream& vform( std::ostream& os, const char* fmt, va_list ap)
{
	const int MAX = 1 << 12;
	char buf[ MAX + 1 ];
	vsprintf( buf, fmt, ap );
	va_end(ap);
	return os << buf;
}

std::ostream& form( std::ostream& os, const char* fmt, ... )
{
	va_list ap;
	va_start( ap, fmt );
	vform(os, fmt, ap );
	va_end(ap);
	return os;
}

#endif // JADE_FUNCTIONS_HPP

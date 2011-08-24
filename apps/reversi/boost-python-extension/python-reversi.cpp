#include <boost/python.hpp>
#include "../for_engine_main.cpp"
using namespace boost::python;

char buf[200];

const char * reversi_server(const char *state)
{
	strcpy(buf, state);
	deal(buf);
	return buf;
}

BOOST_PYTHON_MODULE(reversi)
{
	def("server", reversi_server);
}
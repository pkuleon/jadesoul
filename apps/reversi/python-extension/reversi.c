#include "Python.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define BUFSIZE 100

extern "C" {
	#include "../for_engine_main.cpp"
}

// char* reverse(char* s){
	// register char t, *p = s, *q = (s + (strlen(s) - 1));
	// while (p < q){
		// t = *p;
		// *p++ = *q;
		// *q-- = t;
	// }
	// return s;
// }

static PyObject* reversi_server(PyObject* self, PyObject* args){
	const char* orig_str;
	char* dupe_str;
	PyObject* retval;
	if (!PyArg_ParseTuple(args, "s", &orig_str))
		return NULL;
	dupe_str=deal(strdup(orig_str));
	retval = (PyObject*)Py_BuildValue("s", dupe_str);
	free(dupe_str);
	return retval;
}

static PyMethodDef reversi_methods[] = {
	{"server", reversi_server, METH_VARARGS},
	{NULL, NULL}
};

void initreversi(){
	Py_InitModule("reversi", reversi_methods);
}


#include <Python.h>
#include <stdio.h>

/**
 * print_python_bytes - prints basic info about python bytes objects
 * @p: pointer to PyObject
 */
void print_python_bytes(PyObject *p) {
	if (PyBytes_Check(p)) {
		Py_ssize_t size = PyBytes_Size(p);
		char *str = PyBytes_AsString(p);

		printf("[.] bytes object info\n");
		printf("  size: %zd\n", size);
		printf("  trying string: %s\n", str);
		printf("  first 10 bytes: ");
		for (Py_ssize_t i = 0; i < size && i < 10; i++) {
			printf("%02x ", (unsigned char)str[i]);
		}
		printf("\n");
	} else {
		printf("[ERROR] Invalid Bytes Object\n");
	}
}

/**
 * print_python_list - prints basic info about python lists object
 * @p: pointer to PyObject
 */
void print_python_list(PyObject *p) {
	if (PyList_Check(p)) {
		Py_ssize_t size = PyList_Size(p);

		printf("[*] Python list info\n");
		printf("[*] Size of the Python List = %zd\n", size);
		printf("[*] Allocated = %zd\n", ((PyListObject *)p)->allocated);
		for (Py_ssize_t i = 0; i < size; i++) {
			PyObject *item = PyList_GetItem(p, i);
			printf("Element %zd: ", i);
			if (PyBytes_Check(item)) {
				print_python_bytes(item);
			} else if (PyLong_Check(item)) {
				printf("int\n");
			} else if (PyFloat_Check(item)) {
				printf("float\n");
			} else if (PyTuple_Check(item)) {
				printf("tuple\n");
			} else if (PyList_Check(item)) {
				printf("list\n");
			} else if (PyUnicode_Check(item)) {
				printf("str\n");
			} else {
				printf("unknown\n");
			}
		}
	} else {
		printf("[ERROR] Invalid List Object\n");
	}
}

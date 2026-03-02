#include "util.h"

string convert(int array[DEFAULT_SIZE], int lenght) {
	string s = "";
	for (int index = 0; index < lenght; index++)
	{
		s += to_string(array[index]) + " ";
	}

	return s;
}

void init_rnd(int array[DEFAULT_SIZE], int length, int a, int b) {
	for (int i = 0; i < length; i++)
	{
		array[i] = rand() % (b - a + 1);
	}
}
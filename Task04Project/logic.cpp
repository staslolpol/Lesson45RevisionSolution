// Task 04 [The swap of extreme elements]
// Обмен экстремальных элементов
// 
// Дан вектор целочисленных значений. Необходимо спроектировать 
// и реализовать функцию, которая меняет экстремальные элементы 
// вектора местами. Если экстремальных элементов несколько, 
// то необходимо поменять первые найденные элементы.
#include "logic.h"

//int f = value;
//value = array[index];
//array[index] = value;

int max(int array[DEFAULT_SIZE], int lenght) {
	int index = 0;

	for (int i = 1; i < lenght; i++)
	{
		if (array[index] < array[i]) {
			index = i;
		}
	}
	return index;
}

int min(int array[DEFAULT_SIZE], int lenght) {	
	int index = 0;

	for (int i = 1; i < lenght; i++)
	{
		if (array[index] > array[i]) {
			index = i;
		}
	}
	return index;
}
void swap_extrem_elements(int array[DEFAULT_SIZE], int size) {
	int max_index = max(array, size);
	int min_index = min(array, size);

	int temp = array[max_index];

	array[max_index] = array[min_index];
	array[min_index] = temp;
}

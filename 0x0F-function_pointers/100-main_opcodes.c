/**
#include <stdio.h>
#include <stdlib.h>


  * main - print the name of this function
  * @argc: has the length of the arguments
  * @argv: has the arguments
  * Return: 0 to indicate a good working of the program
  

int main(int argc, char **argv)
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < atoi(argv[1]) - 1; i++)
*/
#include "function_pointers.h"

/**
 * array_iterator - blbalbal
 *@array: blabla
 *@size: bla
 *@action: blabla
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array && action)
for (i = 0; i < size; i++)
{
	action(array[i]);
}
}

#include "shell.h"

/**
 **_realloc_func -  Reallocates A Memory Block Using Malloc And Free
 *@ptr: Pointer
 *@old_size: Previous Size Of The Pointer
 *@new_size: New Size Of The Pointer

 *Return: Void Pointer Rellocated Memory
 */
void *_realloc_func(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *result;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	result = malloc(new_size);
	if (result == NULL)
		return (NULL);
	if (ptr == NULL)
	{
		fill_an_array_func(result, '\0', new_size);
		free(ptr);
	}
	else
	{
		_memcpy(result, ptr, old_size);
		free(ptr);
	}
	return (result);

}

/**
 * free_all_func - Free Array Of Char Pointer And Char Pointer
 * @cmd:Array Pointer
 * @line:Char Pointer
 *
 * Return: Void
 */
void free_all_func(char **cmd, char *line)
{
	free(cmd);
	free(line);
	cmd = NULL;
	line = NULL;
}

/**
 * _memcpy_func - Copy Byte From Source To Destination
 * @dest: Destination Pointer
 * @src: Source Pointer
 * @n: Size (How Much You Will Copy)
 *
 * Return: Void Pointer
 */
char *_memcpy_func(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

/**
 * fill_an_array_func - Fill An Array By Constant Byte
 * @a:Void Pointer
 * @el: Int
 * @len:Length Int
 *
 *Return: Void Pointer
 */
void *fill_an_array_func(void *a, int el, unsigned int len)
{
	char *p = a;
	unsigned int i = 0;

	while (i < len)
	{
		*p = el;
		p++;
		i++;
	}
	return (a);
}

/**
 * _calloc_func -  Allocates Memory For An Array, Using Malloc.
 * @size: Size
 *
 * Return: Void Pointer
 */
void *_calloc_func(unsigned int size)
{
	char *a;
	unsigned int i;

	if (size == 0)
	return (NULL);
	a = malloc(size);
	if (a == NULL)
	return (NULL);
	for (i = 0; i < size; i++)
	{
		a[i] = '\0';
	}
	return (a);
}

#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 *
 *
 */

typedef struct getFunc
{
	char *type;
	int (*f)(char *format, va_list)
}selector
/**
 * ACA TE DEJO COMO SE IMPLEMENTA LO DE ARRIBA que tiene que ir en algun achivo separado:
 *
 * selector a[] = {
 * {"%c" , funcion de char},
 * {"%d" , funcion de int},
 * {"%i" , idem arriba},
 * {"%s" , funcion de string},
 * {"%x" , funcion de hexa};
 * {"%lo_sque_sea_que_me_este_olvidando" ,funcion de lo que sea que me ete olvidando},
 * {NULL, NULL},
 * };
 * if (format[1] == ' 'printf || format [1] == '\0')--es el 1 porque el 0 es el "
 * return (NULL);
 * for (i = 0, a[i].type; i++) ----arriba tendria que haber un int i , jajajja)
 * {
 * if (format[1] == a[i],type[1]
 * return (a[i].f);
 * }
 * return (NULL);
 * }

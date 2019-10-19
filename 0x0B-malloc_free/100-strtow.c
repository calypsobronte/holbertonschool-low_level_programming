#include <stdlib.h>
#include <stdio.h>

/**
* **strtow - splits a string into words
*
* @str: string to split
* Return: pointer to array of strings, or NULL if fail
*/
char **strtow(char *str)
{
char **a;
int i, k, n, cont = 0, len = 0, actual = 0;

if (str == NULL || *str == '\0')
return (NULL);
for (i = 0; *(str + i) != '\0'; i++)
{
if (*(str + i) != ' ')
cont++;
while (*(str + i) != ' ' && *(str + i))
i++;
if (!*(str + i))
break;
}
if (cont == 0)
return (NULL);
a = malloc(sizeof(char *) * (cont + 1));
if (a == NULL)
return (NULL);
for (i = 0, k = i; actual < cont; i++, len = 0, k = i)
{
if (*(str + i) == ' ')
continue;
while (*(str + k) != ' ' && *(str + k++))
len++;
a[actual] = malloc(sizeof(char) * len + 1);
if (!a[actual])
{
while (actual-- >= 0)
free(a[actual]);
free(a);
return (NULL);
}
for (n = 0; i < k; i++, n++)
a[actual][n] = *(str + i);
a[actual++][n] = '\0';
}
a[cont] = NULL;
return (a);
}
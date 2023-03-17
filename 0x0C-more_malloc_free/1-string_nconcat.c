#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *string_nconcat-> function concatinates two strings @s1 and @s2.
 *@s1: string 1
 *@s2: string 2
 *@n: number of bytes from s2 to concatinate to s1.
 *
 *Return: pointer to resulting string s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *tmp;
	unsigned int i, j, s1Str_len = strlen(s1), s2Str_len = strlen(s2);

	if (n < s2Str_len){
		tmp = malloc(sizeof(char) * (s1Str_len + n + 1));}
	else{
		tmp = malloc(sizeof(char) * (s1Str_len + s2Str_len + n + 1));}
	if (!tmp){
		return (NULL);}
	i = 0;

	while (i < s1Str_len){
		tmp[i] = s1[i];
		i++;}
	j = 0;

	while (n < s2Str_len && i < (s1Str_len + n)){
		tmp[i++] = s2[j++];}
	while (n >= s2Str_len && i < (s1Str_len + s2Str_len)){
		tmp[i++] = s2[j++];}

	tmp[i] = '\0';

	return (tmp);
}

/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

char * get_SubString(char *str, int i, int j){
	if (str == NULL || i>j)
		return NULL;
	int ResLen = j - i + 1;
	int index;
	char* result = (char*)malloc(ResLen - 1);
	for (index = 0; index < ResLen; index++)
	{
		result[index] = str[i++];
	}
	result[index] = '\0';
	return result;
}

int isEqual(char* str1, char* str2, int len)
{
	int index;
	for (index = 0; index<len; index++)
	{
		if (str1[index] != str2[index])
			return 0;
	}
	return 1;
}

int count_word_in_str_way_1(char *str, char *word){
	int index = 0, wrdLen = 0;
	int before, after, count = 0;
	while (word[++wrdLen] != '\0')
	{
	}
	//printf("%d\n", wrdLen);
	before = 0;
	after = wrdLen - 1;
	while (str[after] != '\0')
	{
		//printf("%s\n", get_SubString(str,before,after));
		if (isEqual(word, get_SubString(str, before, after), wrdLen))
			count++;
		before++;
		after++;
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}


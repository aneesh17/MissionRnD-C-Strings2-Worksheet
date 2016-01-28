/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * getsub_string(char *str, int i, int j){
	if (str == NULL || i>j)
		return NULL;
	int ResLen = j - i + 1;
	int index;
	char* result = (char*)malloc(ResLen - 1);
	for (index = 0; index < ResLen; index++)
	{
		result[index] = str[i++];
	}
	result[index - 1] = '\0';
	return result;
}

char * get_last_word(char * str){
	int index = 0, before = 0, after = 0;
	while (str[index] != '\0')
	{
		if (str[index] != ' ' && after == 0)
			after = -1;
		if (str[index] == ' '&&str[index + 1] != ' ' && str[index + 1] != '\0')
		{
			before = index + 1;
			index++;
			while (str[index] != ' ' && str[index] != '\0')
			{
				index++;
			}
			after = index;
		}
		else
			index++;
	}
	if (after == -1)// && str[index-1]!=' ')
		after = index;
	char* res = getsub_string(str, before, after);
	return res;
	return NULL;
}

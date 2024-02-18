#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>


size_t my_strlen(const char* s)
{
	size_t count = 0;
	for (int i = 0; s[i]; i++)
	{
		count++;
	}
	return count;
}

char* my_strcpy(char* to, char* from)
{
	size_t i = 0;
	for (i = 0; from[i]; i++)
	{
		to[i] = from[i];
	}
	to[i] = '\0';
	return to;
}

int my_strcmp(const char* s1, const char* s2)
{
	
	int i = 0;
	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] != s2[i])
		{
			return s1[i] - s2[i];
		}
	}
	return s1[i] - s2[i];
}

#include <stdio.h>
#include <string.h>
char* my_strcat(char* to, char* from)
{
	size_t i = strlen(to);
	strcpy(&to[i], from);
	return to;
}

#include <stdio.h>

char* my_strstr(const char* haystack, const char* needle) {
	while (*haystack != '\0') {
		const char* h = haystack;
		const char* n = needle;

		while (*h && *n && (*h == *n)) {
			h++;
			n++;
		}

		if (*n == '\0') {
			return (char*)haystack;
		}

		haystack++;
	}

	return NULL;
}

int main()
{
	const char* haystack = "I love bit";
	const char* needle = "bit";

	char* result = strstr(haystack, needle);
	if (result != NULL) {
		printf("找到了在: %d\n", (int)(result - haystack));
	}
	else {
		printf("没找到\n");
	}

	return 0;
}

int main2()
{
	char s[20] = "I love";
	char t[20] = " bit";
	my_strcat(s, t);
	printf("%s", s);
	return 0;
}

int main1()
{
	/*printf("%zd\n", my_strlen("bit"));
	printf("%zd\n", my_strlen("I love bit"));*/
	/*char a[] = "I love bit";
	char s[20];
	my_strcpy(s, a);
	printf("%s", s);*/

	char a[] = "bit";
	char b[] = "bit";
	char c[] = "bitsss";
	char d[] = "bitss";
	printf("%d\n", my_strcmp(a, b));
	printf("%d\n", my_strcmp(c, d));
	printf("%d\n", strcmp(a, b));
	printf("%d\n", strcmp(c, d));
	return 0;
}
#ifndef STRING_H
#define STRING_H

typedef struct STRINGS {
	char *data;
	int length;
} string;

string NewString(char *data);
int Len(char *data);
int IndexOf(char *data, char rexp);
int LastIndexOf(char *data, char rexp);
char* Substring(char *data, int start, int end);


#endif

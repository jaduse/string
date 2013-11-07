#ifndef STRING_H
#define STRING_H

typedef struct STRINGS {
	char *data;
	int length;
} string;

string NewString(char *data);
void EditString(string *data, char *new_data);
int StrLen(char *data);
int StrIndexOf(char *data, char rexp);
int StrLastIndexOf(char *data, char rexp);
char* StrSubstring(char *data, int start, int end);
void StrReplace(char *data, char old_rexp, char new_rexp);

#endif

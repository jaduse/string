#ifndef STRING_H
#define STRING_H
#define STR_NULL "\0"
typedef struct STRINGS {
	char *data;
	int length;
} string;

string NewString();
void StrSetdata(string *data, char *str);
int StrLen(char *data);
int StrIndexOf(char *data, char rexp);
int StrLastIndexOf(char *data, char rexp);
char* StrSubstring(char *data, int start, int end);
void StrReplace(char *data, char old_rexp, char new_rexp);
void StrFree(string *data);
#endif

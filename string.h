#ifndef STRING_H
#define STRING_H
#define STR_NULL "\0"
typedef struct STRINGS {
	char *data;
	int length;	
} string;

string NewString();
int StrSetdata(string *data, char *str);
int StrLen(char *data);
int StrIndexOf(char *data, char rexp, int start);
int StrLastIndexOf(char *data, char rexp);
char* StrSubstring(char *data, int start, int end);
char** StrSplit(char *data, char rexp, int *out_size);
void StrReplace(char *data, char old_rexp, char new_rexp);
void StrFree(string *data);
int StrCompare(char *first, char *second);
#endif

/******************************************/
/* Implementation of standard String and  */
/* string functions in C                  */
/* jadus (c) 2013                         */
/******************************************/

#include <stddef.h>
#include "string.h"

string NewString();
void StrSetdata(string *data, char *new_data);
int StrLen(char *data);
int StrIndexOf(char *data, char rexp);
int StrLastIndexOf(char *data, char rexp);
char* StrSubstring(char *data, int start, int end);
void StrReplace(char *data, char old_rexp, char new_rexp);

string NewString() {
	string str;
	str.data = STR_NULL;
	str.length = -1;
	return str;        
       
}

void StrSetdata(string *data, char *str) {
	size_t size = StrLen(str) * 1024;
	data->data = malloc(size);
	snprintf(data->data, size, str);
	data->length = StrLen(str);
}

int StrLen(char *data) {
	char i;
	int len=0;
	while((i = *(data + len)) != '\0') {
		len++;        
	}
	return len;        
        
}


int StrIndexOf(char *data, char rexp) {
	int index=-1;
	int i = 0;
	char *c;
	for(c = data; *c; c++) {
		if(*c == rexp) {
			index = i;
			break;
		}
	i++;                
	}
	return index;
        

}

int StrLastIndexOf(char *data, char rexp) {
	int index=-1;
	int i = 0;
	char *c;
	for(c = data; *c; c++) {
		if(*c == rexp) {
			index = i;
		}
	i++;                        
	}
	return index;
        

}

char* StrSubstring(char *data, int start, int end) {
	int i = end - start;
	char *new = malloc(i * 1024);
	if(i>=0) {
		memcpy(new, &data[start], i);
			return new;
        }
		else
        	return NULL;
}

void StrReplace(char *data, char old_rexp, char new_rexp) {        
	char *i;
	for(i=data;*i; i++) {
	if(*i == old_rexp)
		*i = new_rexp;
	}
        
}


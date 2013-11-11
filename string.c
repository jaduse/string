/******************************************/
/* Implementation of standard String and  */
/* string functions in C                  */
/* jadus (c) 2013 - release version 0.1   */
/******************************************/

#include <stddef.h>
#include "string.h"

string NewString();
int StrSetdata(string *data, char *new_data);
int StrLen(char *data);
int StrIndexOf(char *data, char rexp);
int StrLastIndexOf(char *data, char rexp);
char* StrSubstring(char *data, int start, int end);
void StrReplace(char *data, char old_rexp, char new_rexp);
void StrFree(string *data);

string NewString() {
	string str;
	str.data = STR_NULL;
	str.length = -1;
	return str;        
       
}

int StrSetdata(string *data, char *str) {
	size_t size = StrLen(str);
	if((data->data = (char *)malloc(size)) == NULL)
		return 0;
	snprintf(data->data, size, str);
	data->length = size;
	return 1;
}

int StrLen(char *data) {
	int len;
	for(len = 0; *(data + len) != '\0'; len++);	    
	return len;        
        
}


int StrIndexOf(char *data, char rexp) {
	int i = 0;
	char *c;
	for(c = data; *c != rexp && *c; c++, i++);	
	if(i < StrLen(data))
		return i;
	
	return -1;
        
}

int StrLastIndexOf(char *data, char rexp) {
	int index=-1;
	int i = 0;
	char *c;
	for(c = data; *c; c++,i++) {
		if(*c == rexp)
			index = i;                          
	}
	return index;
        

}

char* StrSubstring(char *data, int start, int end) {
	int i = end - start;
	char *new = malloc(i);
	if(i>=0) {
		memcpy(new, &data[start], i);
		return new;
	}
	else
		return STR_NULL;
}

void StrReplace(char *data, char old_rexp, char new_rexp) {        
	char *i;
	for(i=data;*i; i++) {
		if(*i == old_rexp)
			*i = new_rexp;
	}        
}

void StrFree(string *data) {
	if(data->data) {
		free(data->data);
		data->length = -1;
	}
}

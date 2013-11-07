/******************************************/
/* Implementation of standard String      */
/* functions in C 						  */
/* jadus (c) 2013						  */
/******************************************/


#include "string.h"

string NewString(char *data);
void EditString(string *data, char *new_data);
int StrLen(char *data);
int StrIndexOf(char *data, char rexp);
int StrLastIndexOf(char *data, char rexp);
char* StrSubstring(char *data, int start, int end);
void StrReplace(char *data, char old_rexp, char new_rexp);

string NewString(char *data) {
	string str;
	str.data = malloc(sizeof(char) * 1024);
	snprintf(str.data, sizeof(char) * 1024 , data);
	str.length = StrLen(data);
	return str;	
	
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
	char *new = malloc(sizeof(char) * 1024);
	int i = end - start;
	if(i>0) {
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

void EditString(string *data, char *new_data) {
	data->data = new_data;
} 

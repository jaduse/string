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
	str.data = data;
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
	int i;
	char c;
	for(i = 0; i < StrLen(data); i++) {
		if(*(data+i) == rexp) {
			index = i;
			break;
		}
			
		
	}
	return index;
	

}

int StrLastIndexOf(char *data, char rexp) {
	int index=-1;
	int i;
	char c;
	for(i = 0; i < StrLen(data); i++) {
		if(*(data+i) == rexp) {
			index = i;
			
		}
			
		
	}
	return index;
	

}

char* StrSubstring(char *data, int start, int end) {
	char *new = malloc(sizeof(char) * 1024);
	char temp[end - start+1];
	int i;
	int in = 0;
	for(i = start; i <= end; i++) {
		temp[in] = *(data + i); 
		in++;
		
	}	
	snprintf(new, (end - start + 2)*sizeof(char), "%s", temp);
	return new;
}

char *StrReplace(char *data, char old_rexp, char new_rexp) {	
	char temp[StrLen(data)];
	char *new = malloc(StrLen(data) * sizeof(char));
	int i;
	for(i=0;i < StrLen(data); i++) {
		if(*(data + i) == old_rexp)
			temp[i] = new_rexp;
		else
			temp[i] = *(data+i);
	}
	
	snprintf(new, StrLen(data) * sizeof(char) + 1, "%s",temp);
	return new;
}

void EditString(string *data, char *new_data) {
	data->data = new_data;	
} 

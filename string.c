/******************************************/
/* Implementation of standart String      */
/* functions in C 						  */
/* jadus (c) 2013						  */
/******************************************/


#include "string.h"

string NewString(char *data);
int Len(char *data);
int IndexOf(char *data, char rexp);
int LastIndexOf(char *data, char rexp);
char *Substring(char *data, int start, int end);

string NewString(char *data) {
	string str;
	str.data = data;
	str.length = Len(data);
	return str;	
	
}

int Len(char *data) {
	char i;
	int len=0;
	while((i = *(data + len)) != '\n') {
		len++;	
	} 
	return len-3;	
	
}
int IndexOf(char *data, char rexp) {
	int index=-1;
	int i;
	char c;
	for(i = 0; i < Len(data); i++) {
		if(*(data+i) == rexp) {
			index = i;
			break;
		}
			
		
	}
	return index;
	

}

int LastIndexOf(char *data, char rexp) {
	int index=-1;
	int i;
	char c;
	for(i = 0; i < Len(data); i++) {
		if(*(data+i) == rexp) {
			index = i;
			
		}
			
		
	}
	return index;
	

}

char* Substring(char *data, int start, int end) {
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

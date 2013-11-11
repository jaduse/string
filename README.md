Documentation:

string NewString()
	returns empty string with length -1
	Usage: 
		```c
		string test = NewString();
		```

int StrSetdata(string *data, char *str)
	writes char* into string data
	returns 1 on success and 0 on fail to allocate memory
	Usage: 
		```c
		result = StrSetdata(data, „Stuff...“);
		```

int StrLen(char *data) 
	returns length of char array *data
	Usage: 
		```c		
		result = StrLen(data);
		```

StrIndexOf(char *data, char rexp)
	returns first index of character (rexp)
	Usage: 
		```c
		index = StrIndexOf(data, 'A');
		```
int StrLastIndexOf(char *data, char rexp)
	returns last index of character (rexp)
	Usage: 
		```c
		index = StrLastIndexOf(data, 'A');
		```
char* StrSubstring(char *data, int start, int end)
	returns new char array, filled by characters from char array *data from start index to end 	index or return empty string represented by STR_NULL which is character '\0'
	Usage: 
		```c
		new = StrSubstring(data, 1, 6);
		```
void StrReplace(char *data, char old_rexp, char new_rexp)
	replace old_rexp characters with new_rexp cahracters
	Usage: 
		```c
		StrReplace(data, 'y', 'i');
		```
void StrFree(string data) 
	remove content of char array *data in structure string from heap and set length of string to -1
	Usage: 
		```c
		StrFree(data);
		```
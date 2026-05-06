/*
📌 1. String Utility Toolkit

**Description:** Build your own string functions like `strlen` and `strcpy`.

**Concepts:**

* Pointer traversal
* Null-terminated strings

**Features:**

* Custom string length
* String copy 

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int stringlen(char* s){
    int len = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        len++;
    }
    return len;
    
}

void stringcopy(char* dest,char* src){
    
    int i;
    for (i = 0; src[i] != '\0'; i++){
        dest[i] = src[i];
    }
    dest[i] = '\0';
}
    
    


int main() {


    char* s = "This is a string";
    printf("%s and its length is %d",s,stringlen(s));

    char* cpy = malloc(100);
    stringcopy(cpy,s);
    printf("\ncopy  ::  %s",cpy);
    return 0;
}
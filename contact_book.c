// 2. Contact Book

// **Description:** Store and manage contacts dynamically.

// **Concepts:**

// * Struct pointers
// * Dynamic arrays

// **Features:**

// * Add, delete, search contacts
// * Resize using `realloc`

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct
{
    char number[100];
    char name[100];
    char email[100];
} contact;

char* info(contact c){
    char* information = malloc(256);
    sprintf(information,"Name :%s\n✉ %s\n✆ %s\n",c.name,c.email,c.number);
    return information;
}

contact search(char* name){
    
    char *file_path = malloc(256);
    sprintf(file_path, "contact_book_database/%s", name);
    FILE *file = fopen(file_path,"r");
    if (file == NULL)
    {
        printf("The contact does not exist\n");
        contact a = {NULL,NULL,NULL};
        return a;
    }
    else{
    contact c;
    fgets(c.name, sizeof(c.name), file);
    fgets(c.number, sizeof(c.number), file);
    fgets(c.email, sizeof(c.email), file);
        return c;
    }
}

int main() {
    int input;
    scanf("%d",input);
    while (input != 0)
    {
        printf("Select which operation you want to perform ::\n1.Search\n2.Add\n3.Delete\n0.Exit\n");
    }
    
    if (input == 1)
    {
        char* name_to_search;
        scanf("%s",&name_to_search);

        printf("%s",info(search(name_to_search)));
    }
    



    



    return 0;
}
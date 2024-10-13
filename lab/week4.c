#include<stdio.h>
#include<stdlib.h>
struct car {  	 	
    char model[50];  	 	
    int year; 
 	struct car *prev;  	 	
    struct car *next; 
}; 

void AddSorted (struct car **head, char model[], int year); {
    
}

void Delete (struct car **head, char model[], int year);{


}
int main() { 

    struct car *head = NULL; 
 
    AddSorted(&head, "Toyota", 2015); 
    AddSorted(&head, "Honda", 2018); 
    Delete(&head, "Toyota", 2015); 
     return 0; 
} 


/* lookuptable.c - coding a look-up-table in C
 * The Linux Channel
 * Author: Kiran Kankipati
 * Updated: 16-mar-2017
 */
 
#include <stdio.h>
#include <stdbool.h>

typedef struct __mytable_
{	int value;
	char name[50];
	bool enable;
} mytable_t;

#define MAX_ENTRIES 100
mytable_t mytable_array[MAX_ENTRIES];

bool init_mytable()
{	int i=0;
	for(i=0;i<MAX_ENTRIES;i++) { mytable_array[i].enable=false; }
}

void print_mytable()
{	int i=0;
	printf("mytable_array[] contents\n");
	for(i=0;i<MAX_ENTRIES;i++) { if(mytable_array[i].enable==true) printf("[%d] - value: %d\n", i, mytable_array[i].value); }
	printf("------------------------\n\n");
}

void add_item_mytable(int value)
{	int i=0;
	//check for duplicate ?
	for(i=0;i<MAX_ENTRIES;i++) { if(mytable_array[i].enable==true) { if(mytable_array[i].value==value) { return; } } }
	
	//add item
	for(i=0;i<MAX_ENTRIES;i++) { if(mytable_array[i].enable==false) { mytable_array[i].value=value; mytable_array[i].enable=true; return; } }
}

void del_item_mytable(int value)
{	int i=0;
	//check for match ?
	for(i=0;i<MAX_ENTRIES;i++) { if(mytable_array[i].enable==true) { if(mytable_array[i].value==value) { mytable_array[i].enable=false; return; } } }
}

int find_item_mytable(int value)
{	int i=0;
	//check for match ?
	for(i=0;i<MAX_ENTRIES;i++) { if(mytable_array[i].enable==true) { if(mytable_array[i].value==value) { return i; } } }
}

void main()
{
	init_mytable(); print_mytable();
	
	
	add_item_mytable(5); print_mytable();
	add_item_mytable(3); print_mytable();
	add_item_mytable(1); print_mytable();
	add_item_mytable(2); print_mytable();
	
	del_item_mytable(3); print_mytable();
	
	
	printf("value: %d is in position [%d]\n", 1, find_item_mytable(1));
	
	
}




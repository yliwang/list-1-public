#include <stdio.h>
#include <malloc.h>
#include <assert.h>

#include "list.h"

struct list *create_list()
{
    struct list *l = (struct list *)malloc( sizeof(struct list) );
    l->counter = 0; 
    return l;	
}

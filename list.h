#pragma once

#include "defs.h"

struct list {
	T ele[MAX_ELE];
	int counter;
};

struct list *create_list();
struct list *insert(struct list *l, int i, T e);
struct list *delete_at(struct list *l, int i);
int size( struct list *l );
T get( struct list *l, int i );
void replace( struct list *l, int i, T e );
int index( struct list *l, T e );

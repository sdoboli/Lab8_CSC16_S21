// THIS IS THE HEADER FILE 
// Contains all function declarations
#ifndef SEARCH_SORT
#define SEARCH_SORT

int  max_array(int [], int );
int min_array(int [], int);
void display_array(int [], int );
int init_array(int [], int ,string);
void swap(int &, int &);
void sort_bubble(int [], int);
void sort_insert(int [], int);
int  linear_search(int [], int, int);
int  binary_search(int [], int, int);
bool is_sorted(int [], int, bool ascending = true);

#endif

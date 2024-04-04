#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

struct items_cell
{
    int identifier;
    int date;
    int wilaya;
    char status[10];
    struct items_cell *next;
};

typedef struct items_cell *ptr;

void Allocate(ptr *p);
void Free(ptr p);
void Ass_val(ptr p);
int Value(ptr p);
void Ass_adr(ptr p, ptr q);
ptr Next(ptr p);
#endif // LIST_H_INCLUDED

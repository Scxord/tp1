#include <string.h>

struct items_cell
{
    int identifier;
    int date;
    int wilaya;
    char status[10];
    struct items_cell *addr;
};

typedef struct items_cell *ptr;

void Allocate(ptr *p)
{
    *p = malloc(sizeof(struct items_cell));
}

void Free(ptr p)
{
    free(p);
}

void Ass_val(ptr p)
{
    p->identifier = 1;
    p->date = 1;
    p->wilaya = 1;
    strcpy(p->status, "hi");
}

int Value(ptr p)
{
    return p->identifier;
}

void Ass_adr(ptr p, ptr q)
{
    p->addr = q;
}

ptr Next(ptr p)
{
    return p->addr;
}

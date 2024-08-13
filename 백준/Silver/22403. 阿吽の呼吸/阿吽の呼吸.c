#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define STACK_MAX_SIZE 100

typedef char element;
typedef struct
{
    element data[STACK_MAX_SIZE];
    int top;
} StackType;

void init(StackType* s)
{
    s->top = -1;
}

int is_empty(StackType* s)
{
    return s->top == -1;
}

int is_full(StackType* s)
{
    return s->top == (STACK_MAX_SIZE - 1);
}

void push(StackType* s, element item)
{
    if (!is_full(s))
        s->data[++(s->top)] = item;
}

element pop(StackType* s)
{
    if (!is_empty(s))
        return s->data[(s->top)--];
    return -1;
}

int main(void)
{
    int k;
    scanf("%d", &k);

    StackType s;
    init(&s);
    char input[4];

    for (int i = 0; i < k; i++)
    {
        scanf("%s", input);

        if (strcmp(input, "A") == 0)
            push(&s, 'A');
        else if (strcmp(input, "Un") == 0)
        {
            if (is_empty(&s))
            {
                printf("NO\n");
                return 0;
            }
            else
                pop(&s);
        }
    }

    if (is_empty(&s))
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef char element;
typedef struct DListNode
{
    element data;
    struct DListNode* llink;
    struct DListNode* rlink;
} DListNode;

void init(DListNode* head)
{
    head->llink = head;
    head->rlink = head;
}

void dinsert(DListNode* cursor, element data)
{
    DListNode* newnode = (DListNode*)malloc(sizeof(DListNode));
    newnode->data = data;
    newnode->llink = cursor;
    newnode->rlink = cursor->rlink;
    cursor->rlink->llink = newnode;
    cursor->rlink = newnode;
}

void ddelete(DListNode* removed)
{
    removed->llink->rlink = removed->rlink;
    removed->rlink->llink = removed->llink;
    free(removed);
}

void print_dlist(DListNode* head)
{
    DListNode* current = head->rlink;
    while (current != head)
    {
        printf("%c", current->data);
        current = current->rlink;
    }
    printf("\n");
}

void editor(DListNode* head) {
    
}

int main(void)
{
    DListNode head;
    init(&head);

    char s[100001];
    scanf("%s", s);

    DListNode* cursor = &head;
    for (int i = 0; s[i] != '\0'; i++)
    {
        dinsert(cursor, s[i]);
        cursor = cursor->rlink;
    }

    cursor = head.llink;
    int num;

    scanf("%d", &num);
    getchar(); // 버퍼 제거를 위해 사용.

    for (int i = 0; i < num; i++)
    {
        char command;
        scanf(" %c", &command);

        if (command == 'L')
        {
            if (cursor != &head)
                cursor = cursor->llink;
        }
        else if (command == 'D')
        {
            if (cursor->rlink != &head)
                cursor = cursor->rlink;
        }
        else if (command == 'B')
        {
            if (cursor != &head)
            {
                DListNode* temp = cursor;
                cursor = cursor->llink;
                ddelete(temp);
            }
        }
        else if (command == 'P')
        {
            char c;
            scanf(" %c", &c);
            dinsert(cursor, c);
            cursor = cursor->rlink;
        }
    }

    print_dlist(&head);

    return 0;
}
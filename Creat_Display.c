#include <stdio.h>
struct Node
{
    int data;
    struct Node *link;
};
int main()
{
    struct Node *head=NULL, *temp, *new;
    int ch = 1;
    while (ch == 1)
    {

        new = (struct Node*) malloc (sizeof(struct Node));
        new->link = NULL;
        printf("Enter the data\n");
        scanf("%d", &new->data);
        if (head == NULL)
        {
            head = temp = new;
            
        }
        else
        {
            temp->link = new;
            temp = new;
        }
        printf("To contineu enter 1\n");
        scanf("%d", &ch);
    }
    temp = head;
    while(temp!=NULL)
    {
        printf("%d",temp -> data);
        temp = temp -> link;
    }
    return 0;
}
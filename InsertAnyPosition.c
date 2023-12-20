#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *link;
};
int main()
{
    struct Node *head = NULL, *temp, *new;
    int ch = 1,count=1;
    while (ch == 1)
    {
        printf("Enter Data\n");
        new = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &new->data);
        new->link = NULL;
        if (head == NULL)
        {
            head = temp = new;
        }
        else
        {
            temp->link = new;
            temp = new;
        }
        printf("if you want to continue press 1\n");
        scanf("%d",&ch);
    }
    temp=head;
    while(temp!=0)
    {
        printf("%d",temp->data);
        temp = temp->link;
        count++;
    }
    // printf("%d",count);
}
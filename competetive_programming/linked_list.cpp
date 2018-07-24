#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
int list_length(struct node *head)
{
    struct node *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;

    }
    return count;
}


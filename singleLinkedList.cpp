#include<iostream>
using namespace std;
struct node()
{
    int value;
    struct node *next;
};
int main()
{
    struct node* head=NULL;
    struct node* second=NULL;
    struct node* third=NULL;

    head->data=1;
    head->next =second;

    second->data=2;
    second->next=third;

}

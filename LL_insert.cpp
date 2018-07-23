#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
  struct node *head=NULL;

  void insertNodeEnd()
  {
    node *temp=(node*)malloc(sizeof(struct node));
    cout<<"Enter value to be entered at the end";
    cin>>temp->data;
    temp->next=NULL;

    if(head->next==NULL)
    {
        head=temp;
    }
    else
    {
     node *t=head;
     while(t->next!=NULL)
     {
         t=t->next;
     }
     t->next=temp;
    }

  }
  void insertNodeStart()
  {
      node *temp = (node*)malloc(sizeof(struct node));
      cout<<"Enter value to be entered in front";
      cin>>temp->data;
      temp->next=NULL;
      if(head==NULL)
      {
          head=temp;
      }
      else
      {
       temp->next=head;
       head=temp;
      }
  }
  void insertMid()
  {
      int value;
      node *temp = (node*)malloc(sizeof(struct node));
      cout<<"Enter value to insert in middle";
      cin>>temp->data;
      temp->next=NULL;
      cout<<"Enter value after which value to be inserted";
      cin>>value;
      node *t=head;
      while(t->data!=value)
      {
          t=t->next;
      }
      temp->next=t;
      t->next=temp;
      cout<<t->data;
  }
  int main()
  {
      cout<<"Enter your choice : "<<endl<<"Enter 1 for insertion at end , 2 for insertion at middle , 3 at insertion  at beginning"<<endl;
      int choice;
      char cont='y';
      while(cont=='y')
      {
       cout<<"Your choice :";
       cin>>choice;//enter the value 
      switch(choice)
      {
      case 1:
        {
            cout<<"Insertion at the end of the link list"<<endl;
            insertNodeEnd();
            break;
        }
      case 2:
        {
             cout<<"Insertion at the beginning of link list"<<endl;
             insertMid();
             break;
        }
      case 3:
        {
            cout<<"Insertion at the start of link list"<<endl;
            insertNodeStart();//hi
            break;
        }
      }
      cout<<"To continue press y otherwise any key"<<endl;
      }
  }



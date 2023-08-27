#include <iostream>

using namespace std;
 
class Node 
{

 
 
public:
int data;
string str;
Node * next;

Node (string str,int data) 
  {
      this->str=str;
this->data = data;
this->next = NULL;
} 
};





 
void 
insert_at_head (Node * &head,string str, int data) 
{
Node * temp = new Node (str,data);
temp->next = head;
head = temp;
} 

 void queue (Node * & head,int q)
 {
     Node * temp =head;
     while(temp!= NULL)
     {
         temp->data=temp->data-q;
     
     temp=temp->next;}
 }

void visulaization(Node * head)
{
    Node * temp=head;
    while(temp!= NULL)
    {
        if(temp->data > 0)
        {
            cout<<"["<<temp->str<<"--"<<temp->data<<"]-->";
        }
        temp=temp->next;
    }
}

void fcfs(Node * head)
{
    Node * temp=head;
    while(temp!= NULL)
    {
        if(temp->data > 0)
        {
            cout<< " process "<<temp->str<<"completed in time : "<<temp->data;
        }
        temp=temp->next;
    }
}
int main()
{
    int npro;
    cout<<"Enter the number of process : "<<endl;
    cin>>npro;
    Node * head=NULL;
    
    
    for(int i=0;i<npro;i++)
    
    {   int ntime;
        string str;
        
        cout<<"Enter the name  of process";
        cin>>str;
        cout<<"Enter the burst time of process";
        cin>>ntime;
        
        insert_at_head( head,str,ntime);
    }
    
   
    
    visulaization(head);
    //queue 1
    
     int q1,q2;
    cout<<"Enter the value of quantum  for queue 1 : ";
    cin>>q1; 
    queue(head,q1);
    visulaization(head);
    
    //queue 2
    cout<<"Enter the value of quantum  for queue 2 : ";
    cin>>q2;  
    queue(head,q2 );
    visulaization(head);
    
    fcfs(head);
    
    
    
    

    return 0;
}
 
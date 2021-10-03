#include<iostream>
#define N 50
using namespace std;

class stackn
{
private:
    int arr[N],top=-1;
public:
    int pop();
    void push(int n);
    bool isfull();
    bool isempty();
    void display();
};

void stackn::push(int n)
{
    if(top==N-1)
        cout<<"\nStack Overflow!";
    else
    {
        top++;
        arr[top]=n;
    }
}

int stackn::pop()
{
    if(top==-1)
        cout<<"\nStack Underflow!";
    else
    {
        return arr[top--];
    }
}

bool stackn::isempty()
{
    if(top==-1)
        return true;
    else
        return false;
}

bool stackn::isfull()
{
    if(top==N-1)
        return true;
    else
        return false;
}

void stackn::display()
{
    for(int i=top;i>=0;i--)
        cout<<arr[i];
}


void baseconv(int num,int base)
{
    stackn s1;
    while(num!=0)
    {
        s1.push(num%base);
        num=num/base;
    }
    system("cls");
    s1.display();
}

int main()
{
    int num,base;
    cout<<"\nEnter the number in base 10 format:";
    cin>>num;
    cout<<"\nEnter the new base:";
    cin>>base;
    baseconv(num,base);
    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    // int a,b;
    // int c,d;
    
    // cout<<'Input 4 integers a and b'<<endl;

    // cin>>a;
    // cin>>b;
    // cin>>c;
    // cin>>d;

    // Statement : a>b

    // cout<<(a>b || c>d);

    // C++ interprets true as 1
    // C++ interprets false as 0


    // float a,b;
    
    // cin>>a>>b;
    // if(a>0.01 || b>a)  // 1 and 0 // The first statement is true and the seccond statement is false : a=2 and 1.9=b
    // {
    //     cout<<"The condition in if statemens is correct"; // Will only we printed if the statement in paranthesis is correct
    // }
    // else
    // {
    //     cout<<"The condition is false";
    // }

    // int a,b,c,d;

    // cout<<"GIve four integers as input : a,b,c,d"<<endl;
    // cin>>a>>b>>c>>d;
    // if(a>b && c>d)
    // {
    //     cout<<"haha";
    // }
    // else if(a>b && c<d)
    // {
    //     cout<<"hehe";
    // }
    // else (a<b && c>d)
    // {
    //     cout<<"huhu";
    // }

    int a;

    cout<<"enter a integer a";
    cin>>a;

    switch(a)
    {
        case 1:
            cout<<"The value of a is 1"<<endl;
        case 2:
            cout<<"The value of a is 2"<<endl;
        case 3:
            cout<<"The value of a is 3"<<endl;
        default:
            cout<<"default will be always printed"<<endl;
            break;
    }
    
}

#include <iostream>
using namespace std;

int main()    //Inki848
{
    int n,x;
    int cm[n];
    
    cout<<"Enter number of club members: ";
    cin>>n;
    cout<<endl;
    
    cout<<"Enter each members' height in cm!"<<endl<<"(Note:Must be between 150-200cm)"<<endl;  
    for(int i=0; i<n; i++) 
    {
        cin>>x;
        if(x>=150 && x<=200)
        {
            cm[i]=x;
        } else 
        {
           cout<<"Eror! Number you've entered is out of range!"<<endl;
           cout<<"Please re-enter a number between 150 and 200: ";
           cin>>x;
           cm[i]=x; 
        }
    }
    cout<<endl;
    
    cout<<"Each member's height is: "<<endl;   //Pecati nizata...
    for(int i=0; i<n; i++)
    {
        cout<<cm[i]<< "  ";
    }
    cout<<endl;
    
    double sum=0, av=0;     //prosecna visina...
    for(int i=0; i<n; i++) 
    {
        sum=cm[i]+sum;
    }
    av=sum/n;
    cout<<"Average height of the members is: "<<av<<endl;
    
    double avl=av-10, avh=av+10;      //visini koi variraat za +/-10 od prosecnata visina
    cout<<"Average + 10: "<<avh<<endl;
    cout<<"Average - 10: "<<avl<<endl;
    
    double min, max;
    
    return 0;
}

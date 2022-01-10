#include <iostream>
using namespace std;

//Marija Crvenkovska INKI848
//Za n clenovi na klub, da se vnesat visini (150-200) i od niv da ispecati prosecnata visina,
//da se izdvojat visinite koi variraat za +/-10 od prosecnata visina, i da se izdvojat visinite koi 
//variraat od 0 do +15% vo odnos na min visina i od 0 do -20% vo odnos na max visina

int print(double *a, int n)   //za pecatenje na niza
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<< "  ";
    }
    cout<<endl;
}

int main()    
{
    int n,x;
    cout<<"Enter number of club members: ";
    cin>>n;
    cout<<endl;
    
    double cm[n];
    cout<<"Enter each members' height in cm!"<<endl<<"(Note:Must be between 150-200cm)"<<endl;  
    for(int i=0; i<n; i++) 
    {
        cin>>x;
        if(x>150 && x<=200)
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
    print(cm,n);
    cout<<endl;
    
    
    double sum=0, av=0;     //prosecna visina...
    for(int i=0; i<n; i++) 
    {
        sum=cm[i]+sum;
    }
    av=sum/n;
    cout<<"Average height of the members is: "<<av<<endl<<endl;
    
    double avl=av-10, avh=av+10;      //visini koi variraat za +/-10 od prosecnata visina
    cout<<"Heights that vary by +/- 10 centimeters of the average height: ";
    for(int i=0;i<n;i++)
 	  if(cm[i]>avl && cm[i]>avh)
	    cout<<cm[i]<<" ";
	cout<<endl<<endl;
    
    double min, max;
    min = cm[0];   
    max = cm[0];   
    for(int i=0; i<n; i++)
    {
        if(cm[i]<=min)  //find minimal number
        {
            min = cm[i];
        }
        if(cm[i]>=max)  //find maximal number
        {
            max = cm[i];
        }
    }
    cout  << "Maximum height: "<<max<<endl;
    cout  << "Minimum height: "<<min<<endl;

    cout << "Heights that vary from 0 to + 15% to the minimum height, and 0 to -20% to the maximum height: "<<endl;
    for(int i=0;i<n;i++)
 	  if(((cm[i]-min)/min)*100<=15 && ((cm[i]-max)/max)*100>=-20)
	    cout<<cm[i]<<" ";     //visini koi variraat od 0 do +15% vo odnos na min visina i od 0 do -20% vo odnos na max visina
	    
    return 0;
}

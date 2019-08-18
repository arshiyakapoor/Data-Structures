/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
     int arr[3][3],i,j;   
    for (i=0;i<3;i++)  
    {  
        for (j=0;j<3;j++)  
        {  
           cout<<"enter arr["<<i<<"]["<<j<<"]";              
            cin>>arr[i][j];  
        }  
    }  
    cout<<"\n printing the elements ....\n";   
    for(i=0;i<3;i++)  
    {  
        cout<<"\n";  
        for (j=0;j<3;j++)  
        {  
           cout<<arr[i][j];
        }  
    }  

    return 0;
}

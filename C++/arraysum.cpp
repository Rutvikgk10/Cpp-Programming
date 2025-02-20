#include <iostream>
using namespace std;
int main (){
    int size;
    cout<<"enter array size: ";
    cin>>size;
    
    
    int data[size],i;
    for (int i= 0; i<size; i++){
        cout<<"enter elements: "<<(i+1)<<"=";
        cin>>data[i];
        
    }
    int sum=0;
    for(i=0;i<size;i++){
        sum=sum+data[i];
    }
    cout<<"sum of element in array :"<<sum<<endl;
}
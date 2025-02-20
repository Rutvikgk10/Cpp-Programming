#include <iostream>
using namespace std;
int main (){
    int size;
    cout<<"enter array size: ";
    cin>>size;
    
    
    string data[size];
    int i;
    for (int i= 0; i<size; i++){
        cout<<"enter elements: "<<(i+1)<<"=";
        cin>>data[i];
        
    }
    for(i=0;i<size;i++){
        cout<<(i+1)<<"="<<data[i]<<endl;
}

}
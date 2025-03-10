#include<iostream>
using namespace std;
int main(){
    string spassword;
    cout<<"Set your password: ";cin>>spassword;

    string epassword;
    cout<<"Enter your password: ";cin>>epassword;
    
    if(epassword==spassword){
        cout<<"Password is Correct"<<endl;
    }
    else{
        cout<<"Password is incorrect\nEnter your password again:";cin>>epassword;

        if(epassword==spassword){
            cout<<"Password is Correct"<<endl<<endl;

        }
        else{
            cout<<"Password is incorrect\nEnter your password again:";cin>>epassword;

            if(epassword==spassword){
                cout<<"Password is correct"<<endl<<endl;
            }
            else{
                cout<<"Access Denied\n";
                return 0;
            }
        }
    }
    cout<< "1]Who Invented Python?\n"
               "A.Alexander G. Bell\n"
               "B.Vincent van Gogh\n"
               "C.Leonardo da Vinci\n"
               "D.Guido van Rossum\n"<<endl;
    int answer;
    cout<<"Enter Answer (1-4):";cin>>answer;

    if (answer ==4){
        cout<<"correct Answer"<<endl<<endl;
        cout<<"2] What is the extension of the Python file?\n"
                 "A..pl\n"
                 "B..py\n"
                 "C..python\n"
                 "D..p\n"<<endl;
        cout<<"Enter Answer(1-4): ";
        cin>>answer;
    if( answer ==2){
        cout<<"Correct Answer";
    }
    else{
        cout<<"Wrong Answer, Better luck next time";
    }
    }
    else{
        cout<<"Wrong Answer, Better luck next time";
    }
    return 0;
}
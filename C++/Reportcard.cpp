#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"Enter Your Name:";cin>>name;

    string roll;
    cout<<"Enter Your Roll number: ";cin>>roll;

    float htmlmarks;
    cout<<"Enter Your Html marks:";cin>>htmlmarks;
    if (htmlmarks < 1 || htmlmarks > 100){
        cout<<"Invalid input Enter marks between 1-100"<< endl;
    }
    float cssmarks;
    cout<<"Enter Your Css marks: ";cin>>cssmarks;
    if (cssmarks < 1 || cssmarks > 100){
        cout<<"Invalid input Enter marks between 1-100"<< endl;
    }
    float cmarks;
    cout<<"Enter Your C marks: ";cin>>cmarks;
    if (cmarks < 1 || cmarks > 100){
        cout<<"Invalid input Enter marks between 1-100"<< endl;
    }
    float javamarks;
    cout<<"Enter Your Java marks: ";cin>>javamarks;
    if (javamarks < 1 || javamarks > 100){
        cout<<"Invalid input Enter marks between 1-100"<< endl;
    }
    float pythonmarks;
    cout<<"Enter Your Python marks: ";cin>>pythonmarks;
    if (pythonmarks < 1 || pythonmarks > 100){
        cout<<"Invalid input Enter marks between 1-100"<< endl;
    }
    float sqlmarks;
    cout<<"Enter Your SQL marks: ";cin>>sqlmarks;
    if (sqlmarks < 1 || sqlmarks > 100){
        cout<<"Invalid input Enter marks between 1-100"<< endl;
    }
    if (htmlmarks<35){
        cout<<"HTML ="<<htmlmarks<<"/100 F"<<endl;
    }
    else if(htmlmarks>100){
        cout<<"enter marks between 1-100"<<endl;
    }
    else{
        cout<<"HTML ="<<htmlmarks<<"/100"<<endl;
    }
    if (cssmarks<35){
        cout<<"CSS ="<<cssmarks<<"/100 F"<<endl;
    }
    else if(cssmarks>100){
        cout<<"enter marks between 1-100"<<endl;
    }
    else{
        cout<<"CSS ="<<cssmarks<<"/100"<<endl;
    }
    if (cmarks<35){
        cout<<"C ="<<cmarks<<"/100 F"<<endl;
    }
    else if(cmarks>100){
        cout<<"enter marks between 1-100"<<endl;
    }
    else{
        cout<<"C ="<<cmarks<<"/100"<<endl;
    }
    if (javamarks<35){
        cout<<"JAVA ="<<javamarks<<"/100 F"<<endl;
    }
    else if(javamarks>100){
        cout<<"enter marks between 1-100"<<endl;
    }
    else{
        cout<<"JAVA ="<<javamarks<<"/100"<<endl;
    }
    if (pythonmarks<35){
        cout<<"PYTHON ="<<pythonmarks<<"/100 F"<<endl;
    }
    else if(pythonmarks>100){
        cout<<"enter marks between 1-100"<<endl;
    }
    else{
        cout<<"PYTHON ="<<pythonmarks<<"/100"<<endl;
    }
    if (sqlmarks<35){
        cout<<"SQL ="<<sqlmarks<<"/100 F"<<endl;
    }
    else if(sqlmarks>100){
        cout<<"enter marks between 1-100"<<endl;
    }
    else{
        cout<<"SQL ="<<sqlmarks<<"/100"<<endl;
    }
    float total;
    total=htmlmarks+cssmarks+cmarks+javamarks+pythonmarks+sqlmarks;
    cout<<"Total ="<<total<<"/600"<<endl;

    float percentage;
    percentage=(total/600)*100;
    if(percentage<35 || htmlmarks<35 || cssmarks<35 || cmarks<35 || javamarks<35 || pythonmarks<35 || sqlmarks<35){
        cout<<"Percentage ="<<percentage<<"%FAIL"<<endl;
    }
    else{
        cout<<"Percentage ="<<percentage<<"%PASS"<<endl;
    }
    if(percentage>=35){
        cout<<"Grading System"<<endl;
    }
    if(percentage>=80 && percentage<=100){
        cout<<"80-100 = Grade A"<<endl;
    }
    else if(percentage>=60 && percentage<=100){
        cout<<"60-80 = Grade B"<<endl;
    }
    else if(percentage>=35 && percentage<=100){
        cout<<"36-60 = Grade C"<<endl;
    }
    else{
        cout<<"No Grade as Failed"<<endl;
    }
    return 0;
} 
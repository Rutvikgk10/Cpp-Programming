#include<iostream>

using namespace std;

class employee{

    private: string name;
    private: int age;
    private: string company;
    private: int salary;

    public: employee(string name, int age, string company, int salary){
        this->name = name;
        this->age = age;
        this->company = company;
        this->salary = salary;       
    }

    void setname(string name){
        this->name = name;
    }
    void setage(int age){
        this->age = age;
    }
    void setcompany(string company){
        this->company = company;
    }
    void setsalary(int salary){
        this->salary = salary;
    }
    
    string getname(){
        return this->name;
    }
    int getage(){
        return this->age;
    }
    string getcompany(){
        return this->company;
    }
    int getsalary(){
        return this->salary;
    }    
};

int main(){
    employee emp1("Rahul", 25, "TCS", 50000);
    cout << "Name: " << emp1.getname() << endl;
    cout << "Age: " << emp1.getage() << endl;
    cout << "Company: " << emp1.getcompany() << endl;
    cout << "Salary: " << emp1.getsalary() << endl;
    
    emp1.setage(21);
    
    cout << "Name: " << emp1.getname() << endl;
    cout << "Age: " << emp1.getage() << endl;
    cout << "Company: " << emp1.getcompany() << endl;
    cout << "Salary: " << emp1.getsalary() << endl;
    
    return 0;
}


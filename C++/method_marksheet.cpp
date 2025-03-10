#include<iostream>

using namespace std;

class student{
    
    public : int marks (int python, int cpp, int java)
    {
        cout << "Python marks: " << python << endl;
        cout << "C++ marks: " << cpp << endl;
        cout << "Java marks: " << java << endl;
    }
    public : int total (int python, int cpp, int java)
    {
        int total = python + cpp + java;
        cout << "Total marks: " << total << endl;
    }
    public : float percentage (int python, int cpp, int java)
    {
        float total = python + cpp + java;
        float percentage = (total / 300) * 100;
        cout << "Percentage: " << percentage << "%" << endl;
    }
    public : char grade (int python, int cpp, int java)
    {
        float total = python + cpp + java;
        float percentage = (total / 300) * 100;
        if (percentage >= 90)
        {
            cout << "Grade: A+" << endl;
        }
        else if (percentage >= 80)
        {
            cout << "Grade: A" << endl;
        }
        else if (percentage >= 70)
        {
            cout << "Grade: B" << endl;
        }
        else if (percentage >= 60)
        {
            cout << "Grade: C" << endl;
        }
        else if (percentage >= 50)
        {
            cout << "Grade: D" << endl;
        }
        else
        {
            cout << "Grade: F" << endl;
        }
    }
};

int main()
{
    int python, cpp, java;
    student s;
    cout << "Enter Python marks: ";
    cin >> python;
    cout << "Enter C++ marks: ";
    cin >> cpp;
    cout << "Enter Java marks: ";
    cin >> java;
    s.marks(python, cpp, java);
    
    s.total(python, cpp, java);
    
    s.percentage(python, cpp, java);

    s.grade(python, cpp, java);
}
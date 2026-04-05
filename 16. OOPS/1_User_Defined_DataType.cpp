#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int usn;
    float gpa;

public:
    // Setter methods
    void setStudent(string n, int u, float g) {
        name = n;
        usn = u;
        gpa = g;
    }

    // Getter method
    void displayStudent() {
        cout << "Name: " << name << endl;
        cout << "USN: " << usn << endl;
        cout << "GPA: " << gpa << endl;
    }
};

int main() {
    Student s1;

    /* NOT ACCESSIBLE
    s.usn = 056 ; 
    cout<<s.usn;
    */

    s1.setStudent("Suraj", 056, 9.46);
    s1.displayStudent();

    Student s2;
    s2.setStudent("SHYAM", 012, 9.01);
    s2.displayStudent();

    
    return 0;
}

#include<iostream>
using namespace std;
class Student{

    public:

    string name;
    int usn;
    float cgpa;

    Student(){} // DEFAULT CONSTRUCTOR

    Student(string name,int usn){ //PARAMETERIZED CONSTRUCTOR
        this->name = name;
        this->usn = usn;
    }

    Student(string name,int usn , float cgpa){ //PARAMETERIZED CONSTRUCTOR
        this->name = name;
        this->usn = usn;
        this->cgpa = cgpa;
    }

    void print(){
        cout<<name<<" "<<usn<<" "<<cgpa<<endl; 
    }
};
int main(){

    Student s1("Suraj G Rao",056,9.46);

    Student s2 = s1;  // DEEP COPY
    s2.name = "Sugam";

    Student s3(s1);


    // cout<<s1.name<<" "<<s1.usn<<" "<<s1.cgpa<<endl; 
    // cout<<s2.name<<" "<<s2.usn<<" "<<s2.cgpa<<endl; 
    // cout<<s3.name<<" "<<s3.usn<<" "<<s3.cgpa<<endl; 

    s1.print();
    s2.print();
    s3.print();

    return 0;
}
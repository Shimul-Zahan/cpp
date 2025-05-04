#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int id, age;
    double cgpa;

    Student(string name, int id, int age, double cgpa)
    {
        this->name = name;
        this->id = id;
        this->age = age;
        this->cgpa = cgpa;
    }
};

int main()
{
    int total_students;
    cin >> total_students;
    vector<Student> student_obj;
    string name;
    int id, age;
    double cgpa;

    for (int i = 0; i < total_students; i++)
    {
        cin >> name >> id >> age >> cgpa;
        Student s(name, id, age, cgpa);
        student_obj.push_back(s);
    }

    for (auto &s : student_obj)
    {
        cout << "Name: " << s.name << endl;
        cout << "ID: " << s.id << endl;
        cout << "Age: " << s.age << endl;
        cout << "CGPA: " << s.cgpa << endl;
        cout << "-------------------" << endl;
    }
}
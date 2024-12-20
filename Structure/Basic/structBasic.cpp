#include<bits/stdc++.h>
using namespace std;

struct Student{
    string name;
    string course;
    int age;
    float marks;
};

int main(){
    Student s1Info;

    cout<<"Name: ";
    getline(cin,s1Info.name);
    cout<<"Course: ";
    getline(cin,s1Info.course);
    cout<<"Age: ";
    cin>>s1Info.age;
    cout<<"Marks: ";
    cin>>s1Info.marks;

    cout<<endl<<s1Info.name<<endl<<s1Info.course<<endl<<s1Info.age<<endl<<s1Info.marks;

    return 0;
}

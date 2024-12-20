//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct Student{
    string name;
    int id;
    int age;
};

int main(){
    Student s1, *ptr;
    ptr = &s1;

    cout<<"Id: ";
    cin>>s1.id;
    cout<<"Output: "<<endl;
    cout<<"ID: "<<(*ptr).id<<endl;
    cout<<"ID: "<<s1.id<<endl;
    cout<<"ID: "<<ptr->id<<endl;

    return 0;
}

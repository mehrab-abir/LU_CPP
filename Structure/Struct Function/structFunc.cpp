#include<bits/stdc++.h>
using namespace std;

struct Student{
    string name;
    int id;
    float marks;
};

Student getter(Student s1){
    cout<<"ID: ";
    cin>>s1.id;
    return s1;
}
void display(Student s1){
    cout<<"ID = "<<s1.id<<endl;
}

int main(){

    Student s1;
    //cin>>s1.id; or by using a function
    s1 = getter(s1);
    //cout<<s1.id<<endl; or by using a function
    display(s1);

    return 0;
}

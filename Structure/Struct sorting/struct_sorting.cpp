#include<bits/stdc++.h>
using namespace std;

struct Student{
    string name;
    int id;
    float marks;
};

bool comparemarks(Student s1,Student s2){
    if(s1.marks<s2.marks){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int n;
    cout<<"How many students: ";
    cin>>n;

    Student sInfo[n];

    for(int i=0;i<n;i++){
        cout<<"Name: ";
        getchar();
        getline(cin,sInfo[i].name);
        cout<<"ID: ";
        cin>>sInfo[i].id;
        cout<<"Marks: ";
        cin>>sInfo[i].marks;
    }

    sort(sInfo,sInfo+n,comparemarks);

    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<"Name: "<<sInfo[i].name<<endl;
        cout<<"ID: "<<sInfo[i].id<<endl;
        cout<<"Marks: "<<sInfo[i].marks<<endl;
    }

    return 0;
}

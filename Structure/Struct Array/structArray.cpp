//#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

struct Dragon{
    string name;
    string rider;
    int age;
    int riddenBy;
};

int main(){

    int n;
    cout<<"How many dragons: ";
    cin>>n;
    cin.ignore();

    Dragon dragons[n];

    for(int i=0;i<n;i++){
        cout<<"Provide information about Dragon "<<i+1<<">>"<<endl;
        cout<<"Name: ";
        getline(cin,dragons[i].name);
        cout<<"Rider: ";
        getline(cin,dragons[i].rider);
        cout<<"Age: ";
        cin>>dragons[i].age;
        cin.ignore();
        cout<<"Number of riders it was ridden by: ";
        cin>>dragons[i].riddenBy;
        cin.ignore();
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<"Information about Dragon "<<i+1<<":-"<<endl;
        cout<<"Name: "<<dragons[i].name<<endl;
        cout<<"Rider: "<<dragons[i].rider<<endl;
        cout<<"Age: "<<dragons[i].age<<endl;
        cout<<"Number of rider it was ridden by: "<<dragons[i].riddenBy<<endl;
    }

    return 0;
}

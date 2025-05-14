#include<iostream>
using namespace std;
    int main () {
        int n;
        cout<<"enter number : \n";
        cin>>n;

        if (n%2==0) {
            // cout<<"wired \n";
        } else if (n>=2 && n<=5) {
            cout<<"Not wired \n";

        } else if (n>=6 && n<=20) {
            cout<<"wired\n";
        } else if (n>20) {
            cout<<"not wired\n";
        } else {
            cout<<"wired\n";
        }
        return 0;

    }
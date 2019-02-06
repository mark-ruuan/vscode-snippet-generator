/*
 * @Author: a_kk 
 * @Date: 2019-02-06 09:45:05 
*/

#include "bits/stdc++.h"
using namespace std;
#define ll long long int

int main(){
    //The input file where the snippet code should be kept
    freopen("input.txt", "r", stdin);
    //jason format snippet will generated here
    freopen("output.txt", "w", stdout);
    string name, prefix;
    // Give the name to your snippet manually
    name = "signature";
    // Type the prefix through which you want to call your snippet
    prefix = "start";
    prefix = '"' + prefix + '"';
    name = '"' + name + '"';
    cout << name << ": {" << endl;
    cout << "\t" << '"' << "prefix" << '"' << ": " << prefix << ',' << endl; 
    cout << "\t" << '"' << "body" << '"' << ": [" << endl;
    string s, prev = "\n";
    int ct = 0;
    while(getline(cin, s)){
        cout << "\t\t" << prev;
        ct = 0;
        while(s[ct] == '\t'){
            ct++;
        }
        prev = '"';
        while(ct--)
            prev += "\\t";
        bool flag = 0;
        for(auto i: s){
            if(i != '\t') flag = 1;
            if(flag){
                prev += i;
            }
        }
        prev = prev + '"' + ',' + '\n';
    }
    prev.pop_back();
    prev.pop_back();
    cout << "\t\t" << prev << endl << endl;
    cout << "\t" << "]," << endl;
    cout << "\t" << '"' << "description" << '"' << ": " << name << endl;
}
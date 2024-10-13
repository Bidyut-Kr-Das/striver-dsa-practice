#include<fstream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    ifstream myFile("file.txt");

    myFile.is_open();

    string s;
    
    while(getline(myFile,s))
        cout<<s<<" ";

    return 0;
}

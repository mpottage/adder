//Adds all the numbers (whitespace separated) in a file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
    string filename;
    if(argc==1) {
        cout<<"Please enter a filename:\n\t";
        while(filename.size()==0)
            cin>>filename;
        cout<<"Processing...\n";
    }
    else
        filename = argv[1];
    ifstream is{filename.c_str()};
    if(!is) {
        cerr<<"Couldn't open the file\n";
        return 2;
    }
    long long res = 0; //Final result.
    int tmp = 0; //Current value being read.
    int count = 0;
    while(is>>tmp) {
        res += tmp;
        ++count;
    }
    cout<<"Sum:\t"<<res<<'\n';
    cout<<"Count:\t"<<count<<'\n';
}

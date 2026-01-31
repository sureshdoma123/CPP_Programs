#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> names;
    names.push_back("suresh");
    names.push_back("nivas");
    names.push_back("nagendra");
    names.push_back("aravind");
    names.push_back("madhu");

    names.insert(names.begin() + 2, "John Baugh");

    names.pop_back();

    for(auto val: names){
        cout<<" Vector Values: "<< val <<endl;
    }
    return 0;
}
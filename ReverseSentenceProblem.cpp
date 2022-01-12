#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    getline(cin,s);
    int skipNumber;
    cin>>skipNumber;
    string newS;
    vector<string> vs;
    int j=0;
    string temp;
    for (auto i : s)
    {
        if(i=='.'){
            // if(vs.size()<=)
            vs.push_back(temp);
            temp="";
            for (int i = vs.size()-skipNumber-1; i >= 0; i--)
            {
                if(i==0){
                newS+=vs[i];
                }else{
                newS+=vs[i]+' ';
                }
            }
            for (int i = vs.size()-skipNumber; i < vs.size(); i++)
            {
                if(i==vs.size()-1){
                newS+=vs[i]+". ";
                }else{
                newS+=vs[i]+' ';
                }
            }
            vs.clear();
        }else{
            if(i==' '){
            vs.push_back(temp);
            temp="";
            j++;
            }else{
                temp+=i;
            }
        }
    }
    cout<<newS;
    return 0;
}
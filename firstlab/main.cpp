#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

void chek(string line){
    
    
    stack <char> st;
    char dict[] = {'(', ')', '{', '}', '[', ']'};
    
    int count = 6; // count element in dict
    bool flag = true;
    int j = 1; // j - dict index  

    while(j<count){ // cycle to chek all sign in dict
        for (int i=0; i<line.length();i++){ // cycle to chek one sign in dikt

            if (line[i] == dict[j-1]){
                st.push(line[i]);

            }else if(line[i] == dict[j]){
                if (!st.empty())
                    st.pop();

                else {
                    flag = false;
                    break;

                }
            }
        }
        j+=2;
    }

    if (flag&&st.empty()){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
}

int main(){
    
    string line;
    cin>>line;
    chek(line);
    
}

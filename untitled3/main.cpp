#include<bits/stdc++.h>
using namespace std;




int main() {

    string str;
    int index;


    cin>>str;
    cin>>index;

    if (index == 1 ){
        cout<< 9;
    }

    if (str[index] == ')' ) {

        cout<< -1;
    }else {
        int j = 0;

        for (int i = index; i < str.size(); i++){

            if (str[i] == ')' ) {

                cout<< i;
            }
        }
    }



    return 0;
}

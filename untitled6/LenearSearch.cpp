//
// Created by Maze Geek on 2019-06-14.
//

#include <bits/stdc++.h>
//#define   pf printf();
using namespace std;




bool  lenearSearch();

 main() {


    lenearSearch();


}

bool lenearSearch(){

    int num[10] = {3,5,4,6,78,23,9,12,10,22};
    int i , searchValue = 9 ,  n = 10;

    for (i = 0;  i<n; i++) {

        if (searchValue == num[i]) {

            return true;

        } else {

            printf("False");
        }


    }



}
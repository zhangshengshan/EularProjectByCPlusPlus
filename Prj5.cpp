#include <iostream>
#include <stdlib.h>
#include <vector>
#include <map>
using namespace std;

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  func
 *  Description:  
 * =====================================================================================
 */
int func(int x,int y){
    int ret = 0;
    while(y%x==0){
        cout << "x is "<<x <<"y is "<<y<<endl;
        ret ++ ;
        y = y / x;
    }
    return ret;
}
int main ( int argc, char *argv[] ){
    int a[]={2,3,5,7,11,13,17,19};
    map <int,int> b;
    long total = 1;
    for (int i = 0; i <=7; i++) {
        cout<<a[i]<<endl;
        b.insert(map<int,int>::value_type(a[i],1));
    }
    map <int,int>::iterator iter;
    for ( iter = b.begin();iter!=b.end();iter++ ) {

        cout <<"first: "<<iter->first <<"second: "<<iter->second<<endl;
    }

    for (int i = 0; i < 8; i++) {
        int max = 0;
        for (int j = 2; j <= 20; j++) {
            cout << i << j <<endl;
            max = func(a[i],j);

            if (max > b[a[i]]){
                b[a[i]] = max;
            }
        }
    }

    for ( iter = b.begin();iter!=b.end();iter++ ) {

        for(int i=0;i<iter->second;i++){
            total *= iter->first;
        }

        cout <<"first: "<<iter->first <<"second: "<<iter->second<<endl;
    }

    cout << "total is "<<total<<endl;

    return EXIT_SUCCESS;
}


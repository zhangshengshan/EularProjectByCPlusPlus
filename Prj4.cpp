#include <stdlib.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int reverse(int n){
    int num = 0 ;
    while(n>0){
        num = 10 * num + n % 10; 
        n   = n / 10;
    }
    return num;
}
int isPalindrome(int n){
    return n == reverse(n) ? 1:0 ;
}
int main ( int argc, char *argv[] )
{
    int max = 0;
    int maxi = 0;
    int maxj = 0;
    for(int i = 100;i<=999;i++){
        for(int j=i; j<=999;j++)
        {
            if(i*j<max)
            {
                break;
            }

            if (isPalindrome(i*j))
            {
                if(max < i*j){
                    max = i*j;
                    maxi=i;
                    maxj=j;
                }
            }
        }
    }
    cout<<"max is "<<max<<endl;
    cout<<"maxi is "<<maxi<<endl;
    cout<<"maxj is "<<maxj<<endl;
    return EXIT_SUCCESS;
}

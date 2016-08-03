/*
 * =====================================================================================
 *
 *       Filename:  Prj4.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/03/2016 08:27:49 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
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
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

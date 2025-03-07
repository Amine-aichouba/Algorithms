


#include <iostream>

using namespace std;


int linear_search ( int arr [] , int n , int target ) 
{
    for ( int i = 0 ; i < n ; i ++ ) 
        {
            if ( arr [i] == target )  return i ;
        }
    return -1 ;
}


int main () 
{
    int arr [] = { 3 , 5 , 2 , 8 , 10 } ;
    int target = 8 ;
    int result = linear_search ( arr , 5 , target ) ;

    if ( result != -1 ) 
        cout << "\n\n* Element found at index : " << result << endl ;
    else 
        cout << "\n\n* Element not found" << endl ;

    return 0 ;
}
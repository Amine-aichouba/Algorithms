


#include <iostream>
#include <cmath>

using namespace std;


int jump_search ( int arr [] , int n , int target ) 
{
    int step = sqrt (n) ; 
    int prev = 0 ;

    while ( arr [ min ( step , n ) - 1 ] < target ) 
        {
            prev = step ;
            step += sqrt (n) ;
            if ( prev >= n )  return -1 ;
        }

    for ( int i = prev ; i < min ( step , n ) ; i ++ ) 
        {
            if ( arr [i] == target )  return i ;
        }
    return -1 ;
}


int main () 
{
    int arr [] = { 0 , 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34 , 55 , 89 , 144 } ;  
    int target = 55 ;
    int result = jump_search ( arr , 13 , target ) ;

    if ( result != -1 ) 
        cout << "\n\n* Element found at index: " << result << endl ;
    else 
        cout << "\n\n* Element not found" << endl ;
    
    return 0 ;
}
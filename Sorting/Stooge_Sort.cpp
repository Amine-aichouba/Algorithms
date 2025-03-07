


#include <iostream>

using namespace std;


void stooge_sort ( int arr [] , int l , int h ) 
{
    if ( l >= h )  return ;
    
    if ( arr [l] > arr [h] ) 
        swap ( arr [l] , arr [h] ) ; 
    
    if ( h - l + 1 > 2 ) 
        {
            int t = ( h - l + 1 ) / 3 ;
            stooge_sort ( arr , l , h - t ) ;
            stooge_sort ( arr , l + t , h ) ;
            stooge_sort ( arr , l , h - t ) ;
        }
}


int main () 
{
    int arr [] = { 10 , 5 , 8 , 2 , 1 , 6 } ;
    int n = ( int ) ( sizeof ( arr ) / sizeof ( arr [0] ) ) ;

    stooge_sort ( arr , 0 , n-1 ) ;
    
    cout << "\n\n* Sorted array : " ;
    for ( int i = 0 ; i < n ; i ++ ) 
        cout << arr [i] << " " ;
    
    return 0 ;
}
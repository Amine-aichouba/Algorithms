


#include <iostream>

using namespace std;


int get_max ( int arr [] , int n ) 
{
    int max_val = arr [0] ;
    for ( int i = 1 ; i < n ; i ++ ) 
        if ( arr [i] > max_val ) 
            max_val = arr [i] ;

    return max_val ;
}


void counting_sort_for_radix  ( int arr [] , int n , int exp )  
{
    int output [100] ;
    int count [10] = {0} ;

    for ( int i = 0 ; i < n ; i ++ )  
        count [ ( arr [i] / exp ) % 10 ] ++ ;
    
    for ( int i = 1 ; i < 10 ; i ++)  
        count [i] += count [i - 1] ;
    
    for ( int i = n - 1 ; i >= 0 ; i -- ) 
        {
            output [ count [ ( arr [i] / exp ) % 10 ] - 1 ] = arr [i] ;
            count [ ( arr [i] / exp ) % 10 ] -- ;
        }

    for ( int i = 0 ; i < n ; i ++ )  
        arr [i] = output [i] ;   
}


void radix_sort ( int arr [] , int n ) 
{
    int max_val = get_max ( arr , n ) ;

    for ( int exp = 1 ; max_val / exp > 0 ; exp *= 10 ) 
        counting_sort_for_radix ( arr , n , exp ) ;
}


int main () 
{
    int arr [] = { 170 , 45 , 75 , 90 , 802 , 24 , 2 , 66 } ; 
    int n = ( int ) ( sizeof ( arr ) / sizeof ( arr [0] ) ) ;
    
    radix_sort ( arr , n ) ;
    
    cout << "\n\n* Sorted array : " ;
    for ( int i = 0 ; i < n ; i ++ ) 
        cout << arr [i] << " " ;
    
    return 0 ;
}
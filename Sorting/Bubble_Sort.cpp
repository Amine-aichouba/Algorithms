


#include <iostream>


using namespace std;


void bubble_sort ( int arr [] , int n )  
{
    for ( int i = 0 ; i < n-1 ; i ++ ) 
        {
            for ( int j = 0 ; j < n-i-1 ; j ++ ) 
                {
                    if ( arr [j] > arr [j + 1] ) 
                        swap ( arr [j] , arr [j + 1] ) ;   
                }
        }
}


int main () 
{
    int arr [] = { 64 , 34 , 25 , 12 , 22 , 11 , 90 } ;
    int n = static_cast <int> ( sizeof ( arr ) / sizeof ( arr [0] ) ) ;
    
    bubble_sort ( arr , n ) ;
    cout << "\n\n* Sorted array : " ; 
    
    for ( int i = 0 ; i < n ; i ++ )  
        cout << arr [i] << " " ;
        
    return 0 ;
}

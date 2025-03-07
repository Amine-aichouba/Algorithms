


#include <iostream>

using namespace std;


void shell_sort ( int arr [] , int n ) 
{
    for ( int gap = n/2 ; gap > 0 ; gap /= 2 ) 
        {
            for ( int i = gap ; i < n ; i ++ ) 
                {
                    int tmp = arr [i] ;
                    int j ;
                    for ( j = i ; j >= gap && arr [j - gap] > tmp ; j -= gap ) 
                        arr [j] = arr [j - gap] ; 
                    
                    arr [j] = tmp ;
                }
        }
}


int main () 
{
    int arr [] = { 12 , 34 , 54 , 2 , 3 } ;
    int n = ( int ) ( sizeof ( arr ) / sizeof ( arr [0] ) ) ;
    
    shell_sort ( arr , n ) ;
    
    cout << "\n\n* Sorted array : " ;
    for ( int i = 0 ; i < n ; i ++ ) 
        cout << arr [i] << " " ;
    
    return 0 ;
}
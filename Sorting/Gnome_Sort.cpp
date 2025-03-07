


#include <iostream>

using namespace std;


void gnome_sort ( int arr [] , int n ) 
{
    int index = 0 ;

    while ( index < n ) 
        {
            if ( index == 0 || arr [index] >= arr [index - 1] ) 
                index ++ ;
            else
                { 
                    swap ( arr [index] , arr [index - 1] ) ;
                    index -- ;
                }
        }
}


int main () 
{
    int arr [] = { 34 , 2 , 10 , -9 } ;
    int n = ( int ) ( sizeof ( arr ) / sizeof ( arr [0] ) ) ;
    
    gnome_sort ( arr , n ) ;
    
    cout << "\n\n* Sorted array : " ;
    for ( int i = 0 ; i < n ; i ++ ) 
        cout << arr [i] << " " ;
    
    return 0 ;
}
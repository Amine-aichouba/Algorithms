


#include <iostream>

using namespace std;


void cycle_sort ( int arr [] , int n ) 
{
    for ( int cycle_start = 0 ; cycle_start < n - 1 ; cycle_start ++ ) 
        {
            int item = arr [ cycle_start ] ;
            int pos = cycle_start ;

            for ( int i = cycle_start + 1 ; i < n ; i ++ ) 
                if ( arr [i] < item )  pos ++ ;

            if ( pos == cycle_start )  continue ;

            while ( item == arr [pos] )  pos ++ ;

            if ( pos != cycle_start )  swap ( item , arr [pos] ) ;

            while ( pos != cycle_start )  
                {
                    pos = cycle_start ;

                    for ( int i = cycle_start + 1 ; i < n ; i ++ ) 
                        if ( arr [i] < item )  pos ++ ;

                    while ( item == arr [pos] )  pos ++ ;

                    if ( item != arr [pos] )  
                        swap ( item , arr [pos] ) ;
                }
        }
}

int main () 
{
    int arr [] = { 10 , 5 , 2 , 3 } ;
    int n = ( int ) ( sizeof ( arr ) / sizeof ( arr [0] ) ) ;
    
    cycle_sort ( arr , n ) ;
    
    cout << "\n\n* Sorted array : " ;
    for ( int i = 0 ; i < n ; i ++ ) 
        cout << arr [i] << " " ;
    
    return 0 ;
}
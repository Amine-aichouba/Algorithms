


#include <iostream>

using namespace std;


int interpolation_search ( int arr [] , int n , int target ) 
{
    int low = 0 , high = n - 1 ;

    while ( low <= high && target >= arr [low] && target <= arr [high] ) 
        {
            int pos = low + ( ( target - arr [low] ) * ( high - low ) ) / ( arr [high] - arr [low] ) ;

            if ( arr [pos] == target )  return pos ;
            else 
                if ( arr [pos] < target )  low = pos + 1 ;
                else high = pos - 1 ;
        }
    return -1 ;
}


int main () 
{
    int arr [] = { 10 , 12 , 13 , 16 , 18 , 19 , 20 , 21 , 22 , 23 , 24 , 33 , 35 , 42 , 47 } ;
    int target = 18 ;
    int result = interpolation_search ( arr , 15 , target ) ;  

    if ( result != -1 )  
        cout << "\n\n* Element found at index : " << result << endl ;
    else 
        cout << "\n\n* Element not found" << endl ;
    
    return 0 ;
}
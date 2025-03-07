


#include <iostream>

using namespace std;


int binary_search ( int arr [] , int left , int right , int target ) 
{
    while ( left <= right ) 
        {
            int mid = left + ( right - left ) / 2 ;

            if ( arr [mid] == target )  return mid ; 
            else 
                if ( arr[mid] < target ) left = mid + 1 ;
                else  right = mid - 1 ;
        }
    return -1 ; 
}


int main () 
{
    int arr [] = { 2 , 5 , 8 , 12 , 16 , 23 , 38 , 56 } ;
    int target = 16 ;
    int result = binary_search ( arr , 0 , 7 , target ) ;

    if ( result != -1 ) 
        cout << "\n\n* Element found at index : " << result << endl ;
    else 
        cout << "\n\n* Element not found" << endl ;
    
    return 0 ;
}
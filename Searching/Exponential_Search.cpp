
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


int exponential_search ( int arr [] , int n , int target ) 
{
    if ( arr [0] == target )  return 0 ;
    int i = 1 ;
    while ( i < n && arr [i] <= target )  i *= 2 ;

    return binary_search ( arr , i / 2 , min ( i , n - 1 ) , target ) ;
}


int main () 
{
    int arr [] = { 2 , 3 , 4 , 10 , 40 } ;
    int target = 10 ;
    int result = exponential_search ( arr , 5 , target ) ;

    if ( result != -1 ) 
        cout << "\n\n* Element found at index : " << result << endl ;
    else 
        cout << "\n\n* Element not found" << endl ;
    
    return 0 ;
}
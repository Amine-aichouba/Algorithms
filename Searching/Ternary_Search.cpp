


#include <iostream>

using namespace std;


int ternary_search ( int arr [] , int left , int right , int target )  
{
    if ( right >= left ) 
        {
            int mid1 = left + ( right - left ) / 3 ;
            int mid2 = right - ( right - left ) / 3 ;

            if ( arr [mid1] == target )  return mid1 ;
            
            if ( arr [mid2] == target )  return mid2 ;
            
            if ( target < arr [mid1] ) 
                return ternary_search ( arr , left , mid1 - 1 , target ) ;
            else 
                if ( target > arr [mid2] ) 
                    return ternary_search ( arr , mid2 + 1 , right , target ) ;
                else 
                    return ternary_search ( arr , mid1 + 1 , mid2 - 1 , target ) ;
        }
    return -1 ;
}


int main () 
{
    int arr [] = { 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 } ;
    int target = 6 ;
    int result = ternary_search ( arr , 0 , 9 , target ) ;

    if ( result != -1 ) 
        cout << "\n\n* Element found at index : " << result << endl ;
    else 
        cout << "\n\n* Element not found" << endl ;
    
    return 0 ;
}
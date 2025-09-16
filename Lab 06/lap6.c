#include <stdio.h>

int main() {
    
    int N ;
    printf( "Enter value : " ) ;
    scanf( "%d", &N ) ;

    if( N % 2 == 1 ) { //ถ้าใส่เลขคี่
        printf( "Series Number : %d\n " , N ) ;
        for( int i = 1 ; i <= N ; i +=2 ) {
            printf( "%d\n" , i ) ;
            }
        } else {
        printf( "Series Number : %d\n " , N ) ;
        for( int i = 0 ; i <= N ; i +=2 ) {
            printf( "%d\n" , i ) ;
        }
    }

    return 0;
}


#include <xc.h>
#include <sys/attribs.h>


int main(void){
    
    // Sets pin connected to LED to an output
    TRISDbits.TRISD0 = 0;
    // Set output to 1
    LATDbits.LATD0 = 0;

    while(1){
        
    }
    
    return 0;
}
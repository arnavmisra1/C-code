#include <stdio.h>

double robotpower(double h, double w, double e, int r) {
    
    return (e + r) * (w - h);//power output formula
}


int main() {
      
    
    int x ;
    printf("Enter number of robots:\n");
    scanf("%d", &x);
    
    double power = 0.0;
    
    for(int i = 0; i < x; i++) {
        
        double h,w,e;
        int r;
        
        printf("Please enter the height, weight, engine power and resistance specifically in this order:\n");
        scanf("%lf %lf %lf %d", &h, &w, &e, &r);
        
        
        if (r < 1 || r > 3) {
            
            printf("Invalid resistance. Must be 1,2 or 3");
            return 1;
        }
        
        power += robotpower(h,w,e,r);
        
    }
    
    
    if(power == (int)power) {
        printf("%d\n", (int)power);
        
    } else {
        
        printf("%.2f\n", power);
    }
    
    
    
    return 0;
    
}
#include<stdio.h>
int ci(float p, float r, float t) {
    if(t==0) {
        return 1;
    } else{
        return p*(1+r / 100) * ci(p, r, t-1);
    }
} 
int main() {
    float p,r,t;
    printf("Enter the principal amount : ");
    scanf("%f",&p);
    printf("Enter the rate of interest : ");
    scanf("%f",&r);
    printf("Enter the time period : ");
    scanf("%f",&t);
    float n = ci(p,r,t);
    printf("Compound intrest = %f",n);
}
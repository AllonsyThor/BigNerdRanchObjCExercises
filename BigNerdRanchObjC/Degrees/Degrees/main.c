//
//  main.c
//  Degrees
//
//  Created by Catherine Kelleher on 3/16/16.
//  Copyright © 2016 Katie Kelleher. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

//Declare a global variable
float lastTemperature;

float fahrenheitFromCelcius(float cel){
    lastTemperature = cel;
    float fahr = cel * 1.8 + 32.0;
    printf("%f Celsius is %f Fahrenheit\n", cel, fahr);
    return fahr;
}

int main(int argc, const char * argv[]) {
    float freezeInC = 0;
    float freezeInF = fahrenheitFromCelcius(freezeInC);
    printf("Water freezes at %f degrees Fahrenheit\n", freezeInF);
    printf("The last temperature converted was %f\n", lastTemperature);
    return 0;
}

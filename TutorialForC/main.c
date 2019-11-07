//
//  main.c
//  TutorialForC
//
//  Created by Joe Harasz on 11/4/19.
//  Copyright © 2019 JJH. All rights reserved.
//

#include <stdio.h>

//1.5.1 File copying
int main (int argc, const char *argv[]) {
    int c;
     
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}

//Practice with symbolic constants
//#define LOWER   0
//#define UPPER   300
//#define STEP    20

//int main (int argc, const char *argv[]) {
//    int fahr;
//
////    for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
////        printf("%3d %6.1f\n ", fahr, (5.0 / 9.0) * (fahr - 32));
////    }
//
//    //exercise 1-5
//    for (fahr = 300; fahr > 0; fahr = fahr - 20) {
//        printf("%3d %6.1f\n ", fahr, (5.0 / 9.0) * (fahr - 32));
//    }
//}

//int main (int argc, const char *argv[]) {
//    float fahr, celsius;
//    int lower, upper, step;
//
//    lower = 0;
//    upper = 300;
//    step = 20;
//
//    fahr = lower;
//    printf("%s\t%s\n---------------\n", "Fahr", "Celsius");
//    while (fahr <= upper) {
//        celsius = (5.0/9.0) * (fahr-32.0);
//        printf("%4.0f\t%7.1f\t\n", fahr, celsius);
//        fahr = fahr + step;
//    }
//
//    printf("\n");
//
//    lower = 0;
//    celsius = lower;
//    printf("%s\t%7s\n---------------\n", "Celsius", "Fahr");
//    while (celsius <= upper) {
//        fahr = (celsius * (9.0/5.0) + 32.0);
//        printf("%7.0f\t%7.1f\t\n", celsius, fahr);
//        celsius = celsius + step;
//    }
//}

//int main(int argc, const char * argv[]) {
//    // insert code here...
//    printf("Hello world\n");
//    return 0;
//}


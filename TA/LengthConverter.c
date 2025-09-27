// ft, mt, ml, in, cm, mm, yd 
#include <stdio.h>
int main(void)
{
    double number,feet, meters, miles, inches, centimeters, milimeters, yard;
    char unit;
    while(scanf("%lf %c", &number, &unit) == 2){
        if(unit == 'f'){
            feet = 1 * number;
            meters = 0.3048 * number;
            miles = 0.0001893939 * number;
            inches = 12 * number;
            centimeters = 30.48 * number;
            milimeters = 304.8 * number;
            yard = 0.3333333333 * number;
        }
        else if(unit == 'M'){
            feet = 3.280839895 * number;
            meters = 1 * number;
            miles = 0.0006213712 * number;
            inches = 39.37007874 * number;
            centimeters = 100 * number;
            milimeters = 1000 * number;
            yard = 1.0936132983 * number;
        }
        else if(unit == 'L'){   
            feet = 5280 * number;
            meters =  * number;
            miles = 0.0001893939 * number;
            inches = 12 * number;
            centimeters = 30.48 * number;
            milimeters = 304.8 * number;
            yard = 0.3333333333 * number;
        }
        else if(unit == 'I'){
            feet = 3.280839895 * number;
            meters = 0.3048 * number;
            miles = 0.0001893939 * number;
            inches = 12 * number;
            centimeters = 30.48 * number;
            milimeters = 304.8 * number;
            yard = 0.3333333333 * number;
        }
        else if(unit == 'C'){
            feet = 3.280839895 * number;
            meters = 0.3048 * number;
            miles = 0.0001893939 * number;
            inches = 12 * number;
            centimeters = 30.48 * number;
            milimeters = 304.8 * number;
            yard = 0.3333333333 * number;
        }
        else if(unit == 'm'){
            feet = 3.280839895 * number;
            meters = 0.3048 * number;
            miles = 0.0001893939 * number;
            inches = 12 * number;
            centimeters = 30.48 * number;
            milimeters = 304.8 * number;
            yard = 0.3333333333 * number;
        }
        else if(unit == 'y'){
            feet = 3.280839895 * number;
            meters = 0.3048 * number;
            miles = 0.0001893939 * number;
            inches = 12 * number;
            centimeters = 30.48 * number;
            milimeters = 304.8 * number;
            yard = 0.3333333333 * number;
        }
        else{
            printf("Invalid-Input\n");
        }
    }
    printf("Feet: %lf\n", feet);
    printf("Meters: %lf\n", meters);
    printf("Miles: %lf\n", miles);
    printf("Inches: %lf\n", inches);
    printf("Centi: %lf\n", centimeters);
    printf("Mili: %lf\n", milimeters);
    printf("Yard: %lf\n", yard);

    return 0;
}

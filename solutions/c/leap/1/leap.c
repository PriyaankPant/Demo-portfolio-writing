#include "leap.h"
bool leap_year(int year){
    bool result = true;
    if((year%4==0 && year%100!=0) || (year%400==0)){
        result = true;
    }
    else{
        result = false;
    }
    return result;
}
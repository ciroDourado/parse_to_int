#include "parse_to_int.h"

int parse_to_int(char* string) {
    if(string == NULL) {
        printf("Cannot convert from this\n");
        printf("Returning zero.\n");
        return 0;
    } else {
        return atoi(string);
    } // end NULL pointer handling
}

int can_be_parsed(char* string) {
    if(string == NULL) {
        printf("I can't even use this to parse!\n");
        return 0;
    } else {
        if(! atoi(string) && string[0] != '0') {
            return 0;
        } else {
            char test[strlen(string)];
            sprintf(test, "%d", atoi(string));
            if(!strcmp(test, string)) return 1;
            else return 0;
        }
    } // end NULL pointer handling
}

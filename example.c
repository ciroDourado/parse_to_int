#include "parse_to_int.h"

int main() {
    clear_terminal();

    char only_numbers[] = "1234";
    if(parse_to_int_was_successful(only_numbers)) {
        printf("\nYour number was: %d\n", parse_to_int(only_numbers));
    }
    
    char chars_before_numbers[] = "hey 42";
    if(parse_to_int_was_successful(chars_before_numbers)) {
        printf("\nYour number was: %d\n", parse_to_int(chars_before_numbers));
    } else {
        // this part should take care of reading again, or anything else
        printf("\nTry to give a number!\n");
    }
    
    // using atoi in the case bellow actually converts your number
    // but this should be a problem, since only numbers should be read
    char numbers_before_chars[] = "42 here";
    if(parse_to_int_was_successful(numbers_before_chars)) {
        printf("\nYour number was: %d\n", parse_to_int(numbers_before_chars));
    } else {
        // this part should take care of reading again, or anything else
        printf("\nTry to give a number!\n");
    }
    
    // let's imagine you gave a string to atoi with no numbers;
    // it would return 0, but that's a problem, since it wasn't your
    // intention to receive 0 from a invalid input; you should be
    // able to differentiate an real '0' input instead of an 
    // invalid convertion, in order to handle any possible errors
    char only_chars[] = "i'm a problematic input";
    if(parse_to_int_was_successful(only_chars)) {
        printf("\nYour number was: %d\n", parse_to_int(only_chars));
    } else {
        printf("\nTry to give a number!\n");
    }
    printf("\n atoi's incredible convertion: %d\n", atoi(only_chars));
    printf("\nThis shouldn't happen!!\n");
    
    return 0;
}

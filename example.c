#include "parse_to_int.h"

int main() {
    clear_terminal();

    char only_numbers[] = "1234";
    printf("\ninput: %s", only_numbers);
    if(can_be_parsed(only_numbers)) {
        printf("\nYour number was: %d\n", parse_to_int(only_numbers));
    }
    
    char chars_before_numbers[] = "hey 42";
    printf("\ninput: %s", chars_before_numbers);
    if(can_be_parsed(chars_before_numbers)) {
        printf("\nYour number was: %d\n", parse_to_int(chars_before_numbers));
    } else {
        // this part should take care of reading again, or anything else
        printf("\nTry to give a number next time!\n");
    }
    
    // using atoi in the case bellow actually converts your number
    // but this should be a problem, since only numbers should be read
    char numbers_before_chars[] = "42here";
    printf("\ninput: %s", numbers_before_chars);
    if(can_be_parsed(numbers_before_chars)) {
        printf("\nYour number was: %d\n", parse_to_int(numbers_before_chars));
    } else {
        // this part should take care of reading again, or anything else
        printf("\nTry to give a number next time!\n");
    }
    printf("atoi's INCREDIBLE convertion: %d\n", atoi(numbers_before_chars));
    printf("This shouldn't happen!!\n");
    
    // let's imagine you gave a string to atoi with no numbers;
    // it would return 0, but that's also a problem, since it wasn't your
    // intention to receive 0 from a invalid input; you should be
    // able to differentiate an real '0' input instead of an 
    // invalid convertion, in order to handle any possible errors
    char only_chars[] = "i'm a problematic input";
    printf("\ninput: %s", only_chars);
    if(can_be_parsed(only_chars)) {
        printf("\nYour number was: %d\n", parse_to_int(only_chars));
    } else {
        printf("\nTry to give a number next time!\n");
    }
    printf("atoi's INCREDIBLE convertion: %d\n", atoi(only_chars));
    printf("This shouldn't happen!!\n");
    
    return 0;
}

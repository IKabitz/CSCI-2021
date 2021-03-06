/***********************
 * bignum_math.h
 * This is what is called a "header" file in C
 * Generally, header files are used to define function 
 * prototypes and any global definitions that the associated
 * C file needs.
 *
 * You can change this file if you want
 ********/

#define false 0
#define true 1

typedef int bool;

/*
 * Prototype for bignum_length
 * Provides length of a bignum..
 */
int bignum_length(int* num);

/*
 *Prototype for str to int array function
 */
int* string_to_integer_array(char* str);

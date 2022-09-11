/**
 * @file - main.c
 * @author - Deekshith Reddy Patil (patil.deekshithreddy@colorado.edu)
 * @brief - Test script for parse_param()
 *
 */
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "parse_param.h"

#define OUTPUT_STRING_SIZE          200

static void test_case_1();
static void test_case_2();
static void test_case_3();

int main()
{

    printf("********* TEST RESULTS *********\n");
    test_case_1();
    test_case_2();
    test_case_3();
    printf("*********************************\n");

    return 0;
}

// Test the example provided
static void test_case_1()
{
    const char input_str[] = "abc,123,4de5";
    char output_str[OUTPUT_STRING_SIZE];
    int index = 1;

    parse_parm(input_str,output_str,index);

    assert(strcmp(output_str,"123") == 0);

    index = 0;
    parse_parm(input_str,output_str,index);
    assert(strcmp(output_str,"abc") == 0);

    index = 2;
    parse_parm(input_str,output_str,index);
    assert(strcmp(output_str,"4de5") == 0);

    printf("Test Case 1: ");
    printf("\xE2\x9C\x93\n"); // Print a tick mark
}

// Test an empty argument
static void test_case_2()
{
    const char input_str[] = ",,";
    char output_str[OUTPUT_STRING_SIZE];
    int index = 1;

    parse_parm(input_str,output_str,index);
    
    assert(strcmp(output_str,"") == 0);

    index = 0;
    parse_parm(input_str,output_str,index);
    assert(strcmp(output_str,"") == 0);

    index = 2;
    parse_parm(input_str,output_str,index);
    assert(strcmp(output_str,"") == 0);

    printf("Test Case 2: ");
    printf("\xE2\x9C\x93\n"); // Print a tick mark
}

// Test a long string
static void test_case_3()
{
    const char input_str[] = "Lorem ipsum dolor sit amet consectetur adipiscing elit sed do eiusmod tempor incididunt ut labore et dolore magna";
    char output_str[OUTPUT_STRING_SIZE];
    int index = 0;

    parse_parm(input_str, output_str, index);
    
    assert(strcmp(input_str, output_str) == 0);
    printf("Test Case 3: ");
    printf("\xE2\x9C\x93\n"); // Print a tick mark
}
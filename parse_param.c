/** @file - parse_param.h
 *
 * @author - Deekshith Reddy Patil, patil.deekshithreddy@colorado.edu
 *
 * @brief - Source file that contains implementation of "void parse_parm(char const *input_str, char *output_str, int index);"
 *
 * @assumptions_made - 1. The pointers passed as arguments to 'parse_parm' and index are always valid (i.e never NULL pointer, index >= 0 and index is valid).
 *                   - This assumption is made because the function does not have any return type (i.e return type is void).
 *                   - 2. It is assumed that the character array pointed by 'output_str' has sufficient memory to hold the result.
 */

#include "parse_param.h"

#define DELIMITER_CHARACTER                 ','
#define NULL_CHARACTER                      '\0'

// Refer header file for function description
void parse_parm(char const *input_str, char *output_str, int index)
{
    unsigned int scan_index = 0; // Holds the current argument number during string scan
    char const *scan_ptr = input_str; // Holds the pointer that scans through the string character by character
    char *write_ptr = output_str;
    
    // Scan the input string to arrive at the first character of n'th argument
    while(scan_index != index)
    {
        if(*scan_ptr == DELIMITER_CHARACTER)
            scan_index++;

        scan_ptr++;
    }

    // Now scan_ptr points to first character of n'th argument  
    // Copy the n'th argument into output_str using write_ptr character by character
    while((*scan_ptr != DELIMITER_CHARACTER) && (*scan_ptr != NULL_CHARACTER))
    {
        *write_ptr = *scan_ptr;
        write_ptr++;
        scan_ptr++;
    }

    // Terminate the output string.
    *write_ptr = NULL_CHARACTER;

}   
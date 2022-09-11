/** @file parse_param.h
 * 
 * @author - Deekshith Reddy Patil, patil.deekshithreddy@colorado.edu
 * 
 * @brief - Header file for the parse_param source file. 
 *          Provides function prototype for "void parse_parm(char const *input_str, char *output_str, int index);"
 *      
 */ 

#ifndef PARSE_PARAM_H
#define PARSE_PARAM_H

#include <stdio.h>

/**
* @brief - Parse the n'th argument out of a comma-delimited string of arguments
*
* @param input_str[in] - Contains the comma-delimited string of arguments
* @param index[int] - Represents the n'th argument that need to be parsed 
* @param output_str[out] - Holds the result (n'th argument of the comma-delimited string of arguments)
*
* @return - 
*/
void parse_parm(char const *input_str, char *output_str, int index);

#endif /* PARSE_PARAM_H */
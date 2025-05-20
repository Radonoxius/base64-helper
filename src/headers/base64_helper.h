#pragma once

/* plaintext is a pointer to heap allocated array of chracters (with null terminator).
 * It can be represented by a vector of characters or something similar.
 *
 * This function returns a pointer to heap allocated, encoded characters (with null terminator).
 */
extern char *encode(char *plaintext);

/* encoded_text is a pointer to heap allocated array of encoded chracters (with null terminator).
 * It can be represented by a vector of characters or something similar.
 *
 * This function returns a pointer to heap allocated, plaintext characters (with null terminator).
 */
extern char *decode(char *encoded_text);
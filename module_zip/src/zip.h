// Copyright (c) 2011, XMOS Ltd, All rights reserved
// This software is freely distributable under a derivative of the
// University of Illinois/NCSA Open Source License posted in
// LICENSE.txt and at <http://github.xcore.com/>

/** Function that outputs 4 words to a single 4-bit buffered port. Each
 * word is output to one of the 4 bits serialised.
 *
 * \param p  port to output to
 *
 * \param b0 word to output to bit 0 of port p
 *
 * \param b1 word to output to bit 1 of port p
 *
 * \param b2 word to output to bit 2 of port p
 *
 * \param b3 word to output to bit 3 of port p
 */

void outputWordsZipped(buffered out port:32 p, int b0, int b1, int b2, int b3);

/** Function that inputs 4 words from a single 4-bit buffered port. Each
 * word is input from one of the 4 bits serialised.
 *
 * \param p  port to input from
 *
 * \returns the four words, the first word is bit 0, the 4th return value is bit 3
 */
{int,int,int,int} inputWordsZipped(buffered in port:32 p);

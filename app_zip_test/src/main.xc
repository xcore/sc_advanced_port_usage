// Copyright (c) 2011, XMOS Ltd, All rights reserved
// This software is freely distributable under a derivative of the
// University of Illinois/NCSA Open Source License posted in
// LICENSE.txt and at <http://github.xcore.com/>

#include <xs1.h>
#include "zip.h"

//::declaration
buffered out port:32 o = XS1_PORT_4A;
buffered in port:32 i = XS1_PORT_4B;
//::

//::declaration
int main(void) {
    outputWordsZipped(o, 1, 2, 3, 4);
    outputWordsZipped(o, 1, 2, 3, 4);
    inputWordsZipped(i);
    inputWordsZipped(i);
    return 0;
}
//::

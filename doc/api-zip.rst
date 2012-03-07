Zipping and Unzipping data onto ports
'''''''''''''''''''''''''''''''''''''

The zip module can input words from a 4-bit port, and output words to a
4-bit port as if these were four 1-bit ports.

API
===

.. doxygenfunction:: outputWordsZipped

.. doxygenfunction:: inputWordsZipped


Example
=======


An example program is shown below. An input and/or output ports should be
declared as buffered ports:

.. literalinclude:: app_example_rx/src/main.xc
  :start-after: //::declaration
  :end-before: //::

A function is called to output data, or to input data:

.. literalinclude:: app_example_rx/src/main.xc
  :start-after: //::main program
  :end-before: //::

If you want to do both simultaneously, you will need to manually interleave
the source code of the two functions.

Advanced port usage
===================

When running out of 1-bit ports, it may be possible to use a 4-bit port
instead to emulate four 1-bit ports, or to use a 32-bit port to emulate 32
1-bit ports.

module_zip
----------

This module can ZIP and UNZIP data onto 4-bit ports:

+-------------------------+-------------------------+------------------------+
| Functionality provided  | Resources required      | Status                 | 
|                         +------------+------------+                        |
|                         | 4-bit port | Memory     |                        |
+-------------------------+------------+------------+------------------------+
| quad zip and out        | 1          | 1250 bytes | Implemented            |
+-------------------------+------------+------------+------------------------+
| quad zip and in         | 1          | 600 bytes  | Implemented            |
+-------------------------+------------+------------+------------------------+


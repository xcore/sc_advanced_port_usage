<title>
.......

:Stable release:  unreleased

:Status:  alpha

:Maintainer:  https://github.com/henkmuller

:Description:  Modules that, for example, zip and unzip data onto ports


Key Features
============

* Output serialised data to 4-bit port as four 1-bit streams.
* Input serialised data from 4-bit port as four 1-bit streams.

To Do
=====

* Sharing port.

Firmware Overview
=================

This repo contains a module that can zip and unzip bitstreams. Bitstreams
can be zipped together, so that they can be output on a 4-bit port, and
values input on a 4-bit port can be unzipped into separate bit streams.

Known Issues
============

None

Required Repositories
================

* xcommon git\@github.com:xcore/xcommon.git

Support
=======

Please raise an issue.

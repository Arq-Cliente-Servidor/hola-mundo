# Required libraries
---
## Clang format
To make the code more understandable use this in your terminal:

      sudo apt-get install clang-format-3.5

In [sublime text](https://www.sublimetext.com/) or [Atom](https://atom.io/) install the package:

      clang-format

## Install ZMQ

Download from [ZQM](http://zeromq.org/)

Enter the folder and type in your terminal:

* With permissions

      ``` 
      ./configure 
      make -j4 
      sudo make install
      ```

* Without permissions

      ``` 
      ./configure --prefix=/home/user/zmq
      make -j4
      make install
      ```

## Install ZMQPP

Download from [ZQMPP](https://github.com/zeromq/zmqpp)

Enter the folder and type in your terminal:

* With permissions

      ``` 
      make -j4
      sudo make install
      ```

* Without permissions

      ```
      mkdir build
      cd build
      cmake -DCMAKE_PREFIX_PATH=/home/user/zmq -DCMAKE_INSTALL_PREFIX=/home/user/zmq ../zmqpp/
      make -j4
      make install
      ```

## Executing

Type in your terminal:

      make
      ./server

In other terminal:

      ./client

Solution to possible compiling error:

      export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/home/utp/zmq/lib

# travis_qmake_gcc_cpp98_fparser

[![Travis CI logo](TravisCI.png)](https://travis-ci.org)

[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp98_fparser.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp98_fparser)

This GitHub is part of:

 * [the Travis C++ Tutorial](https://github.com/richelbilderbeek/travis_cpp_tutorial)
 * [the MXE tutorial](https://github.com/richelbilderbeek/mxe_tutorial)

The goal of this project is to have a clean Travis CI build, with specs:
 * Build system: `qmake`
 * C++ compiler: `gcc`
 * C++ version: `C++98`
 * Libraries: `STL` and [Warp's function parser](http://warp.povusers.org/FunctionParser/fparser.html)
 * Code coverage: none
 * Source: one single file, `main.cpp`

More complex builds:

 * Use of C++11: [travis_qmake_gcc_cpp11_fparser](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp11_fparser)
 * Use of C++14: [travis_qmake_gcc_cpp14_fparser](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_fparser)

Equally complex builds:

 * [none]

Less complex builds:

 * No `fparser`: [travis_qmake_gcc_cpp98](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp98)

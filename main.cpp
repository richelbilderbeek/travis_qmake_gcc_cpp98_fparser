#include <iostream>
#include <string>
#include <sstream>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#include "fparser.hh"
#pragma GCC diagnostic pop

//Convert string to double
double stod(const std::string& s)
{
  return std::atof(s.c_str());
}

int main(int argc, char* argv[])
{
  const std::string my_function = argc < 2 ? "sin(x)" : argv[1];
  const double x = argc < 3 ? 0.5 : stod(argv[2]);

  FunctionParser f;
  f.Parse(my_function.c_str(),"x");
  if (f.GetParseErrorType() != FunctionParser::FP_NO_ERROR)
  {
    std::cerr << "Function could not be parsed\n";
    return 1;
  }

  //Evaluate the parsed formula
  const double xs[1] = { x };
  const double y = f.Eval(xs);

  if (f.EvalError()!=0)
  {
    std::cerr << "Function could not be evaluated\n";
    return 1;
  }

  std::cout
    << "f: " << my_function << '\n'
    << "x: " << x << '\n'
    << "f(x): " << y << '\n'
  ;
}

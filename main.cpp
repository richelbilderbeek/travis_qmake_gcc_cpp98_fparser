#include "fparser.hh"
#include <iostream>

int main(int argc, char* argv[])
{

  //Parse the formula
  std::string my_function{ui->edit_function->text().toStdString()};

  f.Parse(my_function.c_str(),"x");
  if (f.GetParseErrorType() != FunctionParser::FP_NO_ERROR)
  {
    ui->label_result->setText("Function could not be parsed");
    return;
  }

  //Check if x can be converted to double
  try
  {
    boost::lexical_cast<double>(ui->edit_value->text().toStdString());
  }
  catch (boost::bad_lexical_cast&)
  {
    ui->label_result->setText("Value of x is not a valid double");
    return;
  }

  //Evaluate the parsed formula
  const double x = boost::lexical_cast<double>(ui->edit_value->text().toStdString());
  const double xs[1] = { x };
  const double y = f.Eval(xs);

  if (f.EvalError()!=0)
  {
    ui->label_result->setText("Function could not be evaluated");
    return;
  }
}

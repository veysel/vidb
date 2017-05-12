#include <iostream>
#include <../../Model/Command/CommandModel.cpp>

using namespace std;

class CommandController
{

private:
  CommandModel _commandModel;

public:
  void setCommandText(string tempCommandText);
  string getCommandText();

} CommandController;

CommandModel::setCommandText(string tempCommandText)
{
  _commandModel.setCommandText(tempCommandText);
}

CommandModel::getCommandText()
{
  return _commandModel.getCommandText();
}

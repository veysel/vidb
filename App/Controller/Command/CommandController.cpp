#include <iostream>
#include "../../Model/Command/CommandModel.cpp"

using namespace std;

class CommandController
{

private:
  CommandModel _commandModel;
  bool checkReadObject;

public:
  CommandController();
  void setCommandText(string tempCommandText);
  string getCommandText();
  bool checkRead();

} CommandController;

CommandController::CommandController()
{
  checkReadObject = true;
}

CommandController::setCommandText(string tempCommandText)
{
  _commandModel.CommandText = tempCommandText;

  // For Test :)
  if (_commandModel.CommandText == "exit")
  {
    checkReadObject = false;
  }
}

CommandController::getCommandText()
{
  return _commandModel.CommandText;
}

CommandController::checkRead()
{
  return checkReadObject;
}

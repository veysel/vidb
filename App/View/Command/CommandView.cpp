#include <iostream>
#include "../../Controller/Command/CommandController.cpp"

using namespace std;

class CommandView
{
  public:
    void readCommand();

} CommandView;

void CommandView::readCommand()
{
    do
    {
        cout << "vidb >>> ";
        string tempCommandText;
        cin >> tempCommandText;
        CommandController.setCommandText(tempCommandText);
    } while (CommandController.checkRead());
}
#include <iostream>
#include <../../Controller/CommandController.cpp>

using namespace std;

class CommandView
{
  public:
    void readCommand();

} CommandView;

void CommandView::readCommand()
{
    cout << "vidb >>> ";
    string tempCommandText;
    cin >> tempCommandText;
    CommandController.setCommandText(tempCommandText);
}
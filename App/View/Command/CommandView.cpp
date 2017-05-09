#include <iostream>

using namespace std;

class CommandView
{
  public:
    void readCommand();

} CommandView;

void CommandView::readCommand()
{
    cout << "vidb >>> ";
    string deger;
    cin >> deger;
}
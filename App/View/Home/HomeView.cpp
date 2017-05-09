#include <iostream>
#include <stdlib.h>
#include "../../Controller/Home/HomeController.cpp"

using namespace std;

class HomeView
{
  public:
    void show();

} HomeView;

void HomeView::show()
{
    system("clear");
    cout << "       _     _ _     " << endl;
    cout << "__   _(_) __| | |__  " << endl;
    cout << "\\ \\ / / |/ _` | '_ \\ " << endl;
    cout << " \\ V /| | (_| | |_) |" << endl;
    cout << "  \\_/ |_|\\__,_|_.__/ " << endl;
    cout << endl;
    cout << "_____________________" << endl;
    cout << endl;
}
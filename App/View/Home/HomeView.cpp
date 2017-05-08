#include <iostream>
#include "../../Controller/Home/HomeController.cpp"

using namespace std;

class HomeView
{
  public:
    void show();

} HomeView;

void HomeView::show()
{
    cout << HomeController.getHomeTitle();
}
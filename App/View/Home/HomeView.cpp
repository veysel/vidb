#include "../../Controller/Home/HomeController.cpp"

class HomeView
{
  public:
    void show();

} HomeView;

void HomeView::show()
{
    cout << HomeController.getHomeTitle();
}
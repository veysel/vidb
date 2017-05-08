#include "../../Model/Home/HomeModel.cpp"

class HomeController
{
  public:
    HomeConroller();
    string getHomeTitle();

} HomeController;

HomeController::HomeController()
{
    HomeModel.setHomeTitle("Deneme");
}

string HomeController::getHomeTitle()
{
    return HomeModel.getHomeTitle();
}
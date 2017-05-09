#include "../../Model/Home/HomeModel.cpp"

class HomeController
{
  private:
    HomeModel _homeModel;

  public:
    HomeController();
    string getHomeTitle();

} HomeController;

HomeController::HomeController()
{
    _homeModel.setHomeTitle("Deneme");
}

string HomeController::getHomeTitle()
{
    return _homeModel.getHomeTitle();
}
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
    _homeModel.setHomeTitle("");
}

string HomeController::getHomeTitle()
{
    return _homeModel.getHomeTitle();
}
#include <iostream>
using namespace std;

class HomeModel
{
  private:
    string HomeTitle;

  public:
    void setHomeTitle(string);
    string getHomeTitle();

} HomeModel;

void HomeModel::setHomeTitle(string tempTitle)
{
    HomeTitle = tempTitle;
}

string HomeModel::getHomeTitle()
{
    return HomeTitle;
}
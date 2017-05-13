#include <iostream>
#include "App/View/Home/HomeView.cpp"
#include "App/View/Command/CommandView.cpp"

using namespace std;

int main()
{
    HomeView.show();
    CommandView.readCommand();
    cin.get();
}

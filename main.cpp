#include <iostream>
#include "colormod.h"

using namespace std;

Color::Modifier red(Color::FG_RED);
Color::Modifier def(Color::FG_DEFAULT);
Color::Modifier blue(Color::FG_BLUE);

int main() {
  cout << red << "This is red text." << def << " This is normal." << endl;
  cout << blue << "This text is not red." << endl;
  return 0;
}
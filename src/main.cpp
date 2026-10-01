// You will write all your code for this tutorial here!

#include <bn_core.h>
#include <bn_backdrop.h>
#include <bn_color.h>

int main() {
  bn::core::init();
  bn::backdrop::set_color(bn::color(20, 10, 0));

  while(true) {
    bn::core::update();
  }
}
#include <string>
#include <sstream>
#include <memory>
#include <iostream>

using namespace std;

// ======== Property Proxy ======================

template <typename T> struct Property {
  T value;
  Property(const T initialValue) {
    *this = initialValue;
  }
  operator T() {
    return value;
  }
  T operator =(T newValue) {
    return value = newValue;
  }
};

// ===========================================

struct Creature {
  Property<int> strength{ 10 };
  Property<int> agility{ 5 };
};

void property_proxy() {
  Creature creature;
  creature.agility = 20;
  cout << creature.agility << endl;
}

int main()
{
  property_proxy();
  return 0;
}


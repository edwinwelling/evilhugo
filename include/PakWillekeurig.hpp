#pragma once
#include "EenIdee.hpp"
#include <algorithm>
#include <chrono>
#include <queue>
#include <random>
#include <vector>

class PakWillekeurig : public EenIdee {

private:
  std::queue<int> deze_ga_ik_kiezen;

public:
  PakWillekeurig(int aantal_keer_open_en_dicht);

  int welk_laatje_trek_ik_echt_open() override;
};
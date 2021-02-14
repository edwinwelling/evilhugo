#pragma once
#include "EenIdee.hpp"

class WereldIdee : public EenIdee {
public:
  WereldIdee(int aantal_keer_open_en_dicht);

  int welk_laatje_trek_ik_echt_open() override;
};
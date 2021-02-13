#pragma once

class Heini;

class EenIdee {

private:
  int hoeveel_keer_mag_ik_nog;

protected:
  const Heini* ik_zit_in_het_hoofd_van_deze_heini;

public:
  EenIdee(int aantal_keer_open_en_dicht)
      : ik_zit_in_het_hoofd_van_deze_heini(nullptr),
        hoeveel_keer_mag_ik_nog(aantal_keer_open_en_dicht){};
  virtual ~EenIdee() = default;

  bool ik_mag_nog_iets_mag_doen() { return (hoeveel_keer_mag_ik_nog > 0); }

  void bevind_zich_in_mijn_hoofd(const Heini& heini) { ik_zit_in_het_hoofd_van_deze_heini = &heini; }

  int welk_laatje_trek_ik_open() {
      hoeveel_keer_mag_ik_nog--;
      return welk_laatje_trek_ik_echt_open();
  }

  virtual int welk_laatje_trek_ik_echt_open() = 0;
};


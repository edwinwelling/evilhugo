#pragma once
#include "Kast.hpp"
#include <ostream>
#include <vector>
#include <memory>
#include <algorithm>
#include "EenIdee.hpp"

class Kast;

class Heini {
private:
  const int mijn_bsn;

  std::vector<int> nummerkes_die_ik_gezien_heb;

  std::unique_ptr<EenIdee> slim_idee;
  
public:
  Heini(int bsn, std::unique_ptr<EenIdee> een_idee);

  virtual ~Heini() = default;

  void doorzoek(const Kast& iets_met_meerdere_laatjes);

  bool heeft_geluk() const;

   std::vector<int> geef_nummerkes_die_ik_gezien_heb() const;

   int geef_mijn_bsn() const; 

};

std::ostream &operator<<(std::ostream &os, const Heini &heini);
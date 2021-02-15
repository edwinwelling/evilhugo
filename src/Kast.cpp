#include "Kast.hpp"
#include "Cycles.hpp"
#include <algorithm>
#include <chrono>
#include <iterator>
#include <numeric>
#include <random>

Kast::Kast(size_t aantal_laatjes) : laatjes(aantal_laatjes) {

  unsigned hugos_willekeur =
      std::chrono::system_clock::now().time_since_epoch().count();

  std::iota(std::begin(laatjes), std::end(laatjes), 0);
  std::shuffle(std::begin(laatjes), std::end(laatjes),
               std::default_random_engine(hugos_willekeur));
}

int Kast::schuif_laatje_open(size_t nummer_van_laatje) const {
  int nummerke = 0;
  try {
    nummerke = laatjes.at(nummer_van_laatje);
  } catch (std::out_of_range e) {
    throw std::out_of_range(
        "nee, nee gij kan niet onbestaanbaar laatje openen");
  }
  return nummerke;
}

std::ostream &operator<<(std::ostream &os, const Kast &kast) {
  os << "Den Kast met " << kast.laatjes.size() << " laatjes [";
  std::copy(kast.laatjes.begin(), kast.laatjes.end(),
            std::ostream_iterator<int>(os, ","));

  os << " ]";

  std::vector<std::vector<int>> a_cycles = cycles(kast.laatjes);
  for (auto &cycle : a_cycles) {
    os << "(";
    std::copy(cycle.begin(), cycle.end(), std::ostream_iterator<int>(os));
    os << ")";
  }
  
  return os << '\n';

}
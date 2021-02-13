#include "Voorkeuren.hpp"
#include <filesystem>

Voorkeuren::Voorkeuren(int argc, const char *argv[])
    : woordjes(argv, argv + argc), toepassing("huh?"), aantal_heinies(0),
      aantal_pogingen(0), idee(ideetje::GEEN_IDEE) {}

void Voorkeuren::onder_de_loep_nemen() {
  if (woordjes.size() > 0) {
    toepassing = woordjes.at(0);
  }

  if (woordjes.size() != 4) {
    throw std::runtime_error("ik verwacht 3 woordjes");
  }

  aantal_heinies = std::stoi(woordjes.at(1));
  aantal_heinies = maak_even(aantal_heinies);

  aantal_pogingen = std::stoi(woordjes.at(2));

  idee = maak_es_een_ideetje(woordjes.at(3));
}

std::string Voorkeuren::geef_toepassing() {
  std::filesystem::path padje(toepassing);
  return (padje.filename().string());
  ;
}

ideetje Voorkeuren::geef_idee() const { return idee; }

int Voorkeuren::geef_aantal_pogingen() const { return aantal_pogingen; }

int Voorkeuren::geef_aantal_heinies() const { return aantal_heinies; }

bool Voorkeuren::is_oneven(size_t n) { return (n & 1); }

size_t Voorkeuren::maak_even(size_t n) {
  if (is_oneven(n)) {
    return n + 1;
  }
  return n;
}

std::ostream &operator<<(std::ostream &os, const Voorkeuren &voorkeuren) {
  os << "Gij heb gekozen voor:\n"
     << voorkeuren.geef_aantal_pogingen() << " pogingen\n";
  os << voorkeuren.geef_aantal_heinies() << " heines\n";
  os << "en het idee is: " << maak_es_een_woordje(voorkeuren.geef_idee());
  return os;
}


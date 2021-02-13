#pragma once
#include "Ideetje.hpp"
#include <exception>
#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <ostream>

class Voorkeuren {
private:
  std::vector<std::string> woordjes;

  std::string toepassing;

  int aantal_heinies;

  int aantal_pogingen;

  ideetje idee;

static bool is_oneven(size_t n);

static size_t maak_even(size_t n);

public:
  Voorkeuren(int argc, const char *argv[]);

  void onder_de_loep_nemen();

  std::string geef_toepassing();

  ideetje geef_idee() const;

  int geef_aantal_pogingen() const;

  int geef_aantal_heinies() const;
};

std::ostream& operator<<(std::ostream& os, const Voorkeuren& voorkeuren );
#include "EmpirischOnderzoek.hpp"
#include "Voorkeuren.hpp"
#include "Ideetje.hpp"
#include <iostream>
#include <ios>

int main(int argc, const char* argv[]) {

  Voorkeuren voorkeuren(argc, argv);

  try {
    voorkeuren.onder_de_loep_nemen();
  } catch (std::runtime_error e) {
      std::cerr << "ge moet het 3 waarden opgeven:\n" << voorkeuren.geef_toepassing() << " #heinies #pogingen hoe\n";
      exit (42);
  } catch (std::invalid_argument e) {
      std::cerr << "ge moet op de juise plekkies (#heinies #pogingen) een nummerke opgeven:\n" << voorkeuren.geef_toepassing() << " #heinies #pogingen hoe\n";
      exit (42);
  }

  std::cout << voorkeuren << '\n';

  EmpirischOnderzoek onderzoekje(voorkeuren.geef_aantal_pogingen(), voorkeuren.geef_aantal_heinies(), voorkeuren.geef_idee());

  onderzoekje.hugo_klaar_beginnen_maar();

  std::cout << "Uit ons empirisch onderzoek blijkt dat de kans om bij de GGD te blijven " << std::scientific << onderzoekje.wat_was_nu_de_kans_dat_ze_mochten_blijven() << " is\n";
}

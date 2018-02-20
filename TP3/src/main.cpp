#include <iostream>
#include "location.hpp"
#include "client.hpp"
#include "produit.hpp"
#include "magasin.hpp"

int main() {

  Location l {0, 2};
  //l.afficherLocation();

  Client c (42, "toto");
  //c.afficherClient();

  Produit p (45, "Bouteille");
  //p.afficherProduit();

  Magasin m;
  //m.afficherClients();
  m.ajouterClient("Maxime");
  //m.afficherClients();
  m.ajouterClient("Quentin");
  //m.afficherClients();
  m.supprimerClient(1);
  m.afficherClients();

  m.ajouterProduit("Bouteille");
  m.afficherProduits();
  m.ajouterProduit("Hamburger");
  m.afficherProduits();
  m.supprimerProduit(5);
  m.afficherProduits();

}

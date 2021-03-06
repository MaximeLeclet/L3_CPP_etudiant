#include <iostream>
#include "ligne.hpp"

Ligne::Ligne(const Couleur & couleur, const Point & p0, const Point & p1) : FigureGeometrique(couleur), _p0(p0), _p1(p1) {}

void Ligne::afficher(const Cairo::RefPtr<Cairo::Context>& context) const {

    std::cout << "Ligne " << _couleur._r << "_" << _couleur._g << "_" << _couleur._b << " " << _p0._x << "_" << _p0._y << " " << _p1._x << "_" << _p1._y << std::endl;

}

const Point & Ligne::getP0() {
    return _p0;
}

const Point & Ligne::getP1() {
    return _p1;
}

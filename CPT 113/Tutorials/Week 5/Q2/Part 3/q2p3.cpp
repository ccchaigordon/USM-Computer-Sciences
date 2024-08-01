#include "shape23.h"
#include <iostream>

using namespace std;

int main()
{
    Cylinder cy;
    double radius;
    cy.setDimension(6.6, 20);
    cy.getRad(radius);
    cy.calculateVol(radius);
    cy.print(radius);

    return 0;
}
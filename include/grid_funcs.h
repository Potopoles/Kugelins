//////////////////////////////////////////////////////////////////////////////
/*
Project: Kugelns
Created: 2020-10-05 by Christoph Heim
Description:
     Auxilliary functions for geometrical computations.
*/
//////////////////////////////////////////////////////////////////////////////
#pragma once
#include "structures.h"
using namespace std;



//////////////////////////////////////////////////////////////////////////////
////// AUXILIARY FUNCTIONS
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
////// GEOMETRIC FUNCTIONS GENERIC
//////////////////////////////////////////////////////////////////////////////
dtype scalar_product(cart_coords a, cart_coords b);

dtype magnitude_cart(cart_coords vector);

cart_coords normalize_cart(cart_coords vector);

cart_coords find_middle_point(cart_coords point1,
                              cart_coords point2);



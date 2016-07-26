/* -*- c++ -*- ----------------------------------------------------------
   LAMMPS - Large-scale Atomic/Molecular Massively Parallel Simulator
   http://lammps.sandia.gov, Sandia National Laboratories
   Steve Plimpton, sjplimp@sandia.gov

   Copyright (2003) Sandia Corporation.  Under the terms of Contract
   DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
   certain rights in this software.  This software is distributed under
   the GNU General Public License.

   See the README file in the top-level LAMMPS directory.
------------------------------------------------------------------------- */

#ifdef NEIGH_STENCIL_CLASS

NeighStencilStyle(NEIGH_STENCIL_HALF_MULTI_3D_NO_NEWTON,
             NeighStencilHalfMulti3dNoNewton)

#else

#ifndef LMP_NEIGH_STENCIL_HALF_MULTI_3D_NO_NEWTON_H
#define LMP_NEIGH_STENCIL_HALF_MULTI_3D_NO_NEWTON_H

#include "neigh_stencil.h"

namespace LAMMPS_NS {

class NeighStencilHalfMulti3dNoNewton : public NeighStencil {
 public:
  NeighStencilHalfMulti3dNoNewton(class LAMMPS *);
  ~NeighStencilHalfMulti3dNoNewton() {}
  void create();
};

}

#endif
#endif

/* ERROR/WARNING messages:

*/

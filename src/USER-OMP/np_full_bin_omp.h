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

#ifdef NEIGH_PAIR_CLASS

NeighPairStyle(NEIGH_PAIR_FULL_BIN_OMP,NeighPairFullBinOmp)

#else

#ifndef LMP_NEIGH_PAIR_FULL_BIN_OMP_H
#define LMP_NEIGH_PAIR_FULL_BIN_OMP_H

#include "neigh_pair.h"

namespace LAMMPS_NS {

class NeighPairFullBinOmp : public NeighPair {
 public:
  NeighPairFullBinOmp(class LAMMPS *);
  ~NeighPairFullBinOmp() {}
  void build(class NeighList *);
};

}

#endif
#endif

/* ERROR/WARNING messages:

*/

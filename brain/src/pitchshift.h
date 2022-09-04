// Copyright (C) 2015 Foam Kernow
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

#ifndef SPIRALCORE_PITCHSHIFT
#define SPIRALCORE_PITCHSHIFT

#include <spiralcore/core/types.h>
#include <spiralcore/fluxa/sample.h>
#include <rubberband/RubberBandStretcher.h>

namespace spiralcore {

  class pitchshift {
  public:
    static void init(u32 srate);
    static void process(const sample &in, float freq_change, sample &out);

    static RubberBand::RubberBandStretcher *m_stretcher;
  };

}
#endif
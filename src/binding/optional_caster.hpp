//
// Copyright 2018 coord.e
//
// This file is part of flom-py.
//
// flom-py is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// flom-py is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with flom-py.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef FLOM_PY_OPTIONAL_CASTER_HPP
#define FLOM_PY_OPTIONAL_CASTER_HPP

#include <flom/effector.hpp>

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace pybind11::detail {

template <typename T>
struct type_caster<boost::optional<T>> : optional_caster<boost::optional<T>> {};

} // namespace pybind11::detail

#endif
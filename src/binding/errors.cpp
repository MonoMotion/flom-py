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

#include <flom/errors.hpp>

#include <pybind11/pybind11.h>

#include "declarations.hpp"

namespace flom_py {

namespace py = pybind11;

void define_errors(py::module &m) {
  py::register_exception<flom::errors::InvalidTimeError>(m, "InvalidTimeError");
  py::register_exception<flom::errors::OutOfFramesError>(m, "OutOfFramesError");
  py::register_exception<flom::errors::KeyframeNotFoundError>(
      m, "KeyframeNotFoundError");
  py::register_exception<flom::errors::ParseError>(m, "ParseError");
  py::register_exception<flom::errors::SerializationError>(
      m, "SerializationError");
  py::register_exception<flom::errors::JSONLoadError>(m, "JSONLoadError");
  py::register_exception<flom::errors::JSONDumpError>(m, "JSONDumpError");
  py::register_exception<flom::errors::InvalidFrameError>(m,
                                                          "InvalidFrameError");
  py::register_exception<flom::errors::InitKeyframeError>(m,
                                                          "InitKeyframeError");
}

} // namespace flom_py

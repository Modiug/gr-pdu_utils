/*
 * Copyright 2021 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(pdu_preamble.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(619452ddb4c72caad949339ab9c68f2f)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <pdu_utils/pdu_preamble.h>
// pydoc.h is automatically generated in the build directory
#include <pdu_preamble_pydoc.h>

void bind_pdu_preamble(py::module& m)
{

    using pdu_preamble = ::gr::pdu_utils::pdu_preamble;


    py::class_<pdu_preamble, gr::block, gr::basic_block, std::shared_ptr<pdu_preamble>>(
        m, "pdu_preamble", D(pdu_preamble))

        .def(py::init(&pdu_preamble::make),
             py::arg("preamble"),
             py::arg("tail"),
             py::arg("interp") = 1,
             py::arg("zero_pad") = 0,
             py::arg("nrz") = true,
             D(pdu_preamble, make))


        .def("set_preamble",
             &pdu_preamble::set_preamble,
             py::arg("preamble"),
             D(pdu_preamble, set_preamble))


        .def("set_tail",
             &pdu_preamble::set_tail,
             py::arg("tail"),
             D(pdu_preamble, set_tail))


        .def("set_interp",
             &pdu_preamble::set_interp,
             py::arg("interp"),
             D(pdu_preamble, set_interp))


        .def("set_zero_pad",
             &pdu_preamble::set_zero_pad,
             py::arg("zero_pad"),
             D(pdu_preamble, set_zero_pad))


        .def("set_nrz", &pdu_preamble::set_nrz, py::arg("nrz"), D(pdu_preamble, set_nrz))

        ;
}

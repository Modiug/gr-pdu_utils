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
/* BINDTOOL_HEADER_FILE(pdu_head_tail.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(6960610f82194381f33952732ba1c14d)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <pdu_utils/pdu_head_tail.h>
// pydoc.h is automatically generated in the build directory
#include <pdu_head_tail_pydoc.h>

void bind_pdu_head_tail(py::module& m)
{

    using pdu_head_tail = ::gr::pdu_utils::pdu_head_tail;


    py::class_<pdu_head_tail, gr::block, gr::basic_block, std::shared_ptr<pdu_head_tail>>(
        m, "pdu_head_tail", D(pdu_head_tail))

        .def(py::init(&pdu_head_tail::make),
             py::arg("pdu_type"),
             py::arg("length"),
             py::arg("histsize"),
             D(pdu_head_tail, make))


        .def("set_length",
             &pdu_head_tail::set_length,
             py::arg("length"),
             D(pdu_head_tail, set_length))


        .def("set_histsize",
             &pdu_head_tail::set_histsize,
             py::arg("histsize"),
             D(pdu_head_tail, set_histsize))

        ;
}

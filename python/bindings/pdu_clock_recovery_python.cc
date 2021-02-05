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
/* BINDTOOL_HEADER_FILE(pdu_clock_recovery.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(7f1365a7966a1db5004f4bc1f154a341)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <pdu_utils/pdu_clock_recovery.h>
// pydoc.h is automatically generated in the build directory
#include <pdu_clock_recovery_pydoc.h>

void bind_pdu_clock_recovery(py::module& m)
{

    using pdu_clock_recovery = ::gr::pdu_utils::pdu_clock_recovery;


    py::class_<pdu_clock_recovery,
               gr::block,
               gr::basic_block,
               std::shared_ptr<pdu_clock_recovery>>(
        m, "pdu_clock_recovery", D(pdu_clock_recovery))

        .def(py::init(&pdu_clock_recovery::make),
             py::arg("binary_slice"),
             py::arg("debug") = false,
             py::arg("type") = ::gr::pdu_utils::window_type::TUKEY_WIN,
             D(pdu_clock_recovery, make))


        .def("set_window_type",
             &pdu_clock_recovery::set_window_type,
             py::arg("type"),
             D(pdu_clock_recovery, set_window_type))

        ;
}

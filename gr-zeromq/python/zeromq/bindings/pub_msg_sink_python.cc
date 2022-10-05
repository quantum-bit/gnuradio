/*
 * Copyright 2020 Free Software Foundation, Inc.
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
/* BINDTOOL_HEADER_FILE(pub_msg_sink.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(b5b8c287cff77d6cb65a5096a7c45832)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/zeromq/pub_msg_sink.h>
// pydoc.h is automatically generated in the build directory
#include <pub_msg_sink_pydoc.h>

void bind_pub_msg_sink(py::module& m)
{

    using pub_msg_sink = ::gr::zeromq::pub_msg_sink;


    py::class_<pub_msg_sink, gr::block, gr::basic_block, std::shared_ptr<pub_msg_sink>>(
        m, "pub_msg_sink", D(pub_msg_sink))

        .def(py::init(&pub_msg_sink::make),
             py::arg("address"),
             py::arg("timeout") = 100,
             py::arg("bind") = true,
             py::arg("key") = "",
             D(pub_msg_sink, make))


        .def(
            "last_endpoint", &pub_msg_sink::last_endpoint, D(pub_msg_sink, last_endpoint))

        ;
}

/**
 * \file
 * \author Thomas Fischer
 * \date   Mar 22, 2012
 * \brief  Implementation of the GMSHLine class.
 *
 * \copyright
 * Copyright (c) 2012-2015, OpenGeoSys Community (http://www.opengeosys.org)
 *            Distributed under a Modified BSD License.
 *              See accompanying file LICENSE.txt or
 *              http://www.opengeosys.org/project/license
 *
 */

#include <GmshIO/GMSHLine.h>

namespace FileIO 
{
namespace GMSH {

GMSHLine::GMSHLine(size_t start_point_id, size_t end_point_id) :
	_start_pnt_id(start_point_id), _end_pnt_id(end_point_id)
{}

GMSHLine::~GMSHLine()
{}

void GMSHLine::write(std::ostream &os, size_t id) const
{
	os << "Line(" << id << ") = {" << _start_pnt_id << "," << _end_pnt_id << "};\n";
}

void GMSHLine::resetLineData(size_t start_point_id, size_t end_point_id)
{
	_start_pnt_id = start_point_id;
	_end_pnt_id = end_point_id;
}

}
} // end namespace FileIO

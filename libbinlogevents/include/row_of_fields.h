/* Copyright (c) 2011, 2014, Oracle and/or its affiliates. All rights reserved.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301  USA */

#ifndef ROW_OF_FIELDS_INCLUDED
#define	ROW_OF_FIELDS_INCLUDED

#include "value.h"
#include <vector>
#include <iostream>

namespace binary_log
{

/**
  @class Row_of_fields

  A Row_of_fields is a standard vector of binary_log::Value objects.
  Each row in a Row_event(INSERT/UPDATE/DELETE) may contain one or more fields.
  The value and type of the field is contained in the object binary_log::Value.
*/
class Row_of_fields : public std::vector<Value >
{
public:
    Row_of_fields() : std::vector<Value >(0) { }
    explicit Row_of_fields(int field_count) : std::vector<Value >(field_count) {}
    virtual ~Row_of_fields() {}

    Row_of_fields& operator=(const Row_of_fields &right);
    Row_of_fields& operator=(Row_of_fields &right);

};

}

#endif	/* ROW_OF_FIELDS_INCLUDED */

#ifndef __LAYOUT__MAP_H__
#define __LAYOUT__MAP_H__

//==============================================================================
//
//               Map - the track class in the LAYOUT library
//
//               Copyright (C) 2013  Dick van Oudheusden
//  
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 3 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free
// Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//
//==============================================================================
// 
//  $Date$ $Revision$
//
//==============================================================================

#include "export.h"
#include "Node.h"

#include "Decimal.h"
#include "String_.h"
#include "Unsigned.h"
#include "List.h"


namespace layout
{
  ///
  /// @class Map
  ///
  /// @brief The track class.
  ///
  
  class DLL_API Map : public Node
  {
    public:

    ///
    /// Constructor
    ///
    /// @param  parent     the parent node
    /// @param  name       the name of the attribute or element
    /// @param  type       the node type (ATTRIBUTE or ELEMENT)
    /// @param  mandatory  is the attribute or element mandatory ?
    ///
    Map(Node *parent, const char *name, Type type, bool mandatory = false);

    ///
    /// Deconstructor
    ///
    virtual ~Map();
    
    ///
    /// Get source
    ///
    /// @return the source element
    ///
    Unsigned  &source() { return _source; }

    ///
    /// Get align
    ///
    /// @return the align attribute
    ///
    String  &align() { return _align; }

    ///
    /// Get x
    ///
    /// @return the x attribute
    ///
    Unsigned  &x() { return _x; }

    ///
    /// Get y
    ///
    /// @return the y attribute
    ///
    Unsigned  &y() { return _y; }

    ///
    /// Get width
    ///
    /// @return the width attribute
    ///
    Unsigned  &width() { return _width; }

    ///
    /// Get height
    ///
    /// @return the height attribute
    ///
    Unsigned  &height() { return _height; }

    ///
    /// Get margin
    ///
    /// @return the margin attribute
    ///
    Unsigned  &margin() { return _margin; }

    ///
    /// Get zoom
    ///
    /// @return the zoom element
    ///
    Unsigned  &zoom() { return _zoom; }

	///
	/// Get factor
	/// 
	/// @return the factor elememnt
	///
	Decimal &factor() { return _factor; }

    // Methods

    private:
    
    // Members
    Unsigned     _source;
    String       _align;
    Unsigned     _x, _y;
	Unsigned     _width, _height;
	Unsigned     _margin;
	Unsigned     _zoom;
	Decimal      _factor;
    
    // Disable copy constructors
    Map(const Map &);
    Map& operator=(const Map &);  
  };
}

#endif


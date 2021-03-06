//////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2019 by bitbybit3d, All rights reserved. 
// Author: bitbybit3d@163.com 
// 
// 
// THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
// EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, 
// MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
//////////////////////////////////////////////////////////////////////////////
#ifndef __JT_TOOLKIT_CAD_EXPORTER_H_
#define __JT_TOOLKIT_CAD_EXPORTER_H_

#include <memory>

#include "JtEntity.h"

class JtHierarchy;

/**
 * @brief Save the root node to a JT format file.
 */
class JT_TOOLKIT_EXPORT JtCADExporter : public JtEntity
{
protected:
    JtCADExporter();

public:

    /**
     * @brief Return the TypeID for class.
     */
    static TypeID classTypeID();
    /**
     * @brief Return the TypeID for instance.
     */
    virtual TypeID typeID() const;
    /**
     * @brief Return true if instance belong to the type id.
     */
    virtual bool isOfSubType(TypeID id) const;

    virtual void setExportPath(const wchar_t* path) = 0;

    virtual bool exportJt(std::shared_ptr<JtHierarchy> root) const = 0;
};

#endif  // __JT_TOOLKIT_CAD_EXPORTER_H_

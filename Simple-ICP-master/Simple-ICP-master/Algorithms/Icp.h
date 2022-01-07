#ifndef ICP_H
#define ICP_H

#include "AbstractIcp.h"

class Icp : public AbstractIcp {
public:
    Icp();

    AbstractIcp& align(PointCloudT& src, PointCloudT& tgt) override;
};

#endif // ICP_H

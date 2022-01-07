#include "Icp.h"
#include <pcl/registration/icp.h>

using namespace std;

Icp::Icp()
    : AbstractIcp()
{
    _reg = boost::make_shared<pcl::IterativeClosestPoint<PointT, PointT>>();
    _reg->setMaximumIterations(_iters);
    _reg->setMaxCorrespondenceDistance(_maxDist);
    _reg->setTransformationEpsilon(_epsilon);
}

AbstractIcp& Icp::align(AbstractIcp::PointCloudT& src, AbstractIcp::PointCloudT& tgt)
{
    _reg->setInputSource(boost::make_shared<PointCloudT>(src));
    _reg->setInputTarget(boost::make_shared<PointCloudT>(tgt));

    _aligned.clear();
    _aligned.reserve(src.size());
    _reg->align(_aligned);

    if (_reg->hasConverged()) {
        _score = _reg->getFitnessScore();
        _Tts = _reg->getFinalTransformation();
    } else {
        _score = numeric_limits<double>::max();
        _Tts = Eigen::Matrix4f::Identity();
    }

    return *this;
}

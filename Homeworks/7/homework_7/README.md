**https://stackoverflow.com/questions/22062534/sift-clustering-converting-sift-features-128-dimensional-vector-into-a-vocabul**



Select random initial centers in each attempt.
KMEANS_RANDOM_CENTERS     = 0,


/** Use kmeans++ center initialization by Arthur and Vassilvitskii [Arthur2007].*/
KMEANS_PP_CENTERS         = 2,


/** During the first (and possibly the only) attempt, use the
user-supplied labels instead of computing them from the initial centers. 

For the second and
further attempts, use the random or semi-random centers. Use one of KMEANS_\*_CENTERS flag
to specify the exact method.*/
KMEANS_USE_INITIAL_LABELS = 1
// File generated automatically, do not modify 
namespace gen_wrap_cv{
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( createTonemapDrago_wrap_obj, cv::createTonemapDrago,  0, 3, Ptr<cv::TonemapDrago> (*)(float,float,float));
auto createTonemapDrago = createTonemapDrago_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( solvePnP_wrap_obj, cv::solvePnP,  6, 8, bool (*)(InputArray,InputArray,InputArray,InputArray,OutputArray,OutputArray,bool,int));
auto solvePnP = solvePnP_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( Laplacian_wrap_obj, cv::Laplacian,  3, 7, void (*)(InputArray,OutputArray,int,int,double,double,int));
auto Laplacian = Laplacian_wrap_obj();
identity<void (*)(InputArray,InputArray,InputArray,OutputArray)>::type inRange = &cv::inRange;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( bilateralFilter_wrap_obj, cv::bilateralFilter,  5, 6, void (*)(InputArray,OutputArray,int,double,double,int));
auto bilateralFilter = bilateralFilter_wrap_obj();
identity<int (*)()>::type getThreadNum = &cv::getThreadNum;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( pyrDown_wrap_obj, cv::pyrDown,  2, 4, void (*)(InputArray,OutputArray,const Size &,int));
auto pyrDown = pyrDown_wrap_obj();
identity<int64 (*)()>::type getTickCount = &cv::getTickCount;
identity<void (*)(const std::vector<std::vector<DMatch> > &,const std::vector<std::vector<uchar> > &,std::vector<Point2f> &)>::type computeRecallPrecisionCurve = &cv::computeRecallPrecisionCurve;
identity<int (*)(InputArray,OutputArray,OutputArray,OutputArray,int,int,int)>::type connectedComponentsWithStats0 = &cv::connectedComponentsWithStats;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( connectedComponentsWithStats_wrap_obj1, cv::connectedComponentsWithStats,  4, 6, int (*)(InputArray,OutputArray,OutputArray,OutputArray,int,int));
auto connectedComponentsWithStats1 = connectedComponentsWithStats_wrap_obj1();
auto connectedComponentsWithStats = kaguya::overload(connectedComponentsWithStats0,connectedComponentsWithStats1);
identity<double (*)(InputArray,InputArray,int,double)>::type matchShapes = &cv::matchShapes;
identity<bool (*)(InputArray,InputOutputArray,Size)>::type find4QuadCornerSubpix = &cv::find4QuadCornerSubpix;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( patchNaNs_wrap_obj, cv::patchNaNs,  1, 2, void (*)(InputOutputArray,double));
auto patchNaNs = patchNaNs_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( fastNlMeansDenoisingColored_wrap_obj, cv::fastNlMeansDenoisingColored,  2, 6, void (*)(InputArray,OutputArray,float,float,int,int));
auto fastNlMeansDenoisingColored = fastNlMeansDenoisingColored_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( bitwise_or_wrap_obj, cv::bitwise_or,  3, 4, void (*)(InputArray,InputArray,OutputArray,InputArray));
auto bitwise_or = bitwise_or_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( Sobel_wrap_obj, cv::Sobel,  5, 9, void (*)(InputArray,OutputArray,int,int,int,int,double,double,int));
auto Sobel = Sobel_wrap_obj();
identity<void (*)(InputArray,InputArray,InputArray,InputArray,Size,int,OutputArray,OutputArray)>::type initUndistortRectifyMap = &cv::initUndistortRectifyMap;
identity<void (*)(const cv::Mat &,const cv::String &,Point,const cv::QtFont &)>::type addText0 = &cv::addText;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( addText_wrap_obj1, cv::addText,  4, 9, void (*)(const cv::Mat &,const cv::String &,Point,const cv::String &,int,Scalar,int,int,int));
auto addText1 = addText_wrap_obj1();
auto addText = kaguya::overload(addText0,addText1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( putText_wrap_obj, cv::putText,  6, 9, void (*)(InputOutputArray,const cv::String &,Point,int,double,Scalar,int,int,bool));
auto putText = putText_wrap_obj();
identity<bool (*)(InputArray)>::type isContourConvex = &cv::isContourConvex;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( addWeighted_wrap_obj, cv::addWeighted,  6, 7, void (*)(InputArray,double,InputArray,double,double,OutputArray,int));
auto addWeighted = addWeighted_wrap_obj();
identity<void (*)(InputArray,InputArray,OutputArray,double,int)>::type inpaint = &cv::inpaint;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( reduce_wrap_obj, cv::reduce,  4, 5, void (*)(InputArray,OutputArray,int,int,int));
auto reduce = reduce_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( norm_wrap_obj0, cv::norm,  1, 3, double (*)(InputArray,int,InputArray));
auto norm0 = norm_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( norm_wrap_obj1, cv::norm,  2, 4, double (*)(InputArray,InputArray,int,InputArray));
auto norm1 = norm_wrap_obj1();
identity<double (*)(const cv::SparseMat &,int)>::type norm2 = &cv::norm;
auto norm = kaguya::overload(norm0,norm1,norm2);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( kmeans_wrap_obj, cv::kmeans,  6, 7, double (*)(InputArray,int,InputOutputArray,cv::TermCriteria,int,int,OutputArray));
auto kmeans = kmeans_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( initWideAngleProjMap_wrap_obj, cv::initWideAngleProjMap,  7, 9, float (*)(InputArray,InputArray,Size,int,int,OutputArray,OutputArray,int,double));
auto initWideAngleProjMap = initWideAngleProjMap_wrap_obj();
identity<void (*)(InputArray,OutputArray)>::type equalizeHist = &cv::equalizeHist;
identity<void (*)(int,const cv::String &,const char *,const char *,int)>::type error0 = &cv::error;
identity<void (*)(const cv::Exception &)>::type error1 = &cv::error;
auto error = kaguya::overload(error0,error1);
identity<void (*)(InputArray,OutputArray,int,double,double,double)>::type fitLine = &cv::fitLine;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( createBackgroundSubtractorKNN_wrap_obj, cv::createBackgroundSubtractorKNN,  0, 3, Ptr<cv::BackgroundSubtractorKNN> (*)(int,double,bool));
auto createBackgroundSubtractorKNN = createBackgroundSubtractorKNN_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( createTonemap_wrap_obj, cv::createTonemap,  0, 1, Ptr<cv::Tonemap> (*)(float));
auto createTonemap = createTonemap_wrap_obj();
identity<float (*)(InputArray,InputArray,InputArray,InputArray,InputArray,InputArray,InputArrayOfArrays,InputArrayOfArrays,Size,InputArray,InputArray,InputArray,InputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray,double,Size,Rect *,Rect *,int)>::type rectify3Collinear = &cv::rectify3Collinear;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( completeSymm_wrap_obj, cv::completeSymm,  1, 2, void (*)(InputOutputArray,bool));
auto completeSymm = completeSymm_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( PCACompute_wrap_obj0, cv::PCACompute,  3, 4, void (*)(InputArray,InputOutputArray,OutputArray,int));
auto PCACompute0 = PCACompute_wrap_obj0();
identity<void (*)(InputArray,InputOutputArray,OutputArray,double)>::type PCACompute1 = &cv::PCACompute;
auto PCACompute = kaguya::overload(PCACompute0,PCACompute1);
identity<int (*)(const cv::Mat &,const cv::Mat &,cv::Mat &)>::type solveLP = &cv::solveLP;
identity<float (*)(const std::vector<Point2f> &,float)>::type getRecall = &cv::getRecall;
identity<double (*)()>::type getTickFrequency = &cv::getTickFrequency;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( warpAffine_wrap_obj, cv::warpAffine,  4, 7, void (*)(InputArray,OutputArray,InputArray,Size,int,int,const Scalar &));
auto warpAffine = warpAffine_wrap_obj();
identity<cv::Mat (*)(InputArray,InputArray,bool)>::type estimateRigidTransform = &cv::estimateRigidTransform;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( add_wrap_obj, cv::add,  3, 5, void (*)(InputArray,InputArray,OutputArray,InputArray,int));
auto add = add_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( edgePreservingFilter_wrap_obj, cv::edgePreservingFilter,  2, 5, void (*)(InputArray,OutputArray,int,float,float));
auto edgePreservingFilter = edgePreservingFilter_wrap_obj();
identity<void (*)(InputArray,Size,double,double,double &,double &,double &,Point2d &,double &)>::type calibrationMatrixValues = &cv::calibrationMatrixValues;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( spatialGradient_wrap_obj, cv::spatialGradient,  3, 5, void (*)(InputArray,OutputArray,OutputArray,int,int));
auto spatialGradient = spatialGradient_wrap_obj();
identity<void (*)(InputArray,InputArray,OutputArray)>::type convexityDefects = &cv::convexityDefects;
identity<void (*)(const cv::String &,int,int)>::type resizeWindow = &cv::resizeWindow;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( solvePnPRansac_wrap_obj, cv::solvePnPRansac,  6, 12, bool (*)(InputArray,InputArray,InputArray,InputArray,OutputArray,OutputArray,bool,int,float,double,OutputArray,int));
auto solvePnPRansac = solvePnPRansac_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( cornerHarris_wrap_obj, cv::cornerHarris,  5, 6, void (*)(InputArray,OutputArray,int,int,double,int));
auto cornerHarris = cornerHarris_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( gemm_wrap_obj, cv::gemm,  6, 7, void (*)(InputArray,InputArray,double,InputArray,double,OutputArray,int));
auto gemm = gemm_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( waitKey_wrap_obj, cv::waitKey,  0, 1, int (*)(int));
auto waitKey = waitKey_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( fastNlMeansDenoisingMulti_wrap_obj0, cv::fastNlMeansDenoisingMulti,  4, 7, void (*)(InputArrayOfArrays,OutputArray,int,int,float,int,int));
auto fastNlMeansDenoisingMulti0 = fastNlMeansDenoisingMulti_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( fastNlMeansDenoisingMulti_wrap_obj1, cv::fastNlMeansDenoisingMulti,  5, 8, void (*)(InputArrayOfArrays,OutputArray,int,int,const std::vector<float> &,int,int,int));
auto fastNlMeansDenoisingMulti1 = fastNlMeansDenoisingMulti_wrap_obj1();
auto fastNlMeansDenoisingMulti = kaguya::overload(fastNlMeansDenoisingMulti0,fastNlMeansDenoisingMulti1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( reprojectImageTo3D_wrap_obj, cv::reprojectImageTo3D,  3, 5, void (*)(InputArray,OutputArray,InputArray,bool,int));
auto reprojectImageTo3D = reprojectImageTo3D_wrap_obj();
identity<void (*)(InputArray,InputArray,InputArray,InputArray,OutputArray)>::type triangulatePoints = &cv::triangulatePoints;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( createTonemapDurand_wrap_obj, cv::createTonemapDurand,  0, 5, Ptr<cv::TonemapDurand> (*)(float,float,float,float,float));
auto createTonemapDurand = createTonemapDurand_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( createMergeMertens_wrap_obj, cv::createMergeMertens,  0, 3, Ptr<cv::MergeMertens> (*)(float,float,float));
auto createMergeMertens = createMergeMertens_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( mulSpectrums_wrap_obj, cv::mulSpectrums,  4, 5, void (*)(InputArray,InputArray,OutputArray,int,bool));
auto mulSpectrums = mulSpectrums_wrap_obj();
identity<Ptr<cv::MergeDebevec> (*)()>::type createMergeDebevec = &cv::createMergeDebevec;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( evaluateFeatureDetector_wrap_obj, cv::evaluateFeatureDetector,  7, 8, void (*)(const cv::Mat &,const cv::Mat &,const cv::Mat &,std::vector<KeyPoint> *,std::vector<KeyPoint> *,float &,int &,const Ptr<FeatureDetector> &));
auto evaluateFeatureDetector = evaluateFeatureDetector_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( recoverPose_wrap_obj0, cv::recoverPose,  6, 7, int (*)(InputArray,InputArray,InputArray,InputArray,OutputArray,OutputArray,InputOutputArray));
auto recoverPose0 = recoverPose_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( recoverPose_wrap_obj1, cv::recoverPose,  5, 8, int (*)(InputArray,InputArray,InputArray,OutputArray,OutputArray,double,Point2d,InputOutputArray));
auto recoverPose1 = recoverPose_wrap_obj1();
auto recoverPose = kaguya::overload(recoverPose0,recoverPose1);
identity<cv::RotatedRect (*)(InputArray,Rect &,cv::TermCriteria)>::type CamShift = &cv::CamShift;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( batchDistance_wrap_obj, cv::batchDistance,  5, 10, void (*)(InputArray,InputArray,OutputArray,int,OutputArray,int,int,InputArray,int,bool));
auto batchDistance = batchDistance_wrap_obj();
identity<Ptr<BaseCascadeClassifier::MaskGenerator> (*)()>::type createFaceDetectionMaskGenerator = &cv::createFaceDetectionMaskGenerator;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( setIdentity_wrap_obj, cv::setIdentity,  1, 2, void (*)(InputOutputArray,const Scalar &));
auto setIdentity = setIdentity_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( drawKeypoints_wrap_obj, cv::drawKeypoints,  3, 5, void (*)(InputArray,const std::vector<KeyPoint> &,InputOutputArray,const Scalar &,int));
auto drawKeypoints = drawKeypoints_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( filter2D_wrap_obj, cv::filter2D,  4, 7, void (*)(InputArray,OutputArray,int,InputArray,Point,double,int));
auto filter2D = filter2D_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( cvarrToMatND_wrap_obj, cv::cvarrToMatND,  1, 3, cv::Mat (*)(const CvArr *,bool,int));
auto cvarrToMatND = cvarrToMatND_wrap_obj();
identity<void (*)(const cv::String &)>::type destroyWindow = &cv::destroyWindow;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( GaussianBlur_wrap_obj, cv::GaussianBlur,  4, 6, void (*)(InputArray,OutputArray,Size,double,double,int));
auto GaussianBlur = GaussianBlur_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( createEMDHistogramCostExtractor_wrap_obj, cv::createEMDHistogramCostExtractor,  0, 3, Ptr<cv::HistogramCostExtractor> (*)(int,int,float));
auto createEMDHistogramCostExtractor = createEMDHistogramCostExtractor_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( extractImageCOI_wrap_obj, cv::extractImageCOI,  2, 3, void (*)(const CvArr *,OutputArray,int));
auto extractImageCOI = extractImageCOI_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( Canny_wrap_obj0, cv::Canny,  4, 6, void (*)(InputArray,OutputArray,double,double,int,bool));
auto Canny0 = Canny_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( Canny_wrap_obj1, cv::Canny,  5, 6, void (*)(InputArray,InputArray,OutputArray,double,double,bool));
auto Canny1 = Canny_wrap_obj1();
auto Canny = kaguya::overload(Canny0,Canny1);
identity<void (*)(InputArray,OutputArray,Point2f,double,int)>::type linearPolar = &cv::linearPolar;
identity<void (*)(InputArray,OutputArray)>::type transpose = &cv::transpose;
identity<const cv::String & (*)()>::type getBuildInformation = &cv::getBuildInformation;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( circle_wrap_obj, cv::circle,  4, 7, void (*)(InputOutputArray,Point,int,const Scalar &,int,int,int));
auto circle = circle_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( stylization_wrap_obj, cv::stylization,  2, 4, void (*)(InputArray,OutputArray,float,float));
auto stylization = stylization_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( seqPop_wrap_obj, cv::seqPop,  1, 2, void (*)(CvSeq *,void *));
auto seqPop = seqPop_wrap_obj();
identity<void (*)(int)>::type setRNGSeed = &cv::setRNGSeed;
identity<void (*)(CvSeq *)>::type clearSeq = &cv::clearSeq;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( idct_wrap_obj, cv::idct,  2, 3, void (*)(InputArray,OutputArray,int));
auto idct = idct_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( matchTemplate_wrap_obj, cv::matchTemplate,  4, 5, void (*)(InputArray,InputArray,OutputArray,int,InputArray));
auto matchTemplate = matchTemplate_wrap_obj();
identity<double (*)(InputArray,InputArray,InputArray)>::type Mahalanobis = &cv::Mahalanobis;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( findContours_wrap_obj0, cv::findContours,  5, 6, void (*)(InputOutputArray,OutputArrayOfArrays,OutputArray,int,int,Point));
auto findContours0 = findContours_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( findContours_wrap_obj1, cv::findContours,  4, 5, void (*)(InputOutputArray,OutputArrayOfArrays,int,int,Point));
auto findContours1 = findContours_wrap_obj1();
auto findContours = kaguya::overload(findContours0,findContours1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( seqPushFront_wrap_obj, cv::seqPushFront,  1, 2, schar * (*)(CvSeq *,const void *));
auto seqPushFront = seqPushFront_wrap_obj();
identity<void (*)(InputArray,OutputArray)>::type convertFp16 = &cv::convertFp16;
identity<int (*)(const cv::String &,const cv::String &)>::type getTrackbarPos = &cv::getTrackbarPos;
identity<cv::Mat (*)(InputArray,int)>::type imdecode0 = &cv::imdecode;
identity<cv::Mat (*)(InputArray,int,cv::Mat *)>::type imdecode1 = &cv::imdecode;
auto imdecode = kaguya::overload(imdecode0,imdecode1);
identity<void (*)(const cv::String &,const cv::String &,int)>::type setTrackbarMax = &cv::setTrackbarMax;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( HoughCircles_wrap_obj, cv::HoughCircles,  5, 9, void (*)(InputArray,OutputArray,int,double,double,double,double,int,int));
auto HoughCircles = HoughCircles_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( dft_wrap_obj, cv::dft,  2, 4, void (*)(InputArray,OutputArray,int,int));
auto dft = dft_wrap_obj();
identity<Scalar (*)(InputArray)>::type trace = &cv::trace;
identity<void (*)(InputArray,double,InputArray,OutputArray)>::type scaleAdd = &cv::scaleAdd;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( createEMDL1HistogramCostExtractor_wrap_obj, cv::createEMDL1HistogramCostExtractor,  0, 2, Ptr<cv::HistogramCostExtractor> (*)(int,float));
auto createEMDL1HistogramCostExtractor = createEMDL1HistogramCostExtractor_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( findChessboardCorners_wrap_obj, cv::findChessboardCorners,  3, 4, bool (*)(InputArray,Size,OutputArray,int));
auto findChessboardCorners = findChessboardCorners_wrap_obj();
identity<bool (*)(int)>::type checkHardwareSupport = &cv::checkHardwareSupport;
identity<void (*)(const cv::String &)>::type updateWindow = &cv::updateWindow;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( AGAST_wrap_obj0, cv::AGAST,  3, 4, void (*)(InputArray,std::vector<KeyPoint> &,int,bool));
auto AGAST0 = AGAST_wrap_obj0();
identity<void (*)(InputArray,std::vector<KeyPoint> &,int,bool,int)>::type AGAST1 = &cv::AGAST;
auto AGAST = kaguya::overload(AGAST0,AGAST1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( phaseCorrelate_wrap_obj, cv::phaseCorrelate,  2, 4, Point2d (*)(InputArray,InputArray,InputArray,double *));
auto phaseCorrelate = phaseCorrelate_wrap_obj();
identity<cv::Mat (*)(const Point2f [],const Point2f [])>::type getAffineTransform0 = &cv::getAffineTransform;
identity<cv::Mat (*)(InputArray,InputArray)>::type getAffineTransform1 = &cv::getAffineTransform;
auto getAffineTransform = kaguya::overload(getAffineTransform0,getAffineTransform1);
identity<void (*)(InputOutputArray,InputArray,InputArray)>::type randn = &cv::randn;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( remap_wrap_obj, cv::remap,  5, 7, void (*)(InputArray,OutputArray,InputArray,InputArray,int,int,const Scalar &));
auto remap = remap_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( getGaborKernel_wrap_obj, cv::getGaborKernel,  5, 7, cv::Mat (*)(Size,double,double,double,double,double,int));
auto getGaborKernel = getGaborKernel_wrap_obj();
identity<int (*)()>::type getNumThreads = &cv::getNumThreads;
identity<void (*)(cv::RotatedRect,OutputArray)>::type boxPoints = &cv::boxPoints;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( colorChange_wrap_obj, cv::colorChange,  3, 6, void (*)(InputArray,InputArray,OutputArray,float,float,float));
auto colorChange = colorChange_wrap_obj();
identity<Ptr<cv::GeneralizedHoughBallard> (*)()>::type createGeneralizedHoughBallard = &cv::createGeneralizedHoughBallard;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( namedWindow_wrap_obj, cv::namedWindow,  1, 2, void (*)(const cv::String &,int));
auto namedWindow = namedWindow_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( initCameraMatrix2D_wrap_obj, cv::initCameraMatrix2D,  3, 4, cv::Mat (*)(InputArrayOfArrays,InputArrayOfArrays,Size,double));
auto initCameraMatrix2D = initCameraMatrix2D_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( drawMarker_wrap_obj, cv::drawMarker,  3, 7, void (*)(cv::Mat &,Point,const Scalar &,int,int,int,int));
auto drawMarker = drawMarker_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( polarToCart_wrap_obj, cv::polarToCart,  4, 5, void (*)(InputArray,InputArray,OutputArray,OutputArray,bool));
auto polarToCart = polarToCart_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( bitwise_xor_wrap_obj, cv::bitwise_xor,  3, 4, void (*)(InputArray,InputArray,OutputArray,InputArray));
auto bitwise_xor = bitwise_xor_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( buildOpticalFlowPyramid_wrap_obj, cv::buildOpticalFlowPyramid,  4, 8, int (*)(InputArray,OutputArrayOfArrays,Size,int,bool,int,int,bool));
auto buildOpticalFlowPyramid = buildOpticalFlowPyramid_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( subtract_wrap_obj, cv::subtract,  3, 5, void (*)(InputArray,InputArray,OutputArray,InputArray,int));
auto subtract = subtract_wrap_obj();
identity<void (*)(InputOutputArray,Size,InputArray,bool)>::type drawChessboardCorners = &cv::drawChessboardCorners;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( erode_wrap_obj, cv::erode,  3, 7, void (*)(InputArray,OutputArray,InputArray,Point,int,int,const Scalar &));
auto erode = erode_wrap_obj();
identity<void (*)(const cv::Mat *,size_t,OutputArray)>::type vconcat0 = &cv::vconcat;
identity<void (*)(InputArray,InputArray,OutputArray)>::type vconcat1 = &cv::vconcat;
identity<void (*)(InputArrayOfArrays,OutputArray)>::type vconcat2 = &cv::vconcat;
auto vconcat = kaguya::overload(vconcat0,vconcat1,vconcat2);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( seqPopFront_wrap_obj, cv::seqPopFront,  1, 2, void (*)(CvSeq *,void *));
auto seqPopFront = seqPopFront_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( fontQt_wrap_obj, cv::fontQt,  1, 6, cv::QtFont (*)(const cv::String &,int,Scalar,int,int,int));
auto fontQt = fontQt_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( createCLAHE_wrap_obj, cv::createCLAHE,  0, 2, Ptr<cv::CLAHE> (*)(double,Size));
auto createCLAHE = createCLAHE_wrap_obj();
identity<void (*)()>::type stopLoop = &cv::stopLoop;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( ellipse_wrap_obj0, cv::ellipse,  7, 10, void (*)(InputOutputArray,Point,Size,double,double,double,const Scalar &,int,int,int));
auto ellipse0 = ellipse_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( ellipse_wrap_obj1, cv::ellipse,  3, 5, void (*)(InputOutputArray,const cv::RotatedRect &,const Scalar &,int,int));
auto ellipse1 = ellipse_wrap_obj1();
auto ellipse = kaguya::overload(ellipse0,ellipse1);
identity<void (*)(InputArray,int,int,OutputArray)>::type repeat0 = &cv::repeat;
identity<cv::Mat (*)(const cv::Mat &,int,int)>::type repeat1 = &cv::repeat;
auto repeat = kaguya::overload(repeat0,repeat1);
identity<void (*)(cv::FileStorage &,const cv::String &,int)>::type write0 = &cv::write;
identity<void (*)(cv::FileStorage &,const cv::String &,float)>::type write1 = &cv::write;
identity<void (*)(cv::FileStorage &,const cv::String &,double)>::type write2 = &cv::write;
identity<void (*)(cv::FileStorage &,const cv::String &,const cv::String &)>::type write3 = &cv::write;
identity<void (*)(cv::FileStorage &,const cv::String &,const cv::Mat &)>::type write4 = &cv::write;
identity<void (*)(cv::FileStorage &,const cv::String &,const cv::SparseMat &)>::type write5 = &cv::write;
identity<void (*)(cv::FileStorage &,const cv::String &,const std::vector<KeyPoint> &)>::type write6 = &cv::write;
identity<void (*)(cv::FileStorage &,const cv::String &,const std::vector<DMatch> &)>::type write7 = &cv::write;
identity<void (*)(cv::FileStorage &,const cv::Range &)>::type write8 = &cv::write;
identity<void (*)(cv::FileStorage &,const cv::String &,const cv::Range &)>::type write9 = &cv::write;
auto write = kaguya::overload(write0,write1,write2,write3,write4,write5,write6,write7,write8,write9);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( pyrMeanShiftFiltering_wrap_obj, cv::pyrMeanShiftFiltering,  4, 6, void (*)(InputArray,OutputArray,double,double,int,cv::TermCriteria));
auto pyrMeanShiftFiltering = pyrMeanShiftFiltering_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( pyrUp_wrap_obj, cv::pyrUp,  2, 4, void (*)(InputArray,OutputArray,const Size &,int));
auto pyrUp = pyrUp_wrap_obj();
identity<void (*)(InputArray,OutputArray,Point2f,double,int)>::type logPolar = &cv::logPolar;
identity<void (*)(InputArray,InputOutputArray,int)>::type insertChannel = &cv::insertChannel;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( parallel_for__wrap_obj, cv::parallel_for_,  2, 3, void (*)(const cv::Range &,const cv::ParallelLoopBody &,double));
auto parallel_for_ = parallel_for__wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( createTonemapReinhard_wrap_obj, cv::createTonemapReinhard,  0, 4, Ptr<cv::TonemapReinhard> (*)(float,float,float,float));
auto createTonemapReinhard = createTonemapReinhard_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( intersectConvexConvex_wrap_obj, cv::intersectConvexConvex,  3, 4, float (*)(InputArray,InputArray,OutputArray,bool));
auto intersectConvexConvex = intersectConvexConvex_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( findHomography_wrap_obj0, cv::findHomography,  2, 7, cv::Mat (*)(InputArray,InputArray,int,double,OutputArray,const int,const double));
auto findHomography0 = findHomography_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( findHomography_wrap_obj1, cv::findHomography,  3, 5, cv::Mat (*)(InputArray,InputArray,OutputArray,int,double));
auto findHomography1 = findHomography_wrap_obj1();
auto findHomography = kaguya::overload(findHomography0,findHomography1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( imwrite_wrap_obj, cv::imwrite,  2, 3, bool (*)(const cv::String &,InputArray,const std::vector<int> &));
auto imwrite = imwrite_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( solve_wrap_obj, cv::solve,  3, 4, bool (*)(InputArray,InputArray,OutputArray,int));
auto solve = solve_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( arrowedLine_wrap_obj, cv::arrowedLine,  4, 8, void (*)(InputOutputArray,Point,Point,const Scalar &,int,int,int,double));
auto arrowedLine = arrowedLine_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( tempfile_wrap_obj, cv::tempfile,  0, 1, cv::String (*)(const char *));
auto tempfile = tempfile_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( integral_wrap_obj0, cv::integral,  2, 3, void (*)(InputArray,OutputArray,int));
auto integral0 = integral_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( integral_wrap_obj1, cv::integral,  3, 5, void (*)(InputArray,OutputArray,OutputArray,int,int));
auto integral1 = integral_wrap_obj1();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( integral_wrap_obj2, cv::integral,  4, 6, void (*)(InputArray,OutputArray,OutputArray,OutputArray,int,int));
auto integral2 = integral_wrap_obj2();
auto integral = kaguya::overload(integral0,integral1,integral2);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( createShapeContextDistanceExtractor_wrap_obj, cv::createShapeContextDistanceExtractor,  0, 7, Ptr<cv::ShapeContextDistanceExtractor> (*)(int,int,float,float,int,const Ptr<cv::HistogramCostExtractor> &,const Ptr<cv::ShapeTransformer> &));
auto createShapeContextDistanceExtractor = createShapeContextDistanceExtractor_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( preCornerDetect_wrap_obj, cv::preCornerDetect,  3, 4, void (*)(InputArray,OutputArray,int,int));
auto preCornerDetect = preCornerDetect_wrap_obj();
identity<void (*)(int)>::type setNumThreads = &cv::setNumThreads;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( displayOverlay_wrap_obj, cv::displayOverlay,  2, 3, void (*)(const cv::String &,const cv::String &,int));
auto displayOverlay = displayOverlay_wrap_obj();
identity<void (*)(InputArray,InputArray,OutputArray)>::type LUT = &cv::LUT;
identity<void (*)(InputArray,OutputArray)>::type convertPointsToHomogeneous = &cv::convertPointsToHomogeneous;
identity<void (*)(InputArray,Point2f &,float &)>::type minEnclosingCircle = &cv::minEnclosingCircle;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( estimateAffinePartial2D_wrap_obj, cv::estimateAffinePartial2D,  2, 8, cv::Mat (*)(InputArray,InputArray,OutputArray,int,double,size_t,double,size_t));
auto estimateAffinePartial2D = estimateAffinePartial2D_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( rectangle_wrap_obj0, cv::rectangle,  4, 7, void (*)(InputOutputArray,Point,Point,const Scalar &,int,int,int));
auto rectangle0 = rectangle_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( rectangle_wrap_obj1, cv::rectangle,  3, 6, void (*)(cv::Mat &,Rect,const Scalar &,int,int,int));
auto rectangle1 = rectangle_wrap_obj1();
auto rectangle = kaguya::overload(rectangle0,rectangle1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( undistortPoints_wrap_obj, cv::undistortPoints,  4, 6, void (*)(InputArray,OutputArray,InputArray,InputArray,InputArray,InputArray));
auto undistortPoints = undistortPoints_wrap_obj();
identity<void (*)(InputArray,InputArray,OutputArray,OutputArray)>::type matMulDeriv = &cv::matMulDeriv;
identity<int64 (*)()>::type getCPUTickCount = &cv::getCPUTickCount;
identity<void (*)(CvSeq *,int)>::type seqRemove = &cv::seqRemove;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( createStitcher_wrap_obj, cv::createStitcher,  0, 1, Ptr<cv::Stitcher> (*)(bool));
auto createStitcher = createStitcher_wrap_obj();
identity<cv::RNG & (*)()>::type theRNG = &cv::theRNG;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( createChiHistogramCostExtractor_wrap_obj, cv::createChiHistogramCostExtractor,  0, 2, Ptr<cv::HistogramCostExtractor> (*)(int,float));
auto createChiHistogramCostExtractor = createChiHistogramCostExtractor_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( convertMaps_wrap_obj, cv::convertMaps,  5, 6, void (*)(InputArray,InputArray,OutputArray,OutputArray,int,bool));
auto convertMaps = convertMaps_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( polylines_wrap_obj0, cv::polylines,  6, 9, void (*)(cv::Mat &,const Point *const *,const int *,int,bool,const Scalar &,int,int,int));
auto polylines0 = polylines_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( polylines_wrap_obj1, cv::polylines,  4, 7, void (*)(InputOutputArray,InputArrayOfArrays,bool,const Scalar &,int,int,int));
auto polylines1 = polylines_wrap_obj1();
auto polylines = kaguya::overload(polylines0,polylines1);
identity<void (*)(InputArray,OutputArray,int)>::type extractChannel = &cv::extractChannel;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( accumulateProduct_wrap_obj, cv::accumulateProduct,  3, 4, void (*)(InputArray,InputArray,InputOutputArray,InputArray));
auto accumulateProduct = accumulateProduct_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( fastNlMeansDenoising_wrap_obj0, cv::fastNlMeansDenoising,  2, 5, void (*)(InputArray,OutputArray,float,int,int));
auto fastNlMeansDenoising0 = fastNlMeansDenoising_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( fastNlMeansDenoising_wrap_obj1, cv::fastNlMeansDenoising,  3, 6, void (*)(InputArray,OutputArray,const std::vector<float> &,int,int,int));
auto fastNlMeansDenoising1 = fastNlMeansDenoising_wrap_obj1();
auto fastNlMeansDenoising = kaguya::overload(fastNlMeansDenoising0,fastNlMeansDenoising1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( createBackgroundSubtractorMOG2_wrap_obj, cv::createBackgroundSubtractorMOG2,  0, 3, Ptr<cv::BackgroundSubtractorMOG2> (*)(int,double,bool));
auto createBackgroundSubtractorMOG2 = createBackgroundSubtractorMOG2_wrap_obj();
identity<void (*)(bool)>::type setUseOptimized = &cv::setUseOptimized;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( distanceTransform_wrap_obj0, cv::distanceTransform,  5, 6, void (*)(InputArray,OutputArray,OutputArray,int,int,int));
auto distanceTransform0 = distanceTransform_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( distanceTransform_wrap_obj1, cv::distanceTransform,  4, 5, void (*)(InputArray,OutputArray,int,int,int));
auto distanceTransform1 = distanceTransform_wrap_obj1();
auto distanceTransform = kaguya::overload(distanceTransform0,distanceTransform1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( getDefaultNewCameraMatrix_wrap_obj, cv::getDefaultNewCameraMatrix,  1, 3, cv::Mat (*)(InputArray,Size,bool));
auto getDefaultNewCameraMatrix = getDefaultNewCameraMatrix_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( getGaussianKernel_wrap_obj, cv::getGaussianKernel,  2, 3, cv::Mat (*)(int,double,int));
auto getGaussianKernel = getGaussianKernel_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( denoise_TVL1_wrap_obj, cv::denoise_TVL1,  2, 4, void (*)(const std::vector<Mat> &,cv::Mat &,double,int));
auto denoise_TVL1 = denoise_TVL1_wrap_obj();
identity<void (*)()>::type destroyAllWindows = &cv::destroyAllWindows;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( createHausdorffDistanceExtractor_wrap_obj, cv::createHausdorffDistanceExtractor,  0, 2, Ptr<cv::HausdorffDistanceExtractor> (*)(int,float));
auto createHausdorffDistanceExtractor = createHausdorffDistanceExtractor_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( meanStdDev_wrap_obj, cv::meanStdDev,  3, 4, void (*)(InputArray,OutputArray,OutputArray,InputArray));
auto meanStdDev = meanStdDev_wrap_obj();
identity<int (*)(const std::vector<Point2f> &,float)>::type getNearestPoint = &cv::getNearestPoint;
identity<void (*)(InputArray,int,InputArray,OutputArray)>::type computeCorrespondEpilines = &cv::computeCorrespondEpilines;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( idft_wrap_obj, cv::idft,  2, 4, void (*)(InputArray,OutputArray,int,int));
auto idft = idft_wrap_obj();
identity<Ptr<cv::MergeRobertson> (*)()>::type createMergeRobertson = &cv::createMergeRobertson;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( HoughLines_wrap_obj, cv::HoughLines,  5, 9, void (*)(InputArray,OutputArray,double,double,int,double,double,double,double));
auto HoughLines = HoughLines_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( phase_wrap_obj, cv::phase,  3, 4, void (*)(InputArray,InputArray,OutputArray,bool));
auto phase = phase_wrap_obj();
identity<void (*)(InputArray,OutputArray)>::type convertPointsHomogeneous = &cv::convertPointsHomogeneous;
identity<void (*)(InputArray,OutputArray,InputArray)>::type transform = &cv::transform;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( displayStatusBar_wrap_obj, cv::displayStatusBar,  2, 3, void (*)(const cv::String &,const cv::String &,int));
auto displayStatusBar = displayStatusBar_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( fillPoly_wrap_obj0, cv::fillPoly,  5, 8, void (*)(cv::Mat &,const Point **,const int *,int,const Scalar &,int,int,Point));
auto fillPoly0 = fillPoly_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( fillPoly_wrap_obj1, cv::fillPoly,  3, 6, void (*)(InputOutputArray,InputArrayOfArrays,const Scalar &,int,int,Point));
auto fillPoly1 = fillPoly_wrap_obj1();
auto fillPoly = kaguya::overload(fillPoly0,fillPoly1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( groupRectangles_meanshift_wrap_obj, cv::groupRectangles_meanshift,  3, 5, void (*)(std::vector<Rect> &,std::vector<double> &,std::vector<double> &,double,Size));
auto groupRectangles_meanshift = groupRectangles_meanshift_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( fillConvexPoly_wrap_obj0, cv::fillConvexPoly,  4, 6, void (*)(cv::Mat &,const Point *,int,const Scalar &,int,int));
auto fillConvexPoly0 = fillConvexPoly_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( fillConvexPoly_wrap_obj1, cv::fillConvexPoly,  3, 5, void (*)(InputOutputArray,InputArray,const Scalar &,int,int));
auto fillConvexPoly1 = fillConvexPoly_wrap_obj1();
auto fillConvexPoly = kaguya::overload(fillConvexPoly0,fillConvexPoly1);
identity<schar * (*)(const CvSeq *,int)>::type getSeqElem = &cv::getSeqElem;
identity<int (*)()>::type getNumberOfCPUs = &cv::getNumberOfCPUs;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( multiply_wrap_obj, cv::multiply,  3, 5, void (*)(InputArray,InputArray,OutputArray,double,int));
auto multiply = multiply_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( imread_wrap_obj, cv::imread,  1, 2, cv::Mat (*)(const cv::String &,int));
auto imread = imread_wrap_obj();
identity<void (*)(const cv::String &)>::type loadWindowParameters = &cv::loadWindowParameters;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( dilate_wrap_obj, cv::dilate,  3, 7, void (*)(InputArray,OutputArray,InputArray,Point,int,int,const Scalar &));
auto dilate = dilate_wrap_obj();
identity<void (*)(const cv::String &,int,double)>::type setWindowProperty = &cv::setWindowProperty;
identity<cv::MatExpr (*)(const cv::Mat &,const cv::Mat &)>::type min0 = &cv::min;
identity<cv::MatExpr (*)(const cv::Mat &,double)>::type min1 = &cv::min;
identity<cv::MatExpr (*)(double,const cv::Mat &)>::type min2 = &cv::min;
identity<void (*)(InputArray,InputArray,OutputArray)>::type min3 = &cv::min;
identity<void (*)(const cv::Mat &,const cv::Mat &,cv::Mat &)>::type min4 = &cv::min;
identity<void (*)(const cv::UMat &,const cv::UMat &,cv::UMat &)>::type min5 = &cv::min;
auto min = kaguya::overload(min0,min1,min2,min3,min4,min5);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( convertScaleAbs_wrap_obj, cv::convertScaleAbs,  2, 4, void (*)(InputArray,OutputArray,double,double));
auto convertScaleAbs = convertScaleAbs_wrap_obj();
identity<int (*)(InputArray)>::type countNonZero = &cv::countNonZero;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( contourArea_wrap_obj, cv::contourArea,  1, 2, double (*)(InputArray,bool));
auto contourArea = contourArea_wrap_obj();
identity<void (*)(InputArray,InputArray,InputArray,Point,OutputArray,int)>::type seamlessClone = &cv::seamlessClone;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( Rodrigues_wrap_obj, cv::Rodrigues,  2, 3, void (*)(InputArray,OutputArray,OutputArray));
auto Rodrigues = Rodrigues_wrap_obj();
identity<void (*)(CvSeq *,int,const CvArr *)>::type seqInsertSlice = &cv::seqInsertSlice;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( accumulate_wrap_obj, cv::accumulate,  2, 3, void (*)(InputArray,InputOutputArray,InputArray));
auto accumulate = accumulate_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( cartToPolar_wrap_obj, cv::cartToPolar,  4, 5, void (*)(InputArray,InputArray,OutputArray,OutputArray,bool));
auto cartToPolar = cartToPolar_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( accumulateSquare_wrap_obj, cv::accumulateSquare,  2, 3, void (*)(InputArray,InputOutputArray,InputArray));
auto accumulateSquare = accumulateSquare_wrap_obj();
identity<void (*)(CvSeq *,CvSlice)>::type seqRemoveSlice = &cv::seqRemoveSlice;
identity<float (*)(float)>::type cubeRoot = &cv::cubeRoot;
identity<void (*)(const cv::String &,InputArray)>::type imshow = &cv::imshow;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( filterSpeckles_wrap_obj, cv::filterSpeckles,  4, 5, void (*)(InputOutputArray,double,int,double,InputOutputArray));
auto filterSpeckles = filterSpeckles_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( fastNlMeansDenoisingColoredMulti_wrap_obj, cv::fastNlMeansDenoisingColoredMulti,  4, 8, void (*)(InputArrayOfArrays,OutputArray,int,int,float,float,int,int));
auto fastNlMeansDenoisingColoredMulti = fastNlMeansDenoisingColoredMulti_wrap_obj();
identity<int (*)(int)>::type getOptimalDFTSize = &cv::getOptimalDFTSize;
identity<void (*)(InputArray,InputArray,InputArray,InputArray,OutputArray)>::type blendLinear = &cv::blendLinear;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( stereoRectify_wrap_obj, cv::stereoRectify,  12, 17, void (*)(InputArray,InputArray,InputArray,InputArray,Size,InputArray,InputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray,int,double,Size,Rect *,Rect *));
auto stereoRectify = stereoRectify_wrap_obj();
identity<float (*)(InputArray,InputArray)>::type EMDL1 = &cv::EMDL1;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( normalize_wrap_obj0, cv::normalize,  2, 7, void (*)(InputArray,InputOutputArray,double,double,int,int,InputArray));
auto normalize0 = normalize_wrap_obj0();
identity<void (*)(const cv::SparseMat &,cv::SparseMat &,double,int)>::type normalize1 = &cv::normalize;
auto normalize = kaguya::overload(normalize0,normalize1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( cvarrToMat_wrap_obj, cv::cvarrToMat,  1, 5, cv::Mat (*)(const CvArr *,bool,bool,int,AutoBuffer<double> *));
auto cvarrToMat = cvarrToMat_wrap_obj();
identity<uchar (*)(uchar)>::type abs0 = &cv::abs;
identity<ushort (*)(ushort)>::type abs1 = &cv::abs;
identity<unsigned int (*)(unsigned int)>::type abs2 = &cv::abs;
identity<uint64 (*)(uint64)>::type abs3 = &cv::abs;
identity<cv::MatExpr (*)(const cv::Mat &)>::type abs4 = &cv::abs;
identity<cv::MatExpr (*)(const cv::MatExpr &)>::type abs5 = &cv::abs;
auto abs = kaguya::overload(abs0,abs1,abs2,abs3,abs4,abs5);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( bitwise_not_wrap_obj, cv::bitwise_not,  2, 3, void (*)(InputArray,OutputArray,InputArray));
auto bitwise_not = bitwise_not_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( divide_wrap_obj0, cv::divide,  3, 5, void (*)(InputArray,InputArray,OutputArray,double,int));
auto divide0 = divide_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( divide_wrap_obj1, cv::divide,  3, 4, void (*)(double,InputArray,OutputArray,int));
auto divide1 = divide_wrap_obj1();
auto divide = kaguya::overload(divide0,divide1);
identity<void (*)(InputArray,OutputArray)>::type exp = &cv::exp;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( stereoRectifyUncalibrated_wrap_obj, cv::stereoRectifyUncalibrated,  6, 7, bool (*)(InputArray,InputArray,InputArray,Size,OutputArray,OutputArray,double));
auto stereoRectifyUncalibrated = stereoRectifyUncalibrated_wrap_obj();
identity<int (*)(InputArray,Rect &,cv::TermCriteria)>::type meanShift = &cv::meanShift;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( RQDecomp3x3_wrap_obj, cv::RQDecomp3x3,  3, 6, Vec3d (*)(InputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray));
auto RQDecomp3x3 = RQDecomp3x3_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( calcHist_wrap_obj0, cv::calcHist,  8, 10, void (*)(const cv::Mat *,int,const int *,InputArray,OutputArray,int,const int *,const float **,bool,bool));
auto calcHist0 = calcHist_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( calcHist_wrap_obj1, cv::calcHist,  8, 10, void (*)(const cv::Mat *,int,const int *,InputArray,cv::SparseMat &,int,const int *,const float **,bool,bool));
auto calcHist1 = calcHist_wrap_obj1();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( calcHist_wrap_obj2, cv::calcHist,  6, 7, void (*)(InputArrayOfArrays,const std::vector<int> &,InputArray,OutputArray,const std::vector<int> &,const std::vector<float> &,bool));
auto calcHist2 = calcHist_wrap_obj2();
auto calcHist = kaguya::overload(calcHist0,calcHist1,calcHist2);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( seqPush_wrap_obj, cv::seqPush,  1, 2, schar * (*)(CvSeq *,const void *));
auto seqPush = seqPush_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( copyMakeBorder_wrap_obj, cv::copyMakeBorder,  7, 8, void (*)(InputArray,OutputArray,int,int,int,int,int,const Scalar &));
auto copyMakeBorder = copyMakeBorder_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( calcOpticalFlowPyrLK_wrap_obj, cv::calcOpticalFlowPyrLK,  6, 11, void (*)(InputArray,InputArray,InputArray,InputOutputArray,OutputArray,OutputArray,Size,int,cv::TermCriteria,int,double));
auto calcOpticalFlowPyrLK = calcOpticalFlowPyrLK_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( findFundamentalMat_wrap_obj0, cv::findFundamentalMat,  2, 6, cv::Mat (*)(InputArray,InputArray,int,double,double,OutputArray));
auto findFundamentalMat0 = findFundamentalMat_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( findFundamentalMat_wrap_obj1, cv::findFundamentalMat,  3, 6, cv::Mat (*)(InputArray,InputArray,OutputArray,int,double,double));
auto findFundamentalMat1 = findFundamentalMat_wrap_obj1();
auto findFundamentalMat = kaguya::overload(findFundamentalMat0,findFundamentalMat1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( validateDisparity_wrap_obj, cv::validateDisparity,  4, 5, void (*)(InputOutputArray,InputArray,int,int,int));
auto validateDisparity = validateDisparity_wrap_obj();
identity<void (*)(const cv::Moments &,double [7])>::type HuMoments0 = &cv::HuMoments;
identity<void (*)(const cv::Moments &,OutputArray)>::type HuMoments1 = &cv::HuMoments;
auto HuMoments = kaguya::overload(HuMoments0,HuMoments1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( sqrBoxFilter_wrap_obj, cv::sqrBoxFilter,  4, 7, void (*)(InputArray,OutputArray,int,Size,Point,bool,int));
auto sqrBoxFilter = sqrBoxFilter_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( goodFeaturesToTrack_wrap_obj, cv::goodFeaturesToTrack,  5, 9, void (*)(InputArray,OutputArray,int,double,double,InputArray,int,bool,double));
auto goodFeaturesToTrack = goodFeaturesToTrack_wrap_obj();
identity<void (*)(InputArray,OutputArray,int)>::type sort = &cv::sort;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( getStructuringElement_wrap_obj, cv::getStructuringElement,  2, 3, cv::Mat (*)(int,Size,Point));
auto getStructuringElement = getStructuringElement_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( mean_wrap_obj, cv::mean,  1, 2, Scalar (*)(InputArray,InputArray));
auto mean = mean_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( cornerEigenValsAndVecs_wrap_obj, cv::cornerEigenValsAndVecs,  4, 5, void (*)(InputArray,OutputArray,int,int,int));
auto cornerEigenValsAndVecs = cornerEigenValsAndVecs_wrap_obj();
identity<void (*)(InputArray,InputArray,InputArray,OutputArray)>::type PCAProject = &cv::PCAProject;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( undistort_wrap_obj, cv::undistort,  4, 5, void (*)(InputArray,OutputArray,InputArray,InputArray,InputArray));
auto undistort = undistort_wrap_obj();
identity<int (*)()>::type startWindowThread = &cv::startWindowThread;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( getOptimalNewCameraMatrix_wrap_obj, cv::getOptimalNewCameraMatrix,  4, 7, cv::Mat (*)(InputArray,InputArray,Size,double,Size,Rect *,bool));
auto getOptimalNewCameraMatrix = getOptimalNewCameraMatrix_wrap_obj();
identity<void (*)(InputArray,OutputArray,double,bool)>::type approxPolyDP = &cv::approxPolyDP;
identity<void (*)(const cv::String &)>::type setOpenGlContext = &cv::setOpenGlContext;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( textureFlattening_wrap_obj, cv::textureFlattening,  3, 6, void (*)(InputArray,InputArray,OutputArray,float,float,int));
auto textureFlattening = textureFlattening_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( findTransformECC_wrap_obj, cv::findTransformECC,  3, 6, double (*)(InputArray,InputArray,InputOutputArray,int,cv::TermCriteria,InputArray));
auto findTransformECC = findTransformECC_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( groupRectangles_wrap_obj0, cv::groupRectangles,  2, 3, void (*)(std::vector<Rect> &,int,double));
auto groupRectangles0 = groupRectangles_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( groupRectangles_wrap_obj1, cv::groupRectangles,  3, 4, void (*)(std::vector<Rect> &,std::vector<int> &,int,double));
auto groupRectangles1 = groupRectangles_wrap_obj1();
identity<void (*)(std::vector<Rect> &,int,double,std::vector<int> *,std::vector<double> *)>::type groupRectangles2 = &cv::groupRectangles;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( groupRectangles_wrap_obj3, cv::groupRectangles,  4, 5, void (*)(std::vector<Rect> &,std::vector<int> &,std::vector<double> &,int,double));
auto groupRectangles3 = groupRectangles_wrap_obj3();
auto groupRectangles = kaguya::overload(groupRectangles0,groupRectangles1,groupRectangles2,groupRectangles3);
identity<void (*)(InputArray,InputOutputArray)>::type watershed = &cv::watershed;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( detailEnhance_wrap_obj, cv::detailEnhance,  2, 4, void (*)(InputArray,OutputArray,float,float));
auto detailEnhance = detailEnhance_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( createLineSegmentDetector_wrap_obj, cv::createLineSegmentDetector,  0, 8, Ptr<cv::LineSegmentDetector> (*)(int,double,double,double,double,double,double,int));
auto createLineSegmentDetector = createLineSegmentDetector_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( illuminationChange_wrap_obj, cv::illuminationChange,  3, 5, void (*)(InputArray,InputArray,OutputArray,float,float));
auto illuminationChange = illuminationChange_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( EMD_wrap_obj, cv::EMD,  3, 6, float (*)(InputArray,InputArray,int,InputArray,float *,OutputArray));
auto EMD = EMD_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( solvePoly_wrap_obj, cv::solvePoly,  2, 3, double (*)(InputArray,OutputArray,int));
auto solvePoly = solvePoly_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( drawMatches_wrap_obj0, cv::drawMatches,  6, 10, void (*)(InputArray,const std::vector<KeyPoint> &,InputArray,const std::vector<KeyPoint> &,const std::vector<DMatch> &,InputOutputArray,const Scalar &,const Scalar &,const std::vector<char> &,int));
auto drawMatches0 = drawMatches_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( drawMatches_wrap_obj1, cv::drawMatches,  6, 10, void (*)(InputArray,const std::vector<KeyPoint> &,InputArray,const std::vector<KeyPoint> &,const std::vector<std::vector<DMatch> > &,InputOutputArray,const Scalar &,const Scalar &,const std::vector<std::vector<char> > &,int));
auto drawMatches1 = drawMatches_wrap_obj1();
auto drawMatches = kaguya::overload(drawMatches0,drawMatches1);
identity<double (*)(InputArray,bool)>::type arcLength = &cv::arcLength;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( projectPoints_wrap_obj, cv::projectPoints,  6, 8, void (*)(InputArray,InputArray,InputArray,InputArray,InputArray,OutputArray,OutputArray,double));
auto projectPoints = projectPoints_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( imreadmulti_wrap_obj, cv::imreadmulti,  2, 3, bool (*)(const cv::String &,std::vector<Mat> &,int));
auto imreadmulti = imreadmulti_wrap_obj();
identity<void (*)(cv::FileStorage &,int)>::type writeScalar0 = &cv::writeScalar;
identity<void (*)(cv::FileStorage &,float)>::type writeScalar1 = &cv::writeScalar;
identity<void (*)(cv::FileStorage &,double)>::type writeScalar2 = &cv::writeScalar;
identity<void (*)(cv::FileStorage &,const cv::String &)>::type writeScalar3 = &cv::writeScalar;
auto writeScalar = kaguya::overload(writeScalar0,writeScalar1,writeScalar2,writeScalar3);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( print_wrap_obj0, cv::print,  1, 2, int (*)(Ptr<cv::Formatted>,FILE *));
auto print0 = print_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( print_wrap_obj1, cv::print,  1, 2, int (*)(const cv::Mat &,FILE *));
auto print1 = print_wrap_obj1();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( print_wrap_obj2, cv::print,  1, 2, int (*)(const cv::UMat &,FILE *));
auto print2 = print_wrap_obj2();
auto print = kaguya::overload(print0,print1,print2);
identity<int (*)(InputArray,OutputArray)>::type solveCubic = &cv::solveCubic;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( blur_wrap_obj, cv::blur,  3, 5, void (*)(InputArray,OutputArray,Size,Point,int));
auto blur = blur_wrap_obj();
identity<size_t (*)(size_t,int)>::type alignSize = &cv::alignSize;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( insertImageCOI_wrap_obj, cv::insertImageCOI,  2, 3, void (*)(InputArray,CvArr *,int));
auto insertImageCOI = insertImageCOI_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( decomposeProjectionMatrix_wrap_obj, cv::decomposeProjectionMatrix,  4, 8, void (*)(InputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray));
auto decomposeProjectionMatrix = decomposeProjectionMatrix_wrap_obj();
identity<void (*)(InputArray,OutputArray,int)>::type sortIdx = &cv::sortIdx;
identity<float (*)(const float *,const float *,int)>::type normL10 = &cv::normL1;
identity<int (*)(const uchar *,const uchar *,int)>::type normL11 = &cv::normL1;
auto normL1 = kaguya::overload(normL10,normL11);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( getRectSubPix_wrap_obj, cv::getRectSubPix,  4, 5, void (*)(InputArray,Size,Point2f,OutputArray,int));
auto getRectSubPix = getRectSubPix_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( grabCut_wrap_obj, cv::grabCut,  6, 7, void (*)(InputArray,InputOutputArray,Rect,InputOutputArray,InputOutputArray,int,int));
auto grabCut = grabCut_wrap_obj();
identity<float (*)(float,float)>::type fastAtan2 = &cv::fastAtan2;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( convexHull_wrap_obj, cv::convexHull,  2, 4, void (*)(InputArray,OutputArray,bool,bool));
auto convexHull = convexHull_wrap_obj();
identity<void (*)(InputArray,InputOutputArray,Size,Size,cv::TermCriteria)>::type cornerSubPix = &cv::cornerSubPix;
identity<void (*)(const cv::String &,const cv::String &,int)>::type setTrackbarPos = &cv::setTrackbarPos;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( minMaxLoc_wrap_obj0, cv::minMaxLoc,  2, 6, void (*)(InputArray,double *,double *,Point *,Point *,InputArray));
auto minMaxLoc0 = minMaxLoc_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( minMaxLoc_wrap_obj1, cv::minMaxLoc,  3, 5, void (*)(const cv::SparseMat &,double *,double *,int *,int *));
auto minMaxLoc1 = minMaxLoc_wrap_obj1();
auto minMaxLoc = kaguya::overload(minMaxLoc0,minMaxLoc1);
identity<void (*)(InputArray,double,OutputArray)>::type pow = &cv::pow;
identity<double (*)(InputArray,InputArray,InputArray)>::type sampsonDistance = &cv::sampsonDistance;
identity<double (*)(InputArray,InputArray,int)>::type compareHist0 = &cv::compareHist;
identity<double (*)(const cv::SparseMat &,const cv::SparseMat &,int)>::type compareHist1 = &cv::compareHist;
auto compareHist = kaguya::overload(compareHist0,compareHist1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( createAlignMTB_wrap_obj, cv::createAlignMTB,  0, 3, Ptr<cv::AlignMTB> (*)(int,int,bool));
auto createAlignMTB = createAlignMTB_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( stereoCalibrate_wrap_obj, cv::stereoCalibrate,  12, 14, double (*)(InputArrayOfArrays,InputArrayOfArrays,InputArrayOfArrays,InputOutputArray,InputOutputArray,InputOutputArray,InputOutputArray,Size,OutputArray,OutputArray,OutputArray,OutputArray,int,cv::TermCriteria));
auto stereoCalibrate = stereoCalibrate_wrap_obj();
identity<int (*)(float *,size_t,int,float *,size_t,int)>::type LU0 = &cv::LU;
identity<int (*)(double *,size_t,int,double *,size_t,int)>::type LU1 = &cv::LU;
auto LU = kaguya::overload(LU0,LU1);
identity<Rect (*)(InputArray)>::type boundingRect = &cv::boundingRect;
identity<cv::Mat (*)(const Point2f [],const Point2f [])>::type getPerspectiveTransform0 = &cv::getPerspectiveTransform;
identity<cv::Mat (*)(InputArray,InputArray)>::type getPerspectiveTransform1 = &cv::getPerspectiveTransform;
auto getPerspectiveTransform = kaguya::overload(getPerspectiveTransform0,getPerspectiveTransform1);
identity<Scalar (*)()>::type morphologyDefaultBorderValue = &cv::morphologyDefaultBorderValue;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( glob_wrap_obj, cv::glob,  2, 3, void (*)(cv::String,std::vector<String> &,bool));
auto glob = glob_wrap_obj();
identity<int (*)(InputArray,InputArray,OutputArrayOfArrays,OutputArrayOfArrays,OutputArrayOfArrays)>::type decomposeHomographyMat = &cv::decomposeHomographyMat;
identity<Size (*)(const cv::String &,int,double,int,int *)>::type getTextSize = &cv::getTextSize;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( warpPerspective_wrap_obj, cv::warpPerspective,  4, 7, void (*)(InputArray,OutputArray,InputArray,Size,int,int,const Scalar &));
auto warpPerspective = warpPerspective_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( FAST_wrap_obj0, cv::FAST,  3, 4, void (*)(InputArray,std::vector<KeyPoint> &,int,bool));
auto FAST0 = FAST_wrap_obj0();
identity<void (*)(InputArray,std::vector<KeyPoint> &,int,bool,int)>::type FAST1 = &cv::FAST;
auto FAST = kaguya::overload(FAST0,FAST1);
identity<void (*)(InputArray,OutputArray)>::type findNonZero = &cv::findNonZero;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( calcCovarMatrix_wrap_obj0, cv::calcCovarMatrix,  5, 6, void (*)(const cv::Mat *,int,cv::Mat &,cv::Mat &,int,int));
auto calcCovarMatrix0 = calcCovarMatrix_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( calcCovarMatrix_wrap_obj1, cv::calcCovarMatrix,  4, 5, void (*)(InputArray,OutputArray,InputOutputArray,int,int));
auto calcCovarMatrix1 = calcCovarMatrix_wrap_obj1();
auto calcCovarMatrix = kaguya::overload(calcCovarMatrix0,calcCovarMatrix1);
identity<Rect (*)(Rect,Rect,int,int,int)>::type getValidDisparityROI = &cv::getValidDisparityROI;
identity<void (*)(InputArray,OutputArray,int)>::type medianBlur = &cv::medianBlur;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( SVDecomp_wrap_obj, cv::SVDecomp,  4, 5, void (*)(InputArray,OutputArray,OutputArray,OutputArray,int));
auto SVDecomp = SVDecomp_wrap_obj();
identity<void (*)(const cv::Mat &,cv::Mat *)>::type split0 = &cv::split;
identity<void (*)(InputArray,OutputArrayOfArrays)>::type split1 = &cv::split;
auto split = kaguya::overload(split0,split1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( morphologyEx_wrap_obj, cv::morphologyEx,  4, 8, void (*)(InputArray,OutputArray,int,InputArray,Point,int,int,const Scalar &));
auto morphologyEx = morphologyEx_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( getDerivKernels_wrap_obj, cv::getDerivKernels,  5, 7, void (*)(OutputArray,OutputArray,int,int,int,bool,int));
auto getDerivKernels = getDerivKernels_wrap_obj();
identity<void (*)(InputArray,InputArray,InputArray,OutputArray)>::type PCABackProject = &cv::PCABackProject;
identity<void (*)(InputArray,InputArray,InputArray,OutputArray,OutputArray)>::type correctMatches = &cv::correctMatches;
identity<void (*)(Point,Size,int,int,int,int,std::vector<Point> &)>::type ellipse2Poly = &cv::ellipse2Poly;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( randShuffle_wrap_obj, cv::randShuffle,  1, 3, void (*)(InputOutputArray,double,cv::RNG *));
auto randShuffle = randShuffle_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( findEssentialMat_wrap_obj0, cv::findEssentialMat,  3, 7, cv::Mat (*)(InputArray,InputArray,InputArray,int,double,double,OutputArray));
auto findEssentialMat0 = findEssentialMat_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( findEssentialMat_wrap_obj1, cv::findEssentialMat,  2, 8, cv::Mat (*)(InputArray,InputArray,double,Point2d,int,double,double,OutputArray));
auto findEssentialMat1 = findEssentialMat_wrap_obj1();
auto findEssentialMat = kaguya::overload(findEssentialMat0,findEssentialMat1);
identity<int (*)(InputArray,OutputArray,int,int,int)>::type connectedComponents0 = &cv::connectedComponents;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( connectedComponents_wrap_obj1, cv::connectedComponents,  2, 4, int (*)(InputArray,OutputArray,int,int));
auto connectedComponents1 = connectedComponents_wrap_obj1();
auto connectedComponents = kaguya::overload(connectedComponents0,connectedComponents1);
identity<void (*)(InputArray,OutputArray)>::type log = &cv::log;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( checkRange_wrap_obj, cv::checkRange,  1, 5, bool (*)(InputArray,bool,Point *,double,double));
auto checkRange = checkRange_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( floodFill_wrap_obj0, cv::floodFill,  3, 7, int (*)(InputOutputArray,Point,Scalar,Rect *,Scalar,Scalar,int));
auto floodFill0 = floodFill_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( floodFill_wrap_obj1, cv::floodFill,  4, 8, int (*)(InputOutputArray,InputOutputArray,Point,Scalar,Rect *,Scalar,Scalar,int));
auto floodFill1 = floodFill_wrap_obj1();
auto floodFill = kaguya::overload(floodFill0,floodFill1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( cornerMinEigenVal_wrap_obj, cv::cornerMinEigenVal,  3, 5, void (*)(InputArray,OutputArray,int,int,int));
auto cornerMinEigenVal = cornerMinEigenVal_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( calibrateCamera_wrap_obj0, cv::calibrateCamera,  10, 12, double (*)(InputArrayOfArrays,InputArrayOfArrays,Size,InputOutputArray,InputOutputArray,OutputArrayOfArrays,OutputArrayOfArrays,OutputArray,OutputArray,OutputArray,int,cv::TermCriteria));
auto calibrateCamera0 = calibrateCamera_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( calibrateCamera_wrap_obj1, cv::calibrateCamera,  7, 9, double (*)(InputArrayOfArrays,InputArrayOfArrays,Size,InputOutputArray,InputOutputArray,OutputArrayOfArrays,OutputArrayOfArrays,int,cv::TermCriteria));
auto calibrateCamera1 = calibrateCamera_wrap_obj1();
auto calibrateCamera = kaguya::overload(calibrateCamera0,calibrateCamera1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( calcBackProject_wrap_obj0, cv::calcBackProject,  6, 8, void (*)(const cv::Mat *,int,const int *,InputArray,OutputArray,const float **,double,bool));
auto calcBackProject0 = calcBackProject_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( calcBackProject_wrap_obj1, cv::calcBackProject,  6, 8, void (*)(const cv::Mat *,int,const int *,const cv::SparseMat &,OutputArray,const float **,double,bool));
auto calcBackProject1 = calcBackProject_wrap_obj1();
identity<void (*)(InputArrayOfArrays,const std::vector<int> &,InputArray,OutputArray,const std::vector<float> &,double)>::type calcBackProject2 = &cv::calcBackProject;
auto calcBackProject = kaguya::overload(calcBackProject0,calcBackProject1,calcBackProject2);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( minMaxIdx_wrap_obj, cv::minMaxIdx,  2, 6, void (*)(InputArray,double *,double *,int *,int *,InputArray));
auto minMaxIdx = minMaxIdx_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( resize_wrap_obj, cv::resize,  3, 6, void (*)(InputArray,OutputArray,Size,double,double,int));
auto resize = resize_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( createCalibrateRobertson_wrap_obj, cv::createCalibrateRobertson,  0, 2, Ptr<cv::CalibrateRobertson> (*)(int,float));
auto createCalibrateRobertson = createCalibrateRobertson_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( line_wrap_obj, cv::line,  4, 7, void (*)(InputOutputArray,Point,Point,const Scalar &,int,int,int));
auto line = line_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( composeRT_wrap_obj, cv::composeRT,  6, 14, void (*)(InputArray,InputArray,InputArray,InputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray,OutputArray));
auto composeRT = composeRT_wrap_obj();
identity<void (*)(const cv::String &)>::type saveWindowParameters = &cv::saveWindowParameters;
identity<void (*)(InputArray,OutputArray)>::type invertAffineTransform = &cv::invertAffineTransform;
identity<Scalar (*)(InputArray)>::type sum = &cv::sum;
identity<double (*)(InputArray)>::type determinant = &cv::determinant;
identity<void (*)(InputArray,OutputArray,OutputArray)>::type decolor = &cv::decolor;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( moments_wrap_obj, cv::moments,  1, 2, cv::Moments (*)(InputArray,bool));
auto moments = moments_wrap_obj();
identity<float (*)(const float *,const float *,int)>::type normL2Sqr = &cv::normL2Sqr;
identity<InputOutputArray (*)()>::type noArray = &cv::noArray;
identity<void (*)(InputArray,InputArray,InputArray,InputArray,OutputArray)>::type SVBackSubst = &cv::SVBackSubst;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( findCirclesGrid_wrap_obj, cv::findCirclesGrid,  3, 5, bool (*)(InputArray,Size,OutputArray,int,const Ptr<FeatureDetector> &));
auto findCirclesGrid = findCirclesGrid_wrap_obj();
identity<void (*)(InputArray,InputArray,OutputArray)>::type absdiff = &cv::absdiff;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( createThinPlateSplineShapeTransformer_wrap_obj, cv::createThinPlateSplineShapeTransformer,  0, 1, Ptr<cv::ThinPlateSplineShapeTransformer> (*)(double));
auto createThinPlateSplineShapeTransformer = createThinPlateSplineShapeTransformer_wrap_obj();
identity<void (*)(InputArray,OutputArray,OutputArray,OutputArray)>::type decomposeEssentialMat = &cv::decomposeEssentialMat;
identity<Ptr<cv::DualTVL1OpticalFlow> (*)()>::type createOptFlow_DualTVL1 = &cv::createOptFlow_DualTVL1;
identity<void (*)(const cv::Mat *,size_t,OutputArray)>::type hconcat0 = &cv::hconcat;
identity<void (*)(InputArray,InputArray,OutputArray)>::type hconcat1 = &cv::hconcat;
identity<void (*)(InputArrayOfArrays,OutputArray)>::type hconcat2 = &cv::hconcat;
auto hconcat = kaguya::overload(hconcat0,hconcat1,hconcat2);
identity<void (*)(InputArray,OutputArray,int)>::type flip = &cv::flip;
identity<int (*)(const cv::RotatedRect &,const cv::RotatedRect &,OutputArray)>::type rotatedRectangleIntersection = &cv::rotatedRectangleIntersection;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( estimateAffine3D_wrap_obj, cv::estimateAffine3D,  4, 6, int (*)(InputArray,InputArray,OutputArray,OutputArray,double,double));
auto estimateAffine3D = estimateAffine3D_wrap_obj();
identity<bool (*)(float *,size_t,int,float *,size_t,int)>::type Cholesky0 = &cv::Cholesky;
identity<bool (*)(double *,size_t,int,double *,size_t,int)>::type Cholesky1 = &cv::Cholesky;
auto Cholesky = kaguya::overload(Cholesky0,Cholesky1);
identity<size_t (*)(int)>::type getElemSize = &cv::getElemSize;
identity<void (*)(InputArray,OutputArray)>::type convertPointsFromHomogeneous = &cv::convertPointsFromHomogeneous;
identity<void (*)(const cv::String &,const cv::String &)>::type setWindowTitle = &cv::setWindowTitle;
identity<cv::RotatedRect (*)(InputArray)>::type fitEllipse = &cv::fitEllipse;
identity<void (*)(void *)>::type fastFree = &cv::fastFree;
identity<void (*)(const cv::String &,int,int)>::type moveWindow = &cv::moveWindow;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( invert_wrap_obj, cv::invert,  2, 3, double (*)(InputArray,OutputArray,int));
auto invert = invert_wrap_obj();
identity<int (*)(int)>::type getMouseWheelDelta = &cv::getMouseWheelDelta;
identity<void (*)(InputArray,InputArray,OutputArray,int)>::type compare = &cv::compare;
identity<void (*)(InputArray,InputArray,InputOutputArray,double,int,int,int,int,double,int)>::type calcOpticalFlowFarneback = &cv::calcOpticalFlowFarneback;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( sepFilter2D_wrap_obj, cv::sepFilter2D,  5, 8, void (*)(InputArray,OutputArray,int,InputArray,InputArray,Point,double,int));
auto sepFilter2D = sepFilter2D_wrap_obj();
identity<void (*)(const cv::Mat *,size_t,OutputArray)>::type merge0 = &cv::merge;
identity<void (*)(InputArrayOfArrays,OutputArray)>::type merge1 = &cv::merge;
auto merge = kaguya::overload(merge0,merge1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( mulTransposed_wrap_obj, cv::mulTransposed,  3, 6, void (*)(InputArray,OutputArray,bool,InputArray,double,int));
auto mulTransposed = mulTransposed_wrap_obj();
identity<void (*)(OutputArray,Size,int)>::type createHanningWindow = &cv::createHanningWindow;
identity<int (*)(int,int,int)>::type borderInterpolate = &cv::borderInterpolate;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( demosaicing_wrap_obj, cv::demosaicing,  3, 4, void (*)(InputArray,OutputArray,int,int));
auto demosaicing = demosaicing_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( cvtColor_wrap_obj, cv::cvtColor,  3, 4, void (*)(InputArray,OutputArray,int,int));
auto cvtColor = cvtColor_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( createTonemapMantiuk_wrap_obj, cv::createTonemapMantiuk,  0, 3, Ptr<cv::TonemapMantiuk> (*)(float,float,float));
auto createTonemapMantiuk = createTonemapMantiuk_wrap_obj();
identity<double (*)(InputArray,InputArray)>::type PSNR = &cv::PSNR;
identity<double (*)(const cv::String &,int)>::type getWindowProperty = &cv::getWindowProperty;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( drawContours_wrap_obj, cv::drawContours,  4, 9, void (*)(InputOutputArray,InputArrayOfArrays,int,const Scalar &,int,int,InputArray,int,Point));
auto drawContours = drawContours_wrap_obj();
identity<void (*)(InputArray,OutputArray)>::type sqrt = &cv::sqrt;
identity<void (*)(InputArray,OutputArray,int)>::type applyColorMap = &cv::applyColorMap;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( dct_wrap_obj, cv::dct,  2, 3, void (*)(InputArray,OutputArray,int));
auto dct = dct_wrap_obj();
identity<void (*)(InputArray,InputArray,OutputArray)>::type magnitude = &cv::magnitude;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( estimateAffine2D_wrap_obj, cv::estimateAffine2D,  2, 8, cv::Mat (*)(InputArray,InputArray,OutputArray,int,double,size_t,double,size_t));
auto estimateAffine2D = estimateAffine2D_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( imencode_wrap_obj, cv::imencode,  3, 4, bool (*)(const cv::String &,InputArray,std::vector<uchar> &,const std::vector<int> &));
auto imencode = imencode_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( createNormHistogramCostExtractor_wrap_obj, cv::createNormHistogramCostExtractor,  0, 3, Ptr<cv::HistogramCostExtractor> (*)(int,int,float));
auto createNormHistogramCostExtractor = createNormHistogramCostExtractor_wrap_obj();
identity<cv::MatExpr (*)(const cv::Mat &,const cv::Mat &)>::type max0 = &cv::max;
identity<cv::MatExpr (*)(const cv::Mat &,double)>::type max1 = &cv::max;
identity<cv::MatExpr (*)(double,const cv::Mat &)>::type max2 = &cv::max;
identity<void (*)(InputArray,InputArray,OutputArray)>::type max3 = &cv::max;
identity<void (*)(const cv::Mat &,const cv::Mat &,cv::Mat &)>::type max4 = &cv::max;
identity<void (*)(const cv::UMat &,const cv::UMat &,cv::UMat &)>::type max5 = &cv::max;
auto max = kaguya::overload(max0,max1,max2,max3,max4,max5);
identity<void (*)(InputArray,OutputArray,double,int,int,int,double)>::type adaptiveThreshold = &cv::adaptiveThreshold;
identity<void * (*)(size_t)>::type fastMalloc = &cv::fastMalloc;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( pencilSketch_wrap_obj, cv::pencilSketch,  3, 6, void (*)(InputArray,OutputArray,OutputArray,float,float,float));
auto pencilSketch = pencilSketch_wrap_obj();
identity<bool (*)(Size,Point &,Point &)>::type clipLine0 = &cv::clipLine;
identity<bool (*)(Rect,Point &,Point &)>::type clipLine1 = &cv::clipLine;
auto clipLine = kaguya::overload(clipLine0,clipLine1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( createCalibrateDebevec_wrap_obj, cv::createCalibrateDebevec,  0, 3, Ptr<cv::CalibrateDebevec> (*)(int,float,bool));
auto createCalibrateDebevec = createCalibrateDebevec_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( bitwise_and_wrap_obj, cv::bitwise_and,  3, 4, void (*)(InputArray,InputArray,OutputArray,InputArray));
auto bitwise_and = bitwise_and_wrap_obj();
identity<bool (*)(bool)>::type setBreakOnError = &cv::setBreakOnError;
identity<cv::RotatedRect (*)(InputArray)>::type minAreaRect = &cv::minAreaRect;
identity<cv::Mat (*)(Point2f,double,double)>::type getRotationMatrix2D = &cv::getRotationMatrix2D;
identity<void (*)(InputOutputArray,InputArray,InputArray)>::type randu = &cv::randu;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( buildPyramid_wrap_obj, cv::buildPyramid,  3, 4, void (*)(InputArray,OutputArrayOfArrays,int,int));
auto buildPyramid = buildPyramid_wrap_obj();
identity<int (*)(uchar)>::type cv_abs0 = &cv::cv_abs;
identity<int (*)(schar)>::type cv_abs1 = &cv::cv_abs;
identity<int (*)(ushort)>::type cv_abs2 = &cv::cv_abs;
identity<int (*)(short)>::type cv_abs3 = &cv::cv_abs;
auto cv_abs = kaguya::overload(cv_abs0,cv_abs1,cv_abs2,cv_abs3);
identity<void (*)(const cv::Mat *,size_t,cv::Mat *,size_t,const int *,size_t)>::type mixChannels0 = &cv::mixChannels;
identity<void (*)(InputArrayOfArrays,InputOutputArrayOfArrays,const int *,size_t)>::type mixChannels1 = &cv::mixChannels;
identity<void (*)(InputArrayOfArrays,InputOutputArrayOfArrays,const std::vector<int> &)>::type mixChannels2 = &cv::mixChannels;
auto mixChannels = kaguya::overload(mixChannels0,mixChannels1,mixChannels2);
identity<void (*)(const cv::FileNode &,int &,int)>::type read0 = &cv::read;
identity<void (*)(const cv::FileNode &,float &,float)>::type read1 = &cv::read;
identity<void (*)(const cv::FileNode &,double &,double)>::type read2 = &cv::read;
identity<void (*)(const cv::FileNode &,cv::String &,const cv::String &)>::type read3 = &cv::read;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( read_wrap_obj4, cv::read,  2, 3, void (*)(const cv::FileNode &,cv::Mat &,const cv::Mat &));
auto read4 = read_wrap_obj4();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( read_wrap_obj5, cv::read,  2, 3, void (*)(const cv::FileNode &,cv::SparseMat &,const cv::SparseMat &));
auto read5 = read_wrap_obj5();
identity<void (*)(const cv::FileNode &,std::vector<KeyPoint> &)>::type read6 = &cv::read;
identity<void (*)(const cv::FileNode &,std::vector<DMatch> &)>::type read7 = &cv::read;
identity<void (*)(const cv::FileNode &,cv::Range &,const cv::Range &)>::type read8 = &cv::read;
identity<void (*)(const cv::FileNode &,bool &,bool)>::type read9 = &cv::read;
identity<void (*)(const cv::FileNode &,uchar &,uchar)>::type read10 = &cv::read;
identity<void (*)(const cv::FileNode &,schar &,schar)>::type read11 = &cv::read;
identity<void (*)(const cv::FileNode &,ushort &,ushort)>::type read12 = &cv::read;
identity<void (*)(const cv::FileNode &,short &,short)>::type read13 = &cv::read;
auto read = kaguya::overload(read0,read1,read2,read3,read4,read5,read6,read7,read8,read9,read10,read11,read12,read13);
identity<Ptr<cv::GeneralizedHoughGuil> (*)()>::type createGeneralizedHoughGuil = &cv::createGeneralizedHoughGuil;
identity<void (*)(const cv::String &,const cv::String &,int)>::type setTrackbarMin = &cv::setTrackbarMin;
identity<bool (*)()>::type useOptimized = &cv::useOptimized;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( boxFilter_wrap_obj, cv::boxFilter,  4, 7, void (*)(InputArray,OutputArray,int,Size,Point,bool,int));
auto boxFilter = boxFilter_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( Scharr_wrap_obj, cv::Scharr,  5, 8, void (*)(InputArray,OutputArray,int,int,int,double,double,int));
auto Scharr = Scharr_wrap_obj();
identity<Ptr<cv::AffineTransformer> (*)(bool)>::type createAffineTransformer = &cv::createAffineTransformer;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( accumulateWeighted_wrap_obj, cv::accumulateWeighted,  3, 4, void (*)(InputArray,InputOutputArray,double,InputArray));
auto accumulateWeighted = accumulateWeighted_wrap_obj();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( eigen_wrap_obj, cv::eigen,  2, 3, bool (*)(InputArray,OutputArray,OutputArray));
auto eigen = eigen_wrap_obj();
identity<double (*)(InputArray,OutputArray,double,double,int)>::type threshold = &cv::threshold;
identity<double (*)(InputArray,Point2f,bool)>::type pointPolygonTest = &cv::pointPolygonTest;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( HoughLinesP_wrap_obj, cv::HoughLinesP,  5, 7, void (*)(InputArray,OutputArray,double,double,int,double,double));
auto HoughLinesP = HoughLinesP_wrap_obj();
identity<void (*)(InputArray,OutputArray,InputArray)>::type perspectiveTransform = &cv::perspectiveTransform;
identity<double (*)(InputArray,OutputArray)>::type minEnclosingTriangle = &cv::minEnclosingTriangle;
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_RotatedRect{
identity<Rect (cv::RotatedRect::*)() const>::type boundingRect = &cv::RotatedRect::boundingRect;
identity<void (cv::RotatedRect::*)(Point2f []) const>::type points = &cv::RotatedRect::points;
}// end of namespace RotatedRect
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_KeyPoint{
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( convert_wrap_obj0, cv::KeyPoint::convert,  2, 3, void (*)(const std::vector<KeyPoint> &,std::vector<Point2f> &,const std::vector<int> &));
auto convert0 = convert_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( convert_wrap_obj1, cv::KeyPoint::convert,  2, 6, void (*)(const std::vector<Point2f> &,std::vector<KeyPoint> &,float,float,int,int));
auto convert1 = convert_wrap_obj1();
auto convert = kaguya::overload(convert0,convert1);
identity<size_t (cv::KeyPoint::*)() const>::type hash = &cv::KeyPoint::hash;
identity<float (*)(const cv::KeyPoint &,const cv::KeyPoint &)>::type overlap = &cv::KeyPoint::overlap;
}// end of namespace KeyPoint
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_BufferPoolController{
identity<void (cv::BufferPoolController::*)(size_t)>::type setMaxReservedSize = &cv::BufferPoolController::setMaxReservedSize;
identity<size_t (cv::BufferPoolController::*)() const>::type getReservedSize = &cv::BufferPoolController::getReservedSize;
identity<size_t (cv::BufferPoolController::*)() const>::type getMaxReservedSize = &cv::BufferPoolController::getMaxReservedSize;
identity<void (cv::BufferPoolController::*)()>::type freeAllReservedBuffers = &cv::BufferPoolController::freeAllReservedBuffers;
}// end of namespace BufferPoolController
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_MatAllocator{
identity<void (cv::MatAllocator::*)(cv::UMatData *) const>::type deallocate = &cv::MatAllocator::deallocate;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( getBufferPoolController_wrap_obj , cv::MatAllocator , getBufferPoolController,  0, 1, cv::BufferPoolController * (cv::MatAllocator::*)(const char *) const);
auto getBufferPoolController = getBufferPoolController_wrap_obj();
identity<void (cv::MatAllocator::*)(cv::UMatData *,cv::UMatData *,int,const size_t [],const size_t [],const size_t [],const size_t [],const size_t [],bool) const>::type copy = &cv::MatAllocator::copy;
identity<void (cv::MatAllocator::*)(cv::UMatData *,void *,int,const size_t [],const size_t [],const size_t [],const size_t []) const>::type download = &cv::MatAllocator::download;
identity<void (cv::MatAllocator::*)(cv::UMatData *,const void *,int,const size_t [],const size_t [],const size_t [],const size_t []) const>::type upload = &cv::MatAllocator::upload;
identity<void (cv::MatAllocator::*)(cv::UMatData *,int) const>::type map = &cv::MatAllocator::map;
identity<void (cv::MatAllocator::*)(cv::UMatData *) const>::type unmap = &cv::MatAllocator::unmap;
identity<cv::UMatData * (cv::MatAllocator::*)(int,const int *,int,void *,size_t *,int,cv::UMatUsageFlags) const>::type allocate0 = &cv::MatAllocator::allocate;
identity<bool (cv::MatAllocator::*)(cv::UMatData *,int,cv::UMatUsageFlags) const>::type allocate1 = &cv::MatAllocator::allocate;
auto allocate = kaguya::overload(allocate0,allocate1);
}// end of namespace MatAllocator
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_UMatData{
identity<void (cv::UMatData::*)(bool)>::type markDeviceCopyObsolete = &cv::UMatData::markDeviceCopyObsolete;
identity<void (cv::UMatData::*)()>::type lock = &cv::UMatData::lock;
identity<void (cv::UMatData::*)(bool)>::type markDeviceMemMapped = &cv::UMatData::markDeviceMemMapped;
identity<void (cv::UMatData::*)()>::type unlock = &cv::UMatData::unlock;
identity<bool (cv::UMatData::*)() const>::type deviceMemMapped = &cv::UMatData::deviceMemMapped;
identity<bool (cv::UMatData::*)() const>::type tempCopiedUMat = &cv::UMatData::tempCopiedUMat;
identity<void (cv::UMatData::*)(bool)>::type markHostCopyObsolete = &cv::UMatData::markHostCopyObsolete;
identity<bool (cv::UMatData::*)() const>::type deviceCopyObsolete = &cv::UMatData::deviceCopyObsolete;
identity<bool (cv::UMatData::*)() const>::type tempUMat = &cv::UMatData::tempUMat;
identity<bool (cv::UMatData::*)() const>::type hostCopyObsolete = &cv::UMatData::hostCopyObsolete;
identity<bool (cv::UMatData::*)() const>::type copyOnMap = &cv::UMatData::copyOnMap;
}// end of namespace UMatData
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_UMat{
identity<cv::UMat (*)(int,int,int)>::type eye0 = &cv::UMat::eye;
identity<cv::UMat (*)(Size,int)>::type eye1 = &cv::UMat::eye;
auto eye = kaguya::overload(eye0,eye1);
identity<void (cv::UMat::*)(const cv::UMat &)>::type copySize = &cv::UMat::copySize;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( diag_wrap_obj0 , cv::UMat , diag,  0, 1, cv::UMat (cv::UMat::*)(int) const);
auto diag0 = diag_wrap_obj0();
identity<cv::UMat (*)(const cv::UMat &)>::type diag1 = &cv::UMat::diag;
auto diag = kaguya::overload(diag0,diag1);
identity<cv::UMat (cv::UMat::*)() const>::type clone = &cv::UMat::clone;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( convertTo_wrap_obj , cv::UMat , convertTo,  2, 4, void (cv::UMat::*)(OutputArray,int,double,double) const);
auto convertTo = convertTo_wrap_obj();
identity<void (cv::UMat::*)(Size &,Point &) const>::type locateROI = &cv::UMat::locateROI;
identity<void (cv::UMat::*)()>::type release = &cv::UMat::release;
identity<void * (cv::UMat::*)(int) const>::type handle = &cv::UMat::handle;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( assignTo_wrap_obj , cv::UMat , assignTo,  1, 2, void (cv::UMat::*)(cv::UMat &,int) const);
auto assignTo = assignTo_wrap_obj();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( setTo_wrap_obj , cv::UMat , setTo,  1, 2, cv::UMat & (cv::UMat::*)(InputArray,InputArray));
auto setTo = setTo_wrap_obj();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( reshape_wrap_obj0 , cv::UMat , reshape,  1, 2, cv::UMat (cv::UMat::*)(int,int) const);
auto reshape0 = reshape_wrap_obj0();
identity<cv::UMat (cv::UMat::*)(int,int,const int *) const>::type reshape1 = &cv::UMat::reshape;
auto reshape = kaguya::overload(reshape0,reshape1);
identity<size_t (cv::UMat::*)() const>::type elemSize = &cv::UMat::elemSize;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( checkVector_wrap_obj , cv::UMat , checkVector,  1, 3, int (cv::UMat::*)(int,int,bool) const);
auto checkVector = checkVector_wrap_obj();
identity<size_t (cv::UMat::*)() const>::type elemSize1 = &cv::UMat::elemSize1;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( mul_wrap_obj , cv::UMat , mul,  1, 2, cv::UMat (cv::UMat::*)(InputArray,double) const);
auto mul = mul_wrap_obj();
identity<bool (cv::UMat::*)() const>::type isSubmatrix = &cv::UMat::isSubmatrix;
identity<cv::Mat (cv::UMat::*)(int) const>::type getMat = &cv::UMat::getMat;
identity<void (cv::UMat::*)(size_t *) const>::type ndoffset = &cv::UMat::ndoffset;
identity<cv::UMat & (cv::UMat::*)(int,int,int,int)>::type adjustROI = &cv::UMat::adjustROI;
identity<cv::UMat (cv::UMat::*)(int,int) const>::type colRange0 = &cv::UMat::colRange;
identity<cv::UMat (cv::UMat::*)(const cv::Range &) const>::type colRange1 = &cv::UMat::colRange;
auto colRange = kaguya::overload(colRange0,colRange1);
identity<double (cv::UMat::*)(InputArray) const>::type dot = &cv::UMat::dot;
identity<int (cv::UMat::*)() const>::type depth = &cv::UMat::depth;
identity<void (cv::UMat::*)()>::type addref = &cv::UMat::addref;
identity<cv::UMat (*)(int,int,int)>::type zeros0 = &cv::UMat::zeros;
identity<cv::UMat (*)(Size,int)>::type zeros1 = &cv::UMat::zeros;
identity<cv::UMat (*)(int,const int *,int)>::type zeros2 = &cv::UMat::zeros;
auto zeros = kaguya::overload(zeros0,zeros1,zeros2);
identity<bool (cv::UMat::*)() const>::type isContinuous = &cv::UMat::isContinuous;
identity<bool (cv::UMat::*)() const>::type empty = &cv::UMat::empty;
identity<cv::UMat (cv::UMat::*)(int,int) const>::type rowRange0 = &cv::UMat::rowRange;
identity<cv::UMat (cv::UMat::*)(const cv::Range &) const>::type rowRange1 = &cv::UMat::rowRange;
auto rowRange = kaguya::overload(rowRange0,rowRange1);
identity<int (cv::UMat::*)() const>::type channels = &cv::UMat::channels;
identity<cv::UMat (cv::UMat::*)(int) const>::type col = &cv::UMat::col;
identity<void (cv::UMat::*)(OutputArray) const>::type copyTo0 = &cv::UMat::copyTo;
identity<void (cv::UMat::*)(OutputArray,InputArray) const>::type copyTo1 = &cv::UMat::copyTo;
auto copyTo = kaguya::overload(copyTo0,copyTo1);
identity<void (cv::UMat::*)()>::type deallocate = &cv::UMat::deallocate;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( inv_wrap_obj , cv::UMat , inv,  0, 1, cv::UMat (cv::UMat::*)(int) const);
auto inv = inv_wrap_obj();
identity<cv::UMat (cv::UMat::*)(int) const>::type row = &cv::UMat::row;
identity<size_t (cv::UMat::*)() const>::type total = &cv::UMat::total;
identity<cv::UMat (cv::UMat::*)() const>::type t = &cv::UMat::t;
identity<int (cv::UMat::*)() const>::type type = &cv::UMat::type;
identity<cv::MatAllocator * (*)()>::type getStdAllocator = &cv::UMat::getStdAllocator;
identity<cv::UMat (*)(int,int,int)>::type ones0 = &cv::UMat::ones;
identity<cv::UMat (*)(Size,int)>::type ones1 = &cv::UMat::ones;
identity<cv::UMat (*)(int,const int *,int)>::type ones2 = &cv::UMat::ones;
auto ones = kaguya::overload(ones0,ones1,ones2);
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj0 , cv::UMat , create,  3, 4, void (cv::UMat::*)(int,int,int,cv::UMatUsageFlags));
auto create0 = create_wrap_obj0();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj1 , cv::UMat , create,  2, 3, void (cv::UMat::*)(Size,int,cv::UMatUsageFlags));
auto create1 = create_wrap_obj1();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj2 , cv::UMat , create,  3, 4, void (cv::UMat::*)(int,const int *,int,cv::UMatUsageFlags));
auto create2 = create_wrap_obj2();
auto create = kaguya::overload(create0,create1,create2);
}// end of namespace UMat
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_SparseMat{
identity<int (cv::SparseMat::*)() const>::type depth = &cv::SparseMat::depth;
identity<int (cv::SparseMat::*)() const>::type channels = &cv::SparseMat::channels;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( erase_wrap_obj0 , cv::SparseMat , erase,  2, 3, void (cv::SparseMat::*)(int,int,size_t *));
auto erase0 = erase_wrap_obj0();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( erase_wrap_obj1 , cv::SparseMat , erase,  3, 4, void (cv::SparseMat::*)(int,int,int,size_t *));
auto erase1 = erase_wrap_obj1();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( erase_wrap_obj2 , cv::SparseMat , erase,  1, 2, void (cv::SparseMat::*)(const int *,size_t *));
auto erase2 = erase_wrap_obj2();
auto erase = kaguya::overload(erase0,erase1,erase2);
identity<void (cv::SparseMat::*)()>::type addref = &cv::SparseMat::addref;
identity<cv::SparseMatIterator (cv::SparseMat::*)()>::type end0 = &cv::SparseMat::end;
identity<cv::SparseMatConstIterator (cv::SparseMat::*)() const>::type end1 = &cv::SparseMat::end;
auto end = kaguya::overload(end0,end1);
identity<void (cv::SparseMat::*)(size_t,size_t,size_t)>::type removeNode = &cv::SparseMat::removeNode;
identity<void (cv::SparseMat::*)(size_t)>::type resizeHashTab = &cv::SparseMat::resizeHashTab;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( convertTo_wrap_obj0 , cv::SparseMat , convertTo,  2, 3, void (cv::SparseMat::*)(cv::SparseMat &,int,double) const);
auto convertTo0 = convertTo_wrap_obj0();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( convertTo_wrap_obj1 , cv::SparseMat , convertTo,  2, 4, void (cv::SparseMat::*)(cv::Mat &,int,double,double) const);
auto convertTo1 = convertTo_wrap_obj1();
auto convertTo = kaguya::overload(convertTo0,convertTo1);
identity<size_t (cv::SparseMat::*)() const>::type elemSize = &cv::SparseMat::elemSize;
identity<int (cv::SparseMat::*)() const>::type type = &cv::SparseMat::type;
identity<void (cv::SparseMat::*)(int,const int *,int)>::type create = &cv::SparseMat::create;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( assignTo_wrap_obj , cv::SparseMat , assignTo,  1, 2, void (cv::SparseMat::*)(cv::SparseMat &,int) const);
auto assignTo = assignTo_wrap_obj();
identity<size_t (cv::SparseMat::*)() const>::type nzcount = &cv::SparseMat::nzcount;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( ptr_wrap_obj0 , cv::SparseMat , ptr,  2, 3, uchar * (cv::SparseMat::*)(int,bool,size_t *));
auto ptr0 = ptr_wrap_obj0();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( ptr_wrap_obj1 , cv::SparseMat , ptr,  3, 4, uchar * (cv::SparseMat::*)(int,int,bool,size_t *));
auto ptr1 = ptr_wrap_obj1();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( ptr_wrap_obj2 , cv::SparseMat , ptr,  4, 5, uchar * (cv::SparseMat::*)(int,int,int,bool,size_t *));
auto ptr2 = ptr_wrap_obj2();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( ptr_wrap_obj3 , cv::SparseMat , ptr,  2, 3, uchar * (cv::SparseMat::*)(const int *,bool,size_t *));
auto ptr3 = ptr_wrap_obj3();
auto ptr = kaguya::overload(ptr0,ptr1,ptr2,ptr3);
identity<cv::SparseMat (cv::SparseMat::*)() const>::type clone = &cv::SparseMat::clone;
identity<uchar * (cv::SparseMat::*)(const int *,size_t)>::type newNode = &cv::SparseMat::newNode;
identity<const int * (cv::SparseMat::*)() const>::type size0 = &cv::SparseMat::size;
identity<int (cv::SparseMat::*)(int) const>::type size1 = &cv::SparseMat::size;
auto size = kaguya::overload(size0,size1);
identity<void (cv::SparseMat::*)(cv::SparseMat &) const>::type copyTo0 = &cv::SparseMat::copyTo;
identity<void (cv::SparseMat::*)(cv::Mat &) const>::type copyTo1 = &cv::SparseMat::copyTo;
auto copyTo = kaguya::overload(copyTo0,copyTo1);
identity<void (cv::SparseMat::*)()>::type release = &cv::SparseMat::release;
identity<void (cv::SparseMat::*)()>::type clear = &cv::SparseMat::clear;
identity<size_t (cv::SparseMat::*)(int) const>::type hash0 = &cv::SparseMat::hash;
identity<size_t (cv::SparseMat::*)(int,int) const>::type hash1 = &cv::SparseMat::hash;
identity<size_t (cv::SparseMat::*)(int,int,int) const>::type hash2 = &cv::SparseMat::hash;
identity<size_t (cv::SparseMat::*)(const int *) const>::type hash3 = &cv::SparseMat::hash;
auto hash = kaguya::overload(hash0,hash1,hash2,hash3);
identity<int (cv::SparseMat::*)() const>::type dims = &cv::SparseMat::dims;
identity<size_t (cv::SparseMat::*)() const>::type elemSize1 = &cv::SparseMat::elemSize1;
identity<cv::SparseMat::Node * (cv::SparseMat::*)(size_t)>::type node0 = &cv::SparseMat::node;
identity<const cv::SparseMat::Node * (cv::SparseMat::*)(size_t) const>::type node1 = &cv::SparseMat::node;
auto node = kaguya::overload(node0,node1);
identity<cv::SparseMatIterator (cv::SparseMat::*)()>::type begin0 = &cv::SparseMat::begin;
identity<cv::SparseMatConstIterator (cv::SparseMat::*)() const>::type begin1 = &cv::SparseMat::begin;
auto begin = kaguya::overload(begin0,begin1);
}// end of namespace SparseMat
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_MatConstIterator{
identity<Point (cv::MatConstIterator::*)() const>::type pos0 = &cv::MatConstIterator::pos;
identity<void (cv::MatConstIterator::*)(int *) const>::type pos1 = &cv::MatConstIterator::pos;
auto pos = kaguya::overload(pos0,pos1);
identity<ptrdiff_t (cv::MatConstIterator::*)() const>::type lpos = &cv::MatConstIterator::lpos;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( seek_wrap_obj0 , cv::MatConstIterator , seek,  1, 2, void (cv::MatConstIterator::*)(ptrdiff_t,bool));
auto seek0 = seek_wrap_obj0();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( seek_wrap_obj1 , cv::MatConstIterator , seek,  1, 2, void (cv::MatConstIterator::*)(const int *,bool));
auto seek1 = seek_wrap_obj1();
auto seek = kaguya::overload(seek0,seek1);
}// end of namespace MatConstIterator
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_SparseMatConstIterator{
identity<const SparseMat::Node * (cv::SparseMatConstIterator::*)() const>::type node = &cv::SparseMatConstIterator::node;
identity<void (cv::SparseMatConstIterator::*)()>::type seekEnd = &cv::SparseMatConstIterator::seekEnd;
}// end of namespace SparseMatConstIterator
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_SparseMatIterator{
identity<SparseMat::Node * (cv::SparseMatIterator::*)() const>::type node = &cv::SparseMatIterator::node;
}// end of namespace SparseMatIterator
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_NAryMatIterator{
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( init_wrap_obj , cv::NAryMatIterator , init,  3, 4, void (cv::NAryMatIterator::*)(const cv::Mat **,cv::Mat *,uchar **,int));
auto init = init_wrap_obj();
}// end of namespace NAryMatIterator
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_MatOp{
identity<void (cv::MatOp::*)(const cv::MatExpr &,cv::MatExpr &) const>::type abs = &cv::MatOp::abs;
identity<void (cv::MatOp::*)(const cv::MatExpr &,const cv::MatExpr &,cv::MatExpr &) const>::type add0 = &cv::MatOp::add;
identity<void (cv::MatOp::*)(const cv::MatExpr &,const Scalar &,cv::MatExpr &) const>::type add1 = &cv::MatOp::add;
auto add = kaguya::overload(add0,add1);
identity<bool (cv::MatOp::*)(const cv::MatExpr &) const>::type elementWise = &cv::MatOp::elementWise;
identity<void (cv::MatOp::*)(const cv::MatExpr &,cv::Mat &) const>::type augAssignOr = &cv::MatOp::augAssignOr;
identity<void (cv::MatOp::*)(const cv::MatExpr &,const cv::Range &,const cv::Range &,cv::MatExpr &) const>::type roi = &cv::MatOp::roi;
identity<void (cv::MatOp::*)(const cv::MatExpr &,const cv::MatExpr &,cv::MatExpr &) const>::type matmul = &cv::MatOp::matmul;
identity<void (cv::MatOp::*)(const cv::MatExpr &,cv::Mat &) const>::type augAssignMultiply = &cv::MatOp::augAssignMultiply;
identity<void (cv::MatOp::*)(const cv::MatExpr &,cv::MatExpr &) const>::type transpose = &cv::MatOp::transpose;
identity<void (cv::MatOp::*)(const cv::MatExpr &,cv::Mat &) const>::type augAssignAnd = &cv::MatOp::augAssignAnd;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( multiply_wrap_obj0 , cv::MatOp , multiply,  3, 4, void (cv::MatOp::*)(const cv::MatExpr &,const cv::MatExpr &,cv::MatExpr &,double) const);
auto multiply0 = multiply_wrap_obj0();
identity<void (cv::MatOp::*)(const cv::MatExpr &,double,cv::MatExpr &) const>::type multiply1 = &cv::MatOp::multiply;
auto multiply = kaguya::overload(multiply0,multiply1);
identity<void (cv::MatOp::*)(const cv::MatExpr &,cv::Mat &) const>::type augAssignAdd = &cv::MatOp::augAssignAdd;
identity<void (cv::MatOp::*)(const cv::MatExpr &,int,cv::MatExpr &) const>::type invert = &cv::MatOp::invert;
identity<void (cv::MatOp::*)(const cv::MatExpr &,cv::Mat &) const>::type augAssignSubtract = &cv::MatOp::augAssignSubtract;
identity<void (cv::MatOp::*)(const cv::MatExpr &,cv::Mat &) const>::type augAssignDivide = &cv::MatOp::augAssignDivide;
identity<void (cv::MatOp::*)(const cv::MatExpr &,cv::Mat &) const>::type augAssignXor = &cv::MatOp::augAssignXor;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( divide_wrap_obj0 , cv::MatOp , divide,  3, 4, void (cv::MatOp::*)(const cv::MatExpr &,const cv::MatExpr &,cv::MatExpr &,double) const);
auto divide0 = divide_wrap_obj0();
identity<void (cv::MatOp::*)(double,const cv::MatExpr &,cv::MatExpr &) const>::type divide1 = &cv::MatOp::divide;
auto divide = kaguya::overload(divide0,divide1);
identity<void (cv::MatOp::*)(const cv::MatExpr &,int,cv::MatExpr &) const>::type diag = &cv::MatOp::diag;
identity<Size (cv::MatOp::*)(const cv::MatExpr &) const>::type size = &cv::MatOp::size;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( assign_wrap_obj , cv::MatOp , assign,  2, 3, void (cv::MatOp::*)(const cv::MatExpr &,cv::Mat &,int) const);
auto assign = assign_wrap_obj();
identity<void (cv::MatOp::*)(const cv::MatExpr &,const cv::MatExpr &,cv::MatExpr &) const>::type subtract0 = &cv::MatOp::subtract;
identity<void (cv::MatOp::*)(const Scalar &,const cv::MatExpr &,cv::MatExpr &) const>::type subtract1 = &cv::MatOp::subtract;
auto subtract = kaguya::overload(subtract0,subtract1);
identity<int (cv::MatOp::*)(const cv::MatExpr &) const>::type type = &cv::MatOp::type;
}// end of namespace MatOp
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_MatExpr{
identity<double (cv::MatExpr::*)(const cv::Mat &) const>::type dot = &cv::MatExpr::dot;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( mul_wrap_obj0 , cv::MatExpr , mul,  1, 2, cv::MatExpr (cv::MatExpr::*)(const cv::MatExpr &,double) const);
auto mul0 = mul_wrap_obj0();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( mul_wrap_obj1 , cv::MatExpr , mul,  1, 2, cv::MatExpr (cv::MatExpr::*)(const cv::Mat &,double) const);
auto mul1 = mul_wrap_obj1();
auto mul = kaguya::overload(mul0,mul1);
identity<int (cv::MatExpr::*)() const>::type type = &cv::MatExpr::type;
identity<cv::MatExpr (cv::MatExpr::*)(int) const>::type col = &cv::MatExpr::col;
identity<cv::MatExpr (cv::MatExpr::*)(int) const>::type row = &cv::MatExpr::row;
identity<cv::MatExpr (cv::MatExpr::*)() const>::type t = &cv::MatExpr::t;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( diag_wrap_obj , cv::MatExpr , diag,  0, 1, cv::MatExpr (cv::MatExpr::*)(int) const);
auto diag = diag_wrap_obj();
identity<Size (cv::MatExpr::*)() const>::type size = &cv::MatExpr::size;
identity<cv::Mat (cv::MatExpr::*)(const cv::Mat &) const>::type cross = &cv::MatExpr::cross;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( inv_wrap_obj , cv::MatExpr , inv,  0, 1, cv::MatExpr (cv::MatExpr::*)(int) const);
auto inv = inv_wrap_obj();
}// end of namespace MatExpr
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_FileStorage{
identity<void (cv::FileStorage::*)(const cv::String &,double)>::type write0 = &cv::FileStorage::write;
identity<void (cv::FileStorage::*)(const cv::String &,const cv::String &)>::type write1 = &cv::FileStorage::write;
identity<void (cv::FileStorage::*)(const cv::String &,InputArray)>::type write2 = &cv::FileStorage::write;
auto write = kaguya::overload(write0,write1,write2);
identity<cv::String (cv::FileStorage::*)()>::type releaseAndGetString = &cv::FileStorage::releaseAndGetString;
identity<bool (cv::FileStorage::*)() const>::type isOpened = &cv::FileStorage::isOpened;
identity<cv::String (*)(const cv::String &)>::type getDefaultObjectName = &cv::FileStorage::getDefaultObjectName;
identity<void (cv::FileStorage::*)(const cv::String &,const void *)>::type writeObj = &cv::FileStorage::writeObj;
identity<void (cv::FileStorage::*)()>::type release = &cv::FileStorage::release;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( writeComment_wrap_obj , cv::FileStorage , writeComment,  1, 2, void (cv::FileStorage::*)(const cv::String &,bool));
auto writeComment = writeComment_wrap_obj();
identity<cv::FileNode (cv::FileStorage::*)() const>::type getFirstTopLevelNode = &cv::FileStorage::getFirstTopLevelNode;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( root_wrap_obj , cv::FileStorage , root,  0, 1, cv::FileNode (cv::FileStorage::*)(int) const);
auto root = root_wrap_obj();
identity<void (cv::FileStorage::*)(const cv::String &,const uchar *,size_t)>::type writeRaw = &cv::FileStorage::writeRaw;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( open_wrap_obj , cv::FileStorage , open,  2, 3, bool (cv::FileStorage::*)(const cv::String &,int,const cv::String &));
auto open = open_wrap_obj();
}// end of namespace FileStorage
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_FileNode{
identity<void (cv::FileNode::*)(const cv::String &,uchar *,size_t) const>::type readRaw = &cv::FileNode::readRaw;
identity<bool (cv::FileNode::*)() const>::type isSeq = &cv::FileNode::isSeq;
identity<cv::String (cv::FileNode::*)() const>::type name = &cv::FileNode::name;
identity<bool (cv::FileNode::*)() const>::type isInt = &cv::FileNode::isInt;
identity<bool (cv::FileNode::*)() const>::type isMap = &cv::FileNode::isMap;
identity<cv::FileNodeIterator (cv::FileNode::*)() const>::type begin = &cv::FileNode::begin;
identity<cv::Mat (cv::FileNode::*)() const>::type mat = &cv::FileNode::mat;
identity<bool (cv::FileNode::*)() const>::type isReal = &cv::FileNode::isReal;
identity<cv::String (cv::FileNode::*)() const>::type string = &cv::FileNode::string;
identity<bool (cv::FileNode::*)() const>::type isNamed = &cv::FileNode::isNamed;
identity<double (cv::FileNode::*)() const>::type real = &cv::FileNode::real;
identity<int (cv::FileNode::*)() const>::type type = &cv::FileNode::type;
identity<void * (cv::FileNode::*)() const>::type readObj = &cv::FileNode::readObj;
identity<bool (cv::FileNode::*)() const>::type isString = &cv::FileNode::isString;
identity<cv::FileNodeIterator (cv::FileNode::*)() const>::type end = &cv::FileNode::end;
identity<bool (cv::FileNode::*)() const>::type empty = &cv::FileNode::empty;
identity<size_t (cv::FileNode::*)() const>::type size = &cv::FileNode::size;
identity<bool (cv::FileNode::*)() const>::type isNone = &cv::FileNode::isNone;
}// end of namespace FileNode
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_FileNodeIterator{
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( readRaw_wrap_obj , cv::FileNodeIterator , readRaw,  2, 3, cv::FileNodeIterator & (cv::FileNodeIterator::*)(const cv::String &,uchar *,size_t));
auto readRaw = readRaw_wrap_obj();
}// end of namespace FileNodeIterator
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_Exception{
identity<const char * (cv::Exception::*)() const>::type what = &cv::Exception::what;
identity<void (cv::Exception::*)()>::type formatMessage = &cv::Exception::formatMessage;
}// end of namespace Exception
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_PCA{
identity<void (cv::PCA::*)(cv::FileStorage &) const>::type write = &cv::PCA::write;
identity<void (cv::PCA::*)(const cv::FileNode &)>::type read = &cv::PCA::read;
identity<cv::Mat (cv::PCA::*)(InputArray) const>::type backProject0 = &cv::PCA::backProject;
identity<void (cv::PCA::*)(InputArray,OutputArray) const>::type backProject1 = &cv::PCA::backProject;
auto backProject = kaguya::overload(backProject0,backProject1);
identity<cv::Mat (cv::PCA::*)(InputArray) const>::type project0 = &cv::PCA::project;
identity<void (cv::PCA::*)(InputArray,OutputArray) const>::type project1 = &cv::PCA::project;
auto project = kaguya::overload(project0,project1);
}// end of namespace PCA
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_LDA{
identity<void (cv::LDA::*)(const cv::String &)>::type load0 = &cv::LDA::load;
identity<void (cv::LDA::*)(const cv::FileStorage &)>::type load1 = &cv::LDA::load;
auto load = kaguya::overload(load0,load1);
identity<void (cv::LDA::*)(const cv::String &) const>::type save0 = &cv::LDA::save;
identity<void (cv::LDA::*)(cv::FileStorage &) const>::type save1 = &cv::LDA::save;
auto save = kaguya::overload(save0,save1);
identity<void (cv::LDA::*)(InputArrayOfArrays,InputArray)>::type compute = &cv::LDA::compute;
identity<cv::Mat (cv::LDA::*)() const>::type eigenvalues = &cv::LDA::eigenvalues;
identity<cv::Mat (cv::LDA::*)() const>::type eigenvectors = &cv::LDA::eigenvectors;
identity<cv::Mat (*)(InputArray,InputArray,InputArray)>::type subspaceReconstruct = &cv::LDA::subspaceReconstruct;
identity<cv::Mat (*)(InputArray,InputArray,InputArray)>::type subspaceProject = &cv::LDA::subspaceProject;
identity<cv::Mat (cv::LDA::*)(InputArray)>::type reconstruct = &cv::LDA::reconstruct;
identity<cv::Mat (cv::LDA::*)(InputArray)>::type project = &cv::LDA::project;
}// end of namespace LDA
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_SVD{
identity<void (*)(InputArray,OutputArray)>::type solveZ = &cv::SVD::solveZ;
identity<void (*)(InputArray,InputArray,InputArray,InputArray,OutputArray)>::type backSubst0 = &cv::SVD::backSubst;
identity<void (cv::SVD::*)(InputArray,OutputArray) const>::type backSubst1 = &cv::SVD::backSubst;
auto backSubst = kaguya::overload(backSubst0,backSubst1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( compute_wrap_obj0, cv::SVD::compute,  4, 5, void (*)(InputArray,OutputArray,OutputArray,OutputArray,int));
auto compute0 = compute_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( compute_wrap_obj1, cv::SVD::compute,  2, 3, void (*)(InputArray,OutputArray,int));
auto compute1 = compute_wrap_obj1();
auto compute = kaguya::overload(compute0,compute1);
}// end of namespace SVD
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_RNG{
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( fill_wrap_obj , cv::RNG , fill,  4, 5, void (cv::RNG::*)(InputOutputArray,int,InputArray,InputArray,bool));
auto fill = fill_wrap_obj();
identity<unsigned int (cv::RNG::*)()>::type next = &cv::RNG::next;
identity<double (cv::RNG::*)(double)>::type gaussian = &cv::RNG::gaussian;
identity<int (cv::RNG::*)(int,int)>::type uniform0 = &cv::RNG::uniform;
identity<float (cv::RNG::*)(float,float)>::type uniform1 = &cv::RNG::uniform;
identity<double (cv::RNG::*)(double,double)>::type uniform2 = &cv::RNG::uniform;
auto uniform = kaguya::overload(uniform0,uniform1,uniform2);
}// end of namespace RNG
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_RNG_MT19937{
identity<unsigned int (cv::RNG_MT19937::*)()>::type next = &cv::RNG_MT19937::next;
identity<void (cv::RNG_MT19937::*)(unsigned int)>::type seed = &cv::RNG_MT19937::seed;
identity<int (cv::RNG_MT19937::*)(int,int)>::type uniform0 = &cv::RNG_MT19937::uniform;
identity<float (cv::RNG_MT19937::*)(float,float)>::type uniform1 = &cv::RNG_MT19937::uniform;
identity<double (cv::RNG_MT19937::*)(double,double)>::type uniform2 = &cv::RNG_MT19937::uniform;
auto uniform = kaguya::overload(uniform0,uniform1,uniform2);
}// end of namespace RNG_MT19937
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_Formatted{
identity<void (cv::Formatted::*)()>::type reset = &cv::Formatted::reset;
identity<const char * (cv::Formatted::*)()>::type next = &cv::Formatted::next;
}// end of namespace Formatted
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_Formatter{
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( set64fPrecision_wrap_obj , cv::Formatter , set64fPrecision,  0, 1, void (cv::Formatter::*)(int));
auto set64fPrecision = set64fPrecision_wrap_obj();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( set32fPrecision_wrap_obj , cv::Formatter , set32fPrecision,  0, 1, void (cv::Formatter::*)(int));
auto set32fPrecision = set32fPrecision_wrap_obj();
identity<Ptr<cv::Formatted> (cv::Formatter::*)(const cv::Mat &) const>::type format = &cv::Formatter::format;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( get_wrap_obj, cv::Formatter::get,  0, 1, Ptr<cv::Formatter> (*)(int));
auto get = get_wrap_obj();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( setMultiline_wrap_obj , cv::Formatter , setMultiline,  0, 1, void (cv::Formatter::*)(bool));
auto setMultiline = setMultiline_wrap_obj();
}// end of namespace Formatter
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_Algorithm{
identity<void (cv::Algorithm::*)()>::type clear = &cv::Algorithm::clear;
identity<bool (cv::Algorithm::*)() const>::type empty = &cv::Algorithm::empty;
identity<void (cv::Algorithm::*)(cv::FileStorage &) const>::type write = &cv::Algorithm::write;
identity<void (cv::Algorithm::*)(const cv::String &) const>::type save = &cv::Algorithm::save;
identity<void (cv::Algorithm::*)(const cv::FileNode &)>::type read = &cv::Algorithm::read;
identity<cv::String (cv::Algorithm::*)() const>::type getDefaultName = &cv::Algorithm::getDefaultName;
}// end of namespace Algorithm
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_TickMeter{
identity<void (cv::TickMeter::*)()>::type start = &cv::TickMeter::start;
identity<double (cv::TickMeter::*)() const>::type getTimeSec = &cv::TickMeter::getTimeSec;
identity<int64 (cv::TickMeter::*)() const>::type getCounter = &cv::TickMeter::getCounter;
identity<int64 (cv::TickMeter::*)() const>::type getTimeTicks = &cv::TickMeter::getTimeTicks;
identity<double (cv::TickMeter::*)() const>::type getTimeMicro = &cv::TickMeter::getTimeMicro;
identity<double (cv::TickMeter::*)() const>::type getTimeMilli = &cv::TickMeter::getTimeMilli;
identity<void (cv::TickMeter::*)()>::type stop = &cv::TickMeter::stop;
identity<void (cv::TickMeter::*)()>::type reset = &cv::TickMeter::reset;
}// end of namespace TickMeter
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_Mutex{
identity<bool (cv::Mutex::*)()>::type trylock = &cv::Mutex::trylock;
identity<void (cv::Mutex::*)()>::type lock = &cv::Mutex::lock;
identity<void (cv::Mutex::*)()>::type unlock = &cv::Mutex::unlock;
}// end of namespace Mutex
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_TLSDataContainer{
identity<void (cv::TLSDataContainer::*)(void *) const>::type deleteDataInstance = &cv::TLSDataContainer::deleteDataInstance;
identity<void * (cv::TLSDataContainer::*)() const>::type getData = &cv::TLSDataContainer::getData;
identity<void * (cv::TLSDataContainer::*)() const>::type createDataInstance = &cv::TLSDataContainer::createDataInstance;
}// end of namespace TLSDataContainer
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_CommandLineParser{
identity<void (cv::CommandLineParser::*)() const>::type printErrors = &cv::CommandLineParser::printErrors;
identity<void (cv::CommandLineParser::*)() const>::type printMessage = &cv::CommandLineParser::printMessage;
identity<cv::String (cv::CommandLineParser::*)() const>::type getPathToApplication = &cv::CommandLineParser::getPathToApplication;
identity<bool (cv::CommandLineParser::*)(const cv::String &) const>::type has = &cv::CommandLineParser::has;
identity<bool (cv::CommandLineParser::*)() const>::type check = &cv::CommandLineParser::check;
identity<void (cv::CommandLineParser::*)(const cv::String &)>::type about = &cv::CommandLineParser::about;
}// end of namespace CommandLineParser
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_MinProblemSolver{
identity<Ptr<cv::MinProblemSolver::Function> (cv::MinProblemSolver::*)() const>::type getFunction = &cv::MinProblemSolver::getFunction;
identity<void (cv::MinProblemSolver::*)(const cv::TermCriteria &)>::type setTermCriteria = &cv::MinProblemSolver::setTermCriteria;
identity<void (cv::MinProblemSolver::*)(const Ptr<cv::MinProblemSolver::Function> &)>::type setFunction = &cv::MinProblemSolver::setFunction;
identity<cv::TermCriteria (cv::MinProblemSolver::*)() const>::type getTermCriteria = &cv::MinProblemSolver::getTermCriteria;
identity<double (cv::MinProblemSolver::*)(InputOutputArray)>::type minimize = &cv::MinProblemSolver::minimize;
}// end of namespace MinProblemSolver
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_DownhillSolver{
identity<void (cv::DownhillSolver::*)(InputArray)>::type setInitStep = &cv::DownhillSolver::setInitStep;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::DownhillSolver::create,  0, 3, Ptr<cv::DownhillSolver> (*)(const Ptr<MinProblemSolver::Function> &,InputArray,cv::TermCriteria));
auto create = create_wrap_obj();
identity<void (cv::DownhillSolver::*)(OutputArray) const>::type getInitStep = &cv::DownhillSolver::getInitStep;
}// end of namespace DownhillSolver
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_ConjGradSolver{
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::ConjGradSolver::create,  0, 2, Ptr<cv::ConjGradSolver> (*)(const Ptr<MinProblemSolver::Function> &,cv::TermCriteria));
auto create = create_wrap_obj();
}// end of namespace ConjGradSolver
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_KeyPointsFilter{
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( runByKeypointSize_wrap_obj, cv::KeyPointsFilter::runByKeypointSize,  2, 3, void (*)(std::vector<KeyPoint> &,float,float));
auto runByKeypointSize = runByKeypointSize_wrap_obj();
identity<void (*)(std::vector<KeyPoint> &)>::type removeDuplicated = &cv::KeyPointsFilter::removeDuplicated;
identity<void (*)(std::vector<KeyPoint> &,int)>::type retainBest = &cv::KeyPointsFilter::retainBest;
identity<void (*)(std::vector<KeyPoint> &,const cv::Mat &)>::type runByPixelsMask = &cv::KeyPointsFilter::runByPixelsMask;
identity<void (*)(std::vector<KeyPoint> &,Size,int)>::type runByImageBorder = &cv::KeyPointsFilter::runByImageBorder;
}// end of namespace KeyPointsFilter
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_Feature2D{
identity<void (cv::Feature2D::*)(InputArray,std::vector<KeyPoint> &,OutputArray)>::type compute0 = &cv::Feature2D::compute;
identity<void (cv::Feature2D::*)(InputArrayOfArrays,std::vector<std::vector<KeyPoint> > &,OutputArrayOfArrays)>::type compute1 = &cv::Feature2D::compute;
auto compute = kaguya::overload(compute0,compute1);
identity<int (cv::Feature2D::*)() const>::type defaultNorm = &cv::Feature2D::defaultNorm;
identity<void (cv::Feature2D::*)(const cv::String &) const>::type write0 = &cv::Feature2D::write;
identity<void (cv::Feature2D::*)(cv::FileStorage &) const>::type write1 = &cv::Feature2D::write;
auto write = kaguya::overload(write0,write1);
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detect_wrap_obj0 , cv::Feature2D , detect,  2, 3, void (cv::Feature2D::*)(InputArray,std::vector<KeyPoint> &,InputArray));
auto detect0 = detect_wrap_obj0();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detect_wrap_obj1 , cv::Feature2D , detect,  2, 3, void (cv::Feature2D::*)(InputArrayOfArrays,std::vector<std::vector<KeyPoint> > &,InputArrayOfArrays));
auto detect1 = detect_wrap_obj1();
auto detect = kaguya::overload(detect0,detect1);
identity<int (cv::Feature2D::*)() const>::type descriptorType = &cv::Feature2D::descriptorType;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detectAndCompute_wrap_obj , cv::Feature2D , detectAndCompute,  4, 5, void (cv::Feature2D::*)(InputArray,InputArray,std::vector<KeyPoint> &,OutputArray,bool));
auto detectAndCompute = detectAndCompute_wrap_obj();
identity<int (cv::Feature2D::*)() const>::type descriptorSize = &cv::Feature2D::descriptorSize;
identity<bool (cv::Feature2D::*)() const>::type empty = &cv::Feature2D::empty;
identity<void (cv::Feature2D::*)(const cv::String &)>::type read0 = &cv::Feature2D::read;
identity<void (cv::Feature2D::*)(const cv::FileNode &)>::type read1 = &cv::Feature2D::read;
auto read = kaguya::overload(read0,read1);
}// end of namespace Feature2D
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_BRISK{
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj0, cv::BRISK::create,  0, 3, Ptr<cv::BRISK> (*)(int,int,float));
auto create0 = create_wrap_obj0();
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj1, cv::BRISK::create,  2, 5, Ptr<cv::BRISK> (*)(const std::vector<float> &,const std::vector<int> &,float,float,const std::vector<int> &));
auto create1 = create_wrap_obj1();
auto create = kaguya::overload(create0,create1);
}// end of namespace BRISK
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_ORB{
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::ORB::create,  0, 9, Ptr<cv::ORB> (*)(int,float,int,int,int,int,int,int,int));
auto create = create_wrap_obj();
identity<int (cv::ORB::*)() const>::type getEdgeThreshold = &cv::ORB::getEdgeThreshold;
identity<int (cv::ORB::*)() const>::type getFirstLevel = &cv::ORB::getFirstLevel;
identity<void (cv::ORB::*)(int)>::type setEdgeThreshold = &cv::ORB::setEdgeThreshold;
identity<void (cv::ORB::*)(int)>::type setFirstLevel = &cv::ORB::setFirstLevel;
identity<int (cv::ORB::*)() const>::type getNLevels = &cv::ORB::getNLevels;
identity<void (cv::ORB::*)(double)>::type setScaleFactor = &cv::ORB::setScaleFactor;
identity<void (cv::ORB::*)(int)>::type setNLevels = &cv::ORB::setNLevels;
identity<int (cv::ORB::*)() const>::type getWTA_K = &cv::ORB::getWTA_K;
identity<int (cv::ORB::*)() const>::type getFastThreshold = &cv::ORB::getFastThreshold;
identity<void (cv::ORB::*)(int)>::type setScoreType = &cv::ORB::setScoreType;
identity<void (cv::ORB::*)(int)>::type setMaxFeatures = &cv::ORB::setMaxFeatures;
identity<void (cv::ORB::*)(int)>::type setWTA_K = &cv::ORB::setWTA_K;
identity<int (cv::ORB::*)() const>::type getMaxFeatures = &cv::ORB::getMaxFeatures;
identity<double (cv::ORB::*)() const>::type getScaleFactor = &cv::ORB::getScaleFactor;
identity<void (cv::ORB::*)(int)>::type setPatchSize = &cv::ORB::setPatchSize;
identity<void (cv::ORB::*)(int)>::type setFastThreshold = &cv::ORB::setFastThreshold;
identity<int (cv::ORB::*)() const>::type getScoreType = &cv::ORB::getScoreType;
identity<int (cv::ORB::*)() const>::type getPatchSize = &cv::ORB::getPatchSize;
}// end of namespace ORB
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_MSER{
identity<void (cv::MSER::*)(int)>::type setMinArea = &cv::MSER::setMinArea;
identity<int (cv::MSER::*)() const>::type getMaxArea = &cv::MSER::getMaxArea;
identity<void (cv::MSER::*)(bool)>::type setPass2Only = &cv::MSER::setPass2Only;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::MSER::create,  0, 9, Ptr<cv::MSER> (*)(int,int,int,double,double,int,double,double,int));
auto create = create_wrap_obj();
identity<bool (cv::MSER::*)() const>::type getPass2Only = &cv::MSER::getPass2Only;
identity<int (cv::MSER::*)() const>::type getDelta = &cv::MSER::getDelta;
identity<int (cv::MSER::*)() const>::type getMinArea = &cv::MSER::getMinArea;
identity<void (cv::MSER::*)(int)>::type setMaxArea = &cv::MSER::setMaxArea;
identity<void (cv::MSER::*)(int)>::type setDelta = &cv::MSER::setDelta;
identity<void (cv::MSER::*)(InputArray,std::vector<std::vector<Point> > &,std::vector<Rect> &)>::type detectRegions = &cv::MSER::detectRegions;
}// end of namespace MSER
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_FastFeatureDetector{
identity<void (cv::FastFeatureDetector::*)(int)>::type setThreshold = &cv::FastFeatureDetector::setThreshold;
identity<void (cv::FastFeatureDetector::*)(int)>::type setType = &cv::FastFeatureDetector::setType;
identity<int (cv::FastFeatureDetector::*)() const>::type getType = &cv::FastFeatureDetector::getType;
identity<bool (cv::FastFeatureDetector::*)() const>::type getNonmaxSuppression = &cv::FastFeatureDetector::getNonmaxSuppression;
identity<int (cv::FastFeatureDetector::*)() const>::type getThreshold = &cv::FastFeatureDetector::getThreshold;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::FastFeatureDetector::create,  0, 3, Ptr<cv::FastFeatureDetector> (*)(int,bool,int));
auto create = create_wrap_obj();
identity<void (cv::FastFeatureDetector::*)(bool)>::type setNonmaxSuppression = &cv::FastFeatureDetector::setNonmaxSuppression;
}// end of namespace FastFeatureDetector
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_AgastFeatureDetector{
identity<int (cv::AgastFeatureDetector::*)() const>::type getType = &cv::AgastFeatureDetector::getType;
identity<bool (cv::AgastFeatureDetector::*)() const>::type getNonmaxSuppression = &cv::AgastFeatureDetector::getNonmaxSuppression;
identity<void (cv::AgastFeatureDetector::*)(int)>::type setThreshold = &cv::AgastFeatureDetector::setThreshold;
identity<void (cv::AgastFeatureDetector::*)(int)>::type setType = &cv::AgastFeatureDetector::setType;
identity<void (cv::AgastFeatureDetector::*)(bool)>::type setNonmaxSuppression = &cv::AgastFeatureDetector::setNonmaxSuppression;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::AgastFeatureDetector::create,  0, 3, Ptr<cv::AgastFeatureDetector> (*)(int,bool,int));
auto create = create_wrap_obj();
identity<int (cv::AgastFeatureDetector::*)() const>::type getThreshold = &cv::AgastFeatureDetector::getThreshold;
}// end of namespace AgastFeatureDetector
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_GFTTDetector{
identity<double (cv::GFTTDetector::*)() const>::type getQualityLevel = &cv::GFTTDetector::getQualityLevel;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::GFTTDetector::create,  0, 6, Ptr<cv::GFTTDetector> (*)(int,double,double,int,bool,double));
auto create = create_wrap_obj();
identity<double (cv::GFTTDetector::*)() const>::type getMinDistance = &cv::GFTTDetector::getMinDistance;
identity<int (cv::GFTTDetector::*)() const>::type getMaxFeatures = &cv::GFTTDetector::getMaxFeatures;
identity<void (cv::GFTTDetector::*)(double)>::type setMinDistance = &cv::GFTTDetector::setMinDistance;
identity<int (cv::GFTTDetector::*)() const>::type getBlockSize = &cv::GFTTDetector::getBlockSize;
identity<void (cv::GFTTDetector::*)(int)>::type setBlockSize = &cv::GFTTDetector::setBlockSize;
identity<bool (cv::GFTTDetector::*)() const>::type getHarrisDetector = &cv::GFTTDetector::getHarrisDetector;
identity<void (cv::GFTTDetector::*)(bool)>::type setHarrisDetector = &cv::GFTTDetector::setHarrisDetector;
identity<void (cv::GFTTDetector::*)(double)>::type setK = &cv::GFTTDetector::setK;
identity<void (cv::GFTTDetector::*)(int)>::type setMaxFeatures = &cv::GFTTDetector::setMaxFeatures;
identity<double (cv::GFTTDetector::*)() const>::type getK = &cv::GFTTDetector::getK;
identity<void (cv::GFTTDetector::*)(double)>::type setQualityLevel = &cv::GFTTDetector::setQualityLevel;
}// end of namespace GFTTDetector
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_SimpleBlobDetector{
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::SimpleBlobDetector::create,  0, 1, Ptr<cv::SimpleBlobDetector> (*)(const SimpleBlobDetector::Params &));
auto create = create_wrap_obj();
}// end of namespace SimpleBlobDetector
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_KAZE{
identity<void (cv::KAZE::*)(int)>::type setDiffusivity = &cv::KAZE::setDiffusivity;
identity<void (cv::KAZE::*)(double)>::type setThreshold = &cv::KAZE::setThreshold;
identity<int (cv::KAZE::*)() const>::type getNOctaves = &cv::KAZE::getNOctaves;
identity<void (cv::KAZE::*)(int)>::type setNOctaveLayers = &cv::KAZE::setNOctaveLayers;
identity<void (cv::KAZE::*)(bool)>::type setUpright = &cv::KAZE::setUpright;
identity<int (cv::KAZE::*)() const>::type getDiffusivity = &cv::KAZE::getDiffusivity;
identity<int (cv::KAZE::*)() const>::type getNOctaveLayers = &cv::KAZE::getNOctaveLayers;
identity<bool (cv::KAZE::*)() const>::type getExtended = &cv::KAZE::getExtended;
identity<double (cv::KAZE::*)() const>::type getThreshold = &cv::KAZE::getThreshold;
identity<bool (cv::KAZE::*)() const>::type getUpright = &cv::KAZE::getUpright;
identity<void (cv::KAZE::*)(int)>::type setNOctaves = &cv::KAZE::setNOctaves;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::KAZE::create,  0, 6, Ptr<cv::KAZE> (*)(bool,bool,float,int,int,int));
auto create = create_wrap_obj();
identity<void (cv::KAZE::*)(bool)>::type setExtended = &cv::KAZE::setExtended;
}// end of namespace KAZE
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_AKAZE{
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::AKAZE::create,  0, 7, Ptr<cv::AKAZE> (*)(int,int,int,float,int,int,int));
auto create = create_wrap_obj();
identity<int (cv::AKAZE::*)() const>::type getDescriptorType = &cv::AKAZE::getDescriptorType;
identity<void (cv::AKAZE::*)(int)>::type setDiffusivity = &cv::AKAZE::setDiffusivity;
identity<double (cv::AKAZE::*)() const>::type getThreshold = &cv::AKAZE::getThreshold;
identity<int (cv::AKAZE::*)() const>::type getDescriptorChannels = &cv::AKAZE::getDescriptorChannels;
identity<void (cv::AKAZE::*)(int)>::type setDescriptorSize = &cv::AKAZE::setDescriptorSize;
identity<void (cv::AKAZE::*)(int)>::type setDescriptorChannels = &cv::AKAZE::setDescriptorChannels;
identity<void (cv::AKAZE::*)(int)>::type setDescriptorType = &cv::AKAZE::setDescriptorType;
identity<void (cv::AKAZE::*)(double)>::type setThreshold = &cv::AKAZE::setThreshold;
identity<int (cv::AKAZE::*)() const>::type getNOctaveLayers = &cv::AKAZE::getNOctaveLayers;
identity<int (cv::AKAZE::*)() const>::type getDescriptorSize = &cv::AKAZE::getDescriptorSize;
identity<int (cv::AKAZE::*)() const>::type getNOctaves = &cv::AKAZE::getNOctaves;
identity<void (cv::AKAZE::*)(int)>::type setNOctaveLayers = &cv::AKAZE::setNOctaveLayers;
identity<int (cv::AKAZE::*)() const>::type getDiffusivity = &cv::AKAZE::getDiffusivity;
identity<void (cv::AKAZE::*)(int)>::type setNOctaves = &cv::AKAZE::setNOctaves;
}// end of namespace AKAZE
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_DescriptorMatcher{
identity<void (cv::DescriptorMatcher::*)()>::type clear = &cv::DescriptorMatcher::clear;
identity<Ptr<cv::DescriptorMatcher> (*)(const cv::String &)>::type create0 = &cv::DescriptorMatcher::create;
identity<Ptr<cv::DescriptorMatcher> (*)(int)>::type create1 = &cv::DescriptorMatcher::create;
auto create = kaguya::overload(create0,create1);
identity<bool (cv::DescriptorMatcher::*)() const>::type empty = &cv::DescriptorMatcher::empty;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( knnMatch_wrap_obj0 , cv::DescriptorMatcher , knnMatch,  4, 6, void (cv::DescriptorMatcher::*)(InputArray,InputArray,std::vector<std::vector<DMatch> > &,int,InputArray,bool) const);
auto knnMatch0 = knnMatch_wrap_obj0();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( knnMatch_wrap_obj1 , cv::DescriptorMatcher , knnMatch,  3, 5, void (cv::DescriptorMatcher::*)(InputArray,std::vector<std::vector<DMatch> > &,int,InputArrayOfArrays,bool));
auto knnMatch1 = knnMatch_wrap_obj1();
auto knnMatch = kaguya::overload(knnMatch0,knnMatch1);
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( match_wrap_obj0 , cv::DescriptorMatcher , match,  3, 4, void (cv::DescriptorMatcher::*)(InputArray,InputArray,std::vector<DMatch> &,InputArray) const);
auto match0 = match_wrap_obj0();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( match_wrap_obj1 , cv::DescriptorMatcher , match,  2, 3, void (cv::DescriptorMatcher::*)(InputArray,std::vector<DMatch> &,InputArrayOfArrays));
auto match1 = match_wrap_obj1();
auto match = kaguya::overload(match0,match1);
identity<void (cv::DescriptorMatcher::*)(const cv::String &) const>::type write0 = &cv::DescriptorMatcher::write;
identity<void (cv::DescriptorMatcher::*)(cv::FileStorage &) const>::type write1 = &cv::DescriptorMatcher::write;
auto write = kaguya::overload(write0,write1);
identity<void (cv::DescriptorMatcher::*)(InputArrayOfArrays)>::type add = &cv::DescriptorMatcher::add;
identity<bool (cv::DescriptorMatcher::*)() const>::type isMaskSupported = &cv::DescriptorMatcher::isMaskSupported;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( clone_wrap_obj , cv::DescriptorMatcher , clone,  0, 1, Ptr<cv::DescriptorMatcher> (cv::DescriptorMatcher::*)(bool) const);
auto clone = clone_wrap_obj();
identity<void (cv::DescriptorMatcher::*)()>::type train = &cv::DescriptorMatcher::train;
identity<void (cv::DescriptorMatcher::*)(const cv::String &)>::type read0 = &cv::DescriptorMatcher::read;
identity<void (cv::DescriptorMatcher::*)(const cv::FileNode &)>::type read1 = &cv::DescriptorMatcher::read;
auto read = kaguya::overload(read0,read1);
identity<const std::vector<Mat> & (cv::DescriptorMatcher::*)() const>::type getTrainDescriptors = &cv::DescriptorMatcher::getTrainDescriptors;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( radiusMatch_wrap_obj0 , cv::DescriptorMatcher , radiusMatch,  4, 6, void (cv::DescriptorMatcher::*)(InputArray,InputArray,std::vector<std::vector<DMatch> > &,float,InputArray,bool) const);
auto radiusMatch0 = radiusMatch_wrap_obj0();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( radiusMatch_wrap_obj1 , cv::DescriptorMatcher , radiusMatch,  3, 5, void (cv::DescriptorMatcher::*)(InputArray,std::vector<std::vector<DMatch> > &,float,InputArrayOfArrays,bool));
auto radiusMatch1 = radiusMatch_wrap_obj1();
auto radiusMatch = kaguya::overload(radiusMatch0,radiusMatch1);
}// end of namespace DescriptorMatcher
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_BFMatcher{
identity<bool (cv::BFMatcher::*)() const>::type isMaskSupported = &cv::BFMatcher::isMaskSupported;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::BFMatcher::create,  0, 2, Ptr<cv::BFMatcher> (*)(int,bool));
auto create = create_wrap_obj();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( clone_wrap_obj , cv::BFMatcher , clone,  0, 1, Ptr<cv::DescriptorMatcher> (cv::BFMatcher::*)(bool) const);
auto clone = clone_wrap_obj();
}// end of namespace BFMatcher
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_FlannBasedMatcher{
identity<void (cv::FlannBasedMatcher::*)(const cv::FileNode &)>::type read = &cv::FlannBasedMatcher::read;
identity<void (cv::FlannBasedMatcher::*)()>::type train = &cv::FlannBasedMatcher::train;
identity<void (cv::FlannBasedMatcher::*)(cv::FileStorage &) const>::type write = &cv::FlannBasedMatcher::write;
identity<Ptr<cv::FlannBasedMatcher> (*)()>::type create = &cv::FlannBasedMatcher::create;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( clone_wrap_obj , cv::FlannBasedMatcher , clone,  0, 1, Ptr<cv::DescriptorMatcher> (cv::FlannBasedMatcher::*)(bool) const);
auto clone = clone_wrap_obj();
identity<void (cv::FlannBasedMatcher::*)(InputArrayOfArrays)>::type add = &cv::FlannBasedMatcher::add;
identity<bool (cv::FlannBasedMatcher::*)() const>::type isMaskSupported = &cv::FlannBasedMatcher::isMaskSupported;
identity<void (cv::FlannBasedMatcher::*)()>::type clear = &cv::FlannBasedMatcher::clear;
}// end of namespace FlannBasedMatcher
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_BOWTrainer{
identity<int (cv::BOWTrainer::*)() const>::type descriptorsCount = &cv::BOWTrainer::descriptorsCount;
identity<const std::vector<Mat> & (cv::BOWTrainer::*)() const>::type getDescriptors = &cv::BOWTrainer::getDescriptors;
identity<void (cv::BOWTrainer::*)()>::type clear = &cv::BOWTrainer::clear;
identity<void (cv::BOWTrainer::*)(const cv::Mat &)>::type add = &cv::BOWTrainer::add;
identity<cv::Mat (cv::BOWTrainer::*)() const>::type cluster0 = &cv::BOWTrainer::cluster;
identity<cv::Mat (cv::BOWTrainer::*)(const cv::Mat &) const>::type cluster1 = &cv::BOWTrainer::cluster;
auto cluster = kaguya::overload(cluster0,cluster1);
}// end of namespace BOWTrainer
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_BOWKMeansTrainer{
identity<cv::Mat (cv::BOWKMeansTrainer::*)() const>::type cluster0 = &cv::BOWKMeansTrainer::cluster;
identity<cv::Mat (cv::BOWKMeansTrainer::*)(const cv::Mat &) const>::type cluster1 = &cv::BOWKMeansTrainer::cluster;
auto cluster = kaguya::overload(cluster0,cluster1);
}// end of namespace BOWKMeansTrainer
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_BOWImgDescriptorExtractor{
identity<int (cv::BOWImgDescriptorExtractor::*)() const>::type descriptorType = &cv::BOWImgDescriptorExtractor::descriptorType;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( compute_wrap_obj0 , cv::BOWImgDescriptorExtractor , compute,  3, 5, void (cv::BOWImgDescriptorExtractor::*)(InputArray,std::vector<KeyPoint> &,OutputArray,std::vector<std::vector<int> > *,cv::Mat *));
auto compute0 = compute_wrap_obj0();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( compute_wrap_obj1 , cv::BOWImgDescriptorExtractor , compute,  2, 3, void (cv::BOWImgDescriptorExtractor::*)(InputArray,OutputArray,std::vector<std::vector<int> > *));
auto compute1 = compute_wrap_obj1();
auto compute = kaguya::overload(compute0,compute1);
identity<void (cv::BOWImgDescriptorExtractor::*)(const cv::Mat &)>::type setVocabulary = &cv::BOWImgDescriptorExtractor::setVocabulary;
identity<void (cv::BOWImgDescriptorExtractor::*)(const cv::Mat &,std::vector<KeyPoint> &,cv::Mat &)>::type compute2 = &cv::BOWImgDescriptorExtractor::compute2;
identity<const cv::Mat & (cv::BOWImgDescriptorExtractor::*)() const>::type getVocabulary = &cv::BOWImgDescriptorExtractor::getVocabulary;
identity<int (cv::BOWImgDescriptorExtractor::*)() const>::type descriptorSize = &cv::BOWImgDescriptorExtractor::descriptorSize;
}// end of namespace BOWImgDescriptorExtractor
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_StereoMatcher{
identity<int (cv::StereoMatcher::*)() const>::type getDisp12MaxDiff = &cv::StereoMatcher::getDisp12MaxDiff;
identity<void (cv::StereoMatcher::*)(int)>::type setSpeckleWindowSize = &cv::StereoMatcher::setSpeckleWindowSize;
identity<int (cv::StereoMatcher::*)() const>::type getSpeckleRange = &cv::StereoMatcher::getSpeckleRange;
identity<void (cv::StereoMatcher::*)(int)>::type setMinDisparity = &cv::StereoMatcher::setMinDisparity;
identity<int (cv::StereoMatcher::*)() const>::type getMinDisparity = &cv::StereoMatcher::getMinDisparity;
identity<void (cv::StereoMatcher::*)(int)>::type setDisp12MaxDiff = &cv::StereoMatcher::setDisp12MaxDiff;
identity<int (cv::StereoMatcher::*)() const>::type getBlockSize = &cv::StereoMatcher::getBlockSize;
identity<int (cv::StereoMatcher::*)() const>::type getSpeckleWindowSize = &cv::StereoMatcher::getSpeckleWindowSize;
identity<void (cv::StereoMatcher::*)(int)>::type setSpeckleRange = &cv::StereoMatcher::setSpeckleRange;
identity<int (cv::StereoMatcher::*)() const>::type getNumDisparities = &cv::StereoMatcher::getNumDisparities;
identity<void (cv::StereoMatcher::*)(InputArray,InputArray,OutputArray)>::type compute = &cv::StereoMatcher::compute;
identity<void (cv::StereoMatcher::*)(int)>::type setNumDisparities = &cv::StereoMatcher::setNumDisparities;
identity<void (cv::StereoMatcher::*)(int)>::type setBlockSize = &cv::StereoMatcher::setBlockSize;
}// end of namespace StereoMatcher
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_StereoBM{
identity<Rect (cv::StereoBM::*)() const>::type getROI2 = &cv::StereoBM::getROI2;
identity<Rect (cv::StereoBM::*)() const>::type getROI1 = &cv::StereoBM::getROI1;
identity<int (cv::StereoBM::*)() const>::type getTextureThreshold = &cv::StereoBM::getTextureThreshold;
identity<void (cv::StereoBM::*)(int)>::type setUniquenessRatio = &cv::StereoBM::setUniquenessRatio;
identity<int (cv::StereoBM::*)() const>::type getPreFilterCap = &cv::StereoBM::getPreFilterCap;
identity<int (cv::StereoBM::*)() const>::type getUniquenessRatio = &cv::StereoBM::getUniquenessRatio;
identity<void (cv::StereoBM::*)(int)>::type setPreFilterCap = &cv::StereoBM::setPreFilterCap;
identity<void (cv::StereoBM::*)(int)>::type setPreFilterType = &cv::StereoBM::setPreFilterType;
identity<void (cv::StereoBM::*)(Rect)>::type setROI1 = &cv::StereoBM::setROI1;
identity<int (cv::StereoBM::*)() const>::type getPreFilterType = &cv::StereoBM::getPreFilterType;
identity<int (cv::StereoBM::*)() const>::type getPreFilterSize = &cv::StereoBM::getPreFilterSize;
identity<void (cv::StereoBM::*)(int)>::type setSmallerBlockSize = &cv::StereoBM::setSmallerBlockSize;
identity<void (cv::StereoBM::*)(int)>::type setPreFilterSize = &cv::StereoBM::setPreFilterSize;
identity<int (cv::StereoBM::*)() const>::type getSmallerBlockSize = &cv::StereoBM::getSmallerBlockSize;
identity<void (cv::StereoBM::*)(int)>::type setTextureThreshold = &cv::StereoBM::setTextureThreshold;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::StereoBM::create,  0, 2, Ptr<cv::StereoBM> (*)(int,int));
auto create = create_wrap_obj();
identity<void (cv::StereoBM::*)(Rect)>::type setROI2 = &cv::StereoBM::setROI2;
}// end of namespace StereoBM
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_StereoSGBM{
identity<void (cv::StereoSGBM::*)(int)>::type setP2 = &cv::StereoSGBM::setP2;
identity<void (cv::StereoSGBM::*)(int)>::type setP1 = &cv::StereoSGBM::setP1;
identity<void (cv::StereoSGBM::*)(int)>::type setMode = &cv::StereoSGBM::setMode;
identity<int (cv::StereoSGBM::*)() const>::type getUniquenessRatio = &cv::StereoSGBM::getUniquenessRatio;
identity<void (cv::StereoSGBM::*)(int)>::type setUniquenessRatio = &cv::StereoSGBM::setUniquenessRatio;
identity<int (cv::StereoSGBM::*)() const>::type getMode = &cv::StereoSGBM::getMode;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::StereoSGBM::create,  3, 11, Ptr<cv::StereoSGBM> (*)(int,int,int,int,int,int,int,int,int,int,int));
auto create = create_wrap_obj();
identity<void (cv::StereoSGBM::*)(int)>::type setPreFilterCap = &cv::StereoSGBM::setPreFilterCap;
identity<int (cv::StereoSGBM::*)() const>::type getPreFilterCap = &cv::StereoSGBM::getPreFilterCap;
identity<int (cv::StereoSGBM::*)() const>::type getP2 = &cv::StereoSGBM::getP2;
identity<int (cv::StereoSGBM::*)() const>::type getP1 = &cv::StereoSGBM::getP1;
}// end of namespace StereoSGBM
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_VideoCapture{
identity<bool (cv::VideoCapture::*)(const cv::String &)>::type open0 = &cv::VideoCapture::open;
identity<bool (cv::VideoCapture::*)(int)>::type open1 = &cv::VideoCapture::open;
identity<bool (cv::VideoCapture::*)(const cv::String &,int)>::type open2 = &cv::VideoCapture::open;
auto open = kaguya::overload(open0,open1,open2);
identity<bool (cv::VideoCapture::*)(OutputArray)>::type read = &cv::VideoCapture::read;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( retrieve_wrap_obj , cv::VideoCapture , retrieve,  1, 2, bool (cv::VideoCapture::*)(OutputArray,int));
auto retrieve = retrieve_wrap_obj();
identity<bool (cv::VideoCapture::*)() const>::type isOpened = &cv::VideoCapture::isOpened;
identity<void (cv::VideoCapture::*)()>::type release = &cv::VideoCapture::release;
identity<double (cv::VideoCapture::*)(int) const>::type get = &cv::VideoCapture::get;
identity<bool (cv::VideoCapture::*)(int,double)>::type set = &cv::VideoCapture::set;
identity<bool (cv::VideoCapture::*)()>::type grab = &cv::VideoCapture::grab;
}// end of namespace VideoCapture
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_VideoWriter{
identity<void (cv::VideoWriter::*)(const cv::Mat &)>::type write = &cv::VideoWriter::write;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( open_wrap_obj , cv::VideoWriter , open,  4, 5, bool (cv::VideoWriter::*)(const cv::String &,int,double,Size,bool));
auto open = open_wrap_obj();
identity<int (*)(char,char,char,char)>::type fourcc = &cv::VideoWriter::fourcc;
identity<bool (cv::VideoWriter::*)() const>::type isOpened = &cv::VideoWriter::isOpened;
identity<void (cv::VideoWriter::*)()>::type release = &cv::VideoWriter::release;
identity<double (cv::VideoWriter::*)(int) const>::type get = &cv::VideoWriter::get;
identity<bool (cv::VideoWriter::*)(int,double)>::type set = &cv::VideoWriter::set;
}// end of namespace VideoWriter
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_GeneralizedHough{
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( setTemplate_wrap_obj0 , cv::GeneralizedHough , setTemplate,  1, 2, void (cv::GeneralizedHough::*)(InputArray,Point));
auto setTemplate0 = setTemplate_wrap_obj0();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( setTemplate_wrap_obj1 , cv::GeneralizedHough , setTemplate,  3, 4, void (cv::GeneralizedHough::*)(InputArray,InputArray,InputArray,Point));
auto setTemplate1 = setTemplate_wrap_obj1();
auto setTemplate = kaguya::overload(setTemplate0,setTemplate1);
identity<void (cv::GeneralizedHough::*)(double)>::type setDp = &cv::GeneralizedHough::setDp;
identity<void (cv::GeneralizedHough::*)(int)>::type setCannyLowThresh = &cv::GeneralizedHough::setCannyLowThresh;
identity<int (cv::GeneralizedHough::*)() const>::type getMaxBufferSize = &cv::GeneralizedHough::getMaxBufferSize;
identity<double (cv::GeneralizedHough::*)() const>::type getDp = &cv::GeneralizedHough::getDp;
identity<void (cv::GeneralizedHough::*)(int)>::type setMaxBufferSize = &cv::GeneralizedHough::setMaxBufferSize;
identity<int (cv::GeneralizedHough::*)() const>::type getCannyLowThresh = &cv::GeneralizedHough::getCannyLowThresh;
identity<int (cv::GeneralizedHough::*)() const>::type getCannyHighThresh = &cv::GeneralizedHough::getCannyHighThresh;
identity<void (cv::GeneralizedHough::*)(double)>::type setMinDist = &cv::GeneralizedHough::setMinDist;
identity<void (cv::GeneralizedHough::*)(int)>::type setCannyHighThresh = &cv::GeneralizedHough::setCannyHighThresh;
identity<double (cv::GeneralizedHough::*)() const>::type getMinDist = &cv::GeneralizedHough::getMinDist;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detect_wrap_obj0 , cv::GeneralizedHough , detect,  2, 3, void (cv::GeneralizedHough::*)(InputArray,OutputArray,OutputArray));
auto detect0 = detect_wrap_obj0();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detect_wrap_obj1 , cv::GeneralizedHough , detect,  4, 5, void (cv::GeneralizedHough::*)(InputArray,InputArray,InputArray,OutputArray,OutputArray));
auto detect1 = detect_wrap_obj1();
auto detect = kaguya::overload(detect0,detect1);
}// end of namespace GeneralizedHough
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_GeneralizedHoughBallard{
identity<int (cv::GeneralizedHoughBallard::*)() const>::type getVotesThreshold = &cv::GeneralizedHoughBallard::getVotesThreshold;
identity<void (cv::GeneralizedHoughBallard::*)(int)>::type setLevels = &cv::GeneralizedHoughBallard::setLevels;
identity<void (cv::GeneralizedHoughBallard::*)(int)>::type setVotesThreshold = &cv::GeneralizedHoughBallard::setVotesThreshold;
identity<int (cv::GeneralizedHoughBallard::*)() const>::type getLevels = &cv::GeneralizedHoughBallard::getLevels;
}// end of namespace GeneralizedHoughBallard
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_GeneralizedHoughGuil{
identity<int (cv::GeneralizedHoughGuil::*)() const>::type getLevels = &cv::GeneralizedHoughGuil::getLevels;
identity<double (cv::GeneralizedHoughGuil::*)() const>::type getAngleEpsilon = &cv::GeneralizedHoughGuil::getAngleEpsilon;
identity<void (cv::GeneralizedHoughGuil::*)(int)>::type setAngleThresh = &cv::GeneralizedHoughGuil::setAngleThresh;
identity<void (cv::GeneralizedHoughGuil::*)(int)>::type setLevels = &cv::GeneralizedHoughGuil::setLevels;
identity<void (cv::GeneralizedHoughGuil::*)(double)>::type setScaleStep = &cv::GeneralizedHoughGuil::setScaleStep;
identity<void (cv::GeneralizedHoughGuil::*)(double)>::type setMinAngle = &cv::GeneralizedHoughGuil::setMinAngle;
identity<void (cv::GeneralizedHoughGuil::*)(double)>::type setMinScale = &cv::GeneralizedHoughGuil::setMinScale;
identity<double (cv::GeneralizedHoughGuil::*)() const>::type getMaxScale = &cv::GeneralizedHoughGuil::getMaxScale;
identity<void (cv::GeneralizedHoughGuil::*)(int)>::type setPosThresh = &cv::GeneralizedHoughGuil::setPosThresh;
identity<int (cv::GeneralizedHoughGuil::*)() const>::type getPosThresh = &cv::GeneralizedHoughGuil::getPosThresh;
identity<double (cv::GeneralizedHoughGuil::*)() const>::type getAngleStep = &cv::GeneralizedHoughGuil::getAngleStep;
identity<void (cv::GeneralizedHoughGuil::*)(double)>::type setMaxScale = &cv::GeneralizedHoughGuil::setMaxScale;
identity<void (cv::GeneralizedHoughGuil::*)(double)>::type setAngleStep = &cv::GeneralizedHoughGuil::setAngleStep;
identity<void (cv::GeneralizedHoughGuil::*)(double)>::type setXi = &cv::GeneralizedHoughGuil::setXi;
identity<double (cv::GeneralizedHoughGuil::*)() const>::type getScaleStep = &cv::GeneralizedHoughGuil::getScaleStep;
identity<double (cv::GeneralizedHoughGuil::*)() const>::type getXi = &cv::GeneralizedHoughGuil::getXi;
identity<int (cv::GeneralizedHoughGuil::*)() const>::type getAngleThresh = &cv::GeneralizedHoughGuil::getAngleThresh;
identity<void (cv::GeneralizedHoughGuil::*)(int)>::type setScaleThresh = &cv::GeneralizedHoughGuil::setScaleThresh;
identity<double (cv::GeneralizedHoughGuil::*)() const>::type getMinAngle = &cv::GeneralizedHoughGuil::getMinAngle;
identity<double (cv::GeneralizedHoughGuil::*)() const>::type getMinScale = &cv::GeneralizedHoughGuil::getMinScale;
identity<int (cv::GeneralizedHoughGuil::*)() const>::type getScaleThresh = &cv::GeneralizedHoughGuil::getScaleThresh;
identity<double (cv::GeneralizedHoughGuil::*)() const>::type getMaxAngle = &cv::GeneralizedHoughGuil::getMaxAngle;
identity<void (cv::GeneralizedHoughGuil::*)(double)>::type setMaxAngle = &cv::GeneralizedHoughGuil::setMaxAngle;
identity<void (cv::GeneralizedHoughGuil::*)(double)>::type setAngleEpsilon = &cv::GeneralizedHoughGuil::setAngleEpsilon;
}// end of namespace GeneralizedHoughGuil
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_CLAHE{
identity<void (cv::CLAHE::*)(Size)>::type setTilesGridSize = &cv::CLAHE::setTilesGridSize;
identity<void (cv::CLAHE::*)(InputArray,OutputArray)>::type apply = &cv::CLAHE::apply;
identity<void (cv::CLAHE::*)(double)>::type setClipLimit = &cv::CLAHE::setClipLimit;
identity<Size (cv::CLAHE::*)() const>::type getTilesGridSize = &cv::CLAHE::getTilesGridSize;
identity<void (cv::CLAHE::*)()>::type collectGarbage = &cv::CLAHE::collectGarbage;
identity<double (cv::CLAHE::*)() const>::type getClipLimit = &cv::CLAHE::getClipLimit;
}// end of namespace CLAHE
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_Subdiv2D{
identity<int (cv::Subdiv2D::*)(int) const>::type symEdge = &cv::Subdiv2D::symEdge;
identity<int (cv::Subdiv2D::*)(Point2f)>::type insert0 = &cv::Subdiv2D::insert;
identity<void (cv::Subdiv2D::*)(const std::vector<Point2f> &)>::type insert1 = &cv::Subdiv2D::insert;
auto insert = kaguya::overload(insert0,insert1);
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( edgeOrg_wrap_obj , cv::Subdiv2D , edgeOrg,  1, 2, int (cv::Subdiv2D::*)(int,Point2f *) const);
auto edgeOrg = edgeOrg_wrap_obj();
identity<int (cv::Subdiv2D::*)(int,int) const>::type rotateEdge = &cv::Subdiv2D::rotateEdge;
identity<int (cv::Subdiv2D::*)(int) const>::type nextEdge = &cv::Subdiv2D::nextEdge;
identity<int (cv::Subdiv2D::*)(Point2f,int &,int &)>::type locate = &cv::Subdiv2D::locate;
identity<void (cv::Subdiv2D::*)(std::vector<Vec4f> &) const>::type getEdgeList = &cv::Subdiv2D::getEdgeList;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( findNearest_wrap_obj , cv::Subdiv2D , findNearest,  1, 2, int (cv::Subdiv2D::*)(Point2f,Point2f *));
auto findNearest = findNearest_wrap_obj();
identity<void (cv::Subdiv2D::*)(std::vector<int> &) const>::type getLeadingEdgeList = &cv::Subdiv2D::getLeadingEdgeList;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( edgeDst_wrap_obj , cv::Subdiv2D , edgeDst,  1, 2, int (cv::Subdiv2D::*)(int,Point2f *) const);
auto edgeDst = edgeDst_wrap_obj();
identity<void (cv::Subdiv2D::*)(Rect)>::type initDelaunay = &cv::Subdiv2D::initDelaunay;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( getVertex_wrap_obj , cv::Subdiv2D , getVertex,  1, 2, Point2f (cv::Subdiv2D::*)(int,int *) const);
auto getVertex = getVertex_wrap_obj();
identity<void (cv::Subdiv2D::*)(const std::vector<int> &,std::vector<std::vector<Point2f> > &,std::vector<Point2f> &)>::type getVoronoiFacetList = &cv::Subdiv2D::getVoronoiFacetList;
identity<void (cv::Subdiv2D::*)(std::vector<Vec6f> &) const>::type getTriangleList = &cv::Subdiv2D::getTriangleList;
identity<int (cv::Subdiv2D::*)(int,int) const>::type getEdge = &cv::Subdiv2D::getEdge;
}// end of namespace Subdiv2D
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_LineSegmentDetector{
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detect_wrap_obj , cv::LineSegmentDetector , detect,  2, 5, void (cv::LineSegmentDetector::*)(InputArray,OutputArray,OutputArray,OutputArray,OutputArray));
auto detect = detect_wrap_obj();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( compareSegments_wrap_obj , cv::LineSegmentDetector , compareSegments,  3, 4, int (cv::LineSegmentDetector::*)(const Size &,InputArray,InputArray,InputOutputArray));
auto compareSegments = compareSegments_wrap_obj();
identity<void (cv::LineSegmentDetector::*)(InputOutputArray,InputArray)>::type drawSegments = &cv::LineSegmentDetector::drawSegments;
}// end of namespace LineSegmentDetector
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_LineIterator{
identity<Point (cv::LineIterator::*)() const>::type pos = &cv::LineIterator::pos;
}// end of namespace LineIterator
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_BaseCascadeClassifier{
identity<int (cv::BaseCascadeClassifier::*)() const>::type getFeatureType = &cv::BaseCascadeClassifier::getFeatureType;
identity<void * (cv::BaseCascadeClassifier::*)()>::type getOldCascade = &cv::BaseCascadeClassifier::getOldCascade;
identity<bool (cv::BaseCascadeClassifier::*)() const>::type empty = &cv::BaseCascadeClassifier::empty;
identity<bool (cv::BaseCascadeClassifier::*)() const>::type isOldFormatCascade = &cv::BaseCascadeClassifier::isOldFormatCascade;
identity<void (cv::BaseCascadeClassifier::*)(const Ptr<cv::BaseCascadeClassifier::MaskGenerator> &)>::type setMaskGenerator = &cv::BaseCascadeClassifier::setMaskGenerator;
identity<Ptr<cv::BaseCascadeClassifier::MaskGenerator> (cv::BaseCascadeClassifier::*)()>::type getMaskGenerator = &cv::BaseCascadeClassifier::getMaskGenerator;
identity<void (cv::BaseCascadeClassifier::*)(InputArray,std::vector<Rect> &,double,int,int,Size,Size)>::type detectMultiScale0 = &cv::BaseCascadeClassifier::detectMultiScale;
identity<void (cv::BaseCascadeClassifier::*)(InputArray,std::vector<Rect> &,std::vector<int> &,double,int,int,Size,Size)>::type detectMultiScale1 = &cv::BaseCascadeClassifier::detectMultiScale;
identity<void (cv::BaseCascadeClassifier::*)(InputArray,std::vector<Rect> &,std::vector<int> &,std::vector<double> &,double,int,int,Size,Size,bool)>::type detectMultiScale2 = &cv::BaseCascadeClassifier::detectMultiScale;
auto detectMultiScale = kaguya::overload(detectMultiScale0,detectMultiScale1,detectMultiScale2);
identity<Size (cv::BaseCascadeClassifier::*)() const>::type getOriginalWindowSize = &cv::BaseCascadeClassifier::getOriginalWindowSize;
identity<bool (cv::BaseCascadeClassifier::*)(const cv::String &)>::type load = &cv::BaseCascadeClassifier::load;
}// end of namespace BaseCascadeClassifier
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_CascadeClassifier{
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detectMultiScale_wrap_obj0 , cv::CascadeClassifier , detectMultiScale,  2, 7, void (cv::CascadeClassifier::*)(InputArray,std::vector<Rect> &,double,int,int,Size,Size));
auto detectMultiScale0 = detectMultiScale_wrap_obj0();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detectMultiScale_wrap_obj1 , cv::CascadeClassifier , detectMultiScale,  3, 8, void (cv::CascadeClassifier::*)(InputArray,std::vector<Rect> &,std::vector<int> &,double,int,int,Size,Size));
auto detectMultiScale1 = detectMultiScale_wrap_obj1();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detectMultiScale_wrap_obj2 , cv::CascadeClassifier , detectMultiScale,  4, 10, void (cv::CascadeClassifier::*)(InputArray,std::vector<Rect> &,std::vector<int> &,std::vector<double> &,double,int,int,Size,Size,bool));
auto detectMultiScale2 = detectMultiScale_wrap_obj2();
auto detectMultiScale = kaguya::overload(detectMultiScale0,detectMultiScale1,detectMultiScale2);
identity<Size (cv::CascadeClassifier::*)() const>::type getOriginalWindowSize = &cv::CascadeClassifier::getOriginalWindowSize;
identity<Ptr<BaseCascadeClassifier::MaskGenerator> (cv::CascadeClassifier::*)()>::type getMaskGenerator = &cv::CascadeClassifier::getMaskGenerator;
identity<bool (cv::CascadeClassifier::*)(const cv::String &)>::type load = &cv::CascadeClassifier::load;
identity<bool (*)(const cv::String &,const cv::String &)>::type convert = &cv::CascadeClassifier::convert;
identity<bool (cv::CascadeClassifier::*)() const>::type isOldFormatCascade = &cv::CascadeClassifier::isOldFormatCascade;
identity<int (cv::CascadeClassifier::*)() const>::type getFeatureType = &cv::CascadeClassifier::getFeatureType;
identity<void * (cv::CascadeClassifier::*)()>::type getOldCascade = &cv::CascadeClassifier::getOldCascade;
identity<void (cv::CascadeClassifier::*)(const Ptr<BaseCascadeClassifier::MaskGenerator> &)>::type setMaskGenerator = &cv::CascadeClassifier::setMaskGenerator;
identity<bool (cv::CascadeClassifier::*)() const>::type empty = &cv::CascadeClassifier::empty;
identity<bool (cv::CascadeClassifier::*)(const cv::FileNode &)>::type read = &cv::CascadeClassifier::read;
}// end of namespace CascadeClassifier
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_HOGDescriptor{
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detectMultiScale_wrap_obj0 , cv::HOGDescriptor , detectMultiScale,  3, 9, void (cv::HOGDescriptor::*)(InputArray,std::vector<Rect> &,std::vector<double> &,double,Size,Size,double,double,bool) const);
auto detectMultiScale0 = detectMultiScale_wrap_obj0();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detectMultiScale_wrap_obj1 , cv::HOGDescriptor , detectMultiScale,  2, 8, void (cv::HOGDescriptor::*)(InputArray,std::vector<Rect> &,double,Size,Size,double,double,bool) const);
auto detectMultiScale1 = detectMultiScale_wrap_obj1();
auto detectMultiScale = kaguya::overload(detectMultiScale0,detectMultiScale1);
identity<std::vector<float> (*)()>::type getDefaultPeopleDetector = &cv::HOGDescriptor::getDefaultPeopleDetector;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( save_wrap_obj , cv::HOGDescriptor , save,  1, 2, void (cv::HOGDescriptor::*)(const cv::String &,const cv::String &) const);
auto save = save_wrap_obj();
identity<void (cv::HOGDescriptor::*)(InputArray)>::type setSVMDetector = &cv::HOGDescriptor::setSVMDetector;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detect_wrap_obj0 , cv::HOGDescriptor , detect,  3, 7, void (cv::HOGDescriptor::*)(const cv::Mat &,std::vector<Point> &,std::vector<double> &,double,Size,Size,const std::vector<Point> &) const);
auto detect0 = detect_wrap_obj0();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detect_wrap_obj1 , cv::HOGDescriptor , detect,  2, 6, void (cv::HOGDescriptor::*)(const cv::Mat &,std::vector<Point> &,double,Size,Size,const std::vector<Point> &) const);
auto detect1 = detect_wrap_obj1();
auto detect = kaguya::overload(detect0,detect1);
identity<void (cv::HOGDescriptor::*)(cv::HOGDescriptor &) const>::type copyTo = &cv::HOGDescriptor::copyTo;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( load_wrap_obj , cv::HOGDescriptor , load,  1, 2, bool (cv::HOGDescriptor::*)(const cv::String &,const cv::String &));
auto load = load_wrap_obj();
identity<size_t (cv::HOGDescriptor::*)() const>::type getDescriptorSize = &cv::HOGDescriptor::getDescriptorSize;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detectROI_wrap_obj , cv::HOGDescriptor , detectROI,  4, 7, void (cv::HOGDescriptor::*)(const cv::Mat &,const std::vector<cv::Point> &,std::vector<cv::Point> &,std::vector<double> &,double,cv::Size,cv::Size) const);
auto detectROI = detectROI_wrap_obj();
identity<void (cv::HOGDescriptor::*)(std::vector<cv::Rect> &,std::vector<double> &,int,double) const>::type groupRectangles = &cv::HOGDescriptor::groupRectangles;
identity<void (cv::HOGDescriptor::*)(cv::FileStorage &,const cv::String &) const>::type write = &cv::HOGDescriptor::write;
identity<std::vector<float> (*)()>::type getDaimlerPeopleDetector = &cv::HOGDescriptor::getDaimlerPeopleDetector;
identity<bool (cv::HOGDescriptor::*)() const>::type checkDetectorSize = &cv::HOGDescriptor::checkDetectorSize;
identity<void (cv::HOGDescriptor::*)(cv::String)>::type readALTModel = &cv::HOGDescriptor::readALTModel;
identity<bool (cv::HOGDescriptor::*)(cv::FileNode &)>::type read = &cv::HOGDescriptor::read;
identity<double (cv::HOGDescriptor::*)() const>::type getWinSigma = &cv::HOGDescriptor::getWinSigma;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( compute_wrap_obj , cv::HOGDescriptor , compute,  2, 5, void (cv::HOGDescriptor::*)(InputArray,std::vector<float> &,Size,Size,const std::vector<Point> &) const);
auto compute = compute_wrap_obj();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( detectMultiScaleROI_wrap_obj , cv::HOGDescriptor , detectMultiScaleROI,  3, 5, void (cv::HOGDescriptor::*)(const cv::Mat &,std::vector<cv::Rect> &,std::vector<DetectionROI> &,double,int) const);
auto detectMultiScaleROI = detectMultiScaleROI_wrap_obj();
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( computeGradient_wrap_obj , cv::HOGDescriptor , computeGradient,  3, 5, void (cv::HOGDescriptor::*)(const cv::Mat &,cv::Mat &,cv::Mat &,Size,Size) const);
auto computeGradient = computeGradient_wrap_obj();
}// end of namespace HOGDescriptor
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_Tonemap{
identity<float (cv::Tonemap::*)() const>::type getGamma = &cv::Tonemap::getGamma;
identity<void (cv::Tonemap::*)(InputArray,OutputArray)>::type process = &cv::Tonemap::process;
identity<void (cv::Tonemap::*)(float)>::type setGamma = &cv::Tonemap::setGamma;
}// end of namespace Tonemap
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_TonemapDrago{
identity<float (cv::TonemapDrago::*)() const>::type getBias = &cv::TonemapDrago::getBias;
identity<float (cv::TonemapDrago::*)() const>::type getSaturation = &cv::TonemapDrago::getSaturation;
identity<void (cv::TonemapDrago::*)(float)>::type setBias = &cv::TonemapDrago::setBias;
identity<void (cv::TonemapDrago::*)(float)>::type setSaturation = &cv::TonemapDrago::setSaturation;
}// end of namespace TonemapDrago
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_TonemapDurand{
identity<float (cv::TonemapDurand::*)() const>::type getSigmaSpace = &cv::TonemapDurand::getSigmaSpace;
identity<float (cv::TonemapDurand::*)() const>::type getSigmaColor = &cv::TonemapDurand::getSigmaColor;
identity<float (cv::TonemapDurand::*)() const>::type getSaturation = &cv::TonemapDurand::getSaturation;
identity<void (cv::TonemapDurand::*)(float)>::type setSaturation = &cv::TonemapDurand::setSaturation;
identity<void (cv::TonemapDurand::*)(float)>::type setContrast = &cv::TonemapDurand::setContrast;
identity<void (cv::TonemapDurand::*)(float)>::type setSigmaSpace = &cv::TonemapDurand::setSigmaSpace;
identity<void (cv::TonemapDurand::*)(float)>::type setSigmaColor = &cv::TonemapDurand::setSigmaColor;
identity<float (cv::TonemapDurand::*)() const>::type getContrast = &cv::TonemapDurand::getContrast;
}// end of namespace TonemapDurand
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_TonemapReinhard{
identity<void (cv::TonemapReinhard::*)(float)>::type setLightAdaptation = &cv::TonemapReinhard::setLightAdaptation;
identity<void (cv::TonemapReinhard::*)(float)>::type setColorAdaptation = &cv::TonemapReinhard::setColorAdaptation;
identity<void (cv::TonemapReinhard::*)(float)>::type setIntensity = &cv::TonemapReinhard::setIntensity;
identity<float (cv::TonemapReinhard::*)() const>::type getColorAdaptation = &cv::TonemapReinhard::getColorAdaptation;
identity<float (cv::TonemapReinhard::*)() const>::type getIntensity = &cv::TonemapReinhard::getIntensity;
identity<float (cv::TonemapReinhard::*)() const>::type getLightAdaptation = &cv::TonemapReinhard::getLightAdaptation;
}// end of namespace TonemapReinhard
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_TonemapMantiuk{
identity<void (cv::TonemapMantiuk::*)(float)>::type setSaturation = &cv::TonemapMantiuk::setSaturation;
identity<void (cv::TonemapMantiuk::*)(float)>::type setScale = &cv::TonemapMantiuk::setScale;
identity<float (cv::TonemapMantiuk::*)() const>::type getSaturation = &cv::TonemapMantiuk::getSaturation;
identity<float (cv::TonemapMantiuk::*)() const>::type getScale = &cv::TonemapMantiuk::getScale;
}// end of namespace TonemapMantiuk
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_AlignExposures{
identity<void (cv::AlignExposures::*)(InputArrayOfArrays,std::vector<Mat> &,InputArray,InputArray)>::type process = &cv::AlignExposures::process;
}// end of namespace AlignExposures
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_AlignMTB{
identity<int (cv::AlignMTB::*)() const>::type getExcludeRange = &cv::AlignMTB::getExcludeRange;
identity<void (cv::AlignMTB::*)(int)>::type setExcludeRange = &cv::AlignMTB::setExcludeRange;
identity<void (cv::AlignMTB::*)(InputArrayOfArrays,std::vector<Mat> &,InputArray,InputArray)>::type process0 = &cv::AlignMTB::process;
identity<void (cv::AlignMTB::*)(InputArrayOfArrays,std::vector<Mat> &)>::type process1 = &cv::AlignMTB::process;
auto process = kaguya::overload(process0,process1);
identity<void (cv::AlignMTB::*)(bool)>::type setCut = &cv::AlignMTB::setCut;
identity<void (cv::AlignMTB::*)(InputArray,OutputArray,const Point)>::type shiftMat = &cv::AlignMTB::shiftMat;
identity<void (cv::AlignMTB::*)(InputArray,OutputArray,OutputArray)>::type computeBitmaps = &cv::AlignMTB::computeBitmaps;
identity<void (cv::AlignMTB::*)(int)>::type setMaxBits = &cv::AlignMTB::setMaxBits;
identity<Point (cv::AlignMTB::*)(InputArray,InputArray)>::type calculateShift = &cv::AlignMTB::calculateShift;
identity<int (cv::AlignMTB::*)() const>::type getMaxBits = &cv::AlignMTB::getMaxBits;
identity<bool (cv::AlignMTB::*)() const>::type getCut = &cv::AlignMTB::getCut;
}// end of namespace AlignMTB
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_CalibrateCRF{
identity<void (cv::CalibrateCRF::*)(InputArrayOfArrays,OutputArray,InputArray)>::type process = &cv::CalibrateCRF::process;
}// end of namespace CalibrateCRF
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_CalibrateDebevec{
identity<float (cv::CalibrateDebevec::*)() const>::type getLambda = &cv::CalibrateDebevec::getLambda;
identity<void (cv::CalibrateDebevec::*)(int)>::type setSamples = &cv::CalibrateDebevec::setSamples;
identity<void (cv::CalibrateDebevec::*)(float)>::type setLambda = &cv::CalibrateDebevec::setLambda;
identity<bool (cv::CalibrateDebevec::*)() const>::type getRandom = &cv::CalibrateDebevec::getRandom;
identity<int (cv::CalibrateDebevec::*)() const>::type getSamples = &cv::CalibrateDebevec::getSamples;
identity<void (cv::CalibrateDebevec::*)(bool)>::type setRandom = &cv::CalibrateDebevec::setRandom;
}// end of namespace CalibrateDebevec
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_CalibrateRobertson{
identity<void (cv::CalibrateRobertson::*)(int)>::type setMaxIter = &cv::CalibrateRobertson::setMaxIter;
identity<float (cv::CalibrateRobertson::*)() const>::type getThreshold = &cv::CalibrateRobertson::getThreshold;
identity<int (cv::CalibrateRobertson::*)() const>::type getMaxIter = &cv::CalibrateRobertson::getMaxIter;
identity<cv::Mat (cv::CalibrateRobertson::*)() const>::type getRadiance = &cv::CalibrateRobertson::getRadiance;
identity<void (cv::CalibrateRobertson::*)(float)>::type setThreshold = &cv::CalibrateRobertson::setThreshold;
}// end of namespace CalibrateRobertson
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_MergeExposures{
identity<void (cv::MergeExposures::*)(InputArrayOfArrays,OutputArray,InputArray,InputArray)>::type process = &cv::MergeExposures::process;
}// end of namespace MergeExposures
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_MergeDebevec{
identity<void (cv::MergeDebevec::*)(InputArrayOfArrays,OutputArray,InputArray,InputArray)>::type process0 = &cv::MergeDebevec::process;
identity<void (cv::MergeDebevec::*)(InputArrayOfArrays,OutputArray,InputArray)>::type process1 = &cv::MergeDebevec::process;
auto process = kaguya::overload(process0,process1);
}// end of namespace MergeDebevec
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_MergeMertens{
identity<float (cv::MergeMertens::*)() const>::type getContrastWeight = &cv::MergeMertens::getContrastWeight;
identity<void (cv::MergeMertens::*)(float)>::type setContrastWeight = &cv::MergeMertens::setContrastWeight;
identity<void (cv::MergeMertens::*)(float)>::type setExposureWeight = &cv::MergeMertens::setExposureWeight;
identity<float (cv::MergeMertens::*)() const>::type getExposureWeight = &cv::MergeMertens::getExposureWeight;
identity<void (cv::MergeMertens::*)(float)>::type setSaturationWeight = &cv::MergeMertens::setSaturationWeight;
identity<void (cv::MergeMertens::*)(InputArrayOfArrays,OutputArray,InputArray,InputArray)>::type process0 = &cv::MergeMertens::process;
identity<void (cv::MergeMertens::*)(InputArrayOfArrays,OutputArray)>::type process1 = &cv::MergeMertens::process;
auto process = kaguya::overload(process0,process1);
identity<float (cv::MergeMertens::*)() const>::type getSaturationWeight = &cv::MergeMertens::getSaturationWeight;
}// end of namespace MergeMertens
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_MergeRobertson{
identity<void (cv::MergeRobertson::*)(InputArrayOfArrays,OutputArray,InputArray,InputArray)>::type process0 = &cv::MergeRobertson::process;
identity<void (cv::MergeRobertson::*)(InputArrayOfArrays,OutputArray,InputArray)>::type process1 = &cv::MergeRobertson::process;
auto process = kaguya::overload(process0,process1);
}// end of namespace MergeRobertson
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_ShapeTransformer{
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( warpImage_wrap_obj , cv::ShapeTransformer , warpImage,  2, 5, void (cv::ShapeTransformer::*)(InputArray,OutputArray,int,int,const Scalar &) const);
auto warpImage = warpImage_wrap_obj();
identity<void (cv::ShapeTransformer::*)(InputArray,InputArray,std::vector<DMatch> &)>::type estimateTransformation = &cv::ShapeTransformer::estimateTransformation;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( applyTransformation_wrap_obj , cv::ShapeTransformer , applyTransformation,  1, 2, float (cv::ShapeTransformer::*)(InputArray,OutputArray));
auto applyTransformation = applyTransformation_wrap_obj();
}// end of namespace ShapeTransformer
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_ThinPlateSplineShapeTransformer{
identity<double (cv::ThinPlateSplineShapeTransformer::*)() const>::type getRegularizationParameter = &cv::ThinPlateSplineShapeTransformer::getRegularizationParameter;
identity<void (cv::ThinPlateSplineShapeTransformer::*)(double)>::type setRegularizationParameter = &cv::ThinPlateSplineShapeTransformer::setRegularizationParameter;
}// end of namespace ThinPlateSplineShapeTransformer
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_AffineTransformer{
identity<void (cv::AffineTransformer::*)(bool)>::type setFullAffine = &cv::AffineTransformer::setFullAffine;
identity<bool (cv::AffineTransformer::*)() const>::type getFullAffine = &cv::AffineTransformer::getFullAffine;
}// end of namespace AffineTransformer
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_HistogramCostExtractor{
identity<void (cv::HistogramCostExtractor::*)(int)>::type setNDummies = &cv::HistogramCostExtractor::setNDummies;
identity<void (cv::HistogramCostExtractor::*)(float)>::type setDefaultCost = &cv::HistogramCostExtractor::setDefaultCost;
identity<int (cv::HistogramCostExtractor::*)() const>::type getNDummies = &cv::HistogramCostExtractor::getNDummies;
identity<float (cv::HistogramCostExtractor::*)() const>::type getDefaultCost = &cv::HistogramCostExtractor::getDefaultCost;
identity<void (cv::HistogramCostExtractor::*)(InputArray,InputArray,OutputArray)>::type buildCostMatrix = &cv::HistogramCostExtractor::buildCostMatrix;
}// end of namespace HistogramCostExtractor
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_NormHistogramCostExtractor{
identity<int (cv::NormHistogramCostExtractor::*)() const>::type getNormFlag = &cv::NormHistogramCostExtractor::getNormFlag;
identity<void (cv::NormHistogramCostExtractor::*)(int)>::type setNormFlag = &cv::NormHistogramCostExtractor::setNormFlag;
}// end of namespace NormHistogramCostExtractor
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_EMDHistogramCostExtractor{
identity<int (cv::EMDHistogramCostExtractor::*)() const>::type getNormFlag = &cv::EMDHistogramCostExtractor::getNormFlag;
identity<void (cv::EMDHistogramCostExtractor::*)(int)>::type setNormFlag = &cv::EMDHistogramCostExtractor::setNormFlag;
}// end of namespace EMDHistogramCostExtractor
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_ShapeDistanceExtractor{
identity<float (cv::ShapeDistanceExtractor::*)(InputArray,InputArray)>::type computeDistance = &cv::ShapeDistanceExtractor::computeDistance;
}// end of namespace ShapeDistanceExtractor
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_ShapeContextDistanceExtractor{
identity<float (cv::ShapeContextDistanceExtractor::*)() const>::type getBendingEnergyWeight = &cv::ShapeContextDistanceExtractor::getBendingEnergyWeight;
identity<void (cv::ShapeContextDistanceExtractor::*)(InputArray,InputArray)>::type setImages = &cv::ShapeContextDistanceExtractor::setImages;
identity<float (cv::ShapeContextDistanceExtractor::*)() const>::type getShapeContextWeight = &cv::ShapeContextDistanceExtractor::getShapeContextWeight;
identity<int (cv::ShapeContextDistanceExtractor::*)() const>::type getAngularBins = &cv::ShapeContextDistanceExtractor::getAngularBins;
identity<void (cv::ShapeContextDistanceExtractor::*)(OutputArray,OutputArray) const>::type getImages = &cv::ShapeContextDistanceExtractor::getImages;
identity<void (cv::ShapeContextDistanceExtractor::*)(Ptr<cv::ShapeTransformer>)>::type setTransformAlgorithm = &cv::ShapeContextDistanceExtractor::setTransformAlgorithm;
identity<void (cv::ShapeContextDistanceExtractor::*)(int)>::type setIterations = &cv::ShapeContextDistanceExtractor::setIterations;
identity<void (cv::ShapeContextDistanceExtractor::*)(float)>::type setOuterRadius = &cv::ShapeContextDistanceExtractor::setOuterRadius;
identity<float (cv::ShapeContextDistanceExtractor::*)() const>::type getInnerRadius = &cv::ShapeContextDistanceExtractor::getInnerRadius;
identity<void (cv::ShapeContextDistanceExtractor::*)(float)>::type setShapeContextWeight = &cv::ShapeContextDistanceExtractor::setShapeContextWeight;
identity<float (cv::ShapeContextDistanceExtractor::*)() const>::type getStdDev = &cv::ShapeContextDistanceExtractor::getStdDev;
identity<Ptr<cv::HistogramCostExtractor> (cv::ShapeContextDistanceExtractor::*)() const>::type getCostExtractor = &cv::ShapeContextDistanceExtractor::getCostExtractor;
identity<float (cv::ShapeContextDistanceExtractor::*)() const>::type getImageAppearanceWeight = &cv::ShapeContextDistanceExtractor::getImageAppearanceWeight;
identity<Ptr<cv::ShapeTransformer> (cv::ShapeContextDistanceExtractor::*)() const>::type getTransformAlgorithm = &cv::ShapeContextDistanceExtractor::getTransformAlgorithm;
identity<bool (cv::ShapeContextDistanceExtractor::*)() const>::type getRotationInvariant = &cv::ShapeContextDistanceExtractor::getRotationInvariant;
identity<void (cv::ShapeContextDistanceExtractor::*)(float)>::type setImageAppearanceWeight = &cv::ShapeContextDistanceExtractor::setImageAppearanceWeight;
identity<void (cv::ShapeContextDistanceExtractor::*)(float)>::type setStdDev = &cv::ShapeContextDistanceExtractor::setStdDev;
identity<int (cv::ShapeContextDistanceExtractor::*)() const>::type getRadialBins = &cv::ShapeContextDistanceExtractor::getRadialBins;
identity<void (cv::ShapeContextDistanceExtractor::*)(int)>::type setAngularBins = &cv::ShapeContextDistanceExtractor::setAngularBins;
identity<void (cv::ShapeContextDistanceExtractor::*)(float)>::type setBendingEnergyWeight = &cv::ShapeContextDistanceExtractor::setBendingEnergyWeight;
identity<float (cv::ShapeContextDistanceExtractor::*)() const>::type getOuterRadius = &cv::ShapeContextDistanceExtractor::getOuterRadius;
identity<void (cv::ShapeContextDistanceExtractor::*)(float)>::type setInnerRadius = &cv::ShapeContextDistanceExtractor::setInnerRadius;
identity<void (cv::ShapeContextDistanceExtractor::*)(Ptr<cv::HistogramCostExtractor>)>::type setCostExtractor = &cv::ShapeContextDistanceExtractor::setCostExtractor;
identity<void (cv::ShapeContextDistanceExtractor::*)(int)>::type setRadialBins = &cv::ShapeContextDistanceExtractor::setRadialBins;
identity<int (cv::ShapeContextDistanceExtractor::*)() const>::type getIterations = &cv::ShapeContextDistanceExtractor::getIterations;
identity<void (cv::ShapeContextDistanceExtractor::*)(bool)>::type setRotationInvariant = &cv::ShapeContextDistanceExtractor::setRotationInvariant;
}// end of namespace ShapeContextDistanceExtractor
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_HausdorffDistanceExtractor{
identity<int (cv::HausdorffDistanceExtractor::*)() const>::type getDistanceFlag = &cv::HausdorffDistanceExtractor::getDistanceFlag;
identity<float (cv::HausdorffDistanceExtractor::*)() const>::type getRankProportion = &cv::HausdorffDistanceExtractor::getRankProportion;
identity<void (cv::HausdorffDistanceExtractor::*)(int)>::type setDistanceFlag = &cv::HausdorffDistanceExtractor::setDistanceFlag;
identity<void (cv::HausdorffDistanceExtractor::*)(float)>::type setRankProportion = &cv::HausdorffDistanceExtractor::setRankProportion;
}// end of namespace HausdorffDistanceExtractor
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_WarperCreator{
identity<Ptr<detail::RotationWarper> (cv::WarperCreator::*)(float) const>::type create = &cv::WarperCreator::create;
}// end of namespace WarperCreator
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_PlaneWarper{
identity<Ptr<detail::RotationWarper> (cv::PlaneWarper::*)(float) const>::type create = &cv::PlaneWarper::create;
}// end of namespace PlaneWarper
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_AffineWarper{
identity<Ptr<detail::RotationWarper> (cv::AffineWarper::*)(float) const>::type create = &cv::AffineWarper::create;
}// end of namespace AffineWarper
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_CylindricalWarper{
identity<Ptr<detail::RotationWarper> (cv::CylindricalWarper::*)(float) const>::type create = &cv::CylindricalWarper::create;
}// end of namespace CylindricalWarper
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_SphericalWarper{
identity<Ptr<detail::RotationWarper> (cv::SphericalWarper::*)(float) const>::type create = &cv::SphericalWarper::create;
}// end of namespace SphericalWarper
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_FisheyeWarper{
identity<Ptr<detail::RotationWarper> (cv::FisheyeWarper::*)(float) const>::type create = &cv::FisheyeWarper::create;
}// end of namespace FisheyeWarper
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_StereographicWarper{
identity<Ptr<detail::RotationWarper> (cv::StereographicWarper::*)(float) const>::type create = &cv::StereographicWarper::create;
}// end of namespace StereographicWarper
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_CompressedRectilinearWarper{
identity<Ptr<detail::RotationWarper> (cv::CompressedRectilinearWarper::*)(float) const>::type create = &cv::CompressedRectilinearWarper::create;
}// end of namespace CompressedRectilinearWarper
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_CompressedRectilinearPortraitWarper{
identity<Ptr<detail::RotationWarper> (cv::CompressedRectilinearPortraitWarper::*)(float) const>::type create = &cv::CompressedRectilinearPortraitWarper::create;
}// end of namespace CompressedRectilinearPortraitWarper
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_PaniniWarper{
identity<Ptr<detail::RotationWarper> (cv::PaniniWarper::*)(float) const>::type create = &cv::PaniniWarper::create;
}// end of namespace PaniniWarper
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_PaniniPortraitWarper{
identity<Ptr<detail::RotationWarper> (cv::PaniniPortraitWarper::*)(float) const>::type create = &cv::PaniniPortraitWarper::create;
}// end of namespace PaniniPortraitWarper
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_MercatorWarper{
identity<Ptr<detail::RotationWarper> (cv::MercatorWarper::*)(float) const>::type create = &cv::MercatorWarper::create;
}// end of namespace MercatorWarper
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_TransverseMercatorWarper{
identity<Ptr<detail::RotationWarper> (cv::TransverseMercatorWarper::*)(float) const>::type create = &cv::TransverseMercatorWarper::create;
}// end of namespace TransverseMercatorWarper
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_Stitcher{
identity<Ptr<detail::BundleAdjusterBase> (cv::Stitcher::*)()>::type bundleAdjuster0 = &cv::Stitcher::bundleAdjuster;
identity<const Ptr<detail::BundleAdjusterBase> (cv::Stitcher::*)() const>::type bundleAdjuster1 = &cv::Stitcher::bundleAdjuster;
auto bundleAdjuster = kaguya::overload(bundleAdjuster0,bundleAdjuster1);
identity<void (cv::Stitcher::*)(Ptr<detail::Blender>)>::type setBlender = &cv::Stitcher::setBlender;
identity<double (cv::Stitcher::*)() const>::type panoConfidenceThresh = &cv::Stitcher::panoConfidenceThresh;
identity<Ptr<cv::WarperCreator> (cv::Stitcher::*)()>::type warper0 = &cv::Stitcher::warper;
identity<const Ptr<cv::WarperCreator> (cv::Stitcher::*)() const>::type warper1 = &cv::Stitcher::warper;
auto warper = kaguya::overload(warper0,warper1);
identity<void (cv::Stitcher::*)(const cv::UMat &)>::type setMatchingMask = &cv::Stitcher::setMatchingMask;
identity<Ptr<detail::FeaturesFinder> (cv::Stitcher::*)()>::type featuresFinder0 = &cv::Stitcher::featuresFinder;
identity<const Ptr<detail::FeaturesFinder> (cv::Stitcher::*)() const>::type featuresFinder1 = &cv::Stitcher::featuresFinder;
auto featuresFinder = kaguya::overload(featuresFinder0,featuresFinder1);
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( createDefault_wrap_obj, cv::Stitcher::createDefault,  0, 1, cv::Stitcher (*)(bool));
auto createDefault = createDefault_wrap_obj();
identity<std::vector<detail::CameraParams> (cv::Stitcher::*)() const>::type cameras = &cv::Stitcher::cameras;
identity<void (cv::Stitcher::*)(detail::WaveCorrectKind)>::type setWaveCorrectKind = &cv::Stitcher::setWaveCorrectKind;
identity<void (cv::Stitcher::*)(Ptr<detail::SeamFinder>)>::type setSeamFinder = &cv::Stitcher::setSeamFinder;
identity<void (cv::Stitcher::*)(double)>::type setSeamEstimationResol = &cv::Stitcher::setSeamEstimationResol;
identity<cv::Stitcher::Status (cv::Stitcher::*)(InputArrayOfArrays,OutputArray)>::type stitch0 = &cv::Stitcher::stitch;
identity<cv::Stitcher::Status (cv::Stitcher::*)(InputArrayOfArrays,const std::vector<std::vector<Rect> > &,OutputArray)>::type stitch1 = &cv::Stitcher::stitch;
auto stitch = kaguya::overload(stitch0,stitch1);
identity<double (cv::Stitcher::*)() const>::type registrationResol = &cv::Stitcher::registrationResol;
identity<double (cv::Stitcher::*)() const>::type seamEstimationResol = &cv::Stitcher::seamEstimationResol;
identity<cv::Stitcher::Status (cv::Stitcher::*)(InputArrayOfArrays)>::type estimateTransform0 = &cv::Stitcher::estimateTransform;
identity<cv::Stitcher::Status (cv::Stitcher::*)(InputArrayOfArrays,const std::vector<std::vector<Rect> > &)>::type estimateTransform1 = &cv::Stitcher::estimateTransform;
auto estimateTransform = kaguya::overload(estimateTransform0,estimateTransform1);
identity<cv::Stitcher::Status (cv::Stitcher::*)(OutputArray)>::type composePanorama0 = &cv::Stitcher::composePanorama;
identity<cv::Stitcher::Status (cv::Stitcher::*)(InputArrayOfArrays,OutputArray)>::type composePanorama1 = &cv::Stitcher::composePanorama;
auto composePanorama = kaguya::overload(composePanorama0,composePanorama1);
identity<void (cv::Stitcher::*)(Ptr<cv::WarperCreator>)>::type setWarper = &cv::Stitcher::setWarper;
identity<double (cv::Stitcher::*)() const>::type compositingResol = &cv::Stitcher::compositingResol;
identity<Ptr<detail::FeaturesMatcher> (cv::Stitcher::*)()>::type featuresMatcher0 = &cv::Stitcher::featuresMatcher;
identity<const Ptr<detail::FeaturesMatcher> (cv::Stitcher::*)() const>::type featuresMatcher1 = &cv::Stitcher::featuresMatcher;
auto featuresMatcher = kaguya::overload(featuresMatcher0,featuresMatcher1);
identity<void (cv::Stitcher::*)(Ptr<detail::BundleAdjusterBase>)>::type setBundleAdjuster = &cv::Stitcher::setBundleAdjuster;
identity<void (cv::Stitcher::*)(double)>::type setPanoConfidenceThresh = &cv::Stitcher::setPanoConfidenceThresh;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::Stitcher::create,  0, 2, Ptr<cv::Stitcher> (*)(cv::Stitcher::Mode,bool));
auto create = create_wrap_obj();
identity<void (cv::Stitcher::*)(bool)>::type setWaveCorrection = &cv::Stitcher::setWaveCorrection;
identity<void (cv::Stitcher::*)(Ptr<detail::FeaturesFinder>)>::type setFeaturesFinder = &cv::Stitcher::setFeaturesFinder;
identity<Ptr<detail::SeamFinder> (cv::Stitcher::*)()>::type seamFinder0 = &cv::Stitcher::seamFinder;
identity<const Ptr<detail::SeamFinder> (cv::Stitcher::*)() const>::type seamFinder1 = &cv::Stitcher::seamFinder;
auto seamFinder = kaguya::overload(seamFinder0,seamFinder1);
identity<Ptr<detail::Blender> (cv::Stitcher::*)()>::type blender0 = &cv::Stitcher::blender;
identity<const Ptr<detail::Blender> (cv::Stitcher::*)() const>::type blender1 = &cv::Stitcher::blender;
auto blender = kaguya::overload(blender0,blender1);
identity<const cv::UMat & (cv::Stitcher::*)() const>::type matchingMask = &cv::Stitcher::matchingMask;
identity<void (cv::Stitcher::*)(double)>::type setRegistrationResol = &cv::Stitcher::setRegistrationResol;
identity<double (cv::Stitcher::*)() const>::type workScale = &cv::Stitcher::workScale;
identity<detail::WaveCorrectKind (cv::Stitcher::*)() const>::type waveCorrectKind = &cv::Stitcher::waveCorrectKind;
identity<Ptr<detail::ExposureCompensator> (cv::Stitcher::*)()>::type exposureCompensator0 = &cv::Stitcher::exposureCompensator;
identity<const Ptr<detail::ExposureCompensator> (cv::Stitcher::*)() const>::type exposureCompensator1 = &cv::Stitcher::exposureCompensator;
auto exposureCompensator = kaguya::overload(exposureCompensator0,exposureCompensator1);
identity<std::vector<int> (cv::Stitcher::*)() const>::type component = &cv::Stitcher::component;
identity<bool (cv::Stitcher::*)() const>::type waveCorrection = &cv::Stitcher::waveCorrection;
identity<void (cv::Stitcher::*)(double)>::type setCompositingResol = &cv::Stitcher::setCompositingResol;
identity<void (cv::Stitcher::*)(Ptr<detail::ExposureCompensator>)>::type setExposureCompensator = &cv::Stitcher::setExposureCompensator;
identity<void (cv::Stitcher::*)(Ptr<detail::FeaturesMatcher>)>::type setFeaturesMatcher = &cv::Stitcher::setFeaturesMatcher;
}// end of namespace Stitcher
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_KalmanFilter{
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( init_wrap_obj , cv::KalmanFilter , init,  2, 4, void (cv::KalmanFilter::*)(int,int,int,int));
auto init = init_wrap_obj();
identity<const cv::Mat & (cv::KalmanFilter::*)(const cv::Mat &)>::type correct = &cv::KalmanFilter::correct;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( predict_wrap_obj , cv::KalmanFilter , predict,  0, 1, const cv::Mat & (cv::KalmanFilter::*)(const cv::Mat &));
auto predict = predict_wrap_obj();
}// end of namespace KalmanFilter
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_DenseOpticalFlow{
identity<void (cv::DenseOpticalFlow::*)(InputArray,InputArray,InputOutputArray)>::type calc = &cv::DenseOpticalFlow::calc;
identity<void (cv::DenseOpticalFlow::*)()>::type collectGarbage = &cv::DenseOpticalFlow::collectGarbage;
}// end of namespace DenseOpticalFlow
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_SparseOpticalFlow{
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( calc_wrap_obj , cv::SparseOpticalFlow , calc,  5, 6, void (cv::SparseOpticalFlow::*)(InputArray,InputArray,InputArray,InputOutputArray,OutputArray,OutputArray));
auto calc = calc_wrap_obj();
}// end of namespace SparseOpticalFlow
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_DualTVL1OpticalFlow{
identity<double (cv::DualTVL1OpticalFlow::*)() const>::type getGamma = &cv::DualTVL1OpticalFlow::getGamma;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::DualTVL1OpticalFlow::create,  0, 12, Ptr<cv::DualTVL1OpticalFlow> (*)(double,double,double,int,int,double,int,int,double,double,int,bool));
auto create = create_wrap_obj();
identity<void (cv::DualTVL1OpticalFlow::*)(bool)>::type setUseInitialFlow = &cv::DualTVL1OpticalFlow::setUseInitialFlow;
identity<void (cv::DualTVL1OpticalFlow::*)(double)>::type setLambda = &cv::DualTVL1OpticalFlow::setLambda;
identity<void (cv::DualTVL1OpticalFlow::*)(int)>::type setMedianFiltering = &cv::DualTVL1OpticalFlow::setMedianFiltering;
identity<double (cv::DualTVL1OpticalFlow::*)() const>::type getTau = &cv::DualTVL1OpticalFlow::getTau;
identity<int (cv::DualTVL1OpticalFlow::*)() const>::type getInnerIterations = &cv::DualTVL1OpticalFlow::getInnerIterations;
identity<double (cv::DualTVL1OpticalFlow::*)() const>::type getScaleStep = &cv::DualTVL1OpticalFlow::getScaleStep;
identity<void (cv::DualTVL1OpticalFlow::*)(double)>::type setGamma = &cv::DualTVL1OpticalFlow::setGamma;
identity<void (cv::DualTVL1OpticalFlow::*)(double)>::type setScaleStep = &cv::DualTVL1OpticalFlow::setScaleStep;
identity<int (cv::DualTVL1OpticalFlow::*)() const>::type getWarpingsNumber = &cv::DualTVL1OpticalFlow::getWarpingsNumber;
identity<int (cv::DualTVL1OpticalFlow::*)() const>::type getMedianFiltering = &cv::DualTVL1OpticalFlow::getMedianFiltering;
identity<double (cv::DualTVL1OpticalFlow::*)() const>::type getEpsilon = &cv::DualTVL1OpticalFlow::getEpsilon;
identity<void (cv::DualTVL1OpticalFlow::*)(double)>::type setEpsilon = &cv::DualTVL1OpticalFlow::setEpsilon;
identity<void (cv::DualTVL1OpticalFlow::*)(int)>::type setOuterIterations = &cv::DualTVL1OpticalFlow::setOuterIterations;
identity<bool (cv::DualTVL1OpticalFlow::*)() const>::type getUseInitialFlow = &cv::DualTVL1OpticalFlow::getUseInitialFlow;
identity<double (cv::DualTVL1OpticalFlow::*)() const>::type getLambda = &cv::DualTVL1OpticalFlow::getLambda;
identity<void (cv::DualTVL1OpticalFlow::*)(double)>::type setTheta = &cv::DualTVL1OpticalFlow::setTheta;
identity<int (cv::DualTVL1OpticalFlow::*)() const>::type getScalesNumber = &cv::DualTVL1OpticalFlow::getScalesNumber;
identity<double (cv::DualTVL1OpticalFlow::*)() const>::type getTheta = &cv::DualTVL1OpticalFlow::getTheta;
identity<void (cv::DualTVL1OpticalFlow::*)(int)>::type setScalesNumber = &cv::DualTVL1OpticalFlow::setScalesNumber;
identity<int (cv::DualTVL1OpticalFlow::*)() const>::type getOuterIterations = &cv::DualTVL1OpticalFlow::getOuterIterations;
identity<void (cv::DualTVL1OpticalFlow::*)(int)>::type setWarpingsNumber = &cv::DualTVL1OpticalFlow::setWarpingsNumber;
identity<void (cv::DualTVL1OpticalFlow::*)(int)>::type setInnerIterations = &cv::DualTVL1OpticalFlow::setInnerIterations;
identity<void (cv::DualTVL1OpticalFlow::*)(double)>::type setTau = &cv::DualTVL1OpticalFlow::setTau;
}// end of namespace DualTVL1OpticalFlow
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_FarnebackOpticalFlow{
identity<double (cv::FarnebackOpticalFlow::*)() const>::type getPyrScale = &cv::FarnebackOpticalFlow::getPyrScale;
identity<void (cv::FarnebackOpticalFlow::*)(bool)>::type setFastPyramids = &cv::FarnebackOpticalFlow::setFastPyramids;
identity<void (cv::FarnebackOpticalFlow::*)(int)>::type setPolyN = &cv::FarnebackOpticalFlow::setPolyN;
identity<void (cv::FarnebackOpticalFlow::*)(int)>::type setFlags = &cv::FarnebackOpticalFlow::setFlags;
identity<void (cv::FarnebackOpticalFlow::*)(double)>::type setPyrScale = &cv::FarnebackOpticalFlow::setPyrScale;
identity<int (cv::FarnebackOpticalFlow::*)() const>::type getNumLevels = &cv::FarnebackOpticalFlow::getNumLevels;
identity<void (cv::FarnebackOpticalFlow::*)(int)>::type setNumIters = &cv::FarnebackOpticalFlow::setNumIters;
identity<void (cv::FarnebackOpticalFlow::*)(double)>::type setPolySigma = &cv::FarnebackOpticalFlow::setPolySigma;
identity<int (cv::FarnebackOpticalFlow::*)() const>::type getFlags = &cv::FarnebackOpticalFlow::getFlags;
identity<double (cv::FarnebackOpticalFlow::*)() const>::type getPolySigma = &cv::FarnebackOpticalFlow::getPolySigma;
identity<void (cv::FarnebackOpticalFlow::*)(int)>::type setNumLevels = &cv::FarnebackOpticalFlow::setNumLevels;
identity<bool (cv::FarnebackOpticalFlow::*)() const>::type getFastPyramids = &cv::FarnebackOpticalFlow::getFastPyramids;
identity<int (cv::FarnebackOpticalFlow::*)() const>::type getPolyN = &cv::FarnebackOpticalFlow::getPolyN;
identity<void (cv::FarnebackOpticalFlow::*)(int)>::type setWinSize = &cv::FarnebackOpticalFlow::setWinSize;
identity<int (cv::FarnebackOpticalFlow::*)() const>::type getNumIters = &cv::FarnebackOpticalFlow::getNumIters;
identity<int (cv::FarnebackOpticalFlow::*)() const>::type getWinSize = &cv::FarnebackOpticalFlow::getWinSize;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::FarnebackOpticalFlow::create,  0, 8, Ptr<cv::FarnebackOpticalFlow> (*)(int,double,bool,int,int,int,double,int));
auto create = create_wrap_obj();
}// end of namespace FarnebackOpticalFlow
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_SparsePyrLKOpticalFlow{
identity<int (cv::SparsePyrLKOpticalFlow::*)() const>::type getMaxLevel = &cv::SparsePyrLKOpticalFlow::getMaxLevel;
identity<void (cv::SparsePyrLKOpticalFlow::*)(int)>::type setFlags = &cv::SparsePyrLKOpticalFlow::setFlags;
identity<double (cv::SparsePyrLKOpticalFlow::*)() const>::type getMinEigThreshold = &cv::SparsePyrLKOpticalFlow::getMinEigThreshold;
identity<void (cv::SparsePyrLKOpticalFlow::*)(double)>::type setMinEigThreshold = &cv::SparsePyrLKOpticalFlow::setMinEigThreshold;
identity<void (cv::SparsePyrLKOpticalFlow::*)(Size)>::type setWinSize = &cv::SparsePyrLKOpticalFlow::setWinSize;
identity<Size (cv::SparsePyrLKOpticalFlow::*)() const>::type getWinSize = &cv::SparsePyrLKOpticalFlow::getWinSize;
identity<int (cv::SparsePyrLKOpticalFlow::*)() const>::type getFlags = &cv::SparsePyrLKOpticalFlow::getFlags;
identity<void (cv::SparsePyrLKOpticalFlow::*)(cv::TermCriteria &)>::type setTermCriteria = &cv::SparsePyrLKOpticalFlow::setTermCriteria;
identity<cv::TermCriteria (cv::SparsePyrLKOpticalFlow::*)() const>::type getTermCriteria = &cv::SparsePyrLKOpticalFlow::getTermCriteria;
identity<void (cv::SparsePyrLKOpticalFlow::*)(int)>::type setMaxLevel = &cv::SparsePyrLKOpticalFlow::setMaxLevel;
KAGUYA_FUNCTION_OVERLOADS_WITH_SIGNATURE( create_wrap_obj, cv::SparsePyrLKOpticalFlow::create,  0, 5, Ptr<cv::SparsePyrLKOpticalFlow> (*)(Size,int,cv::TermCriteria,int,double));
auto create = create_wrap_obj();
}// end of namespace SparsePyrLKOpticalFlow
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_BackgroundSubtractor{
identity<void (cv::BackgroundSubtractor::*)(OutputArray) const>::type getBackgroundImage = &cv::BackgroundSubtractor::getBackgroundImage;
KAGUYA_MEMBER_FUNCTION_OVERLOADS_WITH_SIGNATURE( apply_wrap_obj , cv::BackgroundSubtractor , apply,  2, 3, void (cv::BackgroundSubtractor::*)(InputArray,OutputArray,double));
auto apply = apply_wrap_obj();
}// end of namespace BackgroundSubtractor
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_BackgroundSubtractorMOG2{
identity<void (cv::BackgroundSubtractorMOG2::*)(double)>::type setVarMax = &cv::BackgroundSubtractorMOG2::setVarMax;
identity<void (cv::BackgroundSubtractorMOG2::*)(double)>::type setVarMin = &cv::BackgroundSubtractorMOG2::setVarMin;
identity<void (cv::BackgroundSubtractorMOG2::*)(int)>::type setHistory = &cv::BackgroundSubtractorMOG2::setHistory;
identity<double (cv::BackgroundSubtractorMOG2::*)() const>::type getVarThreshold = &cv::BackgroundSubtractorMOG2::getVarThreshold;
identity<double (cv::BackgroundSubtractorMOG2::*)() const>::type getVarThresholdGen = &cv::BackgroundSubtractorMOG2::getVarThresholdGen;
identity<double (cv::BackgroundSubtractorMOG2::*)() const>::type getBackgroundRatio = &cv::BackgroundSubtractorMOG2::getBackgroundRatio;
identity<void (cv::BackgroundSubtractorMOG2::*)(int)>::type setNMixtures = &cv::BackgroundSubtractorMOG2::setNMixtures;
identity<void (cv::BackgroundSubtractorMOG2::*)(bool)>::type setDetectShadows = &cv::BackgroundSubtractorMOG2::setDetectShadows;
identity<void (cv::BackgroundSubtractorMOG2::*)(double)>::type setVarInit = &cv::BackgroundSubtractorMOG2::setVarInit;
identity<double (cv::BackgroundSubtractorMOG2::*)() const>::type getComplexityReductionThreshold = &cv::BackgroundSubtractorMOG2::getComplexityReductionThreshold;
identity<double (cv::BackgroundSubtractorMOG2::*)() const>::type getVarMax = &cv::BackgroundSubtractorMOG2::getVarMax;
identity<double (cv::BackgroundSubtractorMOG2::*)() const>::type getShadowThreshold = &cv::BackgroundSubtractorMOG2::getShadowThreshold;
identity<void (cv::BackgroundSubtractorMOG2::*)(double)>::type setBackgroundRatio = &cv::BackgroundSubtractorMOG2::setBackgroundRatio;
identity<int (cv::BackgroundSubtractorMOG2::*)() const>::type getHistory = &cv::BackgroundSubtractorMOG2::getHistory;
identity<void (cv::BackgroundSubtractorMOG2::*)(double)>::type setVarThreshold = &cv::BackgroundSubtractorMOG2::setVarThreshold;
identity<double (cv::BackgroundSubtractorMOG2::*)() const>::type getVarMin = &cv::BackgroundSubtractorMOG2::getVarMin;
identity<void (cv::BackgroundSubtractorMOG2::*)(int)>::type setShadowValue = &cv::BackgroundSubtractorMOG2::setShadowValue;
identity<double (cv::BackgroundSubtractorMOG2::*)() const>::type getVarInit = &cv::BackgroundSubtractorMOG2::getVarInit;
identity<void (cv::BackgroundSubtractorMOG2::*)(double)>::type setShadowThreshold = &cv::BackgroundSubtractorMOG2::setShadowThreshold;
identity<int (cv::BackgroundSubtractorMOG2::*)() const>::type getShadowValue = &cv::BackgroundSubtractorMOG2::getShadowValue;
identity<void (cv::BackgroundSubtractorMOG2::*)(double)>::type setVarThresholdGen = &cv::BackgroundSubtractorMOG2::setVarThresholdGen;
identity<void (cv::BackgroundSubtractorMOG2::*)(double)>::type setComplexityReductionThreshold = &cv::BackgroundSubtractorMOG2::setComplexityReductionThreshold;
identity<int (cv::BackgroundSubtractorMOG2::*)() const>::type getNMixtures = &cv::BackgroundSubtractorMOG2::getNMixtures;
identity<bool (cv::BackgroundSubtractorMOG2::*)() const>::type getDetectShadows = &cv::BackgroundSubtractorMOG2::getDetectShadows;
}// end of namespace BackgroundSubtractorMOG2
}// end of namespace cv
namespace gen_wrap_cv{
namespace gen_wrap_BackgroundSubtractorKNN{
identity<void (cv::BackgroundSubtractorKNN::*)(int)>::type setHistory = &cv::BackgroundSubtractorKNN::setHistory;
identity<double (cv::BackgroundSubtractorKNN::*)() const>::type getShadowThreshold = &cv::BackgroundSubtractorKNN::getShadowThreshold;
identity<void (cv::BackgroundSubtractorKNN::*)(int)>::type setShadowValue = &cv::BackgroundSubtractorKNN::setShadowValue;
identity<int (cv::BackgroundSubtractorKNN::*)() const>::type getShadowValue = &cv::BackgroundSubtractorKNN::getShadowValue;
identity<int (cv::BackgroundSubtractorKNN::*)() const>::type getNSamples = &cv::BackgroundSubtractorKNN::getNSamples;
identity<void (cv::BackgroundSubtractorKNN::*)(double)>::type setDist2Threshold = &cv::BackgroundSubtractorKNN::setDist2Threshold;
identity<void (cv::BackgroundSubtractorKNN::*)(double)>::type setShadowThreshold = &cv::BackgroundSubtractorKNN::setShadowThreshold;
identity<double (cv::BackgroundSubtractorKNN::*)() const>::type getDist2Threshold = &cv::BackgroundSubtractorKNN::getDist2Threshold;
identity<int (cv::BackgroundSubtractorKNN::*)() const>::type getkNNSamples = &cv::BackgroundSubtractorKNN::getkNNSamples;
identity<int (cv::BackgroundSubtractorKNN::*)() const>::type getHistory = &cv::BackgroundSubtractorKNN::getHistory;
identity<void (cv::BackgroundSubtractorKNN::*)(int)>::type setNSamples = &cv::BackgroundSubtractorKNN::setNSamples;
identity<void (cv::BackgroundSubtractorKNN::*)(int)>::type setkNNSamples = &cv::BackgroundSubtractorKNN::setkNNSamples;
identity<void (cv::BackgroundSubtractorKNN::*)(bool)>::type setDetectShadows = &cv::BackgroundSubtractorKNN::setDetectShadows;
identity<bool (cv::BackgroundSubtractorKNN::*)() const>::type getDetectShadows = &cv::BackgroundSubtractorKNN::getDetectShadows;
}// end of namespace gen_wrap_BackgroundSubtractorKNN
}// end of namespace gen_wrap_cv
KAGUYA_BINDINGS(cv) {
using namespace kaguya;
  function("createTonemapDrago", gen_wrap_cv::createTonemapDrago);
  function("solvePnP", gen_wrap_cv::solvePnP);
  function("Laplacian", gen_wrap_cv::Laplacian);
  function("inRange", gen_wrap_cv::inRange);
  function("bilateralFilter", gen_wrap_cv::bilateralFilter);
  function("getThreadNum", gen_wrap_cv::getThreadNum);
  function("pyrDown", gen_wrap_cv::pyrDown);
  function("getTickCount", gen_wrap_cv::getTickCount);
  function("computeRecallPrecisionCurve", gen_wrap_cv::computeRecallPrecisionCurve);
  function("connectedComponentsWithStats", gen_wrap_cv::connectedComponentsWithStats);
  function("matchShapes", gen_wrap_cv::matchShapes);
  function("find4QuadCornerSubpix", gen_wrap_cv::find4QuadCornerSubpix);
  function("patchNaNs", gen_wrap_cv::patchNaNs);
  function("fastNlMeansDenoisingColored", gen_wrap_cv::fastNlMeansDenoisingColored);
  function("bitwise_or", gen_wrap_cv::bitwise_or);
  function("Sobel", gen_wrap_cv::Sobel);
  function("initUndistortRectifyMap", gen_wrap_cv::initUndistortRectifyMap);
  function("addText", gen_wrap_cv::addText);
  function("putText", gen_wrap_cv::putText);
  function("isContourConvex", gen_wrap_cv::isContourConvex);
  function("addWeighted", gen_wrap_cv::addWeighted);
  function("inpaint", gen_wrap_cv::inpaint);
  function("reduce", gen_wrap_cv::reduce);
  function("norm", gen_wrap_cv::norm);
  function("kmeans", gen_wrap_cv::kmeans);
  function("initWideAngleProjMap", gen_wrap_cv::initWideAngleProjMap);
  function("equalizeHist", gen_wrap_cv::equalizeHist);
  function("error", gen_wrap_cv::error);
  function("fitLine", gen_wrap_cv::fitLine);
  function("createBackgroundSubtractorKNN", gen_wrap_cv::createBackgroundSubtractorKNN);
  function("createTonemap", gen_wrap_cv::createTonemap);
  function("rectify3Collinear", gen_wrap_cv::rectify3Collinear);
  function("completeSymm", gen_wrap_cv::completeSymm);
  function("PCACompute", gen_wrap_cv::PCACompute);
  function("solveLP", gen_wrap_cv::solveLP);
  function("getRecall", gen_wrap_cv::getRecall);
  function("getTickFrequency", gen_wrap_cv::getTickFrequency);
  function("warpAffine", gen_wrap_cv::warpAffine);
  function("estimateRigidTransform", gen_wrap_cv::estimateRigidTransform);
  function("add", gen_wrap_cv::add);
  function("edgePreservingFilter", gen_wrap_cv::edgePreservingFilter);
  function("calibrationMatrixValues", gen_wrap_cv::calibrationMatrixValues);
  function("spatialGradient", gen_wrap_cv::spatialGradient);
  function("convexityDefects", gen_wrap_cv::convexityDefects);
  function("resizeWindow", gen_wrap_cv::resizeWindow);
  function("solvePnPRansac", gen_wrap_cv::solvePnPRansac);
  function("cornerHarris", gen_wrap_cv::cornerHarris);
  function("gemm", gen_wrap_cv::gemm);
  function("waitKey", gen_wrap_cv::waitKey);
  function("fastNlMeansDenoisingMulti", gen_wrap_cv::fastNlMeansDenoisingMulti);
  function("reprojectImageTo3D", gen_wrap_cv::reprojectImageTo3D);
  function("triangulatePoints", gen_wrap_cv::triangulatePoints);
  function("createTonemapDurand", gen_wrap_cv::createTonemapDurand);
  function("createMergeMertens", gen_wrap_cv::createMergeMertens);
  function("mulSpectrums", gen_wrap_cv::mulSpectrums);
  function("createMergeDebevec", gen_wrap_cv::createMergeDebevec);
  function("evaluateFeatureDetector", gen_wrap_cv::evaluateFeatureDetector);
  function("recoverPose", gen_wrap_cv::recoverPose);
  function("CamShift", gen_wrap_cv::CamShift);
  function("batchDistance", gen_wrap_cv::batchDistance);
  function("createFaceDetectionMaskGenerator", gen_wrap_cv::createFaceDetectionMaskGenerator);
  function("setIdentity", gen_wrap_cv::setIdentity);
  function("drawKeypoints", gen_wrap_cv::drawKeypoints);
  function("filter2D", gen_wrap_cv::filter2D);
  function("cvarrToMatND", gen_wrap_cv::cvarrToMatND);
  function("destroyWindow", gen_wrap_cv::destroyWindow);
  function("GaussianBlur", gen_wrap_cv::GaussianBlur);
  function("createEMDHistogramCostExtractor", gen_wrap_cv::createEMDHistogramCostExtractor);
  function("extractImageCOI", gen_wrap_cv::extractImageCOI);
  function("Canny", gen_wrap_cv::Canny);
  function("linearPolar", gen_wrap_cv::linearPolar);
  function("transpose", gen_wrap_cv::transpose);
  function("getBuildInformation", gen_wrap_cv::getBuildInformation);
  function("circle", gen_wrap_cv::circle);
  function("stylization", gen_wrap_cv::stylization);
  function("seqPop", gen_wrap_cv::seqPop);
  function("setRNGSeed", gen_wrap_cv::setRNGSeed);
  function("clearSeq", gen_wrap_cv::clearSeq);
  function("idct", gen_wrap_cv::idct);
  function("matchTemplate", gen_wrap_cv::matchTemplate);
  function("Mahalanobis", gen_wrap_cv::Mahalanobis);
  function("findContours", gen_wrap_cv::findContours);
  function("seqPushFront", gen_wrap_cv::seqPushFront);
  function("convertFp16", gen_wrap_cv::convertFp16);
  function("getTrackbarPos", gen_wrap_cv::getTrackbarPos);
  function("imdecode", gen_wrap_cv::imdecode);
  function("setTrackbarMax", gen_wrap_cv::setTrackbarMax);
  function("HoughCircles", gen_wrap_cv::HoughCircles);
  function("dft", gen_wrap_cv::dft);
  function("trace", gen_wrap_cv::trace);
  function("scaleAdd", gen_wrap_cv::scaleAdd);
  function("createEMDL1HistogramCostExtractor", gen_wrap_cv::createEMDL1HistogramCostExtractor);
  function("findChessboardCorners", gen_wrap_cv::findChessboardCorners);
  function("checkHardwareSupport", gen_wrap_cv::checkHardwareSupport);
  function("updateWindow", gen_wrap_cv::updateWindow);
  function("AGAST", gen_wrap_cv::AGAST);
  function("phaseCorrelate", gen_wrap_cv::phaseCorrelate);
  function("getAffineTransform", gen_wrap_cv::getAffineTransform);
  function("randn", gen_wrap_cv::randn);
  function("remap", gen_wrap_cv::remap);
  function("getGaborKernel", gen_wrap_cv::getGaborKernel);
  function("getNumThreads", gen_wrap_cv::getNumThreads);
  function("boxPoints", gen_wrap_cv::boxPoints);
  function("colorChange", gen_wrap_cv::colorChange);
  function("createGeneralizedHoughBallard", gen_wrap_cv::createGeneralizedHoughBallard);
  function("namedWindow", gen_wrap_cv::namedWindow);
  function("initCameraMatrix2D", gen_wrap_cv::initCameraMatrix2D);
  function("drawMarker", gen_wrap_cv::drawMarker);
  function("polarToCart", gen_wrap_cv::polarToCart);
  function("bitwise_xor", gen_wrap_cv::bitwise_xor);
  function("buildOpticalFlowPyramid", gen_wrap_cv::buildOpticalFlowPyramid);
  function("subtract", gen_wrap_cv::subtract);
  function("drawChessboardCorners", gen_wrap_cv::drawChessboardCorners);
  function("erode", gen_wrap_cv::erode);
  function("vconcat", gen_wrap_cv::vconcat);
  function("seqPopFront", gen_wrap_cv::seqPopFront);
  function("fontQt", gen_wrap_cv::fontQt);
  function("createCLAHE", gen_wrap_cv::createCLAHE);
  function("stopLoop", gen_wrap_cv::stopLoop);
  function("ellipse", gen_wrap_cv::ellipse);
  function("repeat", gen_wrap_cv::repeat);
  function("write", gen_wrap_cv::write);
  function("pyrMeanShiftFiltering", gen_wrap_cv::pyrMeanShiftFiltering);
  function("pyrUp", gen_wrap_cv::pyrUp);
  function("logPolar", gen_wrap_cv::logPolar);
  function("insertChannel", gen_wrap_cv::insertChannel);
  function("parallel_for_", gen_wrap_cv::parallel_for_);
  function("createTonemapReinhard", gen_wrap_cv::createTonemapReinhard);
  function("intersectConvexConvex", gen_wrap_cv::intersectConvexConvex);
  function("findHomography", gen_wrap_cv::findHomography);
  function("imwrite", gen_wrap_cv::imwrite);
  function("solve", gen_wrap_cv::solve);
  function("arrowedLine", gen_wrap_cv::arrowedLine);
  function("tempfile", gen_wrap_cv::tempfile);
  function("integral", gen_wrap_cv::integral);
  function("createShapeContextDistanceExtractor", gen_wrap_cv::createShapeContextDistanceExtractor);
  function("preCornerDetect", gen_wrap_cv::preCornerDetect);
  function("setNumThreads", gen_wrap_cv::setNumThreads);
  function("displayOverlay", gen_wrap_cv::displayOverlay);
  function("LUT", gen_wrap_cv::LUT);
  function("convertPointsToHomogeneous", gen_wrap_cv::convertPointsToHomogeneous);
  function("minEnclosingCircle", gen_wrap_cv::minEnclosingCircle);
  function("estimateAffinePartial2D", gen_wrap_cv::estimateAffinePartial2D);
  function("rectangle", gen_wrap_cv::rectangle);
  function("undistortPoints", gen_wrap_cv::undistortPoints);
  function("matMulDeriv", gen_wrap_cv::matMulDeriv);
  function("getCPUTickCount", gen_wrap_cv::getCPUTickCount);
  function("seqRemove", gen_wrap_cv::seqRemove);
  function("createStitcher", gen_wrap_cv::createStitcher);
  function("theRNG", gen_wrap_cv::theRNG);
  function("createChiHistogramCostExtractor", gen_wrap_cv::createChiHistogramCostExtractor);
  function("convertMaps", gen_wrap_cv::convertMaps);
  function("polylines", gen_wrap_cv::polylines);
  function("extractChannel", gen_wrap_cv::extractChannel);
  function("accumulateProduct", gen_wrap_cv::accumulateProduct);
  function("fastNlMeansDenoising", gen_wrap_cv::fastNlMeansDenoising);
  function("createBackgroundSubtractorMOG2", gen_wrap_cv::createBackgroundSubtractorMOG2);
  function("setUseOptimized", gen_wrap_cv::setUseOptimized);
  function("distanceTransform", gen_wrap_cv::distanceTransform);
  function("getDefaultNewCameraMatrix", gen_wrap_cv::getDefaultNewCameraMatrix);
  function("getGaussianKernel", gen_wrap_cv::getGaussianKernel);
  function("denoise_TVL1", gen_wrap_cv::denoise_TVL1);
  function("destroyAllWindows", gen_wrap_cv::destroyAllWindows);
  function("createHausdorffDistanceExtractor", gen_wrap_cv::createHausdorffDistanceExtractor);
  function("meanStdDev", gen_wrap_cv::meanStdDev);
  function("getNearestPoint", gen_wrap_cv::getNearestPoint);
  function("computeCorrespondEpilines", gen_wrap_cv::computeCorrespondEpilines);
  function("idft", gen_wrap_cv::idft);
  function("createMergeRobertson", gen_wrap_cv::createMergeRobertson);
  function("HoughLines", gen_wrap_cv::HoughLines);
  function("phase", gen_wrap_cv::phase);
  function("convertPointsHomogeneous", gen_wrap_cv::convertPointsHomogeneous);
  function("transform", gen_wrap_cv::transform);
  function("displayStatusBar", gen_wrap_cv::displayStatusBar);
  function("fillPoly", gen_wrap_cv::fillPoly);
  function("groupRectangles_meanshift", gen_wrap_cv::groupRectangles_meanshift);
  function("fillConvexPoly", gen_wrap_cv::fillConvexPoly);
  function("getSeqElem", gen_wrap_cv::getSeqElem);
  function("getNumberOfCPUs", gen_wrap_cv::getNumberOfCPUs);
  function("multiply", gen_wrap_cv::multiply);
  function("imread", gen_wrap_cv::imread);
  function("loadWindowParameters", gen_wrap_cv::loadWindowParameters);
  function("dilate", gen_wrap_cv::dilate);
  function("setWindowProperty", gen_wrap_cv::setWindowProperty);
  function("min", gen_wrap_cv::min);
  function("convertScaleAbs", gen_wrap_cv::convertScaleAbs);
  function("countNonZero", gen_wrap_cv::countNonZero);
  function("contourArea", gen_wrap_cv::contourArea);
  function("seamlessClone", gen_wrap_cv::seamlessClone);
  function("Rodrigues", gen_wrap_cv::Rodrigues);
  function("seqInsertSlice", gen_wrap_cv::seqInsertSlice);
  function("accumulate", gen_wrap_cv::accumulate);
  function("cartToPolar", gen_wrap_cv::cartToPolar);
  function("accumulateSquare", gen_wrap_cv::accumulateSquare);
  function("seqRemoveSlice", gen_wrap_cv::seqRemoveSlice);
  function("cubeRoot", gen_wrap_cv::cubeRoot);
  function("imshow", gen_wrap_cv::imshow);
  function("filterSpeckles", gen_wrap_cv::filterSpeckles);
  function("fastNlMeansDenoisingColoredMulti", gen_wrap_cv::fastNlMeansDenoisingColoredMulti);
  function("getOptimalDFTSize", gen_wrap_cv::getOptimalDFTSize);
  function("blendLinear", gen_wrap_cv::blendLinear);
  function("stereoRectify", gen_wrap_cv::stereoRectify);
  function("EMDL1", gen_wrap_cv::EMDL1);
  function("normalize", gen_wrap_cv::normalize);
  function("cvarrToMat", gen_wrap_cv::cvarrToMat);
  function("abs", gen_wrap_cv::abs);
  function("bitwise_not", gen_wrap_cv::bitwise_not);
  function("divide", gen_wrap_cv::divide);
  function("exp", gen_wrap_cv::exp);
  function("stereoRectifyUncalibrated", gen_wrap_cv::stereoRectifyUncalibrated);
  function("meanShift", gen_wrap_cv::meanShift);
  function("RQDecomp3x3", gen_wrap_cv::RQDecomp3x3);
  function("calcHist", gen_wrap_cv::calcHist);
  function("seqPush", gen_wrap_cv::seqPush);
  function("copyMakeBorder", gen_wrap_cv::copyMakeBorder);
  function("calcOpticalFlowPyrLK", gen_wrap_cv::calcOpticalFlowPyrLK);
  function("findFundamentalMat", gen_wrap_cv::findFundamentalMat);
  function("validateDisparity", gen_wrap_cv::validateDisparity);
  function("HuMoments", gen_wrap_cv::HuMoments);
  function("sqrBoxFilter", gen_wrap_cv::sqrBoxFilter);
  function("goodFeaturesToTrack", gen_wrap_cv::goodFeaturesToTrack);
  function("sort", gen_wrap_cv::sort);
  function("getStructuringElement", gen_wrap_cv::getStructuringElement);
  function("mean", gen_wrap_cv::mean);
  function("cornerEigenValsAndVecs", gen_wrap_cv::cornerEigenValsAndVecs);
  function("PCAProject", gen_wrap_cv::PCAProject);
  function("undistort", gen_wrap_cv::undistort);
  function("startWindowThread", gen_wrap_cv::startWindowThread);
  function("getOptimalNewCameraMatrix", gen_wrap_cv::getOptimalNewCameraMatrix);
  function("approxPolyDP", gen_wrap_cv::approxPolyDP);
  function("setOpenGlContext", gen_wrap_cv::setOpenGlContext);
  function("textureFlattening", gen_wrap_cv::textureFlattening);
  function("findTransformECC", gen_wrap_cv::findTransformECC);
  function("groupRectangles", gen_wrap_cv::groupRectangles);
  function("watershed", gen_wrap_cv::watershed);
  function("detailEnhance", gen_wrap_cv::detailEnhance);
  function("createLineSegmentDetector", gen_wrap_cv::createLineSegmentDetector);
  function("illuminationChange", gen_wrap_cv::illuminationChange);
  function("EMD", gen_wrap_cv::EMD);
  function("solvePoly", gen_wrap_cv::solvePoly);
  function("drawMatches", gen_wrap_cv::drawMatches);
  function("arcLength", gen_wrap_cv::arcLength);
  function("projectPoints", gen_wrap_cv::projectPoints);
  function("imreadmulti", gen_wrap_cv::imreadmulti);
  function("writeScalar", gen_wrap_cv::writeScalar);
  function("print", gen_wrap_cv::print);
  function("solveCubic", gen_wrap_cv::solveCubic);
  function("blur", gen_wrap_cv::blur);
  function("alignSize", gen_wrap_cv::alignSize);
  function("insertImageCOI", gen_wrap_cv::insertImageCOI);
  function("decomposeProjectionMatrix", gen_wrap_cv::decomposeProjectionMatrix);
  function("sortIdx", gen_wrap_cv::sortIdx);
  function("normL1", gen_wrap_cv::normL1);
  function("getRectSubPix", gen_wrap_cv::getRectSubPix);
  function("grabCut", gen_wrap_cv::grabCut);
  function("fastAtan2", gen_wrap_cv::fastAtan2);
  function("convexHull", gen_wrap_cv::convexHull);
  function("cornerSubPix", gen_wrap_cv::cornerSubPix);
  function("setTrackbarPos", gen_wrap_cv::setTrackbarPos);
  function("minMaxLoc", gen_wrap_cv::minMaxLoc);
  function("pow", gen_wrap_cv::pow);
  function("sampsonDistance", gen_wrap_cv::sampsonDistance);
  function("compareHist", gen_wrap_cv::compareHist);
  function("createAlignMTB", gen_wrap_cv::createAlignMTB);
  function("stereoCalibrate", gen_wrap_cv::stereoCalibrate);
  function("LU", gen_wrap_cv::LU);
  function("boundingRect", gen_wrap_cv::boundingRect);
  function("getPerspectiveTransform", gen_wrap_cv::getPerspectiveTransform);
  function("morphologyDefaultBorderValue", gen_wrap_cv::morphologyDefaultBorderValue);
  function("glob", gen_wrap_cv::glob);
  function("decomposeHomographyMat", gen_wrap_cv::decomposeHomographyMat);
  function("getTextSize", gen_wrap_cv::getTextSize);
  function("warpPerspective", gen_wrap_cv::warpPerspective);
  function("FAST", gen_wrap_cv::FAST);
  function("findNonZero", gen_wrap_cv::findNonZero);
  function("calcCovarMatrix", gen_wrap_cv::calcCovarMatrix);
  function("getValidDisparityROI", gen_wrap_cv::getValidDisparityROI);
  function("medianBlur", gen_wrap_cv::medianBlur);
  function("SVDecomp", gen_wrap_cv::SVDecomp);
  function("split", gen_wrap_cv::split);
  function("morphologyEx", gen_wrap_cv::morphologyEx);
  function("getDerivKernels", gen_wrap_cv::getDerivKernels);
  function("PCABackProject", gen_wrap_cv::PCABackProject);
  function("correctMatches", gen_wrap_cv::correctMatches);
  function("ellipse2Poly", gen_wrap_cv::ellipse2Poly);
  function("randShuffle", gen_wrap_cv::randShuffle);
  function("findEssentialMat", gen_wrap_cv::findEssentialMat);
  function("connectedComponents", gen_wrap_cv::connectedComponents);
  function("log", gen_wrap_cv::log);
  function("checkRange", gen_wrap_cv::checkRange);
  function("floodFill", gen_wrap_cv::floodFill);
  function("cornerMinEigenVal", gen_wrap_cv::cornerMinEigenVal);
  function("calibrateCamera", gen_wrap_cv::calibrateCamera);
  function("calcBackProject", gen_wrap_cv::calcBackProject);
  function("minMaxIdx", gen_wrap_cv::minMaxIdx);
  function("resize", gen_wrap_cv::resize);
  function("createCalibrateRobertson", gen_wrap_cv::createCalibrateRobertson);
  function("line", gen_wrap_cv::line);
  function("composeRT", gen_wrap_cv::composeRT);
  function("saveWindowParameters", gen_wrap_cv::saveWindowParameters);
  function("invertAffineTransform", gen_wrap_cv::invertAffineTransform);
  function("sum", gen_wrap_cv::sum);
  function("determinant", gen_wrap_cv::determinant);
  function("decolor", gen_wrap_cv::decolor);
  function("moments", gen_wrap_cv::moments);
  function("normL2Sqr", gen_wrap_cv::normL2Sqr);
  function("noArray", gen_wrap_cv::noArray);
  function("SVBackSubst", gen_wrap_cv::SVBackSubst);
  function("findCirclesGrid", gen_wrap_cv::findCirclesGrid);
  function("absdiff", gen_wrap_cv::absdiff);
  function("createThinPlateSplineShapeTransformer", gen_wrap_cv::createThinPlateSplineShapeTransformer);
  function("decomposeEssentialMat", gen_wrap_cv::decomposeEssentialMat);
  function("createOptFlow_DualTVL1", gen_wrap_cv::createOptFlow_DualTVL1);
  function("hconcat", gen_wrap_cv::hconcat);
  function("flip", gen_wrap_cv::flip);
  function("rotatedRectangleIntersection", gen_wrap_cv::rotatedRectangleIntersection);
  function("estimateAffine3D", gen_wrap_cv::estimateAffine3D);
  function("Cholesky", gen_wrap_cv::Cholesky);
  function("getElemSize", gen_wrap_cv::getElemSize);
  function("convertPointsFromHomogeneous", gen_wrap_cv::convertPointsFromHomogeneous);
  function("setWindowTitle", gen_wrap_cv::setWindowTitle);
  function("fitEllipse", gen_wrap_cv::fitEllipse);
  function("fastFree", gen_wrap_cv::fastFree);
  function("moveWindow", gen_wrap_cv::moveWindow);
  function("invert", gen_wrap_cv::invert);
  function("getMouseWheelDelta", gen_wrap_cv::getMouseWheelDelta);
  function("compare", gen_wrap_cv::compare);
  function("calcOpticalFlowFarneback", gen_wrap_cv::calcOpticalFlowFarneback);
  function("sepFilter2D", gen_wrap_cv::sepFilter2D);
  function("merge", gen_wrap_cv::merge);
  function("mulTransposed", gen_wrap_cv::mulTransposed);
  function("createHanningWindow", gen_wrap_cv::createHanningWindow);
  function("borderInterpolate", gen_wrap_cv::borderInterpolate);
  function("demosaicing", gen_wrap_cv::demosaicing);
  function("cvtColor", gen_wrap_cv::cvtColor);
  function("createTonemapMantiuk", gen_wrap_cv::createTonemapMantiuk);
  function("PSNR", gen_wrap_cv::PSNR);
  function("getWindowProperty", gen_wrap_cv::getWindowProperty);
  function("drawContours", gen_wrap_cv::drawContours);
  function("sqrt", gen_wrap_cv::sqrt);
  function("applyColorMap", gen_wrap_cv::applyColorMap);
  function("dct", gen_wrap_cv::dct);
  function("magnitude", gen_wrap_cv::magnitude);
  function("estimateAffine2D", gen_wrap_cv::estimateAffine2D);
  function("imencode", gen_wrap_cv::imencode);
  function("createNormHistogramCostExtractor", gen_wrap_cv::createNormHistogramCostExtractor);
  function("max", gen_wrap_cv::max);
  function("adaptiveThreshold", gen_wrap_cv::adaptiveThreshold);
  function("fastMalloc", gen_wrap_cv::fastMalloc);
  function("pencilSketch", gen_wrap_cv::pencilSketch);
  function("clipLine", gen_wrap_cv::clipLine);
  function("createCalibrateDebevec", gen_wrap_cv::createCalibrateDebevec);
  function("bitwise_and", gen_wrap_cv::bitwise_and);
  function("setBreakOnError", gen_wrap_cv::setBreakOnError);
  function("minAreaRect", gen_wrap_cv::minAreaRect);
  function("getRotationMatrix2D", gen_wrap_cv::getRotationMatrix2D);
  function("randu", gen_wrap_cv::randu);
  function("buildPyramid", gen_wrap_cv::buildPyramid);
  function("cv_abs", gen_wrap_cv::cv_abs);
  function("mixChannels", gen_wrap_cv::mixChannels);
  function("read", gen_wrap_cv::read);
  function("createGeneralizedHoughGuil", gen_wrap_cv::createGeneralizedHoughGuil);
  function("setTrackbarMin", gen_wrap_cv::setTrackbarMin);
  function("useOptimized", gen_wrap_cv::useOptimized);
  function("boxFilter", gen_wrap_cv::boxFilter);
  function("Scharr", gen_wrap_cv::Scharr);
  function("createAffineTransformer", gen_wrap_cv::createAffineTransformer);
  function("accumulateWeighted", gen_wrap_cv::accumulateWeighted);
  function("eigen", gen_wrap_cv::eigen);
  function("threshold", gen_wrap_cv::threshold);
  function("pointPolygonTest", gen_wrap_cv::pointPolygonTest);
  function("HoughLinesP", gen_wrap_cv::HoughLinesP);
  function("perspectiveTransform", gen_wrap_cv::perspectiveTransform);
  function("minEnclosingTriangle", gen_wrap_cv::minEnclosingTriangle);
  class_<cv::Hamming>("Hamming")
    .constructor<>()
  ;
  class_<cv::Matx_AddOp>("Matx_AddOp")
    .constructor<>()
  ;
  class_<cv::Matx_SubOp>("Matx_SubOp")
    .constructor<>()
  ;
  class_<cv::Matx_ScaleOp>("Matx_ScaleOp")
    .constructor<>()
  ;
  class_<cv::Matx_MulOp>("Matx_MulOp")
    .constructor<>()
  ;
  class_<cv::Matx_DivOp>("Matx_DivOp")
    .constructor<>()
  ;
  class_<cv::Matx_MatMulOp>("Matx_MatMulOp")
    .constructor<>()
  ;
  class_<cv::Matx_TOp>("Matx_TOp")
    .constructor<>()
  ;
  class_<cv::RotatedRect>("RotatedRect")
    .constructors<void (),void (const Point2f &, const Size2f &, float),void (const Point2f &, const Point2f &, const Point2f &)>()
    .function("boundingRect", gen_wrap_cv::gen_wrap_RotatedRect::boundingRect)
    .function("points", gen_wrap_cv::gen_wrap_RotatedRect::points)
    .property("center", &cv::RotatedRect::center)
    .property("size", &cv::RotatedRect::size)
    .property("angle", &cv::RotatedRect::angle)
  ;
  class_<cv::KeyPoint>("KeyPoint")
    .constructors<void (),void (Point2f, float, float, float, int, int),void (float, float, float, float, float, int, int)>()
    .class_function("convert", gen_wrap_cv::gen_wrap_KeyPoint::convert)
    .function("hash", gen_wrap_cv::gen_wrap_KeyPoint::hash)
    .class_function("overlap", gen_wrap_cv::gen_wrap_KeyPoint::overlap)
    .property("pt", &cv::KeyPoint::pt)
    .property("size", &cv::KeyPoint::size)
    .property("angle", &cv::KeyPoint::angle)
    .property("response", &cv::KeyPoint::response)
    .property("octave", &cv::KeyPoint::octave)
    .property("class_id", &cv::KeyPoint::class_id)
  ;
  class_<cv::DMatch>("DMatch")
    .constructors<void (),void (int, int, float),void (int, int, int, float)>()
    .class_function("__lt", &cv::DMatch::operator<)
    .property("queryIdx", &cv::DMatch::queryIdx)
    .property("trainIdx", &cv::DMatch::trainIdx)
    .property("imgIdx", &cv::DMatch::imgIdx)
    .property("distance", &cv::DMatch::distance)
  ;
  class_<cv::TermCriteria>("TermCriteria")
    .constructors<void (),void (int, int, double)>()
    .property("type", &cv::TermCriteria::type)
    .property("maxCount", &cv::TermCriteria::maxCount)
    .property("epsilon", &cv::TermCriteria::epsilon)
  ;
  class_<cv::Moments>("Moments")
    .constructors<void (),void (double, double, double, double, double, double, double, double, double, double)>()
    .property("m00", &cv::Moments::m00)
    .property("m10", &cv::Moments::m10)
    .property("m01", &cv::Moments::m01)
    .property("m20", &cv::Moments::m20)
    .property("m11", &cv::Moments::m11)
    .property("m02", &cv::Moments::m02)
    .property("m30", &cv::Moments::m30)
    .property("m21", &cv::Moments::m21)
    .property("m12", &cv::Moments::m12)
    .property("m03", &cv::Moments::m03)
    .property("mu20", &cv::Moments::mu20)
    .property("mu11", &cv::Moments::mu11)
    .property("mu02", &cv::Moments::mu02)
    .property("mu30", &cv::Moments::mu30)
    .property("mu21", &cv::Moments::mu21)
    .property("mu12", &cv::Moments::mu12)
    .property("mu03", &cv::Moments::mu03)
    .property("nu20", &cv::Moments::nu20)
    .property("nu11", &cv::Moments::nu11)
    .property("nu02", &cv::Moments::nu02)
    .property("nu30", &cv::Moments::nu30)
    .property("nu21", &cv::Moments::nu21)
    .property("nu12", &cv::Moments::nu12)
    .property("nu03", &cv::Moments::nu03)
  ;
  class_<cv::BufferPoolController>("BufferPoolController")
    .function("setMaxReservedSize", gen_wrap_cv::gen_wrap_BufferPoolController::setMaxReservedSize)
    .function("getReservedSize", gen_wrap_cv::gen_wrap_BufferPoolController::getReservedSize)
    .function("getMaxReservedSize", gen_wrap_cv::gen_wrap_BufferPoolController::getMaxReservedSize)
    .function("freeAllReservedBuffers", gen_wrap_cv::gen_wrap_BufferPoolController::freeAllReservedBuffers)
  ;
  class_<cv::MatAllocator>("MatAllocator")
    .function("deallocate", gen_wrap_cv::gen_wrap_MatAllocator::deallocate)
    .function("getBufferPoolController", gen_wrap_cv::gen_wrap_MatAllocator::getBufferPoolController)
    .function("copy", gen_wrap_cv::gen_wrap_MatAllocator::copy)
    .function("download", gen_wrap_cv::gen_wrap_MatAllocator::download)
    .function("upload", gen_wrap_cv::gen_wrap_MatAllocator::upload)
    .function("map", gen_wrap_cv::gen_wrap_MatAllocator::map)
    .function("unmap", gen_wrap_cv::gen_wrap_MatAllocator::unmap)
    .function("allocate", gen_wrap_cv::gen_wrap_MatAllocator::allocate)
  ;
  class_<cv::UMatData>("UMatData")
    .constructors<void (const cv::MatAllocator *)>()
    .function("markDeviceCopyObsolete", gen_wrap_cv::gen_wrap_UMatData::markDeviceCopyObsolete)
    .function("lock", gen_wrap_cv::gen_wrap_UMatData::lock)
    .function("markDeviceMemMapped", gen_wrap_cv::gen_wrap_UMatData::markDeviceMemMapped)
    .function("unlock", gen_wrap_cv::gen_wrap_UMatData::unlock)
    .function("deviceMemMapped", gen_wrap_cv::gen_wrap_UMatData::deviceMemMapped)
    .function("tempCopiedUMat", gen_wrap_cv::gen_wrap_UMatData::tempCopiedUMat)
    .function("markHostCopyObsolete", gen_wrap_cv::gen_wrap_UMatData::markHostCopyObsolete)
    .function("deviceCopyObsolete", gen_wrap_cv::gen_wrap_UMatData::deviceCopyObsolete)
    .function("tempUMat", gen_wrap_cv::gen_wrap_UMatData::tempUMat)
    .function("hostCopyObsolete", gen_wrap_cv::gen_wrap_UMatData::hostCopyObsolete)
    .function("copyOnMap", gen_wrap_cv::gen_wrap_UMatData::copyOnMap)
    .property("prevAllocator", &cv::UMatData::prevAllocator)
    .property("currAllocator", &cv::UMatData::currAllocator)
    .property("urefcount", &cv::UMatData::urefcount)
    .property("refcount", &cv::UMatData::refcount)
    .property("data", &cv::UMatData::data)
    .property("origdata", &cv::UMatData::origdata)
    .property("size", &cv::UMatData::size)
    .property("flags", &cv::UMatData::flags)
    .property("handle", &cv::UMatData::handle)
    .property("userdata", &cv::UMatData::userdata)
    .property("allocatorFlags_", &cv::UMatData::allocatorFlags_)
    .property("mapcount", &cv::UMatData::mapcount)
    .property("originalUMatData", &cv::UMatData::originalUMatData)
  ;
  class_<cv::UMatDataAutoLock>("UMatDataAutoLock")
    .constructors<void (cv::UMatData *)>()
    .property("u", &cv::UMatDataAutoLock::u)
  ;
  class_<cv::MatSize>("MatSize")
    .constructors<void (int *)>()
    .class_function("__eq", &cv::MatSize::operator==)
    .property("p", &cv::MatSize::p)
  ;
  class_<cv::MatStep>("MatStep")
    .constructors<void (),void (size_t)>()
    .property("p", &cv::MatStep::p)
  ;
  class_<cv::UMat>("UMat")
    .constructors<void (cv::UMatUsageFlags),void (int, int, int, cv::UMatUsageFlags),void (Size, int, cv::UMatUsageFlags),void (int, int, int, const Scalar &, cv::UMatUsageFlags),void (Size, int, const Scalar &, cv::UMatUsageFlags),void (int, const int *, int, cv::UMatUsageFlags),void (int, const int *, int, const Scalar &, cv::UMatUsageFlags),void (const cv::UMat &),void (const cv::UMat &, const cv::Range &, const cv::Range &),void (const cv::UMat &, const Rect &),void (const cv::UMat &, const cv::Range *)>()
    .class_function("eye", gen_wrap_cv::gen_wrap_UMat::eye)
    .function("copySize", gen_wrap_cv::gen_wrap_UMat::copySize)
    .function("diag", gen_wrap_cv::gen_wrap_UMat::diag)
    .function("clone", gen_wrap_cv::gen_wrap_UMat::clone)
    .function("convertTo", gen_wrap_cv::gen_wrap_UMat::convertTo)
    .function("locateROI", gen_wrap_cv::gen_wrap_UMat::locateROI)
    .function("release", gen_wrap_cv::gen_wrap_UMat::release)
    .function("handle", gen_wrap_cv::gen_wrap_UMat::handle)
    .function("assignTo", gen_wrap_cv::gen_wrap_UMat::assignTo)
    .function("setTo", gen_wrap_cv::gen_wrap_UMat::setTo)
    .function("reshape", gen_wrap_cv::gen_wrap_UMat::reshape)
    .function("elemSize", gen_wrap_cv::gen_wrap_UMat::elemSize)
    .function("checkVector", gen_wrap_cv::gen_wrap_UMat::checkVector)
    .function("elemSize1", gen_wrap_cv::gen_wrap_UMat::elemSize1)
    .function("mul", gen_wrap_cv::gen_wrap_UMat::mul)
    .function("isSubmatrix", gen_wrap_cv::gen_wrap_UMat::isSubmatrix)
    .function("getMat", gen_wrap_cv::gen_wrap_UMat::getMat)
    .function("ndoffset", gen_wrap_cv::gen_wrap_UMat::ndoffset)
    .function("adjustROI", gen_wrap_cv::gen_wrap_UMat::adjustROI)
    .function("colRange", gen_wrap_cv::gen_wrap_UMat::colRange)
    .function("dot", gen_wrap_cv::gen_wrap_UMat::dot)
    .function("depth", gen_wrap_cv::gen_wrap_UMat::depth)
    .function("addref", gen_wrap_cv::gen_wrap_UMat::addref)
    .class_function("zeros", gen_wrap_cv::gen_wrap_UMat::zeros)
    .function("isContinuous", gen_wrap_cv::gen_wrap_UMat::isContinuous)
    .function("empty", gen_wrap_cv::gen_wrap_UMat::empty)
    .function("rowRange", gen_wrap_cv::gen_wrap_UMat::rowRange)
    .function("channels", gen_wrap_cv::gen_wrap_UMat::channels)
    .function("col", gen_wrap_cv::gen_wrap_UMat::col)
    .function("copyTo", gen_wrap_cv::gen_wrap_UMat::copyTo)
    .function("deallocate", gen_wrap_cv::gen_wrap_UMat::deallocate)
    .function("inv", gen_wrap_cv::gen_wrap_UMat::inv)
    .function("row", gen_wrap_cv::gen_wrap_UMat::row)
    .function("total", gen_wrap_cv::gen_wrap_UMat::total)
    .function("t", gen_wrap_cv::gen_wrap_UMat::t)
    .function("type", gen_wrap_cv::gen_wrap_UMat::type)
    .class_function("getStdAllocator", gen_wrap_cv::gen_wrap_UMat::getStdAllocator)
    .class_function("ones", gen_wrap_cv::gen_wrap_UMat::ones)
    .function("create", gen_wrap_cv::gen_wrap_UMat::create)
    .property("flags", &cv::UMat::flags)
    .property("dims", &cv::UMat::dims)
    .property("rows", &cv::UMat::rows)
    .property("cols", &cv::UMat::cols)
    .property("allocator", &cv::UMat::allocator)
    .property("usageFlags", &cv::UMat::usageFlags)
    .property("u", &cv::UMat::u)
    .property("offset", &cv::UMat::offset)
    .property("size", &cv::UMat::size)
  ;
  class_<cv::SparseMat>("SparseMat")
    .constructors<void (),void (int, const int *, int),void (const cv::SparseMat &),void (const cv::Mat &)>()
    .function("depth", gen_wrap_cv::gen_wrap_SparseMat::depth)
    .function("channels", gen_wrap_cv::gen_wrap_SparseMat::channels)
    .function("erase", gen_wrap_cv::gen_wrap_SparseMat::erase)
    .function("addref", gen_wrap_cv::gen_wrap_SparseMat::addref)
    .function("end", gen_wrap_cv::gen_wrap_SparseMat::end)
    .function("removeNode", gen_wrap_cv::gen_wrap_SparseMat::removeNode)
    .function("resizeHashTab", gen_wrap_cv::gen_wrap_SparseMat::resizeHashTab)
    .function("convertTo", gen_wrap_cv::gen_wrap_SparseMat::convertTo)
    .function("elemSize", gen_wrap_cv::gen_wrap_SparseMat::elemSize)
    .function("type", gen_wrap_cv::gen_wrap_SparseMat::type)
    .function("create", gen_wrap_cv::gen_wrap_SparseMat::create)
    .function("assignTo", gen_wrap_cv::gen_wrap_SparseMat::assignTo)
    .function("nzcount", gen_wrap_cv::gen_wrap_SparseMat::nzcount)
    .function("ptr", gen_wrap_cv::gen_wrap_SparseMat::ptr)
    .function("clone", gen_wrap_cv::gen_wrap_SparseMat::clone)
    .function("newNode", gen_wrap_cv::gen_wrap_SparseMat::newNode)
    .function("size", gen_wrap_cv::gen_wrap_SparseMat::size)
    .function("copyTo", gen_wrap_cv::gen_wrap_SparseMat::copyTo)
    .function("release", gen_wrap_cv::gen_wrap_SparseMat::release)
    .function("clear", gen_wrap_cv::gen_wrap_SparseMat::clear)
    .function("hash", gen_wrap_cv::gen_wrap_SparseMat::hash)
    .function("dims", gen_wrap_cv::gen_wrap_SparseMat::dims)
    .function("elemSize1", gen_wrap_cv::gen_wrap_SparseMat::elemSize1)
    .function("node", gen_wrap_cv::gen_wrap_SparseMat::node)
    .function("begin", gen_wrap_cv::gen_wrap_SparseMat::begin)
    .property("flags", &cv::SparseMat::flags)
    .property("hdr", &cv::SparseMat::hdr)
  ;
  class_<cv::MatConstIterator>("MatConstIterator")
    .constructors<void (),void (const cv::Mat *),void (const cv::Mat *, int, int),void (const cv::Mat *, Point),void (const cv::MatConstIterator &)>()
    .function("pos", gen_wrap_cv::gen_wrap_MatConstIterator::pos)
    .function("lpos", gen_wrap_cv::gen_wrap_MatConstIterator::lpos)
    .function("seek", gen_wrap_cv::gen_wrap_MatConstIterator::seek)
    .class_function("__mul", &cv::MatConstIterator::operator*)
    .property("m", &cv::MatConstIterator::m)
    .property("elemSize", &cv::MatConstIterator::elemSize)
    .property("ptr", &cv::MatConstIterator::ptr)
    .property("sliceStart", &cv::MatConstIterator::sliceStart)
    .property("sliceEnd", &cv::MatConstIterator::sliceEnd)
  ;
  class_<cv::SparseMatConstIterator>("SparseMatConstIterator")
    .constructors<void (),void (const cv::SparseMat *),void (const cv::SparseMatConstIterator &)>()
    .function("node", gen_wrap_cv::gen_wrap_SparseMatConstIterator::node)
    .function("seekEnd", gen_wrap_cv::gen_wrap_SparseMatConstIterator::seekEnd)
    .property("m", &cv::SparseMatConstIterator::m)
    .property("hashidx", &cv::SparseMatConstIterator::hashidx)
    .property("ptr", &cv::SparseMatConstIterator::ptr)
  ;
  class_<cv::SparseMatIterator,cv::SparseMatConstIterator>("SparseMatIterator")
    .constructors<void (),void (cv::SparseMat *),void (const cv::SparseMatIterator &)>()
    .function("node", gen_wrap_cv::gen_wrap_SparseMatIterator::node)
  ;
  class_<cv::NAryMatIterator>("NAryMatIterator")
    .constructors<void (),void (const cv::Mat **, uchar **, int),void (const cv::Mat **, cv::Mat *, int)>()
    .function("init", gen_wrap_cv::gen_wrap_NAryMatIterator::init)
    .property("arrays", &cv::NAryMatIterator::arrays)
    .property("planes", &cv::NAryMatIterator::planes)
    .property("ptrs", &cv::NAryMatIterator::ptrs)
    .property("narrays", &cv::NAryMatIterator::narrays)
    .property("nplanes", &cv::NAryMatIterator::nplanes)
    .property("size", &cv::NAryMatIterator::size)
  ;
  class_<cv::MatOp>("MatOp")
    .function("abs", gen_wrap_cv::gen_wrap_MatOp::abs)
    .function("add", gen_wrap_cv::gen_wrap_MatOp::add)
    .function("elementWise", gen_wrap_cv::gen_wrap_MatOp::elementWise)
    .function("augAssignOr", gen_wrap_cv::gen_wrap_MatOp::augAssignOr)
    .function("roi", gen_wrap_cv::gen_wrap_MatOp::roi)
    .function("matmul", gen_wrap_cv::gen_wrap_MatOp::matmul)
    .function("augAssignMultiply", gen_wrap_cv::gen_wrap_MatOp::augAssignMultiply)
    .function("transpose", gen_wrap_cv::gen_wrap_MatOp::transpose)
    .function("augAssignAnd", gen_wrap_cv::gen_wrap_MatOp::augAssignAnd)
    .function("multiply", gen_wrap_cv::gen_wrap_MatOp::multiply)
    .function("augAssignAdd", gen_wrap_cv::gen_wrap_MatOp::augAssignAdd)
    .function("invert", gen_wrap_cv::gen_wrap_MatOp::invert)
    .function("augAssignSubtract", gen_wrap_cv::gen_wrap_MatOp::augAssignSubtract)
    .function("augAssignDivide", gen_wrap_cv::gen_wrap_MatOp::augAssignDivide)
    .function("augAssignXor", gen_wrap_cv::gen_wrap_MatOp::augAssignXor)
    .function("divide", gen_wrap_cv::gen_wrap_MatOp::divide)
    .function("diag", gen_wrap_cv::gen_wrap_MatOp::diag)
    .function("size", gen_wrap_cv::gen_wrap_MatOp::size)
    .function("assign", gen_wrap_cv::gen_wrap_MatOp::assign)
    .function("subtract", gen_wrap_cv::gen_wrap_MatOp::subtract)
    .function("type", gen_wrap_cv::gen_wrap_MatOp::type)
  ;
  class_<cv::MatExpr>("MatExpr")
    .constructors<void (),void (const cv::Mat &),void (const cv::MatOp *, int, const cv::Mat &, const cv::Mat &, const cv::Mat &, double, double, const Scalar &)>()
    .function("dot", gen_wrap_cv::gen_wrap_MatExpr::dot)
    .function("mul", gen_wrap_cv::gen_wrap_MatExpr::mul)
    .function("type", gen_wrap_cv::gen_wrap_MatExpr::type)
    .function("col", gen_wrap_cv::gen_wrap_MatExpr::col)
    .function("row", gen_wrap_cv::gen_wrap_MatExpr::row)
    .function("t", gen_wrap_cv::gen_wrap_MatExpr::t)
    .function("diag", gen_wrap_cv::gen_wrap_MatExpr::diag)
    .function("size", gen_wrap_cv::gen_wrap_MatExpr::size)
    .function("cross", gen_wrap_cv::gen_wrap_MatExpr::cross)
    .function("inv", gen_wrap_cv::gen_wrap_MatExpr::inv)
    .property("op", &cv::MatExpr::op)
    .property("flags", &cv::MatExpr::flags)
    .property("a", &cv::MatExpr::a)
    .property("b", &cv::MatExpr::b)
    .property("c", &cv::MatExpr::c)
    .property("alpha", &cv::MatExpr::alpha)
    .property("beta", &cv::MatExpr::beta)
    .property("s", &cv::MatExpr::s)
  ;
  class_<cv::FileStorage>("FileStorage")
    .constructors<void (),void (const cv::String &, int, const cv::String &)>()
    .function("write", gen_wrap_cv::gen_wrap_FileStorage::write)
    .function("releaseAndGetString", gen_wrap_cv::gen_wrap_FileStorage::releaseAndGetString)
    .function("isOpened", gen_wrap_cv::gen_wrap_FileStorage::isOpened)
    .class_function("getDefaultObjectName", gen_wrap_cv::gen_wrap_FileStorage::getDefaultObjectName)
    .function("writeObj", gen_wrap_cv::gen_wrap_FileStorage::writeObj)
    .function("release", gen_wrap_cv::gen_wrap_FileStorage::release)
    .function("writeComment", gen_wrap_cv::gen_wrap_FileStorage::writeComment)
    .function("getFirstTopLevelNode", gen_wrap_cv::gen_wrap_FileStorage::getFirstTopLevelNode)
    .function("root", gen_wrap_cv::gen_wrap_FileStorage::root)
    .function("writeRaw", gen_wrap_cv::gen_wrap_FileStorage::writeRaw)
    .function("open", gen_wrap_cv::gen_wrap_FileStorage::open)
    .property("elname", &cv::FileStorage::elname)
    .property("structs", &cv::FileStorage::structs)
    .property("state", &cv::FileStorage::state)
  ;
  class_<cv::FileNode>("FileNode")
    .constructors<void (),void (const cv::FileNode &)>()
    .function("readRaw", gen_wrap_cv::gen_wrap_FileNode::readRaw)
    .function("isSeq", gen_wrap_cv::gen_wrap_FileNode::isSeq)
    .function("name", gen_wrap_cv::gen_wrap_FileNode::name)
    .function("isInt", gen_wrap_cv::gen_wrap_FileNode::isInt)
    .function("isMap", gen_wrap_cv::gen_wrap_FileNode::isMap)
    .function("begin", gen_wrap_cv::gen_wrap_FileNode::begin)
    .function("mat", gen_wrap_cv::gen_wrap_FileNode::mat)
    .function("isReal", gen_wrap_cv::gen_wrap_FileNode::isReal)
    .function("string", gen_wrap_cv::gen_wrap_FileNode::string)
    .function("isNamed", gen_wrap_cv::gen_wrap_FileNode::isNamed)
    .function("real", gen_wrap_cv::gen_wrap_FileNode::real)
    .function("type", gen_wrap_cv::gen_wrap_FileNode::type)
    .function("readObj", gen_wrap_cv::gen_wrap_FileNode::readObj)
    .function("isString", gen_wrap_cv::gen_wrap_FileNode::isString)
    .function("end", gen_wrap_cv::gen_wrap_FileNode::end)
    .function("empty", gen_wrap_cv::gen_wrap_FileNode::empty)
    .function("size", gen_wrap_cv::gen_wrap_FileNode::size)
    .function("isNone", gen_wrap_cv::gen_wrap_FileNode::isNone)
    .class_function("__mul", kaguya::overload((CvFileNode * (cv::FileNode::*)())&cv::FileNode::operator*,(const CvFileNode * (cv::FileNode::*)() const)&cv::FileNode::operator*))
    .property("node", &cv::FileNode::node)
  ;
  class_<cv::FileNodeIterator>("FileNodeIterator")
    .constructors<void (),void (const cv::FileNodeIterator &)>()
    .function("readRaw", gen_wrap_cv::gen_wrap_FileNodeIterator::readRaw)
    .class_function("__mul", &cv::FileNodeIterator::operator*)
    .property("container", &cv::FileNodeIterator::container)
    .property("reader", &cv::FileNodeIterator::reader)
    .property("remaining", &cv::FileNodeIterator::remaining)
  ;
  class_<cv::Exception,std::exception>("Exception")
    .constructors<void (),void (int, const cv::String &, const cv::String &, const cv::String &, int)>()
    .function("what", gen_wrap_cv::gen_wrap_Exception::what)
    .function("formatMessage", gen_wrap_cv::gen_wrap_Exception::formatMessage)
    .property("msg", &cv::Exception::msg)
    .property("code", &cv::Exception::code)
    .property("err", &cv::Exception::err)
    .property("func", &cv::Exception::func)
    .property("file", &cv::Exception::file)
    .property("line", &cv::Exception::line)
  ;
  class_<cv::PCA>("PCA")
    .constructors<void (),void (InputArray, InputArray, int, int),void (InputArray, InputArray, int, double)>()
    .function("write", gen_wrap_cv::gen_wrap_PCA::write)
    .function("read", gen_wrap_cv::gen_wrap_PCA::read)
    .function("backProject", gen_wrap_cv::gen_wrap_PCA::backProject)
    .function("project", gen_wrap_cv::gen_wrap_PCA::project)
    .property("eigenvectors", &cv::PCA::eigenvectors)
    .property("eigenvalues", &cv::PCA::eigenvalues)
    .property("mean", &cv::PCA::mean)
  ;
  class_<cv::LDA>("LDA")
    .constructors<void (int),void (InputArrayOfArrays, InputArray, int)>()
    .function("load", gen_wrap_cv::gen_wrap_LDA::load)
    .function("save", gen_wrap_cv::gen_wrap_LDA::save)
    .function("compute", gen_wrap_cv::gen_wrap_LDA::compute)
    .function("eigenvalues", gen_wrap_cv::gen_wrap_LDA::eigenvalues)
    .function("eigenvectors", gen_wrap_cv::gen_wrap_LDA::eigenvectors)
    .class_function("subspaceReconstruct", gen_wrap_cv::gen_wrap_LDA::subspaceReconstruct)
    .class_function("subspaceProject", gen_wrap_cv::gen_wrap_LDA::subspaceProject)
    .function("reconstruct", gen_wrap_cv::gen_wrap_LDA::reconstruct)
    .function("project", gen_wrap_cv::gen_wrap_LDA::project)
  ;
  class_<cv::SVD>("SVD")
    .constructors<void (),void (InputArray, int)>()
    .class_function("solveZ", gen_wrap_cv::gen_wrap_SVD::solveZ)
    .class_function("backSubst", gen_wrap_cv::gen_wrap_SVD::backSubst)
    .class_function("compute", gen_wrap_cv::gen_wrap_SVD::compute)
    .property("u", &cv::SVD::u)
    .property("w", &cv::SVD::w)
    .property("vt", &cv::SVD::vt)
  ;
  class_<cv::RNG>("RNG")
    .constructors<void (),void (uint64)>()
    .function("fill", gen_wrap_cv::gen_wrap_RNG::fill)
    .function("next", gen_wrap_cv::gen_wrap_RNG::next)
    .function("gaussian", gen_wrap_cv::gen_wrap_RNG::gaussian)
    .function("uniform", gen_wrap_cv::gen_wrap_RNG::uniform)
    .property("state", &cv::RNG::state)
  ;
  class_<cv::RNG_MT19937>("RNG_MT19937")
    .constructors<void (),void (unsigned int)>()
    .function("next", gen_wrap_cv::gen_wrap_RNG_MT19937::next)
    .function("seed", gen_wrap_cv::gen_wrap_RNG_MT19937::seed)
    .function("uniform", gen_wrap_cv::gen_wrap_RNG_MT19937::uniform)
  ;
  class_<cv::Formatted>("Formatted")
    .function("reset", gen_wrap_cv::gen_wrap_Formatted::reset)
    .function("next", gen_wrap_cv::gen_wrap_Formatted::next)
  ;
  class_<cv::Formatter>("Formatter")
    .function("set64fPrecision", gen_wrap_cv::gen_wrap_Formatter::set64fPrecision)
    .function("set32fPrecision", gen_wrap_cv::gen_wrap_Formatter::set32fPrecision)
    .function("format", gen_wrap_cv::gen_wrap_Formatter::format)
    .class_function("get", gen_wrap_cv::gen_wrap_Formatter::get)
    .function("setMultiline", gen_wrap_cv::gen_wrap_Formatter::setMultiline)
  ;
  class_<cv::Algorithm>("Algorithm")
    .constructors<void ()>()
    .function("clear", gen_wrap_cv::gen_wrap_Algorithm::clear)
    .function("empty", gen_wrap_cv::gen_wrap_Algorithm::empty)
    .function("write", gen_wrap_cv::gen_wrap_Algorithm::write)
    .function("save", gen_wrap_cv::gen_wrap_Algorithm::save)
    .function("read", gen_wrap_cv::gen_wrap_Algorithm::read)
    .function("getDefaultName", gen_wrap_cv::gen_wrap_Algorithm::getDefaultName)
  ;
  class_<cv::Param>("Param")
    .constructor<>()
  ;
  class_<cv::TickMeter>("TickMeter")
    .constructors<void ()>()
    .function("start", gen_wrap_cv::gen_wrap_TickMeter::start)
    .function("getTimeSec", gen_wrap_cv::gen_wrap_TickMeter::getTimeSec)
    .function("getCounter", gen_wrap_cv::gen_wrap_TickMeter::getCounter)
    .function("getTimeTicks", gen_wrap_cv::gen_wrap_TickMeter::getTimeTicks)
    .function("getTimeMicro", gen_wrap_cv::gen_wrap_TickMeter::getTimeMicro)
    .function("getTimeMilli", gen_wrap_cv::gen_wrap_TickMeter::getTimeMilli)
    .function("stop", gen_wrap_cv::gen_wrap_TickMeter::stop)
    .function("reset", gen_wrap_cv::gen_wrap_TickMeter::reset)
  ;
  class_<cv::ParallelLoopBody>("ParallelLoopBody")
  ;
  class_<cv::Mutex>("Mutex")
    .constructors<void (),void (const cv::Mutex &)>()
    .function("trylock", gen_wrap_cv::gen_wrap_Mutex::trylock)
    .function("lock", gen_wrap_cv::gen_wrap_Mutex::lock)
    .function("unlock", gen_wrap_cv::gen_wrap_Mutex::unlock)
  ;
  class_<cv::AutoLock>("AutoLock")
    .constructors<void (cv::Mutex &)>()
  ;
  class_<cv::TLSDataContainer>("TLSDataContainer")
    .function("deleteDataInstance", gen_wrap_cv::gen_wrap_TLSDataContainer::deleteDataInstance)
    .function("getData", gen_wrap_cv::gen_wrap_TLSDataContainer::getData)
    .function("createDataInstance", gen_wrap_cv::gen_wrap_TLSDataContainer::createDataInstance)
    .property("key_", &cv::TLSDataContainer::key_)
  ;
  class_<cv::CommandLineParser>("CommandLineParser")
    .constructors<void (int, const char *const *, const cv::String &),void (const cv::CommandLineParser &)>()
    .function("printErrors", gen_wrap_cv::gen_wrap_CommandLineParser::printErrors)
    .function("printMessage", gen_wrap_cv::gen_wrap_CommandLineParser::printMessage)
    .function("getPathToApplication", gen_wrap_cv::gen_wrap_CommandLineParser::getPathToApplication)
    .function("has", gen_wrap_cv::gen_wrap_CommandLineParser::has)
    .function("check", gen_wrap_cv::gen_wrap_CommandLineParser::check)
    .function("about", gen_wrap_cv::gen_wrap_CommandLineParser::about)
  ;
  class_<cv::MinProblemSolver,cv::Algorithm>("MinProblemSolver")
    .function("getFunction", gen_wrap_cv::gen_wrap_MinProblemSolver::getFunction)
    .function("setTermCriteria", gen_wrap_cv::gen_wrap_MinProblemSolver::setTermCriteria)
    .function("setFunction", gen_wrap_cv::gen_wrap_MinProblemSolver::setFunction)
    .function("getTermCriteria", gen_wrap_cv::gen_wrap_MinProblemSolver::getTermCriteria)
    .function("minimize", gen_wrap_cv::gen_wrap_MinProblemSolver::minimize)
  ;
  class_<cv::DownhillSolver,cv::MinProblemSolver>("DownhillSolver")
    .function("setInitStep", gen_wrap_cv::gen_wrap_DownhillSolver::setInitStep)
    .class_function("create", gen_wrap_cv::gen_wrap_DownhillSolver::create)
    .function("getInitStep", gen_wrap_cv::gen_wrap_DownhillSolver::getInitStep)
  ;
  class_<cv::ConjGradSolver,cv::MinProblemSolver>("ConjGradSolver")
    .class_function("create", gen_wrap_cv::gen_wrap_ConjGradSolver::create)
  ;
  class_<cv::KeyPointsFilter>("KeyPointsFilter")
    .constructors<void ()>()
    .class_function("runByKeypointSize", gen_wrap_cv::gen_wrap_KeyPointsFilter::runByKeypointSize)
    .class_function("removeDuplicated", gen_wrap_cv::gen_wrap_KeyPointsFilter::removeDuplicated)
    .class_function("retainBest", gen_wrap_cv::gen_wrap_KeyPointsFilter::retainBest)
    .class_function("runByPixelsMask", gen_wrap_cv::gen_wrap_KeyPointsFilter::runByPixelsMask)
    .class_function("runByImageBorder", gen_wrap_cv::gen_wrap_KeyPointsFilter::runByImageBorder)
  ;
  class_<cv::Feature2D,cv::Algorithm>("Feature2D")
    .constructor<>()
    .function("compute", gen_wrap_cv::gen_wrap_Feature2D::compute)
    .function("defaultNorm", gen_wrap_cv::gen_wrap_Feature2D::defaultNorm)
    .function("write", gen_wrap_cv::gen_wrap_Feature2D::write)
    .function("detect", gen_wrap_cv::gen_wrap_Feature2D::detect)
    .function("descriptorType", gen_wrap_cv::gen_wrap_Feature2D::descriptorType)
    .function("detectAndCompute", gen_wrap_cv::gen_wrap_Feature2D::detectAndCompute)
    .function("descriptorSize", gen_wrap_cv::gen_wrap_Feature2D::descriptorSize)
    .function("empty", gen_wrap_cv::gen_wrap_Feature2D::empty)
    .function("read", gen_wrap_cv::gen_wrap_Feature2D::read)
  ;
  class_<cv::BRISK,cv::Feature2D>("BRISK")
    .constructor<>()
    .class_function("create", gen_wrap_cv::gen_wrap_BRISK::create)
  ;
  class_<cv::ORB,cv::Feature2D>("ORB")
    .class_function("create", gen_wrap_cv::gen_wrap_ORB::create)
    .function("getEdgeThreshold", gen_wrap_cv::gen_wrap_ORB::getEdgeThreshold)
    .function("getFirstLevel", gen_wrap_cv::gen_wrap_ORB::getFirstLevel)
    .function("setEdgeThreshold", gen_wrap_cv::gen_wrap_ORB::setEdgeThreshold)
    .function("setFirstLevel", gen_wrap_cv::gen_wrap_ORB::setFirstLevel)
    .function("getNLevels", gen_wrap_cv::gen_wrap_ORB::getNLevels)
    .function("setScaleFactor", gen_wrap_cv::gen_wrap_ORB::setScaleFactor)
    .function("setNLevels", gen_wrap_cv::gen_wrap_ORB::setNLevels)
    .function("getWTA_K", gen_wrap_cv::gen_wrap_ORB::getWTA_K)
    .function("getFastThreshold", gen_wrap_cv::gen_wrap_ORB::getFastThreshold)
    .function("setScoreType", gen_wrap_cv::gen_wrap_ORB::setScoreType)
    .function("setMaxFeatures", gen_wrap_cv::gen_wrap_ORB::setMaxFeatures)
    .function("setWTA_K", gen_wrap_cv::gen_wrap_ORB::setWTA_K)
    .function("getMaxFeatures", gen_wrap_cv::gen_wrap_ORB::getMaxFeatures)
    .function("getScaleFactor", gen_wrap_cv::gen_wrap_ORB::getScaleFactor)
    .function("setPatchSize", gen_wrap_cv::gen_wrap_ORB::setPatchSize)
    .function("setFastThreshold", gen_wrap_cv::gen_wrap_ORB::setFastThreshold)
    .function("getScoreType", gen_wrap_cv::gen_wrap_ORB::getScoreType)
    .function("getPatchSize", gen_wrap_cv::gen_wrap_ORB::getPatchSize)
  ;
  class_<cv::MSER,cv::Feature2D>("MSER")
    .function("setMinArea", gen_wrap_cv::gen_wrap_MSER::setMinArea)
    .function("getMaxArea", gen_wrap_cv::gen_wrap_MSER::getMaxArea)
    .function("setPass2Only", gen_wrap_cv::gen_wrap_MSER::setPass2Only)
    .class_function("create", gen_wrap_cv::gen_wrap_MSER::create)
    .function("getPass2Only", gen_wrap_cv::gen_wrap_MSER::getPass2Only)
    .function("getDelta", gen_wrap_cv::gen_wrap_MSER::getDelta)
    .function("getMinArea", gen_wrap_cv::gen_wrap_MSER::getMinArea)
    .function("setMaxArea", gen_wrap_cv::gen_wrap_MSER::setMaxArea)
    .function("setDelta", gen_wrap_cv::gen_wrap_MSER::setDelta)
    .function("detectRegions", gen_wrap_cv::gen_wrap_MSER::detectRegions)
  ;
  class_<cv::FastFeatureDetector,cv::Feature2D>("FastFeatureDetector")
    .function("setThreshold", gen_wrap_cv::gen_wrap_FastFeatureDetector::setThreshold)
    .function("setType", gen_wrap_cv::gen_wrap_FastFeatureDetector::setType)
    .function("getType", gen_wrap_cv::gen_wrap_FastFeatureDetector::getType)
    .function("getNonmaxSuppression", gen_wrap_cv::gen_wrap_FastFeatureDetector::getNonmaxSuppression)
    .function("getThreshold", gen_wrap_cv::gen_wrap_FastFeatureDetector::getThreshold)
    .class_function("create", gen_wrap_cv::gen_wrap_FastFeatureDetector::create)
    .function("setNonmaxSuppression", gen_wrap_cv::gen_wrap_FastFeatureDetector::setNonmaxSuppression)
  ;
  class_<cv::AgastFeatureDetector,cv::Feature2D>("AgastFeatureDetector")
    .function("getType", gen_wrap_cv::gen_wrap_AgastFeatureDetector::getType)
    .function("getNonmaxSuppression", gen_wrap_cv::gen_wrap_AgastFeatureDetector::getNonmaxSuppression)
    .function("setThreshold", gen_wrap_cv::gen_wrap_AgastFeatureDetector::setThreshold)
    .function("setType", gen_wrap_cv::gen_wrap_AgastFeatureDetector::setType)
    .function("setNonmaxSuppression", gen_wrap_cv::gen_wrap_AgastFeatureDetector::setNonmaxSuppression)
    .class_function("create", gen_wrap_cv::gen_wrap_AgastFeatureDetector::create)
    .function("getThreshold", gen_wrap_cv::gen_wrap_AgastFeatureDetector::getThreshold)
  ;
  class_<cv::GFTTDetector,cv::Feature2D>("GFTTDetector")
    .function("getQualityLevel", gen_wrap_cv::gen_wrap_GFTTDetector::getQualityLevel)
    .class_function("create", gen_wrap_cv::gen_wrap_GFTTDetector::create)
    .function("getMinDistance", gen_wrap_cv::gen_wrap_GFTTDetector::getMinDistance)
    .function("getMaxFeatures", gen_wrap_cv::gen_wrap_GFTTDetector::getMaxFeatures)
    .function("setMinDistance", gen_wrap_cv::gen_wrap_GFTTDetector::setMinDistance)
    .function("getBlockSize", gen_wrap_cv::gen_wrap_GFTTDetector::getBlockSize)
    .function("setBlockSize", gen_wrap_cv::gen_wrap_GFTTDetector::setBlockSize)
    .function("getHarrisDetector", gen_wrap_cv::gen_wrap_GFTTDetector::getHarrisDetector)
    .function("setHarrisDetector", gen_wrap_cv::gen_wrap_GFTTDetector::setHarrisDetector)
    .function("setK", gen_wrap_cv::gen_wrap_GFTTDetector::setK)
    .function("setMaxFeatures", gen_wrap_cv::gen_wrap_GFTTDetector::setMaxFeatures)
    .function("getK", gen_wrap_cv::gen_wrap_GFTTDetector::getK)
    .function("setQualityLevel", gen_wrap_cv::gen_wrap_GFTTDetector::setQualityLevel)
  ;
  class_<cv::SimpleBlobDetector,cv::Feature2D>("SimpleBlobDetector")
    .constructor<>()
    .class_function("create", gen_wrap_cv::gen_wrap_SimpleBlobDetector::create)
  ;
  class_<cv::KAZE,cv::Feature2D>("KAZE")
    .function("setDiffusivity", gen_wrap_cv::gen_wrap_KAZE::setDiffusivity)
    .function("setThreshold", gen_wrap_cv::gen_wrap_KAZE::setThreshold)
    .function("getNOctaves", gen_wrap_cv::gen_wrap_KAZE::getNOctaves)
    .function("setNOctaveLayers", gen_wrap_cv::gen_wrap_KAZE::setNOctaveLayers)
    .function("setUpright", gen_wrap_cv::gen_wrap_KAZE::setUpright)
    .function("getDiffusivity", gen_wrap_cv::gen_wrap_KAZE::getDiffusivity)
    .function("getNOctaveLayers", gen_wrap_cv::gen_wrap_KAZE::getNOctaveLayers)
    .function("getExtended", gen_wrap_cv::gen_wrap_KAZE::getExtended)
    .function("getThreshold", gen_wrap_cv::gen_wrap_KAZE::getThreshold)
    .function("getUpright", gen_wrap_cv::gen_wrap_KAZE::getUpright)
    .function("setNOctaves", gen_wrap_cv::gen_wrap_KAZE::setNOctaves)
    .class_function("create", gen_wrap_cv::gen_wrap_KAZE::create)
    .function("setExtended", gen_wrap_cv::gen_wrap_KAZE::setExtended)
  ;
  class_<cv::AKAZE,cv::Feature2D>("AKAZE")
    .class_function("create", gen_wrap_cv::gen_wrap_AKAZE::create)
    .function("getDescriptorType", gen_wrap_cv::gen_wrap_AKAZE::getDescriptorType)
    .function("setDiffusivity", gen_wrap_cv::gen_wrap_AKAZE::setDiffusivity)
    .function("getThreshold", gen_wrap_cv::gen_wrap_AKAZE::getThreshold)
    .function("getDescriptorChannels", gen_wrap_cv::gen_wrap_AKAZE::getDescriptorChannels)
    .function("setDescriptorSize", gen_wrap_cv::gen_wrap_AKAZE::setDescriptorSize)
    .function("setDescriptorChannels", gen_wrap_cv::gen_wrap_AKAZE::setDescriptorChannels)
    .function("setDescriptorType", gen_wrap_cv::gen_wrap_AKAZE::setDescriptorType)
    .function("setThreshold", gen_wrap_cv::gen_wrap_AKAZE::setThreshold)
    .function("getNOctaveLayers", gen_wrap_cv::gen_wrap_AKAZE::getNOctaveLayers)
    .function("getDescriptorSize", gen_wrap_cv::gen_wrap_AKAZE::getDescriptorSize)
    .function("getNOctaves", gen_wrap_cv::gen_wrap_AKAZE::getNOctaves)
    .function("setNOctaveLayers", gen_wrap_cv::gen_wrap_AKAZE::setNOctaveLayers)
    .function("getDiffusivity", gen_wrap_cv::gen_wrap_AKAZE::getDiffusivity)
    .function("setNOctaves", gen_wrap_cv::gen_wrap_AKAZE::setNOctaves)
  ;
  class_<cv::DescriptorMatcher,cv::Algorithm>("DescriptorMatcher")
    .function("clear", gen_wrap_cv::gen_wrap_DescriptorMatcher::clear)
    .class_function("create", gen_wrap_cv::gen_wrap_DescriptorMatcher::create)
    .function("empty", gen_wrap_cv::gen_wrap_DescriptorMatcher::empty)
    .function("knnMatch", gen_wrap_cv::gen_wrap_DescriptorMatcher::knnMatch)
    .function("match", gen_wrap_cv::gen_wrap_DescriptorMatcher::match)
    .function("write", gen_wrap_cv::gen_wrap_DescriptorMatcher::write)
    .function("add", gen_wrap_cv::gen_wrap_DescriptorMatcher::add)
    .function("isMaskSupported", gen_wrap_cv::gen_wrap_DescriptorMatcher::isMaskSupported)
    .function("clone", gen_wrap_cv::gen_wrap_DescriptorMatcher::clone)
    .function("train", gen_wrap_cv::gen_wrap_DescriptorMatcher::train)
    .function("read", gen_wrap_cv::gen_wrap_DescriptorMatcher::read)
    .function("getTrainDescriptors", gen_wrap_cv::gen_wrap_DescriptorMatcher::getTrainDescriptors)
    .function("radiusMatch", gen_wrap_cv::gen_wrap_DescriptorMatcher::radiusMatch)
  ;
  class_<cv::BFMatcher,cv::DescriptorMatcher>("BFMatcher")
    .constructors<void (int, bool)>()
    .function("isMaskSupported", gen_wrap_cv::gen_wrap_BFMatcher::isMaskSupported)
    .class_function("create", gen_wrap_cv::gen_wrap_BFMatcher::create)
    .function("clone", gen_wrap_cv::gen_wrap_BFMatcher::clone)
  ;
  class_<cv::FlannBasedMatcher,cv::DescriptorMatcher>("FlannBasedMatcher")
    .constructors<void (const Ptr<flann::IndexParams> &, const Ptr<flann::SearchParams> &)>()
    .function("read", gen_wrap_cv::gen_wrap_FlannBasedMatcher::read)
    .function("train", gen_wrap_cv::gen_wrap_FlannBasedMatcher::train)
    .function("write", gen_wrap_cv::gen_wrap_FlannBasedMatcher::write)
    .class_function("create", gen_wrap_cv::gen_wrap_FlannBasedMatcher::create)
    .function("clone", gen_wrap_cv::gen_wrap_FlannBasedMatcher::clone)
    .function("add", gen_wrap_cv::gen_wrap_FlannBasedMatcher::add)
    .function("isMaskSupported", gen_wrap_cv::gen_wrap_FlannBasedMatcher::isMaskSupported)
    .function("clear", gen_wrap_cv::gen_wrap_FlannBasedMatcher::clear)
  ;
  class_<cv::DrawMatchesFlags>("DrawMatchesFlags")
    .constructor<>()
  ;
  class_<cv::BOWTrainer>("BOWTrainer")
    .function("descriptorsCount", gen_wrap_cv::gen_wrap_BOWTrainer::descriptorsCount)
    .function("getDescriptors", gen_wrap_cv::gen_wrap_BOWTrainer::getDescriptors)
    .function("clear", gen_wrap_cv::gen_wrap_BOWTrainer::clear)
    .function("add", gen_wrap_cv::gen_wrap_BOWTrainer::add)
    .function("cluster", gen_wrap_cv::gen_wrap_BOWTrainer::cluster)
  ;
  class_<cv::BOWKMeansTrainer,cv::BOWTrainer>("BOWKMeansTrainer")
    .constructors<void (int, const cv::TermCriteria &, int, int)>()
    .function("cluster", gen_wrap_cv::gen_wrap_BOWKMeansTrainer::cluster)
  ;
  class_<cv::BOWImgDescriptorExtractor>("BOWImgDescriptorExtractor")
    .constructors<void (const Ptr<DescriptorExtractor> &, const Ptr<cv::DescriptorMatcher> &),void (const Ptr<cv::DescriptorMatcher> &)>()
    .function("descriptorType", gen_wrap_cv::gen_wrap_BOWImgDescriptorExtractor::descriptorType)
    .function("compute", gen_wrap_cv::gen_wrap_BOWImgDescriptorExtractor::compute)
    .function("setVocabulary", gen_wrap_cv::gen_wrap_BOWImgDescriptorExtractor::setVocabulary)
    .function("compute2", gen_wrap_cv::gen_wrap_BOWImgDescriptorExtractor::compute2)
    .function("getVocabulary", gen_wrap_cv::gen_wrap_BOWImgDescriptorExtractor::getVocabulary)
    .function("descriptorSize", gen_wrap_cv::gen_wrap_BOWImgDescriptorExtractor::descriptorSize)
  ;
  class_<cv::StereoMatcher,cv::Algorithm>("StereoMatcher")
    .function("getDisp12MaxDiff", gen_wrap_cv::gen_wrap_StereoMatcher::getDisp12MaxDiff)
    .function("setSpeckleWindowSize", gen_wrap_cv::gen_wrap_StereoMatcher::setSpeckleWindowSize)
    .function("getSpeckleRange", gen_wrap_cv::gen_wrap_StereoMatcher::getSpeckleRange)
    .function("setMinDisparity", gen_wrap_cv::gen_wrap_StereoMatcher::setMinDisparity)
    .function("getMinDisparity", gen_wrap_cv::gen_wrap_StereoMatcher::getMinDisparity)
    .function("setDisp12MaxDiff", gen_wrap_cv::gen_wrap_StereoMatcher::setDisp12MaxDiff)
    .function("getBlockSize", gen_wrap_cv::gen_wrap_StereoMatcher::getBlockSize)
    .function("getSpeckleWindowSize", gen_wrap_cv::gen_wrap_StereoMatcher::getSpeckleWindowSize)
    .function("setSpeckleRange", gen_wrap_cv::gen_wrap_StereoMatcher::setSpeckleRange)
    .function("getNumDisparities", gen_wrap_cv::gen_wrap_StereoMatcher::getNumDisparities)
    .function("compute", gen_wrap_cv::gen_wrap_StereoMatcher::compute)
    .function("setNumDisparities", gen_wrap_cv::gen_wrap_StereoMatcher::setNumDisparities)
    .function("setBlockSize", gen_wrap_cv::gen_wrap_StereoMatcher::setBlockSize)
  ;
  class_<cv::StereoBM,cv::StereoMatcher>("StereoBM")
    .function("getROI2", gen_wrap_cv::gen_wrap_StereoBM::getROI2)
    .function("getROI1", gen_wrap_cv::gen_wrap_StereoBM::getROI1)
    .function("getTextureThreshold", gen_wrap_cv::gen_wrap_StereoBM::getTextureThreshold)
    .function("setUniquenessRatio", gen_wrap_cv::gen_wrap_StereoBM::setUniquenessRatio)
    .function("getPreFilterCap", gen_wrap_cv::gen_wrap_StereoBM::getPreFilterCap)
    .function("getUniquenessRatio", gen_wrap_cv::gen_wrap_StereoBM::getUniquenessRatio)
    .function("setPreFilterCap", gen_wrap_cv::gen_wrap_StereoBM::setPreFilterCap)
    .function("setPreFilterType", gen_wrap_cv::gen_wrap_StereoBM::setPreFilterType)
    .function("setROI1", gen_wrap_cv::gen_wrap_StereoBM::setROI1)
    .function("getPreFilterType", gen_wrap_cv::gen_wrap_StereoBM::getPreFilterType)
    .function("getPreFilterSize", gen_wrap_cv::gen_wrap_StereoBM::getPreFilterSize)
    .function("setSmallerBlockSize", gen_wrap_cv::gen_wrap_StereoBM::setSmallerBlockSize)
    .function("setPreFilterSize", gen_wrap_cv::gen_wrap_StereoBM::setPreFilterSize)
    .function("getSmallerBlockSize", gen_wrap_cv::gen_wrap_StereoBM::getSmallerBlockSize)
    .function("setTextureThreshold", gen_wrap_cv::gen_wrap_StereoBM::setTextureThreshold)
    .class_function("create", gen_wrap_cv::gen_wrap_StereoBM::create)
    .function("setROI2", gen_wrap_cv::gen_wrap_StereoBM::setROI2)
  ;
  class_<cv::StereoSGBM,cv::StereoMatcher>("StereoSGBM")
    .function("setP2", gen_wrap_cv::gen_wrap_StereoSGBM::setP2)
    .function("setP1", gen_wrap_cv::gen_wrap_StereoSGBM::setP1)
    .function("setMode", gen_wrap_cv::gen_wrap_StereoSGBM::setMode)
    .function("getUniquenessRatio", gen_wrap_cv::gen_wrap_StereoSGBM::getUniquenessRatio)
    .function("setUniquenessRatio", gen_wrap_cv::gen_wrap_StereoSGBM::setUniquenessRatio)
    .function("getMode", gen_wrap_cv::gen_wrap_StereoSGBM::getMode)
    .class_function("create", gen_wrap_cv::gen_wrap_StereoSGBM::create)
    .function("setPreFilterCap", gen_wrap_cv::gen_wrap_StereoSGBM::setPreFilterCap)
    .function("getPreFilterCap", gen_wrap_cv::gen_wrap_StereoSGBM::getPreFilterCap)
    .function("getP2", gen_wrap_cv::gen_wrap_StereoSGBM::getP2)
    .function("getP1", gen_wrap_cv::gen_wrap_StereoSGBM::getP1)
  ;
  class_<cv::VideoCapture>("VideoCapture")
    .constructors<void (),void (const cv::String &),void (const cv::String &, int),void (int)>()
    .function("open", gen_wrap_cv::gen_wrap_VideoCapture::open)
    .function("read", gen_wrap_cv::gen_wrap_VideoCapture::read)
    .function("retrieve", gen_wrap_cv::gen_wrap_VideoCapture::retrieve)
    .function("isOpened", gen_wrap_cv::gen_wrap_VideoCapture::isOpened)
    .function("release", gen_wrap_cv::gen_wrap_VideoCapture::release)
    .function("get", gen_wrap_cv::gen_wrap_VideoCapture::get)
    .function("set", gen_wrap_cv::gen_wrap_VideoCapture::set)
    .function("grab", gen_wrap_cv::gen_wrap_VideoCapture::grab)
  ;
  class_<cv::VideoWriter>("VideoWriter")
    .constructors<void (),void (const cv::String &, int, double, Size, bool)>()
    .function("write", gen_wrap_cv::gen_wrap_VideoWriter::write)
    .function("open", gen_wrap_cv::gen_wrap_VideoWriter::open)
    .class_function("fourcc", gen_wrap_cv::gen_wrap_VideoWriter::fourcc)
    .function("isOpened", gen_wrap_cv::gen_wrap_VideoWriter::isOpened)
    .function("release", gen_wrap_cv::gen_wrap_VideoWriter::release)
    .function("get", gen_wrap_cv::gen_wrap_VideoWriter::get)
    .function("set", gen_wrap_cv::gen_wrap_VideoWriter::set)
  ;
  class_<cv::QtFont>("QtFont")
    .constructor<>()
    .property("nameFont", &cv::QtFont::nameFont)
    .property("color", &cv::QtFont::color)
    .property("font_face", &cv::QtFont::font_face)
    .property("ascii", &cv::QtFont::ascii)
    .property("greek", &cv::QtFont::greek)
    .property("cyrillic", &cv::QtFont::cyrillic)
    .property("hscale", &cv::QtFont::hscale)
    .property("vscale", &cv::QtFont::vscale)
    .property("shear", &cv::QtFont::shear)
    .property("thickness", &cv::QtFont::thickness)
    .property("dx", &cv::QtFont::dx)
    .property("line_type", &cv::QtFont::line_type)
  ;
  class_<cv::GeneralizedHough,cv::Algorithm>("GeneralizedHough")
    .function("setTemplate", gen_wrap_cv::gen_wrap_GeneralizedHough::setTemplate)
    .function("setDp", gen_wrap_cv::gen_wrap_GeneralizedHough::setDp)
    .function("setCannyLowThresh", gen_wrap_cv::gen_wrap_GeneralizedHough::setCannyLowThresh)
    .function("getMaxBufferSize", gen_wrap_cv::gen_wrap_GeneralizedHough::getMaxBufferSize)
    .function("getDp", gen_wrap_cv::gen_wrap_GeneralizedHough::getDp)
    .function("setMaxBufferSize", gen_wrap_cv::gen_wrap_GeneralizedHough::setMaxBufferSize)
    .function("getCannyLowThresh", gen_wrap_cv::gen_wrap_GeneralizedHough::getCannyLowThresh)
    .function("getCannyHighThresh", gen_wrap_cv::gen_wrap_GeneralizedHough::getCannyHighThresh)
    .function("setMinDist", gen_wrap_cv::gen_wrap_GeneralizedHough::setMinDist)
    .function("setCannyHighThresh", gen_wrap_cv::gen_wrap_GeneralizedHough::setCannyHighThresh)
    .function("getMinDist", gen_wrap_cv::gen_wrap_GeneralizedHough::getMinDist)
    .function("detect", gen_wrap_cv::gen_wrap_GeneralizedHough::detect)
  ;
  class_<cv::GeneralizedHoughBallard,cv::GeneralizedHough>("GeneralizedHoughBallard")
    .function("getVotesThreshold", gen_wrap_cv::gen_wrap_GeneralizedHoughBallard::getVotesThreshold)
    .function("setLevels", gen_wrap_cv::gen_wrap_GeneralizedHoughBallard::setLevels)
    .function("setVotesThreshold", gen_wrap_cv::gen_wrap_GeneralizedHoughBallard::setVotesThreshold)
    .function("getLevels", gen_wrap_cv::gen_wrap_GeneralizedHoughBallard::getLevels)
  ;
  class_<cv::GeneralizedHoughGuil,cv::GeneralizedHough>("GeneralizedHoughGuil")
    .function("getLevels", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::getLevels)
    .function("getAngleEpsilon", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::getAngleEpsilon)
    .function("setAngleThresh", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::setAngleThresh)
    .function("setLevels", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::setLevels)
    .function("setScaleStep", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::setScaleStep)
    .function("setMinAngle", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::setMinAngle)
    .function("setMinScale", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::setMinScale)
    .function("getMaxScale", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::getMaxScale)
    .function("setPosThresh", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::setPosThresh)
    .function("getPosThresh", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::getPosThresh)
    .function("getAngleStep", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::getAngleStep)
    .function("setMaxScale", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::setMaxScale)
    .function("setAngleStep", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::setAngleStep)
    .function("setXi", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::setXi)
    .function("getScaleStep", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::getScaleStep)
    .function("getXi", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::getXi)
    .function("getAngleThresh", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::getAngleThresh)
    .function("setScaleThresh", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::setScaleThresh)
    .function("getMinAngle", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::getMinAngle)
    .function("getMinScale", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::getMinScale)
    .function("getScaleThresh", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::getScaleThresh)
    .function("getMaxAngle", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::getMaxAngle)
    .function("setMaxAngle", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::setMaxAngle)
    .function("setAngleEpsilon", gen_wrap_cv::gen_wrap_GeneralizedHoughGuil::setAngleEpsilon)
  ;
  class_<cv::CLAHE,cv::Algorithm>("CLAHE")
    .function("setTilesGridSize", gen_wrap_cv::gen_wrap_CLAHE::setTilesGridSize)
    .function("apply", gen_wrap_cv::gen_wrap_CLAHE::apply)
    .function("setClipLimit", gen_wrap_cv::gen_wrap_CLAHE::setClipLimit)
    .function("getTilesGridSize", gen_wrap_cv::gen_wrap_CLAHE::getTilesGridSize)
    .function("collectGarbage", gen_wrap_cv::gen_wrap_CLAHE::collectGarbage)
    .function("getClipLimit", gen_wrap_cv::gen_wrap_CLAHE::getClipLimit)
  ;
  class_<cv::Subdiv2D>("Subdiv2D")
    .constructors<void (),void (Rect)>()
    .function("symEdge", gen_wrap_cv::gen_wrap_Subdiv2D::symEdge)
    .function("insert", gen_wrap_cv::gen_wrap_Subdiv2D::insert)
    .function("edgeOrg", gen_wrap_cv::gen_wrap_Subdiv2D::edgeOrg)
    .function("rotateEdge", gen_wrap_cv::gen_wrap_Subdiv2D::rotateEdge)
    .function("nextEdge", gen_wrap_cv::gen_wrap_Subdiv2D::nextEdge)
    .function("locate", gen_wrap_cv::gen_wrap_Subdiv2D::locate)
    .function("getEdgeList", gen_wrap_cv::gen_wrap_Subdiv2D::getEdgeList)
    .function("findNearest", gen_wrap_cv::gen_wrap_Subdiv2D::findNearest)
    .function("getLeadingEdgeList", gen_wrap_cv::gen_wrap_Subdiv2D::getLeadingEdgeList)
    .function("edgeDst", gen_wrap_cv::gen_wrap_Subdiv2D::edgeDst)
    .function("initDelaunay", gen_wrap_cv::gen_wrap_Subdiv2D::initDelaunay)
    .function("getVertex", gen_wrap_cv::gen_wrap_Subdiv2D::getVertex)
    .function("getVoronoiFacetList", gen_wrap_cv::gen_wrap_Subdiv2D::getVoronoiFacetList)
    .function("getTriangleList", gen_wrap_cv::gen_wrap_Subdiv2D::getTriangleList)
    .function("getEdge", gen_wrap_cv::gen_wrap_Subdiv2D::getEdge)
  ;
  class_<cv::LineSegmentDetector,cv::Algorithm>("LineSegmentDetector")
    .function("detect", gen_wrap_cv::gen_wrap_LineSegmentDetector::detect)
    .function("compareSegments", gen_wrap_cv::gen_wrap_LineSegmentDetector::compareSegments)
    .function("drawSegments", gen_wrap_cv::gen_wrap_LineSegmentDetector::drawSegments)
  ;
  class_<cv::LineIterator>("LineIterator")
    .constructors<void (const cv::Mat &, Point, Point, int, bool)>()
    .function("pos", gen_wrap_cv::gen_wrap_LineIterator::pos)
    .class_function("__mul", &cv::LineIterator::operator*)
    .property("ptr", &cv::LineIterator::ptr)
    .property("ptr0", &cv::LineIterator::ptr0)
    .property("step", &cv::LineIterator::step)
    .property("elemSize", &cv::LineIterator::elemSize)
    .property("err", &cv::LineIterator::err)
    .property("count", &cv::LineIterator::count)
    .property("minusDelta", &cv::LineIterator::minusDelta)
    .property("plusDelta", &cv::LineIterator::plusDelta)
    .property("minusStep", &cv::LineIterator::minusStep)
    .property("plusStep", &cv::LineIterator::plusStep)
  ;
  class_<cv::SimilarRects>("SimilarRects")
    .constructors<void (double)>()
    .property("eps", &cv::SimilarRects::eps)
  ;
  class_<cv::BaseCascadeClassifier,cv::Algorithm>("BaseCascadeClassifier")
    .function("getFeatureType", gen_wrap_cv::gen_wrap_BaseCascadeClassifier::getFeatureType)
    .function("getOldCascade", gen_wrap_cv::gen_wrap_BaseCascadeClassifier::getOldCascade)
    .function("empty", gen_wrap_cv::gen_wrap_BaseCascadeClassifier::empty)
    .function("isOldFormatCascade", gen_wrap_cv::gen_wrap_BaseCascadeClassifier::isOldFormatCascade)
    .function("setMaskGenerator", gen_wrap_cv::gen_wrap_BaseCascadeClassifier::setMaskGenerator)
    .function("getMaskGenerator", gen_wrap_cv::gen_wrap_BaseCascadeClassifier::getMaskGenerator)
    .function("detectMultiScale", gen_wrap_cv::gen_wrap_BaseCascadeClassifier::detectMultiScale)
    .function("getOriginalWindowSize", gen_wrap_cv::gen_wrap_BaseCascadeClassifier::getOriginalWindowSize)
    .function("load", gen_wrap_cv::gen_wrap_BaseCascadeClassifier::load)
  ;
  class_<cv::CascadeClassifier>("CascadeClassifier")
    .constructors<void (),void (const cv::String &)>()
    .function("detectMultiScale", gen_wrap_cv::gen_wrap_CascadeClassifier::detectMultiScale)
    .function("getOriginalWindowSize", gen_wrap_cv::gen_wrap_CascadeClassifier::getOriginalWindowSize)
    .function("getMaskGenerator", gen_wrap_cv::gen_wrap_CascadeClassifier::getMaskGenerator)
    .function("load", gen_wrap_cv::gen_wrap_CascadeClassifier::load)
    .class_function("convert", gen_wrap_cv::gen_wrap_CascadeClassifier::convert)
    .function("isOldFormatCascade", gen_wrap_cv::gen_wrap_CascadeClassifier::isOldFormatCascade)
    .function("getFeatureType", gen_wrap_cv::gen_wrap_CascadeClassifier::getFeatureType)
    .function("getOldCascade", gen_wrap_cv::gen_wrap_CascadeClassifier::getOldCascade)
    .function("setMaskGenerator", gen_wrap_cv::gen_wrap_CascadeClassifier::setMaskGenerator)
    .function("empty", gen_wrap_cv::gen_wrap_CascadeClassifier::empty)
    .function("read", gen_wrap_cv::gen_wrap_CascadeClassifier::read)
    .property("cc", &cv::CascadeClassifier::cc)
  ;
  class_<cv::DetectionROI>("DetectionROI")
    .constructor<>()
    .property("scale", &cv::DetectionROI::scale)
    .property("locations", &cv::DetectionROI::locations)
    .property("confidences", &cv::DetectionROI::confidences)
  ;
  class_<cv::HOGDescriptor>("HOGDescriptor")
    .constructors<void (),void (Size, Size, Size, Size, int, int, double, int, double, bool, int, bool),void (const cv::String &),void (const cv::HOGDescriptor &)>()
    .function("detectMultiScale", gen_wrap_cv::gen_wrap_HOGDescriptor::detectMultiScale)
    .class_function("getDefaultPeopleDetector", gen_wrap_cv::gen_wrap_HOGDescriptor::getDefaultPeopleDetector)
    .function("save", gen_wrap_cv::gen_wrap_HOGDescriptor::save)
    .function("setSVMDetector", gen_wrap_cv::gen_wrap_HOGDescriptor::setSVMDetector)
    .function("detect", gen_wrap_cv::gen_wrap_HOGDescriptor::detect)
    .function("copyTo", gen_wrap_cv::gen_wrap_HOGDescriptor::copyTo)
    .function("load", gen_wrap_cv::gen_wrap_HOGDescriptor::load)
    .function("getDescriptorSize", gen_wrap_cv::gen_wrap_HOGDescriptor::getDescriptorSize)
    .function("detectROI", gen_wrap_cv::gen_wrap_HOGDescriptor::detectROI)
    .function("groupRectangles", gen_wrap_cv::gen_wrap_HOGDescriptor::groupRectangles)
    .function("write", gen_wrap_cv::gen_wrap_HOGDescriptor::write)
    .class_function("getDaimlerPeopleDetector", gen_wrap_cv::gen_wrap_HOGDescriptor::getDaimlerPeopleDetector)
    .function("checkDetectorSize", gen_wrap_cv::gen_wrap_HOGDescriptor::checkDetectorSize)
    .function("readALTModel", gen_wrap_cv::gen_wrap_HOGDescriptor::readALTModel)
    .function("read", gen_wrap_cv::gen_wrap_HOGDescriptor::read)
    .function("getWinSigma", gen_wrap_cv::gen_wrap_HOGDescriptor::getWinSigma)
    .function("compute", gen_wrap_cv::gen_wrap_HOGDescriptor::compute)
    .function("detectMultiScaleROI", gen_wrap_cv::gen_wrap_HOGDescriptor::detectMultiScaleROI)
    .function("computeGradient", gen_wrap_cv::gen_wrap_HOGDescriptor::computeGradient)
    .property("winSize", &cv::HOGDescriptor::winSize)
    .property("blockSize", &cv::HOGDescriptor::blockSize)
    .property("blockStride", &cv::HOGDescriptor::blockStride)
    .property("cellSize", &cv::HOGDescriptor::cellSize)
    .property("nbins", &cv::HOGDescriptor::nbins)
    .property("derivAperture", &cv::HOGDescriptor::derivAperture)
    .property("winSigma", &cv::HOGDescriptor::winSigma)
    .property("histogramNormType", &cv::HOGDescriptor::histogramNormType)
    .property("L2HysThreshold", &cv::HOGDescriptor::L2HysThreshold)
    .property("gammaCorrection", &cv::HOGDescriptor::gammaCorrection)
    .property("svmDetector", &cv::HOGDescriptor::svmDetector)
    .property("oclSvmDetector", &cv::HOGDescriptor::oclSvmDetector)
    .property("free_coef", &cv::HOGDescriptor::free_coef)
    .property("nlevels", &cv::HOGDescriptor::nlevels)
    .property("signedGradient", &cv::HOGDescriptor::signedGradient)
  ;
  class_<cv::Tonemap,cv::Algorithm>("Tonemap")
    .function("getGamma", gen_wrap_cv::gen_wrap_Tonemap::getGamma)
    .function("process", gen_wrap_cv::gen_wrap_Tonemap::process)
    .function("setGamma", gen_wrap_cv::gen_wrap_Tonemap::setGamma)
  ;
  class_<cv::TonemapDrago,cv::Tonemap>("TonemapDrago")
    .function("getBias", gen_wrap_cv::gen_wrap_TonemapDrago::getBias)
    .function("getSaturation", gen_wrap_cv::gen_wrap_TonemapDrago::getSaturation)
    .function("setBias", gen_wrap_cv::gen_wrap_TonemapDrago::setBias)
    .function("setSaturation", gen_wrap_cv::gen_wrap_TonemapDrago::setSaturation)
  ;
  class_<cv::TonemapDurand,cv::Tonemap>("TonemapDurand")
    .function("getSigmaSpace", gen_wrap_cv::gen_wrap_TonemapDurand::getSigmaSpace)
    .function("getSigmaColor", gen_wrap_cv::gen_wrap_TonemapDurand::getSigmaColor)
    .function("getSaturation", gen_wrap_cv::gen_wrap_TonemapDurand::getSaturation)
    .function("setSaturation", gen_wrap_cv::gen_wrap_TonemapDurand::setSaturation)
    .function("setContrast", gen_wrap_cv::gen_wrap_TonemapDurand::setContrast)
    .function("setSigmaSpace", gen_wrap_cv::gen_wrap_TonemapDurand::setSigmaSpace)
    .function("setSigmaColor", gen_wrap_cv::gen_wrap_TonemapDurand::setSigmaColor)
    .function("getContrast", gen_wrap_cv::gen_wrap_TonemapDurand::getContrast)
  ;
  class_<cv::TonemapReinhard,cv::Tonemap>("TonemapReinhard")
    .function("setLightAdaptation", gen_wrap_cv::gen_wrap_TonemapReinhard::setLightAdaptation)
    .function("setColorAdaptation", gen_wrap_cv::gen_wrap_TonemapReinhard::setColorAdaptation)
    .function("setIntensity", gen_wrap_cv::gen_wrap_TonemapReinhard::setIntensity)
    .function("getColorAdaptation", gen_wrap_cv::gen_wrap_TonemapReinhard::getColorAdaptation)
    .function("getIntensity", gen_wrap_cv::gen_wrap_TonemapReinhard::getIntensity)
    .function("getLightAdaptation", gen_wrap_cv::gen_wrap_TonemapReinhard::getLightAdaptation)
  ;
  class_<cv::TonemapMantiuk,cv::Tonemap>("TonemapMantiuk")
    .function("setSaturation", gen_wrap_cv::gen_wrap_TonemapMantiuk::setSaturation)
    .function("setScale", gen_wrap_cv::gen_wrap_TonemapMantiuk::setScale)
    .function("getSaturation", gen_wrap_cv::gen_wrap_TonemapMantiuk::getSaturation)
    .function("getScale", gen_wrap_cv::gen_wrap_TonemapMantiuk::getScale)
  ;
  class_<cv::AlignExposures,cv::Algorithm>("AlignExposures")
    .function("process", gen_wrap_cv::gen_wrap_AlignExposures::process)
  ;
  class_<cv::AlignMTB,cv::AlignExposures>("AlignMTB")
    .function("getExcludeRange", gen_wrap_cv::gen_wrap_AlignMTB::getExcludeRange)
    .function("setExcludeRange", gen_wrap_cv::gen_wrap_AlignMTB::setExcludeRange)
    .function("process", gen_wrap_cv::gen_wrap_AlignMTB::process)
    .function("setCut", gen_wrap_cv::gen_wrap_AlignMTB::setCut)
    .function("shiftMat", gen_wrap_cv::gen_wrap_AlignMTB::shiftMat)
    .function("computeBitmaps", gen_wrap_cv::gen_wrap_AlignMTB::computeBitmaps)
    .function("setMaxBits", gen_wrap_cv::gen_wrap_AlignMTB::setMaxBits)
    .function("calculateShift", gen_wrap_cv::gen_wrap_AlignMTB::calculateShift)
    .function("getMaxBits", gen_wrap_cv::gen_wrap_AlignMTB::getMaxBits)
    .function("getCut", gen_wrap_cv::gen_wrap_AlignMTB::getCut)
  ;
  class_<cv::CalibrateCRF,cv::Algorithm>("CalibrateCRF")
    .function("process", gen_wrap_cv::gen_wrap_CalibrateCRF::process)
  ;
  class_<cv::CalibrateDebevec,cv::CalibrateCRF>("CalibrateDebevec")
    .function("getLambda", gen_wrap_cv::gen_wrap_CalibrateDebevec::getLambda)
    .function("setSamples", gen_wrap_cv::gen_wrap_CalibrateDebevec::setSamples)
    .function("setLambda", gen_wrap_cv::gen_wrap_CalibrateDebevec::setLambda)
    .function("getRandom", gen_wrap_cv::gen_wrap_CalibrateDebevec::getRandom)
    .function("getSamples", gen_wrap_cv::gen_wrap_CalibrateDebevec::getSamples)
    .function("setRandom", gen_wrap_cv::gen_wrap_CalibrateDebevec::setRandom)
  ;
  class_<cv::CalibrateRobertson,cv::CalibrateCRF>("CalibrateRobertson")
    .function("setMaxIter", gen_wrap_cv::gen_wrap_CalibrateRobertson::setMaxIter)
    .function("getThreshold", gen_wrap_cv::gen_wrap_CalibrateRobertson::getThreshold)
    .function("getMaxIter", gen_wrap_cv::gen_wrap_CalibrateRobertson::getMaxIter)
    .function("getRadiance", gen_wrap_cv::gen_wrap_CalibrateRobertson::getRadiance)
    .function("setThreshold", gen_wrap_cv::gen_wrap_CalibrateRobertson::setThreshold)
  ;
  class_<cv::MergeExposures,cv::Algorithm>("MergeExposures")
    .function("process", gen_wrap_cv::gen_wrap_MergeExposures::process)
  ;
  class_<cv::MergeDebevec,cv::MergeExposures>("MergeDebevec")
    .function("process", gen_wrap_cv::gen_wrap_MergeDebevec::process)
  ;
  class_<cv::MergeMertens,cv::MergeExposures>("MergeMertens")
    .function("getContrastWeight", gen_wrap_cv::gen_wrap_MergeMertens::getContrastWeight)
    .function("setContrastWeight", gen_wrap_cv::gen_wrap_MergeMertens::setContrastWeight)
    .function("setExposureWeight", gen_wrap_cv::gen_wrap_MergeMertens::setExposureWeight)
    .function("getExposureWeight", gen_wrap_cv::gen_wrap_MergeMertens::getExposureWeight)
    .function("setSaturationWeight", gen_wrap_cv::gen_wrap_MergeMertens::setSaturationWeight)
    .function("process", gen_wrap_cv::gen_wrap_MergeMertens::process)
    .function("getSaturationWeight", gen_wrap_cv::gen_wrap_MergeMertens::getSaturationWeight)
  ;
  class_<cv::MergeRobertson,cv::MergeExposures>("MergeRobertson")
    .function("process", gen_wrap_cv::gen_wrap_MergeRobertson::process)
  ;
  class_<cv::ShapeTransformer,cv::Algorithm>("ShapeTransformer")
    .function("warpImage", gen_wrap_cv::gen_wrap_ShapeTransformer::warpImage)
    .function("estimateTransformation", gen_wrap_cv::gen_wrap_ShapeTransformer::estimateTransformation)
    .function("applyTransformation", gen_wrap_cv::gen_wrap_ShapeTransformer::applyTransformation)
  ;
  class_<cv::ThinPlateSplineShapeTransformer,cv::ShapeTransformer>("ThinPlateSplineShapeTransformer")
    .function("getRegularizationParameter", gen_wrap_cv::gen_wrap_ThinPlateSplineShapeTransformer::getRegularizationParameter)
    .function("setRegularizationParameter", gen_wrap_cv::gen_wrap_ThinPlateSplineShapeTransformer::setRegularizationParameter)
  ;
  class_<cv::AffineTransformer,cv::ShapeTransformer>("AffineTransformer")
    .function("setFullAffine", gen_wrap_cv::gen_wrap_AffineTransformer::setFullAffine)
    .function("getFullAffine", gen_wrap_cv::gen_wrap_AffineTransformer::getFullAffine)
  ;
  class_<cv::HistogramCostExtractor,cv::Algorithm>("HistogramCostExtractor")
    .function("setNDummies", gen_wrap_cv::gen_wrap_HistogramCostExtractor::setNDummies)
    .function("setDefaultCost", gen_wrap_cv::gen_wrap_HistogramCostExtractor::setDefaultCost)
    .function("getNDummies", gen_wrap_cv::gen_wrap_HistogramCostExtractor::getNDummies)
    .function("getDefaultCost", gen_wrap_cv::gen_wrap_HistogramCostExtractor::getDefaultCost)
    .function("buildCostMatrix", gen_wrap_cv::gen_wrap_HistogramCostExtractor::buildCostMatrix)
  ;
  class_<cv::NormHistogramCostExtractor,cv::HistogramCostExtractor>("NormHistogramCostExtractor")
    .function("getNormFlag", gen_wrap_cv::gen_wrap_NormHistogramCostExtractor::getNormFlag)
    .function("setNormFlag", gen_wrap_cv::gen_wrap_NormHistogramCostExtractor::setNormFlag)
  ;
  class_<cv::EMDHistogramCostExtractor,cv::HistogramCostExtractor>("EMDHistogramCostExtractor")
    .function("getNormFlag", gen_wrap_cv::gen_wrap_EMDHistogramCostExtractor::getNormFlag)
    .function("setNormFlag", gen_wrap_cv::gen_wrap_EMDHistogramCostExtractor::setNormFlag)
  ;
  class_<cv::ChiHistogramCostExtractor,cv::HistogramCostExtractor>("ChiHistogramCostExtractor")
  ;
  class_<cv::EMDL1HistogramCostExtractor,cv::HistogramCostExtractor>("EMDL1HistogramCostExtractor")
  ;
  class_<cv::ShapeDistanceExtractor,cv::Algorithm>("ShapeDistanceExtractor")
    .function("computeDistance", gen_wrap_cv::gen_wrap_ShapeDistanceExtractor::computeDistance)
  ;
  class_<cv::ShapeContextDistanceExtractor,cv::ShapeDistanceExtractor>("ShapeContextDistanceExtractor")
    .function("getBendingEnergyWeight", gen_wrap_cv::gen_wrap_ShapeContextDistanceExtractor::getBendingEnergyWeight)
    .function("setImages", gen_wrap_cv::gen_wrap_ShapeContextDistanceExtractor::setImages)
    .function("getShapeContextWeight", gen_wrap_cv::gen_wrap_ShapeContextDistanceExtractor::getShapeContextWeight)
    .function("getAngularBins", gen_wrap_cv::gen_wrap_ShapeContextDistanceExtractor::getAngularBins)
    .function("getImages", gen_wrap_cv::gen_wrap_ShapeContextDistanceExtractor::getImages)
    .function("setTransformAlgorithm", gen_wrap_cv::gen_wrap_ShapeContextDistanceExtractor::setTransformAlgorithm)
    .function("setIterations", gen_wrap_cv::gen_wrap_ShapeContextDistanceExtractor::setIterations)
    .function("setOuterRadius", gen_wrap_cv::gen_wrap_ShapeContextDistanceExtractor::setOuterRadius)
    .function("getInnerRadius", gen_wrap_cv::gen_wrap_ShapeContextDistanceExtractor::getInnerRadius)
    .function("setShapeContextWeight", gen_wrap_cv::gen_wrap_ShapeContextDistanceExtractor::setShapeContextWeight)
    .function("getStdDev", gen_wrap_cv::gen_wrap_ShapeContextDistanceExtractor::getStdDev)
    .function("getCostExtractor", gen_wrap_cv::gen_wrap_ShapeContextDistanceExtractor::getCostExtractor)
    .function("getImageAppearanceWeight", gen_wrap_cv::gen_wrap_ShapeContextDistanceExtractor::getImageAppearanceWeight)
    .function("getTransformAlgorithm", gen_wrap_cv::gen_wrap_ShapeContextDistanceExtractor::getTransformAlgorithm)
    .function("getRotationInvariant", gen_wrap_cv::gen_wrap_ShapeContextDistanceExtractor::getRotationInvariant)
    .function("setImageAppearanceWeight", gen_wrap_cv::gen_wrap_ShapeContextDistanceExtractor::setImageAppearanceWeight)
    .function("setStdDev", gen_wrap_cv::gen_wrap_ShapeContextDistanceExtractor::setStdDev)
    .function("getRadialBins", gen_wrap_cv::gen_wrap_ShapeContextDistanceExtractor::getRadialBins)
    .function("setAngularBins", gen_wrap_cv::gen_wrap_ShapeContextDistanceExtractor::setAngularBins)
    .function("setBendingEnergyWeight", gen_wrap_cv::gen_wrap_ShapeContextDistanceExtractor::setBendingEnergyWeight)
    .function("getOuterRadius", gen_wrap_cv::gen_wrap_ShapeContextDistanceExtractor::getOuterRadius)
    .function("setInnerRadius", gen_wrap_cv::gen_wrap_ShapeContextDistanceExtractor::setInnerRadius)
    .function("setCostExtractor", gen_wrap_cv::gen_wrap_ShapeContextDistanceExtractor::setCostExtractor)
    .function("setRadialBins", gen_wrap_cv::gen_wrap_ShapeContextDistanceExtractor::setRadialBins)
    .function("getIterations", gen_wrap_cv::gen_wrap_ShapeContextDistanceExtractor::getIterations)
    .function("setRotationInvariant", gen_wrap_cv::gen_wrap_ShapeContextDistanceExtractor::setRotationInvariant)
  ;
  class_<cv::HausdorffDistanceExtractor,cv::ShapeDistanceExtractor>("HausdorffDistanceExtractor")
    .function("getDistanceFlag", gen_wrap_cv::gen_wrap_HausdorffDistanceExtractor::getDistanceFlag)
    .function("getRankProportion", gen_wrap_cv::gen_wrap_HausdorffDistanceExtractor::getRankProportion)
    .function("setDistanceFlag", gen_wrap_cv::gen_wrap_HausdorffDistanceExtractor::setDistanceFlag)
    .function("setRankProportion", gen_wrap_cv::gen_wrap_HausdorffDistanceExtractor::setRankProportion)
  ;
  class_<cv::WarperCreator>("WarperCreator")
    .function("create", gen_wrap_cv::gen_wrap_WarperCreator::create)
  ;
  class_<cv::PlaneWarper,cv::WarperCreator>("PlaneWarper")
    .constructor<>()
    .function("create", gen_wrap_cv::gen_wrap_PlaneWarper::create)
  ;
  class_<cv::AffineWarper,cv::WarperCreator>("AffineWarper")
    .constructor<>()
    .function("create", gen_wrap_cv::gen_wrap_AffineWarper::create)
  ;
  class_<cv::CylindricalWarper,cv::WarperCreator>("CylindricalWarper")
    .constructor<>()
    .function("create", gen_wrap_cv::gen_wrap_CylindricalWarper::create)
  ;
  class_<cv::SphericalWarper,cv::WarperCreator>("SphericalWarper")
    .constructor<>()
    .function("create", gen_wrap_cv::gen_wrap_SphericalWarper::create)
  ;
  class_<cv::FisheyeWarper,cv::WarperCreator>("FisheyeWarper")
    .constructor<>()
    .function("create", gen_wrap_cv::gen_wrap_FisheyeWarper::create)
  ;
  class_<cv::StereographicWarper,cv::WarperCreator>("StereographicWarper")
    .constructor<>()
    .function("create", gen_wrap_cv::gen_wrap_StereographicWarper::create)
  ;
  class_<cv::CompressedRectilinearWarper,cv::WarperCreator>("CompressedRectilinearWarper")
    .constructors<void (float, float)>()
    .function("create", gen_wrap_cv::gen_wrap_CompressedRectilinearWarper::create)
  ;
  class_<cv::CompressedRectilinearPortraitWarper,cv::WarperCreator>("CompressedRectilinearPortraitWarper")
    .constructors<void (float, float)>()
    .function("create", gen_wrap_cv::gen_wrap_CompressedRectilinearPortraitWarper::create)
  ;
  class_<cv::PaniniWarper,cv::WarperCreator>("PaniniWarper")
    .constructors<void (float, float)>()
    .function("create", gen_wrap_cv::gen_wrap_PaniniWarper::create)
  ;
  class_<cv::PaniniPortraitWarper,cv::WarperCreator>("PaniniPortraitWarper")
    .constructors<void (float, float)>()
    .function("create", gen_wrap_cv::gen_wrap_PaniniPortraitWarper::create)
  ;
  class_<cv::MercatorWarper,cv::WarperCreator>("MercatorWarper")
    .constructor<>()
    .function("create", gen_wrap_cv::gen_wrap_MercatorWarper::create)
  ;
  class_<cv::TransverseMercatorWarper,cv::WarperCreator>("TransverseMercatorWarper")
    .constructor<>()
    .function("create", gen_wrap_cv::gen_wrap_TransverseMercatorWarper::create)
  ;
  class_<cv::Stitcher>("Stitcher")
    .constructor<>()
    .function("bundleAdjuster", gen_wrap_cv::gen_wrap_Stitcher::bundleAdjuster)
    .function("setBlender", gen_wrap_cv::gen_wrap_Stitcher::setBlender)
    .function("panoConfidenceThresh", gen_wrap_cv::gen_wrap_Stitcher::panoConfidenceThresh)
    .function("warper", gen_wrap_cv::gen_wrap_Stitcher::warper)
    .function("setMatchingMask", gen_wrap_cv::gen_wrap_Stitcher::setMatchingMask)
    .function("featuresFinder", gen_wrap_cv::gen_wrap_Stitcher::featuresFinder)
    .class_function("createDefault", gen_wrap_cv::gen_wrap_Stitcher::createDefault)
    .function("cameras", gen_wrap_cv::gen_wrap_Stitcher::cameras)
    .function("setWaveCorrectKind", gen_wrap_cv::gen_wrap_Stitcher::setWaveCorrectKind)
    .function("setSeamFinder", gen_wrap_cv::gen_wrap_Stitcher::setSeamFinder)
    .function("setSeamEstimationResol", gen_wrap_cv::gen_wrap_Stitcher::setSeamEstimationResol)
    .function("stitch", gen_wrap_cv::gen_wrap_Stitcher::stitch)
    .function("registrationResol", gen_wrap_cv::gen_wrap_Stitcher::registrationResol)
    .function("seamEstimationResol", gen_wrap_cv::gen_wrap_Stitcher::seamEstimationResol)
    .function("estimateTransform", gen_wrap_cv::gen_wrap_Stitcher::estimateTransform)
    .function("composePanorama", gen_wrap_cv::gen_wrap_Stitcher::composePanorama)
    .function("setWarper", gen_wrap_cv::gen_wrap_Stitcher::setWarper)
    .function("compositingResol", gen_wrap_cv::gen_wrap_Stitcher::compositingResol)
    .function("featuresMatcher", gen_wrap_cv::gen_wrap_Stitcher::featuresMatcher)
    .function("setBundleAdjuster", gen_wrap_cv::gen_wrap_Stitcher::setBundleAdjuster)
    .function("setPanoConfidenceThresh", gen_wrap_cv::gen_wrap_Stitcher::setPanoConfidenceThresh)
    .class_function("create", gen_wrap_cv::gen_wrap_Stitcher::create)
    .function("setWaveCorrection", gen_wrap_cv::gen_wrap_Stitcher::setWaveCorrection)
    .function("setFeaturesFinder", gen_wrap_cv::gen_wrap_Stitcher::setFeaturesFinder)
    .function("seamFinder", gen_wrap_cv::gen_wrap_Stitcher::seamFinder)
    .function("blender", gen_wrap_cv::gen_wrap_Stitcher::blender)
    .function("matchingMask", gen_wrap_cv::gen_wrap_Stitcher::matchingMask)
    .function("setRegistrationResol", gen_wrap_cv::gen_wrap_Stitcher::setRegistrationResol)
    .function("workScale", gen_wrap_cv::gen_wrap_Stitcher::workScale)
    .function("waveCorrectKind", gen_wrap_cv::gen_wrap_Stitcher::waveCorrectKind)
    .function("exposureCompensator", gen_wrap_cv::gen_wrap_Stitcher::exposureCompensator)
    .function("component", gen_wrap_cv::gen_wrap_Stitcher::component)
    .function("waveCorrection", gen_wrap_cv::gen_wrap_Stitcher::waveCorrection)
    .function("setCompositingResol", gen_wrap_cv::gen_wrap_Stitcher::setCompositingResol)
    .function("setExposureCompensator", gen_wrap_cv::gen_wrap_Stitcher::setExposureCompensator)
    .function("setFeaturesMatcher", gen_wrap_cv::gen_wrap_Stitcher::setFeaturesMatcher)
  ;
  class_<cv::KalmanFilter>("KalmanFilter")
    .constructors<void (),void (int, int, int, int)>()
    .function("init", gen_wrap_cv::gen_wrap_KalmanFilter::init)
    .function("correct", gen_wrap_cv::gen_wrap_KalmanFilter::correct)
    .function("predict", gen_wrap_cv::gen_wrap_KalmanFilter::predict)
    .property("statePre", &cv::KalmanFilter::statePre)
    .property("statePost", &cv::KalmanFilter::statePost)
    .property("transitionMatrix", &cv::KalmanFilter::transitionMatrix)
    .property("controlMatrix", &cv::KalmanFilter::controlMatrix)
    .property("measurementMatrix", &cv::KalmanFilter::measurementMatrix)
    .property("processNoiseCov", &cv::KalmanFilter::processNoiseCov)
    .property("measurementNoiseCov", &cv::KalmanFilter::measurementNoiseCov)
    .property("errorCovPre", &cv::KalmanFilter::errorCovPre)
    .property("gain", &cv::KalmanFilter::gain)
    .property("errorCovPost", &cv::KalmanFilter::errorCovPost)
    .property("temp1", &cv::KalmanFilter::temp1)
    .property("temp2", &cv::KalmanFilter::temp2)
    .property("temp3", &cv::KalmanFilter::temp3)
    .property("temp4", &cv::KalmanFilter::temp4)
    .property("temp5", &cv::KalmanFilter::temp5)
  ;
  class_<cv::DenseOpticalFlow,cv::Algorithm>("DenseOpticalFlow")
    .function("calc", gen_wrap_cv::gen_wrap_DenseOpticalFlow::calc)
    .function("collectGarbage", gen_wrap_cv::gen_wrap_DenseOpticalFlow::collectGarbage)
  ;
  class_<cv::SparseOpticalFlow,cv::Algorithm>("SparseOpticalFlow")
    .function("calc", gen_wrap_cv::gen_wrap_SparseOpticalFlow::calc)
  ;
  class_<cv::DualTVL1OpticalFlow,cv::DenseOpticalFlow>("DualTVL1OpticalFlow")
    .function("getGamma", gen_wrap_cv::gen_wrap_DualTVL1OpticalFlow::getGamma)
    .class_function("create", gen_wrap_cv::gen_wrap_DualTVL1OpticalFlow::create)
    .function("setUseInitialFlow", gen_wrap_cv::gen_wrap_DualTVL1OpticalFlow::setUseInitialFlow)
    .function("setLambda", gen_wrap_cv::gen_wrap_DualTVL1OpticalFlow::setLambda)
    .function("setMedianFiltering", gen_wrap_cv::gen_wrap_DualTVL1OpticalFlow::setMedianFiltering)
    .function("getTau", gen_wrap_cv::gen_wrap_DualTVL1OpticalFlow::getTau)
    .function("getInnerIterations", gen_wrap_cv::gen_wrap_DualTVL1OpticalFlow::getInnerIterations)
    .function("getScaleStep", gen_wrap_cv::gen_wrap_DualTVL1OpticalFlow::getScaleStep)
    .function("setGamma", gen_wrap_cv::gen_wrap_DualTVL1OpticalFlow::setGamma)
    .function("setScaleStep", gen_wrap_cv::gen_wrap_DualTVL1OpticalFlow::setScaleStep)
    .function("getWarpingsNumber", gen_wrap_cv::gen_wrap_DualTVL1OpticalFlow::getWarpingsNumber)
    .function("getMedianFiltering", gen_wrap_cv::gen_wrap_DualTVL1OpticalFlow::getMedianFiltering)
    .function("getEpsilon", gen_wrap_cv::gen_wrap_DualTVL1OpticalFlow::getEpsilon)
    .function("setEpsilon", gen_wrap_cv::gen_wrap_DualTVL1OpticalFlow::setEpsilon)
    .function("setOuterIterations", gen_wrap_cv::gen_wrap_DualTVL1OpticalFlow::setOuterIterations)
    .function("getUseInitialFlow", gen_wrap_cv::gen_wrap_DualTVL1OpticalFlow::getUseInitialFlow)
    .function("getLambda", gen_wrap_cv::gen_wrap_DualTVL1OpticalFlow::getLambda)
    .function("setTheta", gen_wrap_cv::gen_wrap_DualTVL1OpticalFlow::setTheta)
    .function("getScalesNumber", gen_wrap_cv::gen_wrap_DualTVL1OpticalFlow::getScalesNumber)
    .function("getTheta", gen_wrap_cv::gen_wrap_DualTVL1OpticalFlow::getTheta)
    .function("setScalesNumber", gen_wrap_cv::gen_wrap_DualTVL1OpticalFlow::setScalesNumber)
    .function("getOuterIterations", gen_wrap_cv::gen_wrap_DualTVL1OpticalFlow::getOuterIterations)
    .function("setWarpingsNumber", gen_wrap_cv::gen_wrap_DualTVL1OpticalFlow::setWarpingsNumber)
    .function("setInnerIterations", gen_wrap_cv::gen_wrap_DualTVL1OpticalFlow::setInnerIterations)
    .function("setTau", gen_wrap_cv::gen_wrap_DualTVL1OpticalFlow::setTau)
  ;
  class_<cv::FarnebackOpticalFlow,cv::DenseOpticalFlow>("FarnebackOpticalFlow")
    .function("getPyrScale", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::getPyrScale)
    .function("setFastPyramids", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::setFastPyramids)
    .function("setPolyN", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::setPolyN)
    .function("setFlags", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::setFlags)
    .function("setPyrScale", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::setPyrScale)
    .function("getNumLevels", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::getNumLevels)
    .function("setNumIters", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::setNumIters)
    .function("setPolySigma", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::setPolySigma)
    .function("getFlags", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::getFlags)
    .function("getPolySigma", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::getPolySigma)
    .function("setNumLevels", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::setNumLevels)
    .function("getFastPyramids", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::getFastPyramids)
    .function("getPolyN", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::getPolyN)
    .function("setWinSize", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::setWinSize)
    .function("getNumIters", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::getNumIters)
    .function("getWinSize", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::getWinSize)
    .class_function("create", gen_wrap_cv::gen_wrap_FarnebackOpticalFlow::create)
  ;
  class_<cv::SparsePyrLKOpticalFlow,cv::SparseOpticalFlow>("SparsePyrLKOpticalFlow")
    .function("getMaxLevel", gen_wrap_cv::gen_wrap_SparsePyrLKOpticalFlow::getMaxLevel)
    .function("setFlags", gen_wrap_cv::gen_wrap_SparsePyrLKOpticalFlow::setFlags)
    .function("getMinEigThreshold", gen_wrap_cv::gen_wrap_SparsePyrLKOpticalFlow::getMinEigThreshold)
    .function("setMinEigThreshold", gen_wrap_cv::gen_wrap_SparsePyrLKOpticalFlow::setMinEigThreshold)
    .function("setWinSize", gen_wrap_cv::gen_wrap_SparsePyrLKOpticalFlow::setWinSize)
    .function("getWinSize", gen_wrap_cv::gen_wrap_SparsePyrLKOpticalFlow::getWinSize)
    .function("getFlags", gen_wrap_cv::gen_wrap_SparsePyrLKOpticalFlow::getFlags)
    .function("setTermCriteria", gen_wrap_cv::gen_wrap_SparsePyrLKOpticalFlow::setTermCriteria)
    .function("getTermCriteria", gen_wrap_cv::gen_wrap_SparsePyrLKOpticalFlow::getTermCriteria)
    .function("setMaxLevel", gen_wrap_cv::gen_wrap_SparsePyrLKOpticalFlow::setMaxLevel)
    .class_function("create", gen_wrap_cv::gen_wrap_SparsePyrLKOpticalFlow::create)
  ;
  class_<cv::BackgroundSubtractor,cv::Algorithm>("BackgroundSubtractor")
    .function("getBackgroundImage", gen_wrap_cv::gen_wrap_BackgroundSubtractor::getBackgroundImage)
    .function("apply", gen_wrap_cv::gen_wrap_BackgroundSubtractor::apply)
  ;
  class_<cv::BackgroundSubtractorMOG2,cv::BackgroundSubtractor>("BackgroundSubtractorMOG2")
    .function("setVarMax", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::setVarMax)
    .function("setVarMin", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::setVarMin)
    .function("setHistory", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::setHistory)
    .function("getVarThreshold", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::getVarThreshold)
    .function("getVarThresholdGen", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::getVarThresholdGen)
    .function("getBackgroundRatio", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::getBackgroundRatio)
    .function("setNMixtures", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::setNMixtures)
    .function("setDetectShadows", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::setDetectShadows)
    .function("setVarInit", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::setVarInit)
    .function("getComplexityReductionThreshold", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::getComplexityReductionThreshold)
    .function("getVarMax", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::getVarMax)
    .function("getShadowThreshold", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::getShadowThreshold)
    .function("setBackgroundRatio", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::setBackgroundRatio)
    .function("getHistory", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::getHistory)
    .function("setVarThreshold", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::setVarThreshold)
    .function("getVarMin", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::getVarMin)
    .function("setShadowValue", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::setShadowValue)
    .function("getVarInit", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::getVarInit)
    .function("setShadowThreshold", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::setShadowThreshold)
    .function("getShadowValue", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::getShadowValue)
    .function("setVarThresholdGen", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::setVarThresholdGen)
    .function("setComplexityReductionThreshold", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::setComplexityReductionThreshold)
    .function("getNMixtures", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::getNMixtures)
    .function("getDetectShadows", gen_wrap_cv::gen_wrap_BackgroundSubtractorMOG2::getDetectShadows)
  ;
  class_<cv::BackgroundSubtractorKNN,cv::BackgroundSubtractor>("BackgroundSubtractorKNN")
    .function("setHistory", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::setHistory)
    .function("getShadowThreshold", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::getShadowThreshold)
    .function("setShadowValue", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::setShadowValue)
    .function("getShadowValue", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::getShadowValue)
    .function("getNSamples", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::getNSamples)
    .function("setDist2Threshold", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::setDist2Threshold)
    .function("setShadowThreshold", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::setShadowThreshold)
    .function("getDist2Threshold", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::getDist2Threshold)
    .function("getkNNSamples", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::getkNNSamples)
    .function("getHistory", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::getHistory)
    .function("setNSamples", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::setNSamples)
    .function("setkNNSamples", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::setkNNSamples)
    .function("setDetectShadows", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::setDetectShadows)
    .function("getDetectShadows", gen_wrap_cv::gen_wrap_BackgroundSubtractorKNN::getDetectShadows)
  ;
  constant("DECOMP_LU", cv::DECOMP_LU);
  constant("DECOMP_SVD", cv::DECOMP_SVD);
  constant("DECOMP_EIG", cv::DECOMP_EIG);
  constant("DECOMP_CHOLESKY", cv::DECOMP_CHOLESKY);
  constant("DECOMP_QR", cv::DECOMP_QR);
  constant("DECOMP_NORMAL", cv::DECOMP_NORMAL);
  constant("NORM_INF", cv::NORM_INF);
  constant("NORM_L1", cv::NORM_L1);
  constant("NORM_L2", cv::NORM_L2);
  constant("NORM_L2SQR", cv::NORM_L2SQR);
  constant("NORM_HAMMING", cv::NORM_HAMMING);
  constant("NORM_HAMMING2", cv::NORM_HAMMING2);
  constant("NORM_TYPE_MASK", cv::NORM_TYPE_MASK);
  constant("NORM_RELATIVE", cv::NORM_RELATIVE);
  constant("NORM_MINMAX", cv::NORM_MINMAX);
  constant("CMP_EQ", cv::CMP_EQ);
  constant("CMP_GT", cv::CMP_GT);
  constant("CMP_GE", cv::CMP_GE);
  constant("CMP_LT", cv::CMP_LT);
  constant("CMP_LE", cv::CMP_LE);
  constant("CMP_NE", cv::CMP_NE);
  constant("GEMM_1_T", cv::GEMM_1_T);
  constant("GEMM_2_T", cv::GEMM_2_T);
  constant("GEMM_3_T", cv::GEMM_3_T);
  constant("DFT_INVERSE", cv::DFT_INVERSE);
  constant("DFT_SCALE", cv::DFT_SCALE);
  constant("DFT_ROWS", cv::DFT_ROWS);
  constant("DFT_COMPLEX_OUTPUT", cv::DFT_COMPLEX_OUTPUT);
  constant("DFT_REAL_OUTPUT", cv::DFT_REAL_OUTPUT);
  constant("DCT_INVERSE", cv::DCT_INVERSE);
  constant("DCT_ROWS", cv::DCT_ROWS);
  constant("BORDER_CONSTANT", cv::BORDER_CONSTANT);
  constant("BORDER_REPLICATE", cv::BORDER_REPLICATE);
  constant("BORDER_REFLECT", cv::BORDER_REFLECT);
  constant("BORDER_WRAP", cv::BORDER_WRAP);
  constant("BORDER_REFLECT_101", cv::BORDER_REFLECT_101);
  constant("BORDER_TRANSPARENT", cv::BORDER_TRANSPARENT);
  constant("BORDER_REFLECT101", cv::BORDER_REFLECT101);
  constant("BORDER_DEFAULT", cv::BORDER_DEFAULT);
  constant("BORDER_ISOLATED", cv::BORDER_ISOLATED);
  constant("ACCESS_READ", cv::ACCESS_READ);
  constant("ACCESS_WRITE", cv::ACCESS_WRITE);
  constant("ACCESS_RW", cv::ACCESS_RW);
  constant("ACCESS_MASK", cv::ACCESS_MASK);
  constant("ACCESS_FAST", cv::ACCESS_FAST);
  constant("USAGE_DEFAULT", cv::USAGE_DEFAULT);
  constant("USAGE_ALLOCATE_HOST_MEMORY", cv::USAGE_ALLOCATE_HOST_MEMORY);
  constant("USAGE_ALLOCATE_DEVICE_MEMORY", cv::USAGE_ALLOCATE_DEVICE_MEMORY);
  constant("USAGE_ALLOCATE_SHARED_MEMORY", cv::USAGE_ALLOCATE_SHARED_MEMORY);
  constant("__UMAT_USAGE_FLAGS_32BIT", cv::__UMAT_USAGE_FLAGS_32BIT);
  constant("SORT_EVERY_ROW", cv::SORT_EVERY_ROW);
  constant("SORT_EVERY_COLUMN", cv::SORT_EVERY_COLUMN);
  constant("SORT_ASCENDING", cv::SORT_ASCENDING);
  constant("SORT_DESCENDING", cv::SORT_DESCENDING);
  constant("COVAR_SCRAMBLED", cv::COVAR_SCRAMBLED);
  constant("COVAR_NORMAL", cv::COVAR_NORMAL);
  constant("COVAR_USE_AVG", cv::COVAR_USE_AVG);
  constant("COVAR_SCALE", cv::COVAR_SCALE);
  constant("COVAR_ROWS", cv::COVAR_ROWS);
  constant("COVAR_COLS", cv::COVAR_COLS);
  constant("KMEANS_RANDOM_CENTERS", cv::KMEANS_RANDOM_CENTERS);
  constant("KMEANS_PP_CENTERS", cv::KMEANS_PP_CENTERS);
  constant("KMEANS_USE_INITIAL_LABELS", cv::KMEANS_USE_INITIAL_LABELS);
  constant("FILLED", cv::FILLED);
  constant("LINE_4", cv::LINE_4);
  constant("LINE_8", cv::LINE_8);
  constant("LINE_AA", cv::LINE_AA);
  constant("FONT_HERSHEY_SIMPLEX", cv::FONT_HERSHEY_SIMPLEX);
  constant("FONT_HERSHEY_PLAIN", cv::FONT_HERSHEY_PLAIN);
  constant("FONT_HERSHEY_DUPLEX", cv::FONT_HERSHEY_DUPLEX);
  constant("FONT_HERSHEY_COMPLEX", cv::FONT_HERSHEY_COMPLEX);
  constant("FONT_HERSHEY_TRIPLEX", cv::FONT_HERSHEY_TRIPLEX);
  constant("FONT_HERSHEY_COMPLEX_SMALL", cv::FONT_HERSHEY_COMPLEX_SMALL);
  constant("FONT_HERSHEY_SCRIPT_SIMPLEX", cv::FONT_HERSHEY_SCRIPT_SIMPLEX);
  constant("FONT_HERSHEY_SCRIPT_COMPLEX", cv::FONT_HERSHEY_SCRIPT_COMPLEX);
  constant("FONT_ITALIC", cv::FONT_ITALIC);
  constant("REDUCE_SUM", cv::REDUCE_SUM);
  constant("REDUCE_AVG", cv::REDUCE_AVG);
  constant("REDUCE_MAX", cv::REDUCE_MAX);
  constant("REDUCE_MIN", cv::REDUCE_MIN);
  constant("SOLVELP_UNBOUNDED", cv::SOLVELP_UNBOUNDED);
  constant("SOLVELP_UNFEASIBLE", cv::SOLVELP_UNFEASIBLE);
  constant("SOLVELP_SINGLE", cv::SOLVELP_SINGLE);
  constant("SOLVELP_MULTI", cv::SOLVELP_MULTI);
  constant("LMEDS", cv::LMEDS);
  constant("RANSAC", cv::RANSAC);
  constant("RHO", cv::RHO);
  constant("SOLVEPNP_ITERATIVE", cv::SOLVEPNP_ITERATIVE);
  constant("SOLVEPNP_EPNP", cv::SOLVEPNP_EPNP);
  constant("SOLVEPNP_P3P", cv::SOLVEPNP_P3P);
  constant("SOLVEPNP_DLS", cv::SOLVEPNP_DLS);
  constant("SOLVEPNP_UPNP", cv::SOLVEPNP_UPNP);
  constant("CALIB_CB_ADAPTIVE_THRESH", cv::CALIB_CB_ADAPTIVE_THRESH);
  constant("CALIB_CB_NORMALIZE_IMAGE", cv::CALIB_CB_NORMALIZE_IMAGE);
  constant("CALIB_CB_FILTER_QUADS", cv::CALIB_CB_FILTER_QUADS);
  constant("CALIB_CB_FAST_CHECK", cv::CALIB_CB_FAST_CHECK);
  constant("CALIB_CB_SYMMETRIC_GRID", cv::CALIB_CB_SYMMETRIC_GRID);
  constant("CALIB_CB_ASYMMETRIC_GRID", cv::CALIB_CB_ASYMMETRIC_GRID);
  constant("CALIB_CB_CLUSTERING", cv::CALIB_CB_CLUSTERING);
  constant("CALIB_USE_INTRINSIC_GUESS", cv::CALIB_USE_INTRINSIC_GUESS);
  constant("CALIB_FIX_ASPECT_RATIO", cv::CALIB_FIX_ASPECT_RATIO);
  constant("CALIB_FIX_PRINCIPAL_POINT", cv::CALIB_FIX_PRINCIPAL_POINT);
  constant("CALIB_ZERO_TANGENT_DIST", cv::CALIB_ZERO_TANGENT_DIST);
  constant("CALIB_FIX_FOCAL_LENGTH", cv::CALIB_FIX_FOCAL_LENGTH);
  constant("CALIB_FIX_K1", cv::CALIB_FIX_K1);
  constant("CALIB_FIX_K2", cv::CALIB_FIX_K2);
  constant("CALIB_FIX_K3", cv::CALIB_FIX_K3);
  constant("CALIB_FIX_K4", cv::CALIB_FIX_K4);
  constant("CALIB_FIX_K5", cv::CALIB_FIX_K5);
  constant("CALIB_FIX_K6", cv::CALIB_FIX_K6);
  constant("CALIB_RATIONAL_MODEL", cv::CALIB_RATIONAL_MODEL);
  constant("CALIB_THIN_PRISM_MODEL", cv::CALIB_THIN_PRISM_MODEL);
  constant("CALIB_FIX_S1_S2_S3_S4", cv::CALIB_FIX_S1_S2_S3_S4);
  constant("CALIB_TILTED_MODEL", cv::CALIB_TILTED_MODEL);
  constant("CALIB_FIX_TAUX_TAUY", cv::CALIB_FIX_TAUX_TAUY);
  constant("CALIB_USE_QR", cv::CALIB_USE_QR);
  constant("CALIB_FIX_INTRINSIC", cv::CALIB_FIX_INTRINSIC);
  constant("CALIB_SAME_FOCAL_LENGTH", cv::CALIB_SAME_FOCAL_LENGTH);
  constant("CALIB_ZERO_DISPARITY", cv::CALIB_ZERO_DISPARITY);
  constant("CALIB_USE_LU", cv::CALIB_USE_LU);
  constant("FM_7POINT", cv::FM_7POINT);
  constant("FM_8POINT", cv::FM_8POINT);
  constant("FM_LMEDS", cv::FM_LMEDS);
  constant("FM_RANSAC", cv::FM_RANSAC);
  constant("IMREAD_UNCHANGED", cv::IMREAD_UNCHANGED);
  constant("IMREAD_GRAYSCALE", cv::IMREAD_GRAYSCALE);
  constant("IMREAD_COLOR", cv::IMREAD_COLOR);
  constant("IMREAD_ANYDEPTH", cv::IMREAD_ANYDEPTH);
  constant("IMREAD_ANYCOLOR", cv::IMREAD_ANYCOLOR);
  constant("IMREAD_LOAD_GDAL", cv::IMREAD_LOAD_GDAL);
  constant("IMREAD_REDUCED_GRAYSCALE_2", cv::IMREAD_REDUCED_GRAYSCALE_2);
  constant("IMREAD_REDUCED_COLOR_2", cv::IMREAD_REDUCED_COLOR_2);
  constant("IMREAD_REDUCED_GRAYSCALE_4", cv::IMREAD_REDUCED_GRAYSCALE_4);
  constant("IMREAD_REDUCED_COLOR_4", cv::IMREAD_REDUCED_COLOR_4);
  constant("IMREAD_REDUCED_GRAYSCALE_8", cv::IMREAD_REDUCED_GRAYSCALE_8);
  constant("IMREAD_REDUCED_COLOR_8", cv::IMREAD_REDUCED_COLOR_8);
  constant("IMWRITE_JPEG_QUALITY", cv::IMWRITE_JPEG_QUALITY);
  constant("IMWRITE_JPEG_PROGRESSIVE", cv::IMWRITE_JPEG_PROGRESSIVE);
  constant("IMWRITE_JPEG_OPTIMIZE", cv::IMWRITE_JPEG_OPTIMIZE);
  constant("IMWRITE_JPEG_RST_INTERVAL", cv::IMWRITE_JPEG_RST_INTERVAL);
  constant("IMWRITE_JPEG_LUMA_QUALITY", cv::IMWRITE_JPEG_LUMA_QUALITY);
  constant("IMWRITE_JPEG_CHROMA_QUALITY", cv::IMWRITE_JPEG_CHROMA_QUALITY);
  constant("IMWRITE_PNG_COMPRESSION", cv::IMWRITE_PNG_COMPRESSION);
  constant("IMWRITE_PNG_STRATEGY", cv::IMWRITE_PNG_STRATEGY);
  constant("IMWRITE_PNG_BILEVEL", cv::IMWRITE_PNG_BILEVEL);
  constant("IMWRITE_PXM_BINARY", cv::IMWRITE_PXM_BINARY);
  constant("IMWRITE_WEBP_QUALITY", cv::IMWRITE_WEBP_QUALITY);
  constant("IMWRITE_PAM_TUPLETYPE", cv::IMWRITE_PAM_TUPLETYPE);
  constant("IMWRITE_PNG_STRATEGY_DEFAULT", cv::IMWRITE_PNG_STRATEGY_DEFAULT);
  constant("IMWRITE_PNG_STRATEGY_FILTERED", cv::IMWRITE_PNG_STRATEGY_FILTERED);
  constant("IMWRITE_PNG_STRATEGY_HUFFMAN_ONLY", cv::IMWRITE_PNG_STRATEGY_HUFFMAN_ONLY);
  constant("IMWRITE_PNG_STRATEGY_RLE", cv::IMWRITE_PNG_STRATEGY_RLE);
  constant("IMWRITE_PNG_STRATEGY_FIXED", cv::IMWRITE_PNG_STRATEGY_FIXED);
  constant("IMWRITE_PAM_FORMAT_NULL", cv::IMWRITE_PAM_FORMAT_NULL);
  constant("IMWRITE_PAM_FORMAT_BLACKANDWHITE", cv::IMWRITE_PAM_FORMAT_BLACKANDWHITE);
  constant("IMWRITE_PAM_FORMAT_GRAYSCALE", cv::IMWRITE_PAM_FORMAT_GRAYSCALE);
  constant("IMWRITE_PAM_FORMAT_GRAYSCALE_ALPHA", cv::IMWRITE_PAM_FORMAT_GRAYSCALE_ALPHA);
  constant("IMWRITE_PAM_FORMAT_RGB", cv::IMWRITE_PAM_FORMAT_RGB);
  constant("IMWRITE_PAM_FORMAT_RGB_ALPHA", cv::IMWRITE_PAM_FORMAT_RGB_ALPHA);
  constant("CAP_ANY", cv::CAP_ANY);
  constant("CAP_VFW", cv::CAP_VFW);
  constant("CAP_V4L", cv::CAP_V4L);
  constant("CAP_V4L2", cv::CAP_V4L2);
  constant("CAP_FIREWIRE", cv::CAP_FIREWIRE);
  constant("CAP_FIREWARE", cv::CAP_FIREWARE);
  constant("CAP_IEEE1394", cv::CAP_IEEE1394);
  constant("CAP_DC1394", cv::CAP_DC1394);
  constant("CAP_CMU1394", cv::CAP_CMU1394);
  constant("CAP_QT", cv::CAP_QT);
  constant("CAP_UNICAP", cv::CAP_UNICAP);
  constant("CAP_DSHOW", cv::CAP_DSHOW);
  constant("CAP_PVAPI", cv::CAP_PVAPI);
  constant("CAP_OPENNI", cv::CAP_OPENNI);
  constant("CAP_OPENNI_ASUS", cv::CAP_OPENNI_ASUS);
  constant("CAP_ANDROID", cv::CAP_ANDROID);
  constant("CAP_XIAPI", cv::CAP_XIAPI);
  constant("CAP_AVFOUNDATION", cv::CAP_AVFOUNDATION);
  constant("CAP_GIGANETIX", cv::CAP_GIGANETIX);
  constant("CAP_MSMF", cv::CAP_MSMF);
  constant("CAP_WINRT", cv::CAP_WINRT);
  constant("CAP_INTELPERC", cv::CAP_INTELPERC);
  constant("CAP_OPENNI2", cv::CAP_OPENNI2);
  constant("CAP_OPENNI2_ASUS", cv::CAP_OPENNI2_ASUS);
  constant("CAP_GPHOTO2", cv::CAP_GPHOTO2);
  constant("CAP_GSTREAMER", cv::CAP_GSTREAMER);
  constant("CAP_FFMPEG", cv::CAP_FFMPEG);
  constant("CAP_IMAGES", cv::CAP_IMAGES);
  constant("CAP_ARAVIS", cv::CAP_ARAVIS);
  constant("CAP_PROP_POS_MSEC", cv::CAP_PROP_POS_MSEC);
  constant("CAP_PROP_POS_FRAMES", cv::CAP_PROP_POS_FRAMES);
  constant("CAP_PROP_POS_AVI_RATIO", cv::CAP_PROP_POS_AVI_RATIO);
  constant("CAP_PROP_FRAME_WIDTH", cv::CAP_PROP_FRAME_WIDTH);
  constant("CAP_PROP_FRAME_HEIGHT", cv::CAP_PROP_FRAME_HEIGHT);
  constant("CAP_PROP_FPS", cv::CAP_PROP_FPS);
  constant("CAP_PROP_FOURCC", cv::CAP_PROP_FOURCC);
  constant("CAP_PROP_FRAME_COUNT", cv::CAP_PROP_FRAME_COUNT);
  constant("CAP_PROP_FORMAT", cv::CAP_PROP_FORMAT);
  constant("CAP_PROP_MODE", cv::CAP_PROP_MODE);
  constant("CAP_PROP_BRIGHTNESS", cv::CAP_PROP_BRIGHTNESS);
  constant("CAP_PROP_CONTRAST", cv::CAP_PROP_CONTRAST);
  constant("CAP_PROP_SATURATION", cv::CAP_PROP_SATURATION);
  constant("CAP_PROP_HUE", cv::CAP_PROP_HUE);
  constant("CAP_PROP_GAIN", cv::CAP_PROP_GAIN);
  constant("CAP_PROP_EXPOSURE", cv::CAP_PROP_EXPOSURE);
  constant("CAP_PROP_CONVERT_RGB", cv::CAP_PROP_CONVERT_RGB);
  constant("CAP_PROP_WHITE_BALANCE_BLUE_U", cv::CAP_PROP_WHITE_BALANCE_BLUE_U);
  constant("CAP_PROP_RECTIFICATION", cv::CAP_PROP_RECTIFICATION);
  constant("CAP_PROP_MONOCHROME", cv::CAP_PROP_MONOCHROME);
  constant("CAP_PROP_SHARPNESS", cv::CAP_PROP_SHARPNESS);
  constant("CAP_PROP_AUTO_EXPOSURE", cv::CAP_PROP_AUTO_EXPOSURE);
  constant("CAP_PROP_GAMMA", cv::CAP_PROP_GAMMA);
  constant("CAP_PROP_TEMPERATURE", cv::CAP_PROP_TEMPERATURE);
  constant("CAP_PROP_TRIGGER", cv::CAP_PROP_TRIGGER);
  constant("CAP_PROP_TRIGGER_DELAY", cv::CAP_PROP_TRIGGER_DELAY);
  constant("CAP_PROP_WHITE_BALANCE_RED_V", cv::CAP_PROP_WHITE_BALANCE_RED_V);
  constant("CAP_PROP_ZOOM", cv::CAP_PROP_ZOOM);
  constant("CAP_PROP_FOCUS", cv::CAP_PROP_FOCUS);
  constant("CAP_PROP_GUID", cv::CAP_PROP_GUID);
  constant("CAP_PROP_ISO_SPEED", cv::CAP_PROP_ISO_SPEED);
  constant("CAP_PROP_BACKLIGHT", cv::CAP_PROP_BACKLIGHT);
  constant("CAP_PROP_PAN", cv::CAP_PROP_PAN);
  constant("CAP_PROP_TILT", cv::CAP_PROP_TILT);
  constant("CAP_PROP_ROLL", cv::CAP_PROP_ROLL);
  constant("CAP_PROP_IRIS", cv::CAP_PROP_IRIS);
  constant("CAP_PROP_SETTINGS", cv::CAP_PROP_SETTINGS);
  constant("CAP_PROP_BUFFERSIZE", cv::CAP_PROP_BUFFERSIZE);
  constant("CAP_PROP_AUTOFOCUS", cv::CAP_PROP_AUTOFOCUS);
  constant("CAP_MODE_BGR", cv::CAP_MODE_BGR);
  constant("CAP_MODE_RGB", cv::CAP_MODE_RGB);
  constant("CAP_MODE_GRAY", cv::CAP_MODE_GRAY);
  constant("CAP_MODE_YUYV", cv::CAP_MODE_YUYV);
  constant("VIDEOWRITER_PROP_QUALITY", cv::VIDEOWRITER_PROP_QUALITY);
  constant("VIDEOWRITER_PROP_FRAMEBYTES", cv::VIDEOWRITER_PROP_FRAMEBYTES);
  constant("VIDEOWRITER_PROP_NSTRIPES", cv::VIDEOWRITER_PROP_NSTRIPES);
  constant("CAP_PROP_DC1394_OFF", cv::CAP_PROP_DC1394_OFF);
  constant("CAP_PROP_DC1394_MODE_MANUAL", cv::CAP_PROP_DC1394_MODE_MANUAL);
  constant("CAP_PROP_DC1394_MODE_AUTO", cv::CAP_PROP_DC1394_MODE_AUTO);
  constant("CAP_PROP_DC1394_MODE_ONE_PUSH_AUTO", cv::CAP_PROP_DC1394_MODE_ONE_PUSH_AUTO);
  constant("CAP_PROP_DC1394_MAX", cv::CAP_PROP_DC1394_MAX);
  constant("CAP_OPENNI_DEPTH_GENERATOR", cv::CAP_OPENNI_DEPTH_GENERATOR);
  constant("CAP_OPENNI_IMAGE_GENERATOR", cv::CAP_OPENNI_IMAGE_GENERATOR);
  constant("CAP_OPENNI_IR_GENERATOR", cv::CAP_OPENNI_IR_GENERATOR);
  constant("CAP_OPENNI_GENERATORS_MASK", cv::CAP_OPENNI_GENERATORS_MASK);
  constant("CAP_PROP_OPENNI_OUTPUT_MODE", cv::CAP_PROP_OPENNI_OUTPUT_MODE);
  constant("CAP_PROP_OPENNI_FRAME_MAX_DEPTH", cv::CAP_PROP_OPENNI_FRAME_MAX_DEPTH);
  constant("CAP_PROP_OPENNI_BASELINE", cv::CAP_PROP_OPENNI_BASELINE);
  constant("CAP_PROP_OPENNI_FOCAL_LENGTH", cv::CAP_PROP_OPENNI_FOCAL_LENGTH);
  constant("CAP_PROP_OPENNI_REGISTRATION", cv::CAP_PROP_OPENNI_REGISTRATION);
  constant("CAP_PROP_OPENNI_REGISTRATION_ON", cv::CAP_PROP_OPENNI_REGISTRATION_ON);
  constant("CAP_PROP_OPENNI_APPROX_FRAME_SYNC", cv::CAP_PROP_OPENNI_APPROX_FRAME_SYNC);
  constant("CAP_PROP_OPENNI_MAX_BUFFER_SIZE", cv::CAP_PROP_OPENNI_MAX_BUFFER_SIZE);
  constant("CAP_PROP_OPENNI_CIRCLE_BUFFER", cv::CAP_PROP_OPENNI_CIRCLE_BUFFER);
  constant("CAP_PROP_OPENNI_MAX_TIME_DURATION", cv::CAP_PROP_OPENNI_MAX_TIME_DURATION);
  constant("CAP_PROP_OPENNI_GENERATOR_PRESENT", cv::CAP_PROP_OPENNI_GENERATOR_PRESENT);
  constant("CAP_PROP_OPENNI2_SYNC", cv::CAP_PROP_OPENNI2_SYNC);
  constant("CAP_PROP_OPENNI2_MIRROR", cv::CAP_PROP_OPENNI2_MIRROR);
  constant("CAP_OPENNI_IMAGE_GENERATOR_PRESENT", cv::CAP_OPENNI_IMAGE_GENERATOR_PRESENT);
  constant("CAP_OPENNI_IMAGE_GENERATOR_OUTPUT_MODE", cv::CAP_OPENNI_IMAGE_GENERATOR_OUTPUT_MODE);
  constant("CAP_OPENNI_DEPTH_GENERATOR_PRESENT", cv::CAP_OPENNI_DEPTH_GENERATOR_PRESENT);
  constant("CAP_OPENNI_DEPTH_GENERATOR_BASELINE", cv::CAP_OPENNI_DEPTH_GENERATOR_BASELINE);
  constant("CAP_OPENNI_DEPTH_GENERATOR_FOCAL_LENGTH", cv::CAP_OPENNI_DEPTH_GENERATOR_FOCAL_LENGTH);
  constant("CAP_OPENNI_DEPTH_GENERATOR_REGISTRATION", cv::CAP_OPENNI_DEPTH_GENERATOR_REGISTRATION);
  constant("CAP_OPENNI_DEPTH_GENERATOR_REGISTRATION_ON", cv::CAP_OPENNI_DEPTH_GENERATOR_REGISTRATION_ON);
  constant("CAP_OPENNI_IR_GENERATOR_PRESENT", cv::CAP_OPENNI_IR_GENERATOR_PRESENT);
  constant("CAP_OPENNI_DEPTH_MAP", cv::CAP_OPENNI_DEPTH_MAP);
  constant("CAP_OPENNI_POINT_CLOUD_MAP", cv::CAP_OPENNI_POINT_CLOUD_MAP);
  constant("CAP_OPENNI_DISPARITY_MAP", cv::CAP_OPENNI_DISPARITY_MAP);
  constant("CAP_OPENNI_DISPARITY_MAP_32F", cv::CAP_OPENNI_DISPARITY_MAP_32F);
  constant("CAP_OPENNI_VALID_DEPTH_MASK", cv::CAP_OPENNI_VALID_DEPTH_MASK);
  constant("CAP_OPENNI_BGR_IMAGE", cv::CAP_OPENNI_BGR_IMAGE);
  constant("CAP_OPENNI_GRAY_IMAGE", cv::CAP_OPENNI_GRAY_IMAGE);
  constant("CAP_OPENNI_IR_IMAGE", cv::CAP_OPENNI_IR_IMAGE);
  constant("CAP_OPENNI_VGA_30HZ", cv::CAP_OPENNI_VGA_30HZ);
  constant("CAP_OPENNI_SXGA_15HZ", cv::CAP_OPENNI_SXGA_15HZ);
  constant("CAP_OPENNI_SXGA_30HZ", cv::CAP_OPENNI_SXGA_30HZ);
  constant("CAP_OPENNI_QVGA_30HZ", cv::CAP_OPENNI_QVGA_30HZ);
  constant("CAP_OPENNI_QVGA_60HZ", cv::CAP_OPENNI_QVGA_60HZ);
  constant("CAP_PROP_GSTREAMER_QUEUE_LENGTH", cv::CAP_PROP_GSTREAMER_QUEUE_LENGTH);
  constant("CAP_PROP_PVAPI_MULTICASTIP", cv::CAP_PROP_PVAPI_MULTICASTIP);
  constant("CAP_PROP_PVAPI_FRAMESTARTTRIGGERMODE", cv::CAP_PROP_PVAPI_FRAMESTARTTRIGGERMODE);
  constant("CAP_PROP_PVAPI_DECIMATIONHORIZONTAL", cv::CAP_PROP_PVAPI_DECIMATIONHORIZONTAL);
  constant("CAP_PROP_PVAPI_DECIMATIONVERTICAL", cv::CAP_PROP_PVAPI_DECIMATIONVERTICAL);
  constant("CAP_PROP_PVAPI_BINNINGX", cv::CAP_PROP_PVAPI_BINNINGX);
  constant("CAP_PROP_PVAPI_BINNINGY", cv::CAP_PROP_PVAPI_BINNINGY);
  constant("CAP_PROP_PVAPI_PIXELFORMAT", cv::CAP_PROP_PVAPI_PIXELFORMAT);
  constant("CAP_PVAPI_FSTRIGMODE_FREERUN", cv::CAP_PVAPI_FSTRIGMODE_FREERUN);
  constant("CAP_PVAPI_FSTRIGMODE_SYNCIN1", cv::CAP_PVAPI_FSTRIGMODE_SYNCIN1);
  constant("CAP_PVAPI_FSTRIGMODE_SYNCIN2", cv::CAP_PVAPI_FSTRIGMODE_SYNCIN2);
  constant("CAP_PVAPI_FSTRIGMODE_FIXEDRATE", cv::CAP_PVAPI_FSTRIGMODE_FIXEDRATE);
  constant("CAP_PVAPI_FSTRIGMODE_SOFTWARE", cv::CAP_PVAPI_FSTRIGMODE_SOFTWARE);
  constant("CAP_PVAPI_DECIMATION_OFF", cv::CAP_PVAPI_DECIMATION_OFF);
  constant("CAP_PVAPI_DECIMATION_2OUTOF4", cv::CAP_PVAPI_DECIMATION_2OUTOF4);
  constant("CAP_PVAPI_DECIMATION_2OUTOF8", cv::CAP_PVAPI_DECIMATION_2OUTOF8);
  constant("CAP_PVAPI_DECIMATION_2OUTOF16", cv::CAP_PVAPI_DECIMATION_2OUTOF16);
  constant("CAP_PVAPI_PIXELFORMAT_MONO8", cv::CAP_PVAPI_PIXELFORMAT_MONO8);
  constant("CAP_PVAPI_PIXELFORMAT_MONO16", cv::CAP_PVAPI_PIXELFORMAT_MONO16);
  constant("CAP_PVAPI_PIXELFORMAT_BAYER8", cv::CAP_PVAPI_PIXELFORMAT_BAYER8);
  constant("CAP_PVAPI_PIXELFORMAT_BAYER16", cv::CAP_PVAPI_PIXELFORMAT_BAYER16);
  constant("CAP_PVAPI_PIXELFORMAT_RGB24", cv::CAP_PVAPI_PIXELFORMAT_RGB24);
  constant("CAP_PVAPI_PIXELFORMAT_BGR24", cv::CAP_PVAPI_PIXELFORMAT_BGR24);
  constant("CAP_PVAPI_PIXELFORMAT_RGBA32", cv::CAP_PVAPI_PIXELFORMAT_RGBA32);
  constant("CAP_PVAPI_PIXELFORMAT_BGRA32", cv::CAP_PVAPI_PIXELFORMAT_BGRA32);
  constant("CAP_PROP_XI_DOWNSAMPLING", cv::CAP_PROP_XI_DOWNSAMPLING);
  constant("CAP_PROP_XI_DATA_FORMAT", cv::CAP_PROP_XI_DATA_FORMAT);
  constant("CAP_PROP_XI_OFFSET_X", cv::CAP_PROP_XI_OFFSET_X);
  constant("CAP_PROP_XI_OFFSET_Y", cv::CAP_PROP_XI_OFFSET_Y);
  constant("CAP_PROP_XI_TRG_SOURCE", cv::CAP_PROP_XI_TRG_SOURCE);
  constant("CAP_PROP_XI_TRG_SOFTWARE", cv::CAP_PROP_XI_TRG_SOFTWARE);
  constant("CAP_PROP_XI_GPI_SELECTOR", cv::CAP_PROP_XI_GPI_SELECTOR);
  constant("CAP_PROP_XI_GPI_MODE", cv::CAP_PROP_XI_GPI_MODE);
  constant("CAP_PROP_XI_GPI_LEVEL", cv::CAP_PROP_XI_GPI_LEVEL);
  constant("CAP_PROP_XI_GPO_SELECTOR", cv::CAP_PROP_XI_GPO_SELECTOR);
  constant("CAP_PROP_XI_GPO_MODE", cv::CAP_PROP_XI_GPO_MODE);
  constant("CAP_PROP_XI_LED_SELECTOR", cv::CAP_PROP_XI_LED_SELECTOR);
  constant("CAP_PROP_XI_LED_MODE", cv::CAP_PROP_XI_LED_MODE);
  constant("CAP_PROP_XI_MANUAL_WB", cv::CAP_PROP_XI_MANUAL_WB);
  constant("CAP_PROP_XI_AUTO_WB", cv::CAP_PROP_XI_AUTO_WB);
  constant("CAP_PROP_XI_AEAG", cv::CAP_PROP_XI_AEAG);
  constant("CAP_PROP_XI_EXP_PRIORITY", cv::CAP_PROP_XI_EXP_PRIORITY);
  constant("CAP_PROP_XI_AE_MAX_LIMIT", cv::CAP_PROP_XI_AE_MAX_LIMIT);
  constant("CAP_PROP_XI_AG_MAX_LIMIT", cv::CAP_PROP_XI_AG_MAX_LIMIT);
  constant("CAP_PROP_XI_AEAG_LEVEL", cv::CAP_PROP_XI_AEAG_LEVEL);
  constant("CAP_PROP_XI_TIMEOUT", cv::CAP_PROP_XI_TIMEOUT);
  constant("CAP_PROP_XI_EXPOSURE", cv::CAP_PROP_XI_EXPOSURE);
  constant("CAP_PROP_XI_EXPOSURE_BURST_COUNT", cv::CAP_PROP_XI_EXPOSURE_BURST_COUNT);
  constant("CAP_PROP_XI_GAIN_SELECTOR", cv::CAP_PROP_XI_GAIN_SELECTOR);
  constant("CAP_PROP_XI_GAIN", cv::CAP_PROP_XI_GAIN);
  constant("CAP_PROP_XI_DOWNSAMPLING_TYPE", cv::CAP_PROP_XI_DOWNSAMPLING_TYPE);
  constant("CAP_PROP_XI_BINNING_SELECTOR", cv::CAP_PROP_XI_BINNING_SELECTOR);
  constant("CAP_PROP_XI_BINNING_VERTICAL", cv::CAP_PROP_XI_BINNING_VERTICAL);
  constant("CAP_PROP_XI_BINNING_HORIZONTAL", cv::CAP_PROP_XI_BINNING_HORIZONTAL);
  constant("CAP_PROP_XI_BINNING_PATTERN", cv::CAP_PROP_XI_BINNING_PATTERN);
  constant("CAP_PROP_XI_DECIMATION_SELECTOR", cv::CAP_PROP_XI_DECIMATION_SELECTOR);
  constant("CAP_PROP_XI_DECIMATION_VERTICAL", cv::CAP_PROP_XI_DECIMATION_VERTICAL);
  constant("CAP_PROP_XI_DECIMATION_HORIZONTAL", cv::CAP_PROP_XI_DECIMATION_HORIZONTAL);
  constant("CAP_PROP_XI_DECIMATION_PATTERN", cv::CAP_PROP_XI_DECIMATION_PATTERN);
  constant("CAP_PROP_XI_TEST_PATTERN_GENERATOR_SELECTOR", cv::CAP_PROP_XI_TEST_PATTERN_GENERATOR_SELECTOR);
  constant("CAP_PROP_XI_TEST_PATTERN", cv::CAP_PROP_XI_TEST_PATTERN);
  constant("CAP_PROP_XI_IMAGE_DATA_FORMAT", cv::CAP_PROP_XI_IMAGE_DATA_FORMAT);
  constant("CAP_PROP_XI_SHUTTER_TYPE", cv::CAP_PROP_XI_SHUTTER_TYPE);
  constant("CAP_PROP_XI_SENSOR_TAPS", cv::CAP_PROP_XI_SENSOR_TAPS);
  constant("CAP_PROP_XI_AEAG_ROI_OFFSET_X", cv::CAP_PROP_XI_AEAG_ROI_OFFSET_X);
  constant("CAP_PROP_XI_AEAG_ROI_OFFSET_Y", cv::CAP_PROP_XI_AEAG_ROI_OFFSET_Y);
  constant("CAP_PROP_XI_AEAG_ROI_WIDTH", cv::CAP_PROP_XI_AEAG_ROI_WIDTH);
  constant("CAP_PROP_XI_AEAG_ROI_HEIGHT", cv::CAP_PROP_XI_AEAG_ROI_HEIGHT);
  constant("CAP_PROP_XI_BPC", cv::CAP_PROP_XI_BPC);
  constant("CAP_PROP_XI_WB_KR", cv::CAP_PROP_XI_WB_KR);
  constant("CAP_PROP_XI_WB_KG", cv::CAP_PROP_XI_WB_KG);
  constant("CAP_PROP_XI_WB_KB", cv::CAP_PROP_XI_WB_KB);
  constant("CAP_PROP_XI_WIDTH", cv::CAP_PROP_XI_WIDTH);
  constant("CAP_PROP_XI_HEIGHT", cv::CAP_PROP_XI_HEIGHT);
  constant("CAP_PROP_XI_REGION_SELECTOR", cv::CAP_PROP_XI_REGION_SELECTOR);
  constant("CAP_PROP_XI_REGION_MODE", cv::CAP_PROP_XI_REGION_MODE);
  constant("CAP_PROP_XI_LIMIT_BANDWIDTH", cv::CAP_PROP_XI_LIMIT_BANDWIDTH);
  constant("CAP_PROP_XI_SENSOR_DATA_BIT_DEPTH", cv::CAP_PROP_XI_SENSOR_DATA_BIT_DEPTH);
  constant("CAP_PROP_XI_OUTPUT_DATA_BIT_DEPTH", cv::CAP_PROP_XI_OUTPUT_DATA_BIT_DEPTH);
  constant("CAP_PROP_XI_IMAGE_DATA_BIT_DEPTH", cv::CAP_PROP_XI_IMAGE_DATA_BIT_DEPTH);
  constant("CAP_PROP_XI_OUTPUT_DATA_PACKING", cv::CAP_PROP_XI_OUTPUT_DATA_PACKING);
  constant("CAP_PROP_XI_OUTPUT_DATA_PACKING_TYPE", cv::CAP_PROP_XI_OUTPUT_DATA_PACKING_TYPE);
  constant("CAP_PROP_XI_IS_COOLED", cv::CAP_PROP_XI_IS_COOLED);
  constant("CAP_PROP_XI_COOLING", cv::CAP_PROP_XI_COOLING);
  constant("CAP_PROP_XI_TARGET_TEMP", cv::CAP_PROP_XI_TARGET_TEMP);
  constant("CAP_PROP_XI_CHIP_TEMP", cv::CAP_PROP_XI_CHIP_TEMP);
  constant("CAP_PROP_XI_HOUS_TEMP", cv::CAP_PROP_XI_HOUS_TEMP);
  constant("CAP_PROP_XI_HOUS_BACK_SIDE_TEMP", cv::CAP_PROP_XI_HOUS_BACK_SIDE_TEMP);
  constant("CAP_PROP_XI_SENSOR_BOARD_TEMP", cv::CAP_PROP_XI_SENSOR_BOARD_TEMP);
  constant("CAP_PROP_XI_CMS", cv::CAP_PROP_XI_CMS);
  constant("CAP_PROP_XI_APPLY_CMS", cv::CAP_PROP_XI_APPLY_CMS);
  constant("CAP_PROP_XI_IMAGE_IS_COLOR", cv::CAP_PROP_XI_IMAGE_IS_COLOR);
  constant("CAP_PROP_XI_COLOR_FILTER_ARRAY", cv::CAP_PROP_XI_COLOR_FILTER_ARRAY);
  constant("CAP_PROP_XI_GAMMAY", cv::CAP_PROP_XI_GAMMAY);
  constant("CAP_PROP_XI_GAMMAC", cv::CAP_PROP_XI_GAMMAC);
  constant("CAP_PROP_XI_SHARPNESS", cv::CAP_PROP_XI_SHARPNESS);
  constant("CAP_PROP_XI_CC_MATRIX_00", cv::CAP_PROP_XI_CC_MATRIX_00);
  constant("CAP_PROP_XI_CC_MATRIX_01", cv::CAP_PROP_XI_CC_MATRIX_01);
  constant("CAP_PROP_XI_CC_MATRIX_02", cv::CAP_PROP_XI_CC_MATRIX_02);
  constant("CAP_PROP_XI_CC_MATRIX_03", cv::CAP_PROP_XI_CC_MATRIX_03);
  constant("CAP_PROP_XI_CC_MATRIX_10", cv::CAP_PROP_XI_CC_MATRIX_10);
  constant("CAP_PROP_XI_CC_MATRIX_11", cv::CAP_PROP_XI_CC_MATRIX_11);
  constant("CAP_PROP_XI_CC_MATRIX_12", cv::CAP_PROP_XI_CC_MATRIX_12);
  constant("CAP_PROP_XI_CC_MATRIX_13", cv::CAP_PROP_XI_CC_MATRIX_13);
  constant("CAP_PROP_XI_CC_MATRIX_20", cv::CAP_PROP_XI_CC_MATRIX_20);
  constant("CAP_PROP_XI_CC_MATRIX_21", cv::CAP_PROP_XI_CC_MATRIX_21);
  constant("CAP_PROP_XI_CC_MATRIX_22", cv::CAP_PROP_XI_CC_MATRIX_22);
  constant("CAP_PROP_XI_CC_MATRIX_23", cv::CAP_PROP_XI_CC_MATRIX_23);
  constant("CAP_PROP_XI_CC_MATRIX_30", cv::CAP_PROP_XI_CC_MATRIX_30);
  constant("CAP_PROP_XI_CC_MATRIX_31", cv::CAP_PROP_XI_CC_MATRIX_31);
  constant("CAP_PROP_XI_CC_MATRIX_32", cv::CAP_PROP_XI_CC_MATRIX_32);
  constant("CAP_PROP_XI_CC_MATRIX_33", cv::CAP_PROP_XI_CC_MATRIX_33);
  constant("CAP_PROP_XI_DEFAULT_CC_MATRIX", cv::CAP_PROP_XI_DEFAULT_CC_MATRIX);
  constant("CAP_PROP_XI_TRG_SELECTOR", cv::CAP_PROP_XI_TRG_SELECTOR);
  constant("CAP_PROP_XI_ACQ_FRAME_BURST_COUNT", cv::CAP_PROP_XI_ACQ_FRAME_BURST_COUNT);
  constant("CAP_PROP_XI_DEBOUNCE_EN", cv::CAP_PROP_XI_DEBOUNCE_EN);
  constant("CAP_PROP_XI_DEBOUNCE_T0", cv::CAP_PROP_XI_DEBOUNCE_T0);
  constant("CAP_PROP_XI_DEBOUNCE_T1", cv::CAP_PROP_XI_DEBOUNCE_T1);
  constant("CAP_PROP_XI_DEBOUNCE_POL", cv::CAP_PROP_XI_DEBOUNCE_POL);
  constant("CAP_PROP_XI_LENS_MODE", cv::CAP_PROP_XI_LENS_MODE);
  constant("CAP_PROP_XI_LENS_APERTURE_VALUE", cv::CAP_PROP_XI_LENS_APERTURE_VALUE);
  constant("CAP_PROP_XI_LENS_FOCUS_MOVEMENT_VALUE", cv::CAP_PROP_XI_LENS_FOCUS_MOVEMENT_VALUE);
  constant("CAP_PROP_XI_LENS_FOCUS_MOVE", cv::CAP_PROP_XI_LENS_FOCUS_MOVE);
  constant("CAP_PROP_XI_LENS_FOCUS_DISTANCE", cv::CAP_PROP_XI_LENS_FOCUS_DISTANCE);
  constant("CAP_PROP_XI_LENS_FOCAL_LENGTH", cv::CAP_PROP_XI_LENS_FOCAL_LENGTH);
  constant("CAP_PROP_XI_LENS_FEATURE_SELECTOR", cv::CAP_PROP_XI_LENS_FEATURE_SELECTOR);
  constant("CAP_PROP_XI_LENS_FEATURE", cv::CAP_PROP_XI_LENS_FEATURE);
  constant("CAP_PROP_XI_DEVICE_MODEL_ID", cv::CAP_PROP_XI_DEVICE_MODEL_ID);
  constant("CAP_PROP_XI_DEVICE_SN", cv::CAP_PROP_XI_DEVICE_SN);
  constant("CAP_PROP_XI_IMAGE_DATA_FORMAT_RGB32_ALPHA", cv::CAP_PROP_XI_IMAGE_DATA_FORMAT_RGB32_ALPHA);
  constant("CAP_PROP_XI_IMAGE_PAYLOAD_SIZE", cv::CAP_PROP_XI_IMAGE_PAYLOAD_SIZE);
  constant("CAP_PROP_XI_TRANSPORT_PIXEL_FORMAT", cv::CAP_PROP_XI_TRANSPORT_PIXEL_FORMAT);
  constant("CAP_PROP_XI_SENSOR_CLOCK_FREQ_HZ", cv::CAP_PROP_XI_SENSOR_CLOCK_FREQ_HZ);
  constant("CAP_PROP_XI_SENSOR_CLOCK_FREQ_INDEX", cv::CAP_PROP_XI_SENSOR_CLOCK_FREQ_INDEX);
  constant("CAP_PROP_XI_SENSOR_OUTPUT_CHANNEL_COUNT", cv::CAP_PROP_XI_SENSOR_OUTPUT_CHANNEL_COUNT);
  constant("CAP_PROP_XI_FRAMERATE", cv::CAP_PROP_XI_FRAMERATE);
  constant("CAP_PROP_XI_COUNTER_SELECTOR", cv::CAP_PROP_XI_COUNTER_SELECTOR);
  constant("CAP_PROP_XI_COUNTER_VALUE", cv::CAP_PROP_XI_COUNTER_VALUE);
  constant("CAP_PROP_XI_ACQ_TIMING_MODE", cv::CAP_PROP_XI_ACQ_TIMING_MODE);
  constant("CAP_PROP_XI_AVAILABLE_BANDWIDTH", cv::CAP_PROP_XI_AVAILABLE_BANDWIDTH);
  constant("CAP_PROP_XI_BUFFER_POLICY", cv::CAP_PROP_XI_BUFFER_POLICY);
  constant("CAP_PROP_XI_LUT_EN", cv::CAP_PROP_XI_LUT_EN);
  constant("CAP_PROP_XI_LUT_INDEX", cv::CAP_PROP_XI_LUT_INDEX);
  constant("CAP_PROP_XI_LUT_VALUE", cv::CAP_PROP_XI_LUT_VALUE);
  constant("CAP_PROP_XI_TRG_DELAY", cv::CAP_PROP_XI_TRG_DELAY);
  constant("CAP_PROP_XI_TS_RST_MODE", cv::CAP_PROP_XI_TS_RST_MODE);
  constant("CAP_PROP_XI_TS_RST_SOURCE", cv::CAP_PROP_XI_TS_RST_SOURCE);
  constant("CAP_PROP_XI_IS_DEVICE_EXIST", cv::CAP_PROP_XI_IS_DEVICE_EXIST);
  constant("CAP_PROP_XI_ACQ_BUFFER_SIZE", cv::CAP_PROP_XI_ACQ_BUFFER_SIZE);
  constant("CAP_PROP_XI_ACQ_BUFFER_SIZE_UNIT", cv::CAP_PROP_XI_ACQ_BUFFER_SIZE_UNIT);
  constant("CAP_PROP_XI_ACQ_TRANSPORT_BUFFER_SIZE", cv::CAP_PROP_XI_ACQ_TRANSPORT_BUFFER_SIZE);
  constant("CAP_PROP_XI_BUFFERS_QUEUE_SIZE", cv::CAP_PROP_XI_BUFFERS_QUEUE_SIZE);
  constant("CAP_PROP_XI_ACQ_TRANSPORT_BUFFER_COMMIT", cv::CAP_PROP_XI_ACQ_TRANSPORT_BUFFER_COMMIT);
  constant("CAP_PROP_XI_RECENT_FRAME", cv::CAP_PROP_XI_RECENT_FRAME);
  constant("CAP_PROP_XI_DEVICE_RESET", cv::CAP_PROP_XI_DEVICE_RESET);
  constant("CAP_PROP_XI_COLUMN_FPN_CORRECTION", cv::CAP_PROP_XI_COLUMN_FPN_CORRECTION);
  constant("CAP_PROP_XI_ROW_FPN_CORRECTION", cv::CAP_PROP_XI_ROW_FPN_CORRECTION);
  constant("CAP_PROP_XI_SENSOR_MODE", cv::CAP_PROP_XI_SENSOR_MODE);
  constant("CAP_PROP_XI_HDR", cv::CAP_PROP_XI_HDR);
  constant("CAP_PROP_XI_HDR_KNEEPOINT_COUNT", cv::CAP_PROP_XI_HDR_KNEEPOINT_COUNT);
  constant("CAP_PROP_XI_HDR_T1", cv::CAP_PROP_XI_HDR_T1);
  constant("CAP_PROP_XI_HDR_T2", cv::CAP_PROP_XI_HDR_T2);
  constant("CAP_PROP_XI_KNEEPOINT1", cv::CAP_PROP_XI_KNEEPOINT1);
  constant("CAP_PROP_XI_KNEEPOINT2", cv::CAP_PROP_XI_KNEEPOINT2);
  constant("CAP_PROP_XI_IMAGE_BLACK_LEVEL", cv::CAP_PROP_XI_IMAGE_BLACK_LEVEL);
  constant("CAP_PROP_XI_HW_REVISION", cv::CAP_PROP_XI_HW_REVISION);
  constant("CAP_PROP_XI_DEBUG_LEVEL", cv::CAP_PROP_XI_DEBUG_LEVEL);
  constant("CAP_PROP_XI_AUTO_BANDWIDTH_CALCULATION", cv::CAP_PROP_XI_AUTO_BANDWIDTH_CALCULATION);
  constant("CAP_PROP_XI_FFS_FILE_ID", cv::CAP_PROP_XI_FFS_FILE_ID);
  constant("CAP_PROP_XI_FFS_FILE_SIZE", cv::CAP_PROP_XI_FFS_FILE_SIZE);
  constant("CAP_PROP_XI_FREE_FFS_SIZE", cv::CAP_PROP_XI_FREE_FFS_SIZE);
  constant("CAP_PROP_XI_USED_FFS_SIZE", cv::CAP_PROP_XI_USED_FFS_SIZE);
  constant("CAP_PROP_XI_FFS_ACCESS_KEY", cv::CAP_PROP_XI_FFS_ACCESS_KEY);
  constant("CAP_PROP_XI_SENSOR_FEATURE_SELECTOR", cv::CAP_PROP_XI_SENSOR_FEATURE_SELECTOR);
  constant("CAP_PROP_XI_SENSOR_FEATURE_VALUE", cv::CAP_PROP_XI_SENSOR_FEATURE_VALUE);
  constant("CAP_PROP_IOS_DEVICE_FOCUS", cv::CAP_PROP_IOS_DEVICE_FOCUS);
  constant("CAP_PROP_IOS_DEVICE_EXPOSURE", cv::CAP_PROP_IOS_DEVICE_EXPOSURE);
  constant("CAP_PROP_IOS_DEVICE_FLASH", cv::CAP_PROP_IOS_DEVICE_FLASH);
  constant("CAP_PROP_IOS_DEVICE_WHITEBALANCE", cv::CAP_PROP_IOS_DEVICE_WHITEBALANCE);
  constant("CAP_PROP_IOS_DEVICE_TORCH", cv::CAP_PROP_IOS_DEVICE_TORCH);
  constant("CAP_PROP_GIGA_FRAME_OFFSET_X", cv::CAP_PROP_GIGA_FRAME_OFFSET_X);
  constant("CAP_PROP_GIGA_FRAME_OFFSET_Y", cv::CAP_PROP_GIGA_FRAME_OFFSET_Y);
  constant("CAP_PROP_GIGA_FRAME_WIDTH_MAX", cv::CAP_PROP_GIGA_FRAME_WIDTH_MAX);
  constant("CAP_PROP_GIGA_FRAME_HEIGH_MAX", cv::CAP_PROP_GIGA_FRAME_HEIGH_MAX);
  constant("CAP_PROP_GIGA_FRAME_SENS_WIDTH", cv::CAP_PROP_GIGA_FRAME_SENS_WIDTH);
  constant("CAP_PROP_GIGA_FRAME_SENS_HEIGH", cv::CAP_PROP_GIGA_FRAME_SENS_HEIGH);
  constant("CAP_PROP_INTELPERC_PROFILE_COUNT", cv::CAP_PROP_INTELPERC_PROFILE_COUNT);
  constant("CAP_PROP_INTELPERC_PROFILE_IDX", cv::CAP_PROP_INTELPERC_PROFILE_IDX);
  constant("CAP_PROP_INTELPERC_DEPTH_LOW_CONFIDENCE_VALUE", cv::CAP_PROP_INTELPERC_DEPTH_LOW_CONFIDENCE_VALUE);
  constant("CAP_PROP_INTELPERC_DEPTH_SATURATION_VALUE", cv::CAP_PROP_INTELPERC_DEPTH_SATURATION_VALUE);
  constant("CAP_PROP_INTELPERC_DEPTH_CONFIDENCE_THRESHOLD", cv::CAP_PROP_INTELPERC_DEPTH_CONFIDENCE_THRESHOLD);
  constant("CAP_PROP_INTELPERC_DEPTH_FOCAL_LENGTH_HORZ", cv::CAP_PROP_INTELPERC_DEPTH_FOCAL_LENGTH_HORZ);
  constant("CAP_PROP_INTELPERC_DEPTH_FOCAL_LENGTH_VERT", cv::CAP_PROP_INTELPERC_DEPTH_FOCAL_LENGTH_VERT);
  constant("CAP_INTELPERC_DEPTH_GENERATOR", cv::CAP_INTELPERC_DEPTH_GENERATOR);
  constant("CAP_INTELPERC_IMAGE_GENERATOR", cv::CAP_INTELPERC_IMAGE_GENERATOR);
  constant("CAP_INTELPERC_GENERATORS_MASK", cv::CAP_INTELPERC_GENERATORS_MASK);
  constant("CAP_INTELPERC_DEPTH_MAP", cv::CAP_INTELPERC_DEPTH_MAP);
  constant("CAP_INTELPERC_UVDEPTH_MAP", cv::CAP_INTELPERC_UVDEPTH_MAP);
  constant("CAP_INTELPERC_IR_MAP", cv::CAP_INTELPERC_IR_MAP);
  constant("CAP_INTELPERC_IMAGE", cv::CAP_INTELPERC_IMAGE);
  constant("CAP_PROP_GPHOTO2_PREVIEW", cv::CAP_PROP_GPHOTO2_PREVIEW);
  constant("CAP_PROP_GPHOTO2_WIDGET_ENUMERATE", cv::CAP_PROP_GPHOTO2_WIDGET_ENUMERATE);
  constant("CAP_PROP_GPHOTO2_RELOAD_CONFIG", cv::CAP_PROP_GPHOTO2_RELOAD_CONFIG);
  constant("CAP_PROP_GPHOTO2_RELOAD_ON_CHANGE", cv::CAP_PROP_GPHOTO2_RELOAD_ON_CHANGE);
  constant("CAP_PROP_GPHOTO2_COLLECT_MSGS", cv::CAP_PROP_GPHOTO2_COLLECT_MSGS);
  constant("CAP_PROP_GPHOTO2_FLUSH_MSGS", cv::CAP_PROP_GPHOTO2_FLUSH_MSGS);
  constant("CAP_PROP_SPEED", cv::CAP_PROP_SPEED);
  constant("CAP_PROP_APERTURE", cv::CAP_PROP_APERTURE);
  constant("CAP_PROP_EXPOSUREPROGRAM", cv::CAP_PROP_EXPOSUREPROGRAM);
  constant("CAP_PROP_VIEWFINDER", cv::CAP_PROP_VIEWFINDER);
  constant("WINDOW_NORMAL", cv::WINDOW_NORMAL);
  constant("WINDOW_AUTOSIZE", cv::WINDOW_AUTOSIZE);
  constant("WINDOW_OPENGL", cv::WINDOW_OPENGL);
  constant("WINDOW_FULLSCREEN", cv::WINDOW_FULLSCREEN);
  constant("WINDOW_FREERATIO", cv::WINDOW_FREERATIO);
  constant("WINDOW_KEEPRATIO", cv::WINDOW_KEEPRATIO);
  constant("WINDOW_GUI_EXPANDED", cv::WINDOW_GUI_EXPANDED);
  constant("WINDOW_GUI_NORMAL", cv::WINDOW_GUI_NORMAL);
  constant("WND_PROP_FULLSCREEN", cv::WND_PROP_FULLSCREEN);
  constant("WND_PROP_AUTOSIZE", cv::WND_PROP_AUTOSIZE);
  constant("WND_PROP_ASPECT_RATIO", cv::WND_PROP_ASPECT_RATIO);
  constant("WND_PROP_OPENGL", cv::WND_PROP_OPENGL);
  constant("WND_PROP_VISIBLE", cv::WND_PROP_VISIBLE);
  constant("EVENT_MOUSEMOVE", cv::EVENT_MOUSEMOVE);
  constant("EVENT_LBUTTONDOWN", cv::EVENT_LBUTTONDOWN);
  constant("EVENT_RBUTTONDOWN", cv::EVENT_RBUTTONDOWN);
  constant("EVENT_MBUTTONDOWN", cv::EVENT_MBUTTONDOWN);
  constant("EVENT_LBUTTONUP", cv::EVENT_LBUTTONUP);
  constant("EVENT_RBUTTONUP", cv::EVENT_RBUTTONUP);
  constant("EVENT_MBUTTONUP", cv::EVENT_MBUTTONUP);
  constant("EVENT_LBUTTONDBLCLK", cv::EVENT_LBUTTONDBLCLK);
  constant("EVENT_RBUTTONDBLCLK", cv::EVENT_RBUTTONDBLCLK);
  constant("EVENT_MBUTTONDBLCLK", cv::EVENT_MBUTTONDBLCLK);
  constant("EVENT_MOUSEWHEEL", cv::EVENT_MOUSEWHEEL);
  constant("EVENT_MOUSEHWHEEL", cv::EVENT_MOUSEHWHEEL);
  constant("EVENT_FLAG_LBUTTON", cv::EVENT_FLAG_LBUTTON);
  constant("EVENT_FLAG_RBUTTON", cv::EVENT_FLAG_RBUTTON);
  constant("EVENT_FLAG_MBUTTON", cv::EVENT_FLAG_MBUTTON);
  constant("EVENT_FLAG_CTRLKEY", cv::EVENT_FLAG_CTRLKEY);
  constant("EVENT_FLAG_SHIFTKEY", cv::EVENT_FLAG_SHIFTKEY);
  constant("EVENT_FLAG_ALTKEY", cv::EVENT_FLAG_ALTKEY);
  constant("QT_FONT_LIGHT", cv::QT_FONT_LIGHT);
  constant("QT_FONT_NORMAL", cv::QT_FONT_NORMAL);
  constant("QT_FONT_DEMIBOLD", cv::QT_FONT_DEMIBOLD);
  constant("QT_FONT_BOLD", cv::QT_FONT_BOLD);
  constant("QT_FONT_BLACK", cv::QT_FONT_BLACK);
  constant("QT_STYLE_NORMAL", cv::QT_STYLE_NORMAL);
  constant("QT_STYLE_ITALIC", cv::QT_STYLE_ITALIC);
  constant("QT_STYLE_OBLIQUE", cv::QT_STYLE_OBLIQUE);
  constant("QT_PUSH_BUTTON", cv::QT_PUSH_BUTTON);
  constant("QT_CHECKBOX", cv::QT_CHECKBOX);
  constant("QT_RADIOBOX", cv::QT_RADIOBOX);
  constant("QT_NEW_BUTTONBAR", cv::QT_NEW_BUTTONBAR);
  constant("MORPH_ERODE", cv::MORPH_ERODE);
  constant("MORPH_DILATE", cv::MORPH_DILATE);
  constant("MORPH_OPEN", cv::MORPH_OPEN);
  constant("MORPH_CLOSE", cv::MORPH_CLOSE);
  constant("MORPH_GRADIENT", cv::MORPH_GRADIENT);
  constant("MORPH_TOPHAT", cv::MORPH_TOPHAT);
  constant("MORPH_BLACKHAT", cv::MORPH_BLACKHAT);
  constant("MORPH_HITMISS", cv::MORPH_HITMISS);
  constant("MORPH_RECT", cv::MORPH_RECT);
  constant("MORPH_CROSS", cv::MORPH_CROSS);
  constant("MORPH_ELLIPSE", cv::MORPH_ELLIPSE);
  constant("INTER_NEAREST", cv::INTER_NEAREST);
  constant("INTER_LINEAR", cv::INTER_LINEAR);
  constant("INTER_CUBIC", cv::INTER_CUBIC);
  constant("INTER_AREA", cv::INTER_AREA);
  constant("INTER_LANCZOS4", cv::INTER_LANCZOS4);
  constant("INTER_MAX", cv::INTER_MAX);
  constant("WARP_FILL_OUTLIERS", cv::WARP_FILL_OUTLIERS);
  constant("WARP_INVERSE_MAP", cv::WARP_INVERSE_MAP);
  constant("INTER_BITS", cv::INTER_BITS);
  constant("INTER_BITS2", cv::INTER_BITS2);
  constant("INTER_TAB_SIZE", cv::INTER_TAB_SIZE);
  constant("INTER_TAB_SIZE2", cv::INTER_TAB_SIZE2);
  constant("DIST_USER", cv::DIST_USER);
  constant("DIST_L1", cv::DIST_L1);
  constant("DIST_L2", cv::DIST_L2);
  constant("DIST_C", cv::DIST_C);
  constant("DIST_L12", cv::DIST_L12);
  constant("DIST_FAIR", cv::DIST_FAIR);
  constant("DIST_WELSCH", cv::DIST_WELSCH);
  constant("DIST_HUBER", cv::DIST_HUBER);
  constant("DIST_MASK_3", cv::DIST_MASK_3);
  constant("DIST_MASK_5", cv::DIST_MASK_5);
  constant("DIST_MASK_PRECISE", cv::DIST_MASK_PRECISE);
  constant("THRESH_BINARY", cv::THRESH_BINARY);
  constant("THRESH_BINARY_INV", cv::THRESH_BINARY_INV);
  constant("THRESH_TRUNC", cv::THRESH_TRUNC);
  constant("THRESH_TOZERO", cv::THRESH_TOZERO);
  constant("THRESH_TOZERO_INV", cv::THRESH_TOZERO_INV);
  constant("THRESH_MASK", cv::THRESH_MASK);
  constant("THRESH_OTSU", cv::THRESH_OTSU);
  constant("THRESH_TRIANGLE", cv::THRESH_TRIANGLE);
  constant("ADAPTIVE_THRESH_MEAN_C", cv::ADAPTIVE_THRESH_MEAN_C);
  constant("ADAPTIVE_THRESH_GAUSSIAN_C", cv::ADAPTIVE_THRESH_GAUSSIAN_C);
  constant("PROJ_SPHERICAL_ORTHO", cv::PROJ_SPHERICAL_ORTHO);
  constant("PROJ_SPHERICAL_EQRECT", cv::PROJ_SPHERICAL_EQRECT);
  constant("GC_BGD", cv::GC_BGD);
  constant("GC_FGD", cv::GC_FGD);
  constant("GC_PR_BGD", cv::GC_PR_BGD);
  constant("GC_PR_FGD", cv::GC_PR_FGD);
  constant("GC_INIT_WITH_RECT", cv::GC_INIT_WITH_RECT);
  constant("GC_INIT_WITH_MASK", cv::GC_INIT_WITH_MASK);
  constant("GC_EVAL", cv::GC_EVAL);
  constant("DIST_LABEL_CCOMP", cv::DIST_LABEL_CCOMP);
  constant("DIST_LABEL_PIXEL", cv::DIST_LABEL_PIXEL);
  constant("FLOODFILL_FIXED_RANGE", cv::FLOODFILL_FIXED_RANGE);
  constant("FLOODFILL_MASK_ONLY", cv::FLOODFILL_MASK_ONLY);
  constant("CC_STAT_LEFT", cv::CC_STAT_LEFT);
  constant("CC_STAT_TOP", cv::CC_STAT_TOP);
  constant("CC_STAT_WIDTH", cv::CC_STAT_WIDTH);
  constant("CC_STAT_HEIGHT", cv::CC_STAT_HEIGHT);
  constant("CC_STAT_AREA", cv::CC_STAT_AREA);
  constant("CC_STAT_MAX", cv::CC_STAT_MAX);
  constant("CCL_WU", cv::CCL_WU);
  constant("CCL_DEFAULT", cv::CCL_DEFAULT);
  constant("CCL_GRANA", cv::CCL_GRANA);
  constant("RETR_EXTERNAL", cv::RETR_EXTERNAL);
  constant("RETR_LIST", cv::RETR_LIST);
  constant("RETR_CCOMP", cv::RETR_CCOMP);
  constant("RETR_TREE", cv::RETR_TREE);
  constant("RETR_FLOODFILL", cv::RETR_FLOODFILL);
  constant("CHAIN_APPROX_NONE", cv::CHAIN_APPROX_NONE);
  constant("CHAIN_APPROX_SIMPLE", cv::CHAIN_APPROX_SIMPLE);
  constant("CHAIN_APPROX_TC89_L1", cv::CHAIN_APPROX_TC89_L1);
  constant("CHAIN_APPROX_TC89_KCOS", cv::CHAIN_APPROX_TC89_KCOS);
  constant("HOUGH_STANDARD", cv::HOUGH_STANDARD);
  constant("HOUGH_PROBABILISTIC", cv::HOUGH_PROBABILISTIC);
  constant("HOUGH_MULTI_SCALE", cv::HOUGH_MULTI_SCALE);
  constant("HOUGH_GRADIENT", cv::HOUGH_GRADIENT);
  constant("LSD_REFINE_NONE", cv::LSD_REFINE_NONE);
  constant("LSD_REFINE_STD", cv::LSD_REFINE_STD);
  constant("LSD_REFINE_ADV", cv::LSD_REFINE_ADV);
  constant("HISTCMP_CORREL", cv::HISTCMP_CORREL);
  constant("HISTCMP_CHISQR", cv::HISTCMP_CHISQR);
  constant("HISTCMP_INTERSECT", cv::HISTCMP_INTERSECT);
  constant("HISTCMP_BHATTACHARYYA", cv::HISTCMP_BHATTACHARYYA);
  constant("HISTCMP_HELLINGER", cv::HISTCMP_HELLINGER);
  constant("HISTCMP_CHISQR_ALT", cv::HISTCMP_CHISQR_ALT);
  constant("HISTCMP_KL_DIV", cv::HISTCMP_KL_DIV);
  constant("COLOR_BGR2BGRA", cv::COLOR_BGR2BGRA);
  constant("COLOR_RGB2RGBA", cv::COLOR_RGB2RGBA);
  constant("COLOR_BGRA2BGR", cv::COLOR_BGRA2BGR);
  constant("COLOR_RGBA2RGB", cv::COLOR_RGBA2RGB);
  constant("COLOR_BGR2RGBA", cv::COLOR_BGR2RGBA);
  constant("COLOR_RGB2BGRA", cv::COLOR_RGB2BGRA);
  constant("COLOR_RGBA2BGR", cv::COLOR_RGBA2BGR);
  constant("COLOR_BGRA2RGB", cv::COLOR_BGRA2RGB);
  constant("COLOR_BGR2RGB", cv::COLOR_BGR2RGB);
  constant("COLOR_RGB2BGR", cv::COLOR_RGB2BGR);
  constant("COLOR_BGRA2RGBA", cv::COLOR_BGRA2RGBA);
  constant("COLOR_RGBA2BGRA", cv::COLOR_RGBA2BGRA);
  constant("COLOR_BGR2GRAY", cv::COLOR_BGR2GRAY);
  constant("COLOR_RGB2GRAY", cv::COLOR_RGB2GRAY);
  constant("COLOR_GRAY2BGR", cv::COLOR_GRAY2BGR);
  constant("COLOR_GRAY2RGB", cv::COLOR_GRAY2RGB);
  constant("COLOR_GRAY2BGRA", cv::COLOR_GRAY2BGRA);
  constant("COLOR_GRAY2RGBA", cv::COLOR_GRAY2RGBA);
  constant("COLOR_BGRA2GRAY", cv::COLOR_BGRA2GRAY);
  constant("COLOR_RGBA2GRAY", cv::COLOR_RGBA2GRAY);
  constant("COLOR_BGR2BGR565", cv::COLOR_BGR2BGR565);
  constant("COLOR_RGB2BGR565", cv::COLOR_RGB2BGR565);
  constant("COLOR_BGR5652BGR", cv::COLOR_BGR5652BGR);
  constant("COLOR_BGR5652RGB", cv::COLOR_BGR5652RGB);
  constant("COLOR_BGRA2BGR565", cv::COLOR_BGRA2BGR565);
  constant("COLOR_RGBA2BGR565", cv::COLOR_RGBA2BGR565);
  constant("COLOR_BGR5652BGRA", cv::COLOR_BGR5652BGRA);
  constant("COLOR_BGR5652RGBA", cv::COLOR_BGR5652RGBA);
  constant("COLOR_GRAY2BGR565", cv::COLOR_GRAY2BGR565);
  constant("COLOR_BGR5652GRAY", cv::COLOR_BGR5652GRAY);
  constant("COLOR_BGR2BGR555", cv::COLOR_BGR2BGR555);
  constant("COLOR_RGB2BGR555", cv::COLOR_RGB2BGR555);
  constant("COLOR_BGR5552BGR", cv::COLOR_BGR5552BGR);
  constant("COLOR_BGR5552RGB", cv::COLOR_BGR5552RGB);
  constant("COLOR_BGRA2BGR555", cv::COLOR_BGRA2BGR555);
  constant("COLOR_RGBA2BGR555", cv::COLOR_RGBA2BGR555);
  constant("COLOR_BGR5552BGRA", cv::COLOR_BGR5552BGRA);
  constant("COLOR_BGR5552RGBA", cv::COLOR_BGR5552RGBA);
  constant("COLOR_GRAY2BGR555", cv::COLOR_GRAY2BGR555);
  constant("COLOR_BGR5552GRAY", cv::COLOR_BGR5552GRAY);
  constant("COLOR_BGR2XYZ", cv::COLOR_BGR2XYZ);
  constant("COLOR_RGB2XYZ", cv::COLOR_RGB2XYZ);
  constant("COLOR_XYZ2BGR", cv::COLOR_XYZ2BGR);
  constant("COLOR_XYZ2RGB", cv::COLOR_XYZ2RGB);
  constant("COLOR_BGR2YCrCb", cv::COLOR_BGR2YCrCb);
  constant("COLOR_RGB2YCrCb", cv::COLOR_RGB2YCrCb);
  constant("COLOR_YCrCb2BGR", cv::COLOR_YCrCb2BGR);
  constant("COLOR_YCrCb2RGB", cv::COLOR_YCrCb2RGB);
  constant("COLOR_BGR2HSV", cv::COLOR_BGR2HSV);
  constant("COLOR_RGB2HSV", cv::COLOR_RGB2HSV);
  constant("COLOR_BGR2Lab", cv::COLOR_BGR2Lab);
  constant("COLOR_RGB2Lab", cv::COLOR_RGB2Lab);
  constant("COLOR_BGR2Luv", cv::COLOR_BGR2Luv);
  constant("COLOR_RGB2Luv", cv::COLOR_RGB2Luv);
  constant("COLOR_BGR2HLS", cv::COLOR_BGR2HLS);
  constant("COLOR_RGB2HLS", cv::COLOR_RGB2HLS);
  constant("COLOR_HSV2BGR", cv::COLOR_HSV2BGR);
  constant("COLOR_HSV2RGB", cv::COLOR_HSV2RGB);
  constant("COLOR_Lab2BGR", cv::COLOR_Lab2BGR);
  constant("COLOR_Lab2RGB", cv::COLOR_Lab2RGB);
  constant("COLOR_Luv2BGR", cv::COLOR_Luv2BGR);
  constant("COLOR_Luv2RGB", cv::COLOR_Luv2RGB);
  constant("COLOR_HLS2BGR", cv::COLOR_HLS2BGR);
  constant("COLOR_HLS2RGB", cv::COLOR_HLS2RGB);
  constant("COLOR_BGR2HSV_FULL", cv::COLOR_BGR2HSV_FULL);
  constant("COLOR_RGB2HSV_FULL", cv::COLOR_RGB2HSV_FULL);
  constant("COLOR_BGR2HLS_FULL", cv::COLOR_BGR2HLS_FULL);
  constant("COLOR_RGB2HLS_FULL", cv::COLOR_RGB2HLS_FULL);
  constant("COLOR_HSV2BGR_FULL", cv::COLOR_HSV2BGR_FULL);
  constant("COLOR_HSV2RGB_FULL", cv::COLOR_HSV2RGB_FULL);
  constant("COLOR_HLS2BGR_FULL", cv::COLOR_HLS2BGR_FULL);
  constant("COLOR_HLS2RGB_FULL", cv::COLOR_HLS2RGB_FULL);
  constant("COLOR_LBGR2Lab", cv::COLOR_LBGR2Lab);
  constant("COLOR_LRGB2Lab", cv::COLOR_LRGB2Lab);
  constant("COLOR_LBGR2Luv", cv::COLOR_LBGR2Luv);
  constant("COLOR_LRGB2Luv", cv::COLOR_LRGB2Luv);
  constant("COLOR_Lab2LBGR", cv::COLOR_Lab2LBGR);
  constant("COLOR_Lab2LRGB", cv::COLOR_Lab2LRGB);
  constant("COLOR_Luv2LBGR", cv::COLOR_Luv2LBGR);
  constant("COLOR_Luv2LRGB", cv::COLOR_Luv2LRGB);
  constant("COLOR_BGR2YUV", cv::COLOR_BGR2YUV);
  constant("COLOR_RGB2YUV", cv::COLOR_RGB2YUV);
  constant("COLOR_YUV2BGR", cv::COLOR_YUV2BGR);
  constant("COLOR_YUV2RGB", cv::COLOR_YUV2RGB);
  constant("COLOR_YUV2RGB_NV12", cv::COLOR_YUV2RGB_NV12);
  constant("COLOR_YUV2BGR_NV12", cv::COLOR_YUV2BGR_NV12);
  constant("COLOR_YUV2RGB_NV21", cv::COLOR_YUV2RGB_NV21);
  constant("COLOR_YUV2BGR_NV21", cv::COLOR_YUV2BGR_NV21);
  constant("COLOR_YUV420sp2RGB", cv::COLOR_YUV420sp2RGB);
  constant("COLOR_YUV420sp2BGR", cv::COLOR_YUV420sp2BGR);
  constant("COLOR_YUV2RGBA_NV12", cv::COLOR_YUV2RGBA_NV12);
  constant("COLOR_YUV2BGRA_NV12", cv::COLOR_YUV2BGRA_NV12);
  constant("COLOR_YUV2RGBA_NV21", cv::COLOR_YUV2RGBA_NV21);
  constant("COLOR_YUV2BGRA_NV21", cv::COLOR_YUV2BGRA_NV21);
  constant("COLOR_YUV420sp2RGBA", cv::COLOR_YUV420sp2RGBA);
  constant("COLOR_YUV420sp2BGRA", cv::COLOR_YUV420sp2BGRA);
  constant("COLOR_YUV2RGB_YV12", cv::COLOR_YUV2RGB_YV12);
  constant("COLOR_YUV2BGR_YV12", cv::COLOR_YUV2BGR_YV12);
  constant("COLOR_YUV2RGB_IYUV", cv::COLOR_YUV2RGB_IYUV);
  constant("COLOR_YUV2BGR_IYUV", cv::COLOR_YUV2BGR_IYUV);
  constant("COLOR_YUV2RGB_I420", cv::COLOR_YUV2RGB_I420);
  constant("COLOR_YUV2BGR_I420", cv::COLOR_YUV2BGR_I420);
  constant("COLOR_YUV420p2RGB", cv::COLOR_YUV420p2RGB);
  constant("COLOR_YUV420p2BGR", cv::COLOR_YUV420p2BGR);
  constant("COLOR_YUV2RGBA_YV12", cv::COLOR_YUV2RGBA_YV12);
  constant("COLOR_YUV2BGRA_YV12", cv::COLOR_YUV2BGRA_YV12);
  constant("COLOR_YUV2RGBA_IYUV", cv::COLOR_YUV2RGBA_IYUV);
  constant("COLOR_YUV2BGRA_IYUV", cv::COLOR_YUV2BGRA_IYUV);
  constant("COLOR_YUV2RGBA_I420", cv::COLOR_YUV2RGBA_I420);
  constant("COLOR_YUV2BGRA_I420", cv::COLOR_YUV2BGRA_I420);
  constant("COLOR_YUV420p2RGBA", cv::COLOR_YUV420p2RGBA);
  constant("COLOR_YUV420p2BGRA", cv::COLOR_YUV420p2BGRA);
  constant("COLOR_YUV2GRAY_420", cv::COLOR_YUV2GRAY_420);
  constant("COLOR_YUV2GRAY_NV21", cv::COLOR_YUV2GRAY_NV21);
  constant("COLOR_YUV2GRAY_NV12", cv::COLOR_YUV2GRAY_NV12);
  constant("COLOR_YUV2GRAY_YV12", cv::COLOR_YUV2GRAY_YV12);
  constant("COLOR_YUV2GRAY_IYUV", cv::COLOR_YUV2GRAY_IYUV);
  constant("COLOR_YUV2GRAY_I420", cv::COLOR_YUV2GRAY_I420);
  constant("COLOR_YUV420sp2GRAY", cv::COLOR_YUV420sp2GRAY);
  constant("COLOR_YUV420p2GRAY", cv::COLOR_YUV420p2GRAY);
  constant("COLOR_YUV2RGB_UYVY", cv::COLOR_YUV2RGB_UYVY);
  constant("COLOR_YUV2BGR_UYVY", cv::COLOR_YUV2BGR_UYVY);
  constant("COLOR_YUV2RGB_Y422", cv::COLOR_YUV2RGB_Y422);
  constant("COLOR_YUV2BGR_Y422", cv::COLOR_YUV2BGR_Y422);
  constant("COLOR_YUV2RGB_UYNV", cv::COLOR_YUV2RGB_UYNV);
  constant("COLOR_YUV2BGR_UYNV", cv::COLOR_YUV2BGR_UYNV);
  constant("COLOR_YUV2RGBA_UYVY", cv::COLOR_YUV2RGBA_UYVY);
  constant("COLOR_YUV2BGRA_UYVY", cv::COLOR_YUV2BGRA_UYVY);
  constant("COLOR_YUV2RGBA_Y422", cv::COLOR_YUV2RGBA_Y422);
  constant("COLOR_YUV2BGRA_Y422", cv::COLOR_YUV2BGRA_Y422);
  constant("COLOR_YUV2RGBA_UYNV", cv::COLOR_YUV2RGBA_UYNV);
  constant("COLOR_YUV2BGRA_UYNV", cv::COLOR_YUV2BGRA_UYNV);
  constant("COLOR_YUV2RGB_YUY2", cv::COLOR_YUV2RGB_YUY2);
  constant("COLOR_YUV2BGR_YUY2", cv::COLOR_YUV2BGR_YUY2);
  constant("COLOR_YUV2RGB_YVYU", cv::COLOR_YUV2RGB_YVYU);
  constant("COLOR_YUV2BGR_YVYU", cv::COLOR_YUV2BGR_YVYU);
  constant("COLOR_YUV2RGB_YUYV", cv::COLOR_YUV2RGB_YUYV);
  constant("COLOR_YUV2BGR_YUYV", cv::COLOR_YUV2BGR_YUYV);
  constant("COLOR_YUV2RGB_YUNV", cv::COLOR_YUV2RGB_YUNV);
  constant("COLOR_YUV2BGR_YUNV", cv::COLOR_YUV2BGR_YUNV);
  constant("COLOR_YUV2RGBA_YUY2", cv::COLOR_YUV2RGBA_YUY2);
  constant("COLOR_YUV2BGRA_YUY2", cv::COLOR_YUV2BGRA_YUY2);
  constant("COLOR_YUV2RGBA_YVYU", cv::COLOR_YUV2RGBA_YVYU);
  constant("COLOR_YUV2BGRA_YVYU", cv::COLOR_YUV2BGRA_YVYU);
  constant("COLOR_YUV2RGBA_YUYV", cv::COLOR_YUV2RGBA_YUYV);
  constant("COLOR_YUV2BGRA_YUYV", cv::COLOR_YUV2BGRA_YUYV);
  constant("COLOR_YUV2RGBA_YUNV", cv::COLOR_YUV2RGBA_YUNV);
  constant("COLOR_YUV2BGRA_YUNV", cv::COLOR_YUV2BGRA_YUNV);
  constant("COLOR_YUV2GRAY_UYVY", cv::COLOR_YUV2GRAY_UYVY);
  constant("COLOR_YUV2GRAY_YUY2", cv::COLOR_YUV2GRAY_YUY2);
  constant("COLOR_YUV2GRAY_Y422", cv::COLOR_YUV2GRAY_Y422);
  constant("COLOR_YUV2GRAY_UYNV", cv::COLOR_YUV2GRAY_UYNV);
  constant("COLOR_YUV2GRAY_YVYU", cv::COLOR_YUV2GRAY_YVYU);
  constant("COLOR_YUV2GRAY_YUYV", cv::COLOR_YUV2GRAY_YUYV);
  constant("COLOR_YUV2GRAY_YUNV", cv::COLOR_YUV2GRAY_YUNV);
  constant("COLOR_RGBA2mRGBA", cv::COLOR_RGBA2mRGBA);
  constant("COLOR_mRGBA2RGBA", cv::COLOR_mRGBA2RGBA);
  constant("COLOR_RGB2YUV_I420", cv::COLOR_RGB2YUV_I420);
  constant("COLOR_BGR2YUV_I420", cv::COLOR_BGR2YUV_I420);
  constant("COLOR_RGB2YUV_IYUV", cv::COLOR_RGB2YUV_IYUV);
  constant("COLOR_BGR2YUV_IYUV", cv::COLOR_BGR2YUV_IYUV);
  constant("COLOR_RGBA2YUV_I420", cv::COLOR_RGBA2YUV_I420);
  constant("COLOR_BGRA2YUV_I420", cv::COLOR_BGRA2YUV_I420);
  constant("COLOR_RGBA2YUV_IYUV", cv::COLOR_RGBA2YUV_IYUV);
  constant("COLOR_BGRA2YUV_IYUV", cv::COLOR_BGRA2YUV_IYUV);
  constant("COLOR_RGB2YUV_YV12", cv::COLOR_RGB2YUV_YV12);
  constant("COLOR_BGR2YUV_YV12", cv::COLOR_BGR2YUV_YV12);
  constant("COLOR_RGBA2YUV_YV12", cv::COLOR_RGBA2YUV_YV12);
  constant("COLOR_BGRA2YUV_YV12", cv::COLOR_BGRA2YUV_YV12);
  constant("COLOR_BayerBG2BGR", cv::COLOR_BayerBG2BGR);
  constant("COLOR_BayerGB2BGR", cv::COLOR_BayerGB2BGR);
  constant("COLOR_BayerRG2BGR", cv::COLOR_BayerRG2BGR);
  constant("COLOR_BayerGR2BGR", cv::COLOR_BayerGR2BGR);
  constant("COLOR_BayerBG2RGB", cv::COLOR_BayerBG2RGB);
  constant("COLOR_BayerGB2RGB", cv::COLOR_BayerGB2RGB);
  constant("COLOR_BayerRG2RGB", cv::COLOR_BayerRG2RGB);
  constant("COLOR_BayerGR2RGB", cv::COLOR_BayerGR2RGB);
  constant("COLOR_BayerBG2GRAY", cv::COLOR_BayerBG2GRAY);
  constant("COLOR_BayerGB2GRAY", cv::COLOR_BayerGB2GRAY);
  constant("COLOR_BayerRG2GRAY", cv::COLOR_BayerRG2GRAY);
  constant("COLOR_BayerGR2GRAY", cv::COLOR_BayerGR2GRAY);
  constant("COLOR_BayerBG2BGR_VNG", cv::COLOR_BayerBG2BGR_VNG);
  constant("COLOR_BayerGB2BGR_VNG", cv::COLOR_BayerGB2BGR_VNG);
  constant("COLOR_BayerRG2BGR_VNG", cv::COLOR_BayerRG2BGR_VNG);
  constant("COLOR_BayerGR2BGR_VNG", cv::COLOR_BayerGR2BGR_VNG);
  constant("COLOR_BayerBG2RGB_VNG", cv::COLOR_BayerBG2RGB_VNG);
  constant("COLOR_BayerGB2RGB_VNG", cv::COLOR_BayerGB2RGB_VNG);
  constant("COLOR_BayerRG2RGB_VNG", cv::COLOR_BayerRG2RGB_VNG);
  constant("COLOR_BayerGR2RGB_VNG", cv::COLOR_BayerGR2RGB_VNG);
  constant("COLOR_BayerBG2BGR_EA", cv::COLOR_BayerBG2BGR_EA);
  constant("COLOR_BayerGB2BGR_EA", cv::COLOR_BayerGB2BGR_EA);
  constant("COLOR_BayerRG2BGR_EA", cv::COLOR_BayerRG2BGR_EA);
  constant("COLOR_BayerGR2BGR_EA", cv::COLOR_BayerGR2BGR_EA);
  constant("COLOR_BayerBG2RGB_EA", cv::COLOR_BayerBG2RGB_EA);
  constant("COLOR_BayerGB2RGB_EA", cv::COLOR_BayerGB2RGB_EA);
  constant("COLOR_BayerRG2RGB_EA", cv::COLOR_BayerRG2RGB_EA);
  constant("COLOR_BayerGR2RGB_EA", cv::COLOR_BayerGR2RGB_EA);
  constant("COLOR_COLORCVT_MAX", cv::COLOR_COLORCVT_MAX);
  constant("INTERSECT_NONE", cv::INTERSECT_NONE);
  constant("INTERSECT_PARTIAL", cv::INTERSECT_PARTIAL);
  constant("INTERSECT_FULL", cv::INTERSECT_FULL);
  constant("TM_SQDIFF", cv::TM_SQDIFF);
  constant("TM_SQDIFF_NORMED", cv::TM_SQDIFF_NORMED);
  constant("TM_CCORR", cv::TM_CCORR);
  constant("TM_CCORR_NORMED", cv::TM_CCORR_NORMED);
  constant("TM_CCOEFF", cv::TM_CCOEFF);
  constant("TM_CCOEFF_NORMED", cv::TM_CCOEFF_NORMED);
  constant("COLORMAP_AUTUMN", cv::COLORMAP_AUTUMN);
  constant("COLORMAP_BONE", cv::COLORMAP_BONE);
  constant("COLORMAP_JET", cv::COLORMAP_JET);
  constant("COLORMAP_WINTER", cv::COLORMAP_WINTER);
  constant("COLORMAP_RAINBOW", cv::COLORMAP_RAINBOW);
  constant("COLORMAP_OCEAN", cv::COLORMAP_OCEAN);
  constant("COLORMAP_SUMMER", cv::COLORMAP_SUMMER);
  constant("COLORMAP_SPRING", cv::COLORMAP_SPRING);
  constant("COLORMAP_COOL", cv::COLORMAP_COOL);
  constant("COLORMAP_HSV", cv::COLORMAP_HSV);
  constant("COLORMAP_PINK", cv::COLORMAP_PINK);
  constant("COLORMAP_HOT", cv::COLORMAP_HOT);
  constant("COLORMAP_PARULA", cv::COLORMAP_PARULA);
  constant("MARKER_CROSS", cv::MARKER_CROSS);
  constant("MARKER_TILTED_CROSS", cv::MARKER_TILTED_CROSS);
  constant("MARKER_STAR", cv::MARKER_STAR);
  constant("MARKER_DIAMOND", cv::MARKER_DIAMOND);
  constant("MARKER_SQUARE", cv::MARKER_SQUARE);
  constant("MARKER_TRIANGLE_UP", cv::MARKER_TRIANGLE_UP);
  constant("MARKER_TRIANGLE_DOWN", cv::MARKER_TRIANGLE_DOWN);
  constant("CASCADE_DO_CANNY_PRUNING", cv::CASCADE_DO_CANNY_PRUNING);
  constant("CASCADE_SCALE_IMAGE", cv::CASCADE_SCALE_IMAGE);
  constant("CASCADE_FIND_BIGGEST_OBJECT", cv::CASCADE_FIND_BIGGEST_OBJECT);
  constant("CASCADE_DO_ROUGH_SEARCH", cv::CASCADE_DO_ROUGH_SEARCH);
  constant("INPAINT_NS", cv::INPAINT_NS);
  constant("INPAINT_TELEA", cv::INPAINT_TELEA);
  constant("NORMAL_CLONE", cv::NORMAL_CLONE);
  constant("MIXED_CLONE", cv::MIXED_CLONE);
  constant("MONOCHROME_TRANSFER", cv::MONOCHROME_TRANSFER);
  constant("RECURS_FILTER", cv::RECURS_FILTER);
  constant("NORMCONV_FILTER", cv::NORMCONV_FILTER);
  constant("LDR_SIZE", cv::LDR_SIZE);
  constant("OPTFLOW_USE_INITIAL_FLOW", cv::OPTFLOW_USE_INITIAL_FLOW);
  constant("OPTFLOW_LK_GET_MIN_EIGENVALS", cv::OPTFLOW_LK_GET_MIN_EIGENVALS);
  constant("OPTFLOW_FARNEBACK_GAUSSIAN", cv::OPTFLOW_FARNEBACK_GAUSSIAN);
  constant("MOTION_TRANSLATION", cv::MOTION_TRANSLATION);
  constant("MOTION_EUCLIDEAN", cv::MOTION_EUCLIDEAN);
  constant("MOTION_AFFINE", cv::MOTION_AFFINE);
  constant("MOTION_HOMOGRAPHY", cv::MOTION_HOMOGRAPHY);
#include "manual_bind.inc" 
}//end of KAGUYA_BINDINGS(cv) 

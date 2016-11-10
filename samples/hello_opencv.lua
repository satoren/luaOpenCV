cv = require("cv")
local img = cv.Mat.zeros(500, 500, cv.CV_8UC3)
cv.putText(img, 'Hello OpenCV', {50, 50}, cv.FONT_HERSHEY_SIMPLEX, 2, cv.Scalar(0, 0, 200), 2, cv.LINE_AA)
cv.imshow('test', img);
cv.waitKey(0);

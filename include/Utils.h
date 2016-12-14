/**
* This file is part of ORB-SLAM2.
*
* Copyright (C) 2014-2016 Raúl Mur-Artal <raulmur at unizar dot es> (University of Zaragoza)
* For more information see <https://github.com/raulmur/ORB_SLAM2>
*
* ORB-SLAM2 is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* ORB-SLAM2 is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with ORB-SLAM2. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef UTILS_H
#define UTILS_H

#include "orb_slam2_export.h"

namespace ORB_SLAM2
{

/**
 * @brief The Camera struct handle calibration parameters
 */
struct ORB_SLAM2_EXPORT Camera
{
    /// Instrinsic parameters
    float m_fx, m_fy, m_cx, m_cy;
    ///Distorsion parameters
    float m_k1, m_k2, m_p1, m_p2, m_k3;
    /// Size of images
    size_t m_width, m_height;
    ///Framerate
    float m_fps;
    ///Color format (0 is BGR, 1 is RGB)
    int m_rgb;
    ///Stereo baseline times fx (only used on Stereo & RGB-D)
    float m_bf;
    ///Close/Far threshold. Baseline times.(only used on Stereo & RGB-D)
    float m_thDepth;
    ///Depth map values factor (only used in RGB-D)
    float m_depthMapFactor;
};

/**
 * @brief The OrbParameters struct handle ORB parameters
 */
struct ORB_SLAM2_EXPORT OrbParameters
{
    ///Number of features per image
    unsigned int m_nFeatures;
    /// Scale factor between levels in the scale pyramid
    float m_scaleFactor;
    /// Number of levels in the scale pyramid
    int m_nLevels;
    /**
    Fast threshold
    Image is divided in a grid. At each cell FAST are extracted imposing a minimum response.
    Firstly we impose iniThFAST. If no corners are detected we impose a lower value minThFAST
    You can lower these values if your images have low contrast
    */
    unsigned int m_iniThFAST;
    unsigned int m_minThFAST;

};

/**
 * @brief The ViewerParameters struct handle parameters for viewer
 */
struct ORB_SLAM2_EXPORT ViewerParameters
{
    float m_keyFrameSize;
    unsigned int m_keyFrameLineWidth;
    unsigned int m_graphLineWidth;
    unsigned int m_pointSize;
    double m_cameraSize;
    unsigned int m_cameraLineWidth;
    int m_viewpointX;
    int m_viewpointY;
    int m_viewpointZ;
    int m_viewpointF;
};

}//namespace ORB_SLAM2

#endif //UTILS_H

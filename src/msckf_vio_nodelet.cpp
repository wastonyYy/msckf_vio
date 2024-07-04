/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2024-06-19 10:23:54
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @LastEditTime: 2024-07-04 14:37:22
 * @FilePath: \msckf_vio\src\msckf_vio_nodelet.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/*
 * COPYRIGHT AND PERMISSION NOTICE
 * Penn Software MSCKF_VIO
 * Copyright (C) 2017 The Trustees of the University of Pennsylvania
 * All rights reserved.
 */

#include <msckf_vio/msckf_vio_nodelet.h>

namespace msckf_vio {
void MsckfVioNodelet::onInit() {
  msckf_vio_ptr.reset(new MsckfVio(getPrivateNodeHandle()));
  if (!msckf_vio_ptr->initialize()) {
    ROS_ERROR("Cannot initialize MSCKF VIO...");
    return;
  }
  return;
}

PLUGINLIB_EXPORT_CLASS(msckf_vio::MsckfVioNodelet,
    nodelet::Nodelet);

} // end namespace msckf_vio


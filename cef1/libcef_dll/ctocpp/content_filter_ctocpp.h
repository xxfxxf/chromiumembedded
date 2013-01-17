// Copyright (c) 2013 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_CONTENT_FILTER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_CONTENT_FILTER_CTOCPP_H_
#pragma once

#ifndef BUILDING_CEF_SHARED
#pragma message("Warning: "__FILE__" may be accessed DLL-side only")
#else  // BUILDING_CEF_SHARED

#include "include/cef_content_filter.h"
#include "include/capi/cef_content_filter_capi.h"
#include "libcef_dll/ctocpp/ctocpp.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefContentFilterCToCpp
    : public CefCToCpp<CefContentFilterCToCpp, CefContentFilter,
        cef_content_filter_t> {
 public:
  explicit CefContentFilterCToCpp(cef_content_filter_t* str)
      : CefCToCpp<CefContentFilterCToCpp, CefContentFilter,
          cef_content_filter_t>(str) {}
  virtual ~CefContentFilterCToCpp() {}

  // CefContentFilter methods
  virtual void ProcessData(const void* data, int data_size,
      CefRefPtr<CefStreamReader>& substitute_data) OVERRIDE;
  virtual void Drain(CefRefPtr<CefStreamReader>& remainder) OVERRIDE;
};

#endif  // BUILDING_CEF_SHARED
#endif  // CEF_LIBCEF_DLL_CTOCPP_CONTENT_FILTER_CTOCPP_H_


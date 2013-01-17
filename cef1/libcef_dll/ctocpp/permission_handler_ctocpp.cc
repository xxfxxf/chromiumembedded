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

#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/frame_cpptoc.h"
#include "libcef_dll/ctocpp/permission_handler_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

bool CefPermissionHandlerCToCpp::OnBeforeScriptExtensionLoad(
    CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame,
    const CefString& extensionName) {
  if (CEF_MEMBER_MISSING(struct_, on_before_script_extension_load))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return false;
  // Verify param: frame; type: refptr_diff
  DCHECK(frame.get());
  if (!frame.get())
    return false;
  // Verify param: extensionName; type: string_byref_const
  DCHECK(!extensionName.empty());
  if (extensionName.empty())
    return false;

  // Execute
  int _retval = struct_->on_before_script_extension_load(struct_,
      CefBrowserCppToC::Wrap(browser),
      CefFrameCppToC::Wrap(frame),
      extensionName.GetStruct());

  // Return type: bool
  return _retval?true:false;
}


#ifndef NDEBUG
template<> long CefCToCpp<CefPermissionHandlerCToCpp, CefPermissionHandler,
    cef_permission_handler_t>::DebugObjCt = 0;
#endif


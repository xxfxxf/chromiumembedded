// Copyright (c) 2011 The Chromium Embedded Framework Authors. All rights
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

#include "libcef_dll/cpptoc/scheme_handler_callback_cpptoc.h"


// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK scheme_handler_callback_headers_available(
    struct _cef_scheme_handler_callback_t* self)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefSchemeHandlerCallbackCppToC::Get(self)->HeadersAvailable();
}


void CEF_CALLBACK scheme_handler_callback_bytes_available(
    struct _cef_scheme_handler_callback_t* self)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefSchemeHandlerCallbackCppToC::Get(self)->BytesAvailable();
}


void CEF_CALLBACK scheme_handler_callback_cancel(
    struct _cef_scheme_handler_callback_t* self)
{
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return;

  // Execute
  CefSchemeHandlerCallbackCppToC::Get(self)->Cancel();
}



// CONSTRUCTOR - Do not edit by hand.

CefSchemeHandlerCallbackCppToC::CefSchemeHandlerCallbackCppToC(
    CefSchemeHandlerCallback* cls)
    : CefCppToC<CefSchemeHandlerCallbackCppToC, CefSchemeHandlerCallback,
        cef_scheme_handler_callback_t>(cls)
{
  struct_.struct_.headers_available = scheme_handler_callback_headers_available;
  struct_.struct_.bytes_available = scheme_handler_callback_bytes_available;
  struct_.struct_.cancel = scheme_handler_callback_cancel;
}

#ifndef NDEBUG
template<> long CefCppToC<CefSchemeHandlerCallbackCppToC,
    CefSchemeHandlerCallback, cef_scheme_handler_callback_t>::DebugObjCt = 0;
#endif


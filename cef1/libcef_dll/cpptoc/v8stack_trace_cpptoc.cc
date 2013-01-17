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

#include "libcef_dll/cpptoc/v8stack_frame_cpptoc.h"
#include "libcef_dll/cpptoc/v8stack_trace_cpptoc.h"


// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT cef_v8stack_trace_t* cef_v8stack_trace_get_current(int frame_limit) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRefPtr<CefV8StackTrace> _retval = CefV8StackTrace::GetCurrent(
      frame_limit);

  // Return type: refptr_same
  return CefV8StackTraceCppToC::Wrap(_retval);
}


// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK v8stack_trace_is_valid(struct _cef_v8stack_trace_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefV8StackTraceCppToC::Get(self)->IsValid();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK v8stack_trace_get_frame_count(
    struct _cef_v8stack_trace_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  int _retval = CefV8StackTraceCppToC::Get(self)->GetFrameCount();

  // Return type: simple
  return _retval;
}

struct _cef_v8stack_frame_t* CEF_CALLBACK v8stack_trace_get_frame(
    struct _cef_v8stack_trace_t* self, int index) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return NULL;

  // Execute
  CefRefPtr<CefV8StackFrame> _retval = CefV8StackTraceCppToC::Get(
      self)->GetFrame(
      index);

  // Return type: refptr_same
  return CefV8StackFrameCppToC::Wrap(_retval);
}


// CONSTRUCTOR - Do not edit by hand.

CefV8StackTraceCppToC::CefV8StackTraceCppToC(CefV8StackTrace* cls)
    : CefCppToC<CefV8StackTraceCppToC, CefV8StackTrace, cef_v8stack_trace_t>(
        cls) {
  struct_.struct_.is_valid = v8stack_trace_is_valid;
  struct_.struct_.get_frame_count = v8stack_trace_get_frame_count;
  struct_.struct_.get_frame = v8stack_trace_get_frame;
}

#ifndef NDEBUG
template<> long CefCppToC<CefV8StackTraceCppToC, CefV8StackTrace,
    cef_v8stack_trace_t>::DebugObjCt = 0;
#endif


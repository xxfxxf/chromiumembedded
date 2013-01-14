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

#include "libcef_dll/cpptoc/task_runner_cpptoc.h"
#include "libcef_dll/ctocpp/task_ctocpp.h"


// GLOBAL FUNCTIONS - Body may be edited by hand.

CEF_EXPORT cef_task_runner_t* cef_task_runner_get_for_current_thread() {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRefPtr<CefTaskRunner> _retval = CefTaskRunner::GetForCurrentThread();

  // Return type: refptr_same
  return CefTaskRunnerCppToC::Wrap(_retval);
}

CEF_EXPORT cef_task_runner_t* cef_task_runner_get_for_thread(
    cef_thread_id_t threadId) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  CefRefPtr<CefTaskRunner> _retval = CefTaskRunner::GetForThread(
      threadId);

  // Return type: refptr_same
  return CefTaskRunnerCppToC::Wrap(_retval);
}


// MEMBER FUNCTIONS - Body may be edited by hand.

int CEF_CALLBACK task_runner_is_same(struct _cef_task_runner_t* self,
    struct _cef_task_runner_t* that) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: that; type: refptr_same
  DCHECK(that);
  if (!that)
    return 0;

  // Execute
  bool _retval = CefTaskRunnerCppToC::Get(self)->IsSame(
      CefTaskRunnerCppToC::Unwrap(that));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK task_runner_belongs_to_current_thread(
    struct _cef_task_runner_t* self) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefTaskRunnerCppToC::Get(self)->BelongsToCurrentThread();

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK task_runner_belongs_to_thread(struct _cef_task_runner_t* self,
    cef_thread_id_t threadId) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;

  // Execute
  bool _retval = CefTaskRunnerCppToC::Get(self)->BelongsToThread(
      threadId);

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK task_runner_post_task(struct _cef_task_runner_t* self,
    cef_task_t* task) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: task; type: refptr_diff
  DCHECK(task);
  if (!task)
    return 0;

  // Execute
  bool _retval = CefTaskRunnerCppToC::Get(self)->PostTask(
      CefTaskCToCpp::Wrap(task));

  // Return type: bool
  return _retval;
}

int CEF_CALLBACK task_runner_post_delayed_task(struct _cef_task_runner_t* self,
    cef_task_t* task, int64 delay_ms) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self)
    return 0;
  // Verify param: task; type: refptr_diff
  DCHECK(task);
  if (!task)
    return 0;

  // Execute
  bool _retval = CefTaskRunnerCppToC::Get(self)->PostDelayedTask(
      CefTaskCToCpp::Wrap(task),
      delay_ms);

  // Return type: bool
  return _retval;
}


// CONSTRUCTOR - Do not edit by hand.

CefTaskRunnerCppToC::CefTaskRunnerCppToC(CefTaskRunner* cls)
    : CefCppToC<CefTaskRunnerCppToC, CefTaskRunner, cef_task_runner_t>(cls) {
  struct_.struct_.is_same = task_runner_is_same;
  struct_.struct_.belongs_to_current_thread =
      task_runner_belongs_to_current_thread;
  struct_.struct_.belongs_to_thread = task_runner_belongs_to_thread;
  struct_.struct_.post_task = task_runner_post_task;
  struct_.struct_.post_delayed_task = task_runner_post_delayed_task;
}

#ifndef NDEBUG
template<> long CefCppToC<CefTaskRunnerCppToC, CefTaskRunner,
    cef_task_runner_t>::DebugObjCt = 0;
#endif


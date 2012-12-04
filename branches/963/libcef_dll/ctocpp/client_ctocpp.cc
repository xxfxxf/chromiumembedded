// Copyright (c) 2012 The Chromium Embedded Framework Authors. All rights
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

#include "libcef_dll/ctocpp/client_ctocpp.h"
#include "libcef_dll/ctocpp/display_handler_ctocpp.h"
#include "libcef_dll/ctocpp/drag_handler_ctocpp.h"
#include "libcef_dll/ctocpp/find_handler_ctocpp.h"
#include "libcef_dll/ctocpp/focus_handler_ctocpp.h"
#include "libcef_dll/ctocpp/geolocation_handler_ctocpp.h"
#include "libcef_dll/ctocpp/jsdialog_handler_ctocpp.h"
#include "libcef_dll/ctocpp/keyboard_handler_ctocpp.h"
#include "libcef_dll/ctocpp/life_span_handler_ctocpp.h"
#include "libcef_dll/ctocpp/load_handler_ctocpp.h"
#include "libcef_dll/ctocpp/menu_handler_ctocpp.h"
#include "libcef_dll/ctocpp/permission_handler_ctocpp.h"
#include "libcef_dll/ctocpp/print_handler_ctocpp.h"
#include "libcef_dll/ctocpp/render_handler_ctocpp.h"
#include "libcef_dll/ctocpp/request_handler_ctocpp.h"
#include "libcef_dll/ctocpp/v8context_handler_ctocpp.h"


// VIRTUAL METHODS - Body may be edited by hand.

CefRefPtr<CefLifeSpanHandler> CefClientCToCpp::GetLifeSpanHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_life_span_handler))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_life_span_handler_t* _retval = struct_->get_life_span_handler(struct_);

  // Return type: refptr_same
  return CefLifeSpanHandlerCToCpp::Wrap(_retval);
}


CefRefPtr<CefLoadHandler> CefClientCToCpp::GetLoadHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_load_handler))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_load_handler_t* _retval = struct_->get_load_handler(struct_);

  // Return type: refptr_same
  return CefLoadHandlerCToCpp::Wrap(_retval);
}


CefRefPtr<CefRequestHandler> CefClientCToCpp::GetRequestHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_request_handler))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_request_handler_t* _retval = struct_->get_request_handler(struct_);

  // Return type: refptr_same
  return CefRequestHandlerCToCpp::Wrap(_retval);
}


CefRefPtr<CefDisplayHandler> CefClientCToCpp::GetDisplayHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_display_handler))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_display_handler_t* _retval = struct_->get_display_handler(struct_);

  // Return type: refptr_same
  return CefDisplayHandlerCToCpp::Wrap(_retval);
}


CefRefPtr<CefFocusHandler> CefClientCToCpp::GetFocusHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_focus_handler))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_focus_handler_t* _retval = struct_->get_focus_handler(struct_);

  // Return type: refptr_same
  return CefFocusHandlerCToCpp::Wrap(_retval);
}


CefRefPtr<CefKeyboardHandler> CefClientCToCpp::GetKeyboardHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_keyboard_handler))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_keyboard_handler_t* _retval = struct_->get_keyboard_handler(struct_);

  // Return type: refptr_same
  return CefKeyboardHandlerCToCpp::Wrap(_retval);
}


CefRefPtr<CefMenuHandler> CefClientCToCpp::GetMenuHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_menu_handler))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_menu_handler_t* _retval = struct_->get_menu_handler(struct_);

  // Return type: refptr_same
  return CefMenuHandlerCToCpp::Wrap(_retval);
}


CefRefPtr<CefPermissionHandler> CefClientCToCpp::GetPermissionHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_permission_handler))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_permission_handler_t* _retval = struct_->get_permission_handler(struct_);

  // Return type: refptr_same
  return CefPermissionHandlerCToCpp::Wrap(_retval);
}


CefRefPtr<CefPrintHandler> CefClientCToCpp::GetPrintHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_print_handler))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_print_handler_t* _retval = struct_->get_print_handler(struct_);

  // Return type: refptr_same
  return CefPrintHandlerCToCpp::Wrap(_retval);
}


CefRefPtr<CefFindHandler> CefClientCToCpp::GetFindHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_find_handler))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_find_handler_t* _retval = struct_->get_find_handler(struct_);

  // Return type: refptr_same
  return CefFindHandlerCToCpp::Wrap(_retval);
}


CefRefPtr<CefJSDialogHandler> CefClientCToCpp::GetJSDialogHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_jsdialog_handler))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_jsdialog_handler_t* _retval = struct_->get_jsdialog_handler(struct_);

  // Return type: refptr_same
  return CefJSDialogHandlerCToCpp::Wrap(_retval);
}


CefRefPtr<CefV8ContextHandler> CefClientCToCpp::GetV8ContextHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_v8context_handler))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_v8context_handler_t* _retval = struct_->get_v8context_handler(struct_);

  // Return type: refptr_same
  return CefV8ContextHandlerCToCpp::Wrap(_retval);
}


CefRefPtr<CefRenderHandler> CefClientCToCpp::GetRenderHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_render_handler))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_render_handler_t* _retval = struct_->get_render_handler(struct_);

  // Return type: refptr_same
  return CefRenderHandlerCToCpp::Wrap(_retval);
}


CefRefPtr<CefDragHandler> CefClientCToCpp::GetDragHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_drag_handler))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_drag_handler_t* _retval = struct_->get_drag_handler(struct_);

  // Return type: refptr_same
  return CefDragHandlerCToCpp::Wrap(_retval);
}


CefRefPtr<CefGeolocationHandler> CefClientCToCpp::GetGeolocationHandler()
{
  if (CEF_MEMBER_MISSING(struct_, get_geolocation_handler))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_geolocation_handler_t* _retval = struct_->get_geolocation_handler(
      struct_);

  // Return type: refptr_same
  return CefGeolocationHandlerCToCpp::Wrap(_retval);
}



#ifndef NDEBUG
template<> long CefCToCpp<CefClientCToCpp, CefClient,
    cef_client_t>::DebugObjCt = 0;
#endif

// This file is generated by Exported_h.template.

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef v8_inspector_protocol_Debugger_api_h
#define v8_inspector_protocol_Debugger_api_h

#include "v8-inspector.h"

namespace v8_inspector {
namespace protocol {

#ifndef v8_inspector_protocol_exported_api_h
#define v8_inspector_protocol_exported_api_h
class V8_EXPORT Exported {
public:
    virtual std::unique_ptr<StringBuffer> toJSONString() const = 0;

    V8_DEPRECATE_SOON("Use AppendSerialized instead.")
    virtual void writeBinary(std::vector<uint8_t>* out) const = 0;

    virtual void AppendSerialized(std::vector<uint8_t>* out) const = 0;

    virtual ~Exported() { }
};
#endif // !defined(v8_inspector_protocol_exported_api_h)

namespace Debugger {
namespace API {

// ------------- Enums.

namespace Paused {
namespace ReasonEnum {
V8_EXPORT extern const char* Ambiguous;
V8_EXPORT extern const char* Assert;
V8_EXPORT extern const char* DebugCommand;
V8_EXPORT extern const char* DOM;
V8_EXPORT extern const char* EventListener;
V8_EXPORT extern const char* Exception;
V8_EXPORT extern const char* Instrumentation;
V8_EXPORT extern const char* OOM;
V8_EXPORT extern const char* Other;
V8_EXPORT extern const char* PromiseRejection;
V8_EXPORT extern const char* XHR;
} // ReasonEnum
} // Paused

// ------------- Types.

class V8_EXPORT SearchMatch : public Exported {
public:
    static std::unique_ptr<protocol::Debugger::API::SearchMatch> fromBinary(const uint8_t* data, size_t length);
};

} // namespace API
} // namespace Debugger
} // namespace v8_inspector
} // namespace protocol

#endif // !defined(v8_inspector_protocol_Debugger_api_h)

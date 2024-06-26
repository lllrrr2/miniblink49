// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8PasswordCredential.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8FormData.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8PasswordCredential::wrapperTypeInfo = { gin::kEmbedderBlink, V8PasswordCredential::domTemplate, V8PasswordCredential::refObject, V8PasswordCredential::derefObject, V8PasswordCredential::trace, 0, 0, V8PasswordCredential::preparePrototypeObject, V8PasswordCredential::installConditionallyEnabledProperties, "PasswordCredential", &V8Credential::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in PasswordCredential.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& PasswordCredential::s_wrapperTypeInfo = V8PasswordCredential::wrapperTypeInfo;

namespace PasswordCredentialV8Internal {

static void passwordAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PasswordCredential* impl = V8PasswordCredential::toImpl(holder);
    v8SetReturnValueString(info, impl->password(), info.GetIsolate());
}

static void passwordAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    PasswordCredentialV8Internal::passwordAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void formDataAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PasswordCredential* impl = V8PasswordCredential::toImpl(holder);
    RawPtr<DOMFormData> cppValue(impl->formData());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "formData"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void formDataAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    PasswordCredentialV8Internal::formDataAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "PasswordCredential", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    V8StringResource<> id;
    V8StringResource<> password;
    V8StringResource<> name;
    V8StringResource<> iconURL;
    {
        id = info[0];
        if (!id.prepare())
            return;
        password = info[1];
        if (!password.prepare())
            return;
        if (UNLIKELY(info.Length() <= 2)) {
            RawPtr<PasswordCredential> impl = PasswordCredential::create(id, password, exceptionState);
            if (exceptionState.hadException()) {
                exceptionState.throwIfNeeded();
                return;
            }
            v8::Local<v8::Object> wrapper = info.Holder();
            wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8PasswordCredential::wrapperTypeInfo, wrapper);
            v8SetReturnValue(info, wrapper);
            return;
        }
        name = info[2];
        if (!name.prepare())
            return;
        if (UNLIKELY(info.Length() <= 3)) {
            RawPtr<PasswordCredential> impl = PasswordCredential::create(id, password, name, exceptionState);
            if (exceptionState.hadException()) {
                exceptionState.throwIfNeeded();
                return;
            }
            v8::Local<v8::Object> wrapper = info.Holder();
            wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8PasswordCredential::wrapperTypeInfo, wrapper);
            v8SetReturnValue(info, wrapper);
            return;
        }
        iconURL = info[3];
        if (!iconURL.prepare())
            return;
    }
    RawPtr<PasswordCredential> impl = PasswordCredential::create(id, password, name, iconURL, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8PasswordCredential::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

} // namespace PasswordCredentialV8Internal

static const V8DOMConfiguration::AccessorConfiguration V8PasswordCredentialAccessors[] = {
    {"password", PasswordCredentialV8Internal::passwordAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"formData", PasswordCredentialV8Internal::formDataAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

void V8PasswordCredential::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SCOPED_SAMPLING_STATE("blink", "DOMConstructor");
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("PasswordCredential"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    PasswordCredentialV8Internal::constructor(info);
}

static void installV8PasswordCredentialTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::credentialManagerEnabled())
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "PasswordCredential", V8Credential::domTemplate(isolate), V8PasswordCredential::internalFieldCount, 0, 0, 0, 0, 0, 0);
    else
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "PasswordCredential", V8Credential::domTemplate(isolate), V8PasswordCredential::internalFieldCount,
            0, 0,
            V8PasswordCredentialAccessors, WTF_ARRAY_LENGTH(V8PasswordCredentialAccessors),
            0, 0);
    functionTemplate->SetCallHandler(V8PasswordCredential::constructorCallback);
    functionTemplate->SetLength(2);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);

    // Custom toString template
#if V8_MAJOR_VERSION < 7
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
#endif
}

v8::Local<v8::FunctionTemplate> V8PasswordCredential::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8PasswordCredentialTemplate);
}

bool V8PasswordCredential::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8PasswordCredential::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

PasswordCredential* V8PasswordCredential::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8PasswordCredential::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8PasswordCredential::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink

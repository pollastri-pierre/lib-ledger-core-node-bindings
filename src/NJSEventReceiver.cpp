// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from emitter.djinni

#include "NJSEventReceiver.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

void NJSEventReceiver::onEvent(const std::shared_ptr<::ledger::core::api::Event> & event)
{
    Nan::HandleScope scope;
    //Wrap parameters
    auto arg_0 = NJSEvent::wrap(event);

    Local<Value> args[1] = {arg_0};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSEventReceiver::onEvent fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("onEvent").ToLocalChecked()).ToLocalChecked();
    auto result_onEvent = Nan::CallAsFunction(calling_funtion->ToObject(Nan::GetCurrentContext()).ToLocalChecked(),local_njs_impl,1,args);
    if(result_onEvent.IsEmpty())
    {
        Nan::ThrowError("NJSEventReceiver::onEvent call failed");
    }
}

NAN_METHOD(NJSEventReceiver::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSEventReceiver function can only be called as constructor (use New)");
    }

    if(!info[0]->IsObject())
    {
        return Nan::ThrowError("NJSEventReceiver::New requires an implementation from node");
    }
    auto node_instance = std::make_shared<NJSEventReceiver>(info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked());
    djinni::js::ObjectWrapper<NJSEventReceiver>::Wrap(node_instance, info.This());
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSEventReceiver::EventReceiver_prototype;

Local<Object> NJSEventReceiver::wrap(const std::shared_ptr<ledger::core::api::EventReceiver> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(EventReceiver_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::EventReceiver>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSEventReceiver::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

void NJSEventReceiver::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSEventReceiver::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSEventReceiver").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"New", New);
    //Set object prototype
    EventReceiver_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSEventReceiver").ToLocalChecked(), func_template->GetFunction(Nan::GetCurrentContext()).ToLocalChecked());
}

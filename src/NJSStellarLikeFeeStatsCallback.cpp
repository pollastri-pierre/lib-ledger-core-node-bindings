// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#include "NJSStellarLikeFeeStatsCallback.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

void NJSStellarLikeFeeStatsCallback::onCallback(const std::experimental::optional<::ledger::core::api::StellarLikeFeeStats> & result, const std::experimental::optional<::ledger::core::api::Error> & error)
{
    Nan::HandleScope scope;
    //Wrap parameters
    Local<Value> arg_0;
    if(result)
    {
        auto arg_0_optional = (result).value();
        auto arg_0_tmp = Nan::New<Object>();
        auto arg_0_tmp_1 = Nan::New<Number>(arg_0_optional.lastBaseFee);
        Nan::DefineOwnProperty(arg_0_tmp, Nan::New<String>("lastBaseFee").ToLocalChecked(), arg_0_tmp_1);
        auto arg_0_tmp_2 = Nan::New<Number>(arg_0_optional.modeAcceptedFee);
        Nan::DefineOwnProperty(arg_0_tmp, Nan::New<String>("modeAcceptedFee").ToLocalChecked(), arg_0_tmp_2);
        auto arg_0_tmp_3 = Nan::New<Number>(arg_0_optional.minAccepted);
        Nan::DefineOwnProperty(arg_0_tmp, Nan::New<String>("minAccepted").ToLocalChecked(), arg_0_tmp_3);
        auto arg_0_tmp_4 = Nan::New<Number>(arg_0_optional.maxFee);
        Nan::DefineOwnProperty(arg_0_tmp, Nan::New<String>("maxFee").ToLocalChecked(), arg_0_tmp_4);

        arg_0 = arg_0_tmp;
    }

    Local<Value> arg_1;
    if(error)
    {
        auto arg_1_optional = (error).value();
        auto arg_1_tmp = Nan::New<Object>();
        auto arg_1_tmp_1 = Nan::New<Integer>((int)arg_1_optional.code);
        Nan::DefineOwnProperty(arg_1_tmp, Nan::New<String>("code").ToLocalChecked(), arg_1_tmp_1);
        auto arg_1_tmp_2 = Nan::New<String>(arg_1_optional.message).ToLocalChecked();
        Nan::DefineOwnProperty(arg_1_tmp, Nan::New<String>("message").ToLocalChecked(), arg_1_tmp_2);

        arg_1 = arg_1_tmp;
    }

    auto local_resolver = Nan::New<Promise::Resolver>(pers_resolver);
    if(error)
    {
        auto rejected = local_resolver->Reject(Nan::GetCurrentContext(), arg_1);
        rejected.FromJust();
    }
    else
    {
        auto resolve = local_resolver->Resolve(Nan::GetCurrentContext(), arg_0);
        resolve.FromJust();
    }
}

NAN_METHOD(NJSStellarLikeFeeStatsCallback::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSStellarLikeFeeStatsCallback function can only be called as constructor (use New)");
    }

    auto resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    auto node_instance = std::make_shared<NJSStellarLikeFeeStatsCallback>(resolver);
    djinni::js::ObjectWrapper<NJSStellarLikeFeeStatsCallback>::Wrap(node_instance, info.This());
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSStellarLikeFeeStatsCallback::StellarLikeFeeStatsCallback_prototype;

Local<Object> NJSStellarLikeFeeStatsCallback::wrap(const std::shared_ptr<ledger::core::api::StellarLikeFeeStatsCallback> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(StellarLikeFeeStatsCallback_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::StellarLikeFeeStatsCallback>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSStellarLikeFeeStatsCallback::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

void NJSStellarLikeFeeStatsCallback::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSStellarLikeFeeStatsCallback::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSStellarLikeFeeStatsCallback").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"New", New);
    //Set object prototype
    StellarLikeFeeStatsCallback_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSStellarLikeFeeStatsCallback").ToLocalChecked(), func_template->GetFunction(Nan::GetCurrentContext()).ToLocalChecked());
}

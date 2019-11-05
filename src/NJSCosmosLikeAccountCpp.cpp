// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from cosmos_like_wallet.djinni

#include "NJSCosmosLikeAccountCpp.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSCosmosLikeAccount::broadcastRawTransaction) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSCosmosLikeAccount::broadcastRawTransaction needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Create promise and set it into Callback
    auto arg_1_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSStringCallback *njs_ptr_arg_1 = new NJSStringCallback(arg_1_resolver);
    std::shared_ptr<NJSStringCallback> arg_1(njs_ptr_arg_1);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::CosmosLikeAccount>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSCosmosLikeAccount::broadcastRawTransaction : implementation of CosmosLikeAccount is not valid");
    }
    cpp_impl->broadcastRawTransaction(arg_0,arg_1);
    info.GetReturnValue().Set(arg_1_resolver->GetPromise());
}
NAN_METHOD(NJSCosmosLikeAccount::broadcastTransaction) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSCosmosLikeAccount::broadcastTransaction needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<ledger::core::api::CosmosLikeTransaction>::Unwrap(njs_arg_0);
    if(!arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSCosmosLikeTransaction failed");
    }


    //Create promise and set it into Callback
    auto arg_1_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSStringCallback *njs_ptr_arg_1 = new NJSStringCallback(arg_1_resolver);
    std::shared_ptr<NJSStringCallback> arg_1(njs_ptr_arg_1);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::CosmosLikeAccount>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSCosmosLikeAccount::broadcastTransaction : implementation of CosmosLikeAccount is not valid");
    }
    cpp_impl->broadcastTransaction(arg_0,arg_1);
    info.GetReturnValue().Set(arg_1_resolver->GetPromise());
}
NAN_METHOD(NJSCosmosLikeAccount::buildTransaction) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSCosmosLikeAccount::buildTransaction needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::CosmosLikeAccount>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSCosmosLikeAccount::buildTransaction : implementation of CosmosLikeAccount is not valid");
    }

    auto result = cpp_impl->buildTransaction();

    //Wrap result in node object
    auto arg_0 = NJSCosmosLikeTransactionBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSCosmosLikeAccount::getEstimatedGasLimit) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSCosmosLikeAccount::getEstimatedGasLimit needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<ledger::core::api::CosmosLikeTransaction>::Unwrap(njs_arg_0);
    if(!arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSCosmosLikeTransaction failed");
    }


    //Create promise and set it into Callback
    auto arg_1_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSBigIntCallback *njs_ptr_arg_1 = new NJSBigIntCallback(arg_1_resolver);
    std::shared_ptr<NJSBigIntCallback> arg_1(njs_ptr_arg_1);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::CosmosLikeAccount>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSCosmosLikeAccount::getEstimatedGasLimit : implementation of CosmosLikeAccount is not valid");
    }
    cpp_impl->getEstimatedGasLimit(arg_0,arg_1);
    info.GetReturnValue().Set(arg_1_resolver->GetPromise());
}

NAN_METHOD(NJSCosmosLikeAccount::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSCosmosLikeAccount function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSCosmosLikeAccount::CosmosLikeAccount_prototype;

Local<Object> NJSCosmosLikeAccount::wrap(const std::shared_ptr<ledger::core::api::CosmosLikeAccount> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(CosmosLikeAccount_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        djinni::js::ObjectWrapper<ledger::core::api::CosmosLikeAccount>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSCosmosLikeAccount::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSCosmosLikeAccount::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::CosmosLikeAccount>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSCosmosLikeAccount::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSCosmosLikeAccount::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSCosmosLikeAccount").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"broadcastRawTransaction", broadcastRawTransaction);
    Nan::SetPrototypeMethod(func_template,"broadcastTransaction", broadcastTransaction);
    Nan::SetPrototypeMethod(func_template,"buildTransaction", buildTransaction);
    Nan::SetPrototypeMethod(func_template,"getEstimatedGasLimit", getEstimatedGasLimit);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    CosmosLikeAccount_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSCosmosLikeAccount").ToLocalChecked(), func_template->GetFunction());
}
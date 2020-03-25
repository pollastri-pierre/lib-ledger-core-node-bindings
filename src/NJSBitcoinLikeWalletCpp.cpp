// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_like_wallet.djinni

#include "NJSBitcoinLikeWalletCpp.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;


NAN_METHOD(NJSBitcoinLikeWallet::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSBitcoinLikeWallet function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSBitcoinLikeWallet::BitcoinLikeWallet_prototype;

Local<Object> NJSBitcoinLikeWallet::wrap(const std::shared_ptr<ledger::core::api::BitcoinLikeWallet> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(BitcoinLikeWallet_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeWallet>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSBitcoinLikeWallet::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSBitcoinLikeWallet::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::BitcoinLikeWallet>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSBitcoinLikeWallet::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSBitcoinLikeWallet::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSBitcoinLikeWallet").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    BitcoinLikeWallet_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSBitcoinLikeWallet").ToLocalChecked(), func_template->GetFunction(Nan::GetCurrentContext()).ToLocalChecked());
}

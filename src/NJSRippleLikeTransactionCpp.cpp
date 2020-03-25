// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ripple_like_wallet.djinni

#include "NJSRippleLikeTransactionCpp.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSRippleLikeTransaction::getHash) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::getHash needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::RippleLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::getHash : implementation of RippleLikeTransaction is not valid");
    }

    auto result = cpp_impl->getHash();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSRippleLikeTransaction::getFees) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::getFees needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::RippleLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::getFees : implementation of RippleLikeTransaction is not valid");
    }

    auto result = cpp_impl->getFees();

    //Wrap result in node object
    auto arg_0 = NJSAmount::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSRippleLikeTransaction::getReceiver) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::getReceiver needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::RippleLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::getReceiver : implementation of RippleLikeTransaction is not valid");
    }

    auto result = cpp_impl->getReceiver();

    //Wrap result in node object
    auto arg_0 = NJSRippleLikeAddress::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSRippleLikeTransaction::getSender) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::getSender needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::RippleLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::getSender : implementation of RippleLikeTransaction is not valid");
    }

    auto result = cpp_impl->getSender();

    //Wrap result in node object
    auto arg_0 = NJSRippleLikeAddress::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSRippleLikeTransaction::getValue) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::getValue needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::RippleLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::getValue : implementation of RippleLikeTransaction is not valid");
    }

    auto result = cpp_impl->getValue();

    //Wrap result in node object
    auto arg_0 = NJSAmount::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSRippleLikeTransaction::serialize) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::serialize needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::RippleLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::serialize : implementation of RippleLikeTransaction is not valid");
    }

    auto result = cpp_impl->serialize();

    //Wrap result in node object
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t arg_0_id = 0; arg_0_id < result.size(); arg_0_id++)
    {
        auto arg_0_elem = Nan::New<Uint32>(result[arg_0_id]);
        arg_0->Set((int)arg_0_id,arg_0_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSRippleLikeTransaction::setSignature) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::setSignature needs 2 arguments");
    }

    //Check if parameters have correct types
    vector<uint8_t> arg_0;
    Local<Array> arg_0_container = Local<Array>::Cast(info[0]);
    for(uint32_t arg_0_id = 0; arg_0_id < arg_0_container->Length(); arg_0_id++)
    {
        if(arg_0_container->Get(arg_0_id)->IsUint32())
        {
            auto arg_0_elem = Nan::To<uint32_t>(arg_0_container->Get(arg_0_id)).FromJust();
            arg_0.emplace_back(arg_0_elem);
        }
    }

    vector<uint8_t> arg_1;
    Local<Array> arg_1_container = Local<Array>::Cast(info[1]);
    for(uint32_t arg_1_id = 0; arg_1_id < arg_1_container->Length(); arg_1_id++)
    {
        if(arg_1_container->Get(arg_1_id)->IsUint32())
        {
            auto arg_1_elem = Nan::To<uint32_t>(arg_1_container->Get(arg_1_id)).FromJust();
            arg_1.emplace_back(arg_1_elem);
        }
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::RippleLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::setSignature : implementation of RippleLikeTransaction is not valid");
    }
    cpp_impl->setSignature(arg_0,arg_1);
}
NAN_METHOD(NJSRippleLikeTransaction::setDERSignature) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::setDERSignature needs 1 arguments");
    }

    //Check if parameters have correct types
    vector<uint8_t> arg_0;
    Local<Array> arg_0_container = Local<Array>::Cast(info[0]);
    for(uint32_t arg_0_id = 0; arg_0_id < arg_0_container->Length(); arg_0_id++)
    {
        if(arg_0_container->Get(arg_0_id)->IsUint32())
        {
            auto arg_0_elem = Nan::To<uint32_t>(arg_0_container->Get(arg_0_id)).FromJust();
            arg_0.emplace_back(arg_0_elem);
        }
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::RippleLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::setDERSignature : implementation of RippleLikeTransaction is not valid");
    }
    cpp_impl->setDERSignature(arg_0);
}
NAN_METHOD(NJSRippleLikeTransaction::getDate) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::getDate needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::RippleLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::getDate : implementation of RippleLikeTransaction is not valid");
    }

    auto result = cpp_impl->getDate();

    //Wrap result in node object
    auto date_arg_0 = chrono::duration_cast<chrono::milliseconds>(result.time_since_epoch()).count();
    auto arg_0 = Nan::New<Date>(date_arg_0).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSRippleLikeTransaction::getSequence) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::getSequence needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::RippleLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::getSequence : implementation of RippleLikeTransaction is not valid");
    }

    auto result = cpp_impl->getSequence();

    //Wrap result in node object
    auto arg_0 = NJSBigInt::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSRippleLikeTransaction::getLedgerSequence) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::getLedgerSequence needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::RippleLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::getLedgerSequence : implementation of RippleLikeTransaction is not valid");
    }

    auto result = cpp_impl->getLedgerSequence();

    //Wrap result in node object
    auto arg_0 = NJSBigInt::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSRippleLikeTransaction::getSigningPubKey) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::getSigningPubKey needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::RippleLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::getSigningPubKey : implementation of RippleLikeTransaction is not valid");
    }

    auto result = cpp_impl->getSigningPubKey();

    //Wrap result in node object
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t arg_0_id = 0; arg_0_id < result.size(); arg_0_id++)
    {
        auto arg_0_elem = Nan::New<Uint32>(result[arg_0_id]);
        arg_0->Set((int)arg_0_id,arg_0_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSRippleLikeTransaction::getMemos) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::getMemos needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::RippleLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::getMemos : implementation of RippleLikeTransaction is not valid");
    }

    auto result = cpp_impl->getMemos();

    //Wrap result in node object
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t arg_0_id = 0; arg_0_id < result.size(); arg_0_id++)
    {
        auto arg_0_elem = Nan::New<Object>();
        auto arg_0_elem_1 = Nan::New<String>(result[arg_0_id].data).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_elem, Nan::New<String>("data").ToLocalChecked(), arg_0_elem_1);
        auto arg_0_elem_2 = Nan::New<String>(result[arg_0_id].fmt).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_elem, Nan::New<String>("fmt").ToLocalChecked(), arg_0_elem_2);
        auto arg_0_elem_3 = Nan::New<String>(result[arg_0_id].ty).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_elem, Nan::New<String>("ty").ToLocalChecked(), arg_0_elem_3);

        arg_0->Set((int)arg_0_id,arg_0_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSRippleLikeTransaction::addMemo) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::addMemo needs 1 arguments");
    }

    //Check if parameters have correct types

    auto field_arg_0_1 = Nan::Get(info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("data").ToLocalChecked()).ToLocalChecked();
    Nan::Utf8String string_arg_0_1(field_arg_0_1->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0_1 = std::string(*string_arg_0_1);

    auto field_arg_0_2 = Nan::Get(info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("fmt").ToLocalChecked()).ToLocalChecked();
    Nan::Utf8String string_arg_0_2(field_arg_0_2->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0_2 = std::string(*string_arg_0_2);

    auto field_arg_0_3 = Nan::Get(info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked(), Nan::New<String>("ty").ToLocalChecked()).ToLocalChecked();
    Nan::Utf8String string_arg_0_3(field_arg_0_3->ToString(Nan::GetCurrentContext()).ToLocalChecked());
    auto arg_0_3 = std::string(*string_arg_0_3);
    RippleLikeMemo arg_0(arg_0_1, arg_0_2, arg_0_3);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::RippleLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::addMemo : implementation of RippleLikeTransaction is not valid");
    }
    cpp_impl->addMemo(arg_0);
}
NAN_METHOD(NJSRippleLikeTransaction::getDestinationTag) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::getDestinationTag needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::RippleLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::getDestinationTag : implementation of RippleLikeTransaction is not valid");
    }

    auto result = cpp_impl->getDestinationTag();

    //Wrap result in node object
    Local<Value> arg_0;
    if(result)
    {
        auto arg_0_optional = (result).value();
        auto arg_0_tmp = Nan::New<Number>(arg_0_optional);
        arg_0 = arg_0_tmp;
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSRippleLikeTransaction::getStatus) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::getStatus needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<ledger::core::api::RippleLikeTransaction>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSRippleLikeTransaction::getStatus : implementation of RippleLikeTransaction is not valid");
    }

    auto result = cpp_impl->getStatus();

    //Wrap result in node object
    auto arg_0 = Nan::New<Int32>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSRippleLikeTransaction::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSRippleLikeTransaction function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSRippleLikeTransaction::RippleLikeTransaction_prototype;

Local<Object> NJSRippleLikeTransaction::wrap(const std::shared_ptr<ledger::core::api::RippleLikeTransaction> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(RippleLikeTransaction_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance(Nan::GetCurrentContext()).ToLocalChecked();
        djinni::js::ObjectWrapper<ledger::core::api::RippleLikeTransaction>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSRippleLikeTransaction::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSRippleLikeTransaction::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::RippleLikeTransaction>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSRippleLikeTransaction::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSRippleLikeTransaction::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSRippleLikeTransaction").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getHash", getHash);
    Nan::SetPrototypeMethod(func_template,"getFees", getFees);
    Nan::SetPrototypeMethod(func_template,"getReceiver", getReceiver);
    Nan::SetPrototypeMethod(func_template,"getSender", getSender);
    Nan::SetPrototypeMethod(func_template,"getValue", getValue);
    Nan::SetPrototypeMethod(func_template,"serialize", serialize);
    Nan::SetPrototypeMethod(func_template,"setSignature", setSignature);
    Nan::SetPrototypeMethod(func_template,"setDERSignature", setDERSignature);
    Nan::SetPrototypeMethod(func_template,"getDate", getDate);
    Nan::SetPrototypeMethod(func_template,"getSequence", getSequence);
    Nan::SetPrototypeMethod(func_template,"getLedgerSequence", getLedgerSequence);
    Nan::SetPrototypeMethod(func_template,"getSigningPubKey", getSigningPubKey);
    Nan::SetPrototypeMethod(func_template,"getMemos", getMemos);
    Nan::SetPrototypeMethod(func_template,"addMemo", addMemo);
    Nan::SetPrototypeMethod(func_template,"getDestinationTag", getDestinationTag);
    Nan::SetPrototypeMethod(func_template,"getStatus", getStatus);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    RippleLikeTransaction_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSRippleLikeTransaction").ToLocalChecked(), func_template->GetFunction(Nan::GetCurrentContext()).ToLocalChecked());
}

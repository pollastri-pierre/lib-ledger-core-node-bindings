// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tezos_like_wallet.djinni

#ifndef DJINNI_GENERATED_NJSTEZOSCONFIGURATION_HPP
#define DJINNI_GENERATED_NJSTEZOSCONFIGURATION_HPP


#include <memory>

#include <nan.h>
#include <node.h>
#include "../include/TezosConfiguration.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSTezosConfiguration final {
public:

    static void Initialize(Local<Object> target);
    NJSTezosConfiguration() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::TezosConfiguration> &object);
    static Nan::Persistent<ObjectTemplate> TezosConfiguration_prototype;

private:
    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSTEZOSCONFIGURATION_HPP

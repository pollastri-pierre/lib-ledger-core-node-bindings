// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ethereum_like_wallet.djinni

#ifndef DJINNI_GENERATED_NJSETHEREUMLIKEOPERATION_HPP
#define DJINNI_GENERATED_NJSETHEREUMLIKEOPERATION_HPP


#include "NJSEthereumLikeTransactionCpp.hpp"
#include "NJSInternalTransactionCpp.hpp"
#include <memory>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../include/EthereumLikeOperation.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSEthereumLikeOperation final {
public:

    static void Initialize(Local<Object> target);
    NJSEthereumLikeOperation() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::EthereumLikeOperation> &object);
    static Nan::Persistent<ObjectTemplate> EthereumLikeOperation_prototype;

private:
    /**
     * Get operation's transaction.
     * @return EthereumLikeTransaction object
     */
    static NAN_METHOD(getTransaction);

    /** Get all actions triggered by this transaction */
    static NAN_METHOD(getInternalTransactions);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSETHEREUMLIKEOPERATION_HPP

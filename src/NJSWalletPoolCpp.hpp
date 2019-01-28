// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet_pool.djinni

#ifndef DJINNI_GENERATED_NJSWALLETPOOL_HPP
#define DJINNI_GENERATED_NJSWALLETPOOL_HPP


#include "../include/../utils/optional.hpp"
#include "../include/BitcoinLikeNetworkParameters.hpp"
#include "../include/Currency.hpp"
#include "../include/CurrencyUnit.hpp"
#include "../include/EthereumLikeNetworkParameters.hpp"
#include "NJSBlockCallback.hpp"
#include "NJSCurrencyCallback.hpp"
#include "NJSCurrencyListCallback.hpp"
#include "NJSDatabaseBackendCpp.hpp"
#include "NJSDynamicObjectCpp.hpp"
#include "NJSErrorCodeCallback.hpp"
#include "NJSEventBusCpp.hpp"
#include "NJSHttpClient.hpp"
#include "NJSI32Callback.hpp"
#include "NJSLogPrinter.hpp"
#include "NJSLoggerCpp.hpp"
#include "NJSPathResolver.hpp"
#include "NJSPreferencesCpp.hpp"
#include "NJSRandomNumberGenerator.hpp"
#include "NJSThreadDispatcher.hpp"
#include "NJSWalletCallback.hpp"
#include "NJSWalletListCallback.hpp"
#include "NJSWebSocketClient.hpp"
#include <chrono>
#include <cstdint>
#include <memory>
#include <string>

#include <nan.h>
#include <node.h>
#include "../include/WalletPool.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSWalletPool final {
public:

    static void Initialize(Local<Object> target);
    NJSWalletPool() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::WalletPool> &object);
    static Nan::Persistent<ObjectTemplate> WalletPool_prototype;

private:
    /**
     *Create a new instance of WalletPool object
     *@param name, string, name of the wallet pool
     *@param password, optional string, password to lock wallet pool
     *@param http, HttpClient object, http client used for all calls made by wallet pool (and aggregated wallets)
     *@param webSocketClient, WebSocketClient object, socket through which wallet pool observe and get notified (explorer, DBs ...)
     *@param pathResolver, PathResolver Object, resolve paths to logs, databases, preferences ...
     *@param logPrinter, LogPrinter object, used to dump/log for debug purpose
     *@param dispatcher, ThreadDispatcher object, responsable of dispatching task through available threads
     *@param rng, RandomNumberGenerator object, needed for generating random numbers (for seeds, salts ...)
     *@param backend, DatabseBackend object, DB in which wallet pool store all required infos (created wallets, their options, their accounts ...)
     *@param configuration, DynamicObject object, desired configuration for this wallet pool
     *@return WalletPool object, instance of WalletPool
     */
    static NAN_METHOD(newInstance);

    /**
     *Return used logger to dump logs in defined log path by PathResolver
     *@return Logger object
     */
    static NAN_METHOD(getLogger);

    /**
     *Return name given to wallet pool
     *@return string
     */
    static NAN_METHOD(getName);

    /**
     *Return preferences of wallet pool (deduced from configuration)
     *@return Preferences object
     */
    static NAN_METHOD(getPreferences);

    /**
     *Return number of wallets instanciated under wallet pool
     *@param callback, Callback object returns a 32 bits integer, count of wallets
     */
    static NAN_METHOD(getWalletCount);

    /**
     *Get instanciated wallets having index in a given range
     *@param from, 32 bits integer, lower bound of indices to pick
     *@param to, 32 bits integer, upper bound of indices to pick
     *@param callback, ListCallback object returns a list of Wallet objects
     */
    static NAN_METHOD(getWallets);

    /**
     *Get wallet with a giver name
     *@param name, string, name of wallet to look for
     *@param callback, Callback object returns a Wallet object
     */
    static NAN_METHOD(getWallet);

    /**
     *Instanciate a new wallet under wallet pool
     *@param name, string, name of newly created wallet
     *@param currency, Currency object, currency of the wallet
     *@param configuration, DynamicObject object, configuration of wallet (preferences)
     *@param callback, Callback object returning a Wallet object
     */
    static NAN_METHOD(createWallet);

    /**
     *Return all supported currencies by wallet pool, at least one wallet support one of returned currencies
     *@param callback, ListCallback object, returns a list of Currency objects
     */
    static NAN_METHOD(getCurrencies);

    /**
     *Return currency of a specific wallet
     *@param name, wallet's name to look for
     *@param callback, Callback object returning a Currency object
     */
    static NAN_METHOD(getCurrency);

    /**
     *Return last block of blockchain of a given currency (if it is supported by the wallet pool)
     *@param name, string, name of currency we are interested into getting it's blockchain's last block
     *@param callback, Callback object returns a Block object
     */
    static NAN_METHOD(getLastBlock);

    /**
     *Get event bus (handler) through which wallet pool observe and gets notified (explorers, DBs ...)
     *@param EventBus object
     */
    static NAN_METHOD(getEventBus);

    /**
     *Erase data (in user's DB) relative to wallet since given date
     *@param date, start date of data deletion
     */
    static NAN_METHOD(eraseDataSince);

    /**
     * Reset wallet pool.
     *
     * Resetting the wallet pool is an irreversible fresh reset of the whole wallet pool
     * and all of its created (sub-)objects (wallets, accounts, transactions, etc.). Please
     * consider a less destructive option before opting to use this. However, if you’re
     * looking for a way to end up as if you were in a “fresh install” situation, this is
     * the function to go to.
     *
     * Final warning: this function effectively swipes off everything. You’ve been warned.
     *
     * > Note: when calling that function, you must re-create a WalletPool as all objects
     * > got destroyed. Consider restarting / exiting your application right after calling
     * > that function. You are also highly advised to run that function on a code path
     * > that doesn’t include having lots of objects in memory.
     *
     * The return value is always true and doesn’t convey any useful information for now.
     */
    static NAN_METHOD(freshResetAll);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSWALLETPOOL_HPP

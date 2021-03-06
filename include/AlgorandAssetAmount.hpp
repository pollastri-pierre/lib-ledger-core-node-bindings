// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from idl.djinni

#ifndef DJINNI_GENERATED_ALGORANDASSETAMOUNT_HPP
#define DJINNI_GENERATED_ALGORANDASSETAMOUNT_HPP

#include <iostream>
#include <string>
#include <utility>

namespace ledger { namespace core { namespace api {

struct AlgorandAssetAmount final {
    /** The address that created the asset */
    std::string creatorAddress;
    /** The amount of asset */
    std::string amount;
    /** Whether this amount is frozen */
    bool frozen;
    /** The id of the asset */
    std::string assetId;

    AlgorandAssetAmount(std::string creatorAddress_,
                        std::string amount_,
                        bool frozen_,
                        std::string assetId_)
    : creatorAddress(std::move(creatorAddress_))
    , amount(std::move(amount_))
    , frozen(std::move(frozen_))
    , assetId(std::move(assetId_))
    {}

    AlgorandAssetAmount(const AlgorandAssetAmount& cpy) {
       this->creatorAddress = cpy.creatorAddress;
       this->amount = cpy.amount;
       this->frozen = cpy.frozen;
       this->assetId = cpy.assetId;
    }

    AlgorandAssetAmount() = default;


    AlgorandAssetAmount& operator=(const AlgorandAssetAmount& cpy) {
       this->creatorAddress = cpy.creatorAddress;
       this->amount = cpy.amount;
       this->frozen = cpy.frozen;
       this->assetId = cpy.assetId;
       return *this;
    }

    template <class Archive>
    void load(Archive& archive) {
        archive(creatorAddress, amount, frozen, assetId);
    }

    template <class Archive>
    void save(Archive& archive) const {
        archive(creatorAddress, amount, frozen, assetId);
    }
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_ALGORANDASSETAMOUNT_HPP

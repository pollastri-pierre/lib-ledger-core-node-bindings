// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_OPERATIONLISTCALLBACK_HPP
#define DJINNI_GENERATED_OPERATIONLISTCALLBACK_HPP

#include "../utils/optional.hpp"
#include <memory>
#include <vector>
#ifndef LIBCORE_EXPORT
    #if defined(_MSC_VER)
       #include <libcore_export.h>
    #else
       #define LIBCORE_EXPORT
    #endif
#endif

namespace ledger { namespace core { namespace api {

class Operation;
struct Error;

/**
 *Callback triggered by main completed task,
 *returns optional result as list of template type T
 */
class OperationListCallback {
public:
    virtual ~OperationListCallback() {}

    /**
     * Method triggered when main task complete
     * @params result optional of type list<T>, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    virtual void onCallback(const std::experimental::optional<std::vector<std::shared_ptr<Operation>>> & result, const std::experimental::optional<Error> & error) = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_OPERATIONLISTCALLBACK_HPP

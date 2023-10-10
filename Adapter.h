#if !defined(ADAPTER_H)
#define ADAPTER_H
#include "SQLSelect.h"
#include "SQLFrom.h"

class Adapter : public SQLSelect, private SQLFrom {
public:
    Adapter(const std::string& from, const std::string& select);
    std::string generateQuery() const override;
};

#endif // ADAPTER_H

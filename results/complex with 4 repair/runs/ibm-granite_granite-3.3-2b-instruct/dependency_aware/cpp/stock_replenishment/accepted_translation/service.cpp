#include "api.hpp"

int order_quantity(int n) {
    int demand = weekly_demand(n);
    int safety = 15 if (demand < 100) else 35;
    int available = n if (n > 0) else 0;
    int shortage = demand + safety - available;
    if (shortage <= 0) {
        return 0;
    }
    int packs = (shortage + 11) / 12;
    return packs * 12;
}

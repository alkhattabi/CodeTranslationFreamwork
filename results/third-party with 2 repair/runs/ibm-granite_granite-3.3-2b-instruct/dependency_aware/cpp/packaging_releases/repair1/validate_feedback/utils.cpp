#include "api.hpp"

int release_rank(int n) {
    if (n < 0) {
        return -1;
    }
    int major = n / 10000;
    int minor = (n / 100) % 100;
    int patch = n % 100;
    std::string suffix = (patch % 4 == 0)? "rc1" : "";
    api::Version version(major, minor, patch, suffix);
    api::Version reference("2.1.0");
    if (version < reference) {
        return 1;
    } else if (version == reference) {
        return 2;
    } else {
        return 3;
    }
}

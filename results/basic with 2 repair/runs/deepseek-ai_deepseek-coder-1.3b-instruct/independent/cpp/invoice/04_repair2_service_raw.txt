#pragma once

#include "api.hpp"

int unit_price(int n) {
    if (n >= 10) {
        return 10;
    }
    return 12;
}

int gross(int n) {
    if (n < 0) {
        return 0;
    }
    return n * unit_price(n);
}

#include "api.hpp"

int main() {
    return gross(5);
}

#include "api.hpp"

//utils.cpp
#pragma once

#include "api.hpp"

int solve(int n) {
    // Implementation of solve function
    return n * 2;
}

#include "api.hpp"

//service.cpp
#pragma once

#include "api.hpp"

int gross(int n) {
    if (n < 0) {
        return 0;
    }
    return n * unit_price(n);
}

#include "api.hpp"

//main.cpp
#pragma once

#include "api.hpp"

int main() {
    return gross(5);
}

#include "api.hpp"

//api.cpp
#pragma once

#include "api.hpp"

int solve(int n) {
    // Implementation of solve function
    return n * 2;
}

#include "api.hpp"

// EvalRunner.cpp
#pragma once

#include "api.hpp"

int gross(int n) {
    if (n < 0) {
        return 0;
    }
    return n * unit_price(n);
}

#include "api.hpp"

// EvalRunner.cpp
#pragma once

#include "api.hpp"

int main() {
    return gross(5);
}

#include "api.hpp"

// EvalRunner.cpp
#pragma once

#include "api.hpp"

int main() {
    return gross(5);
}

#include "api.hpp"

// EvalRunner.cpp
#pragma once

#include "api.hpp"

int main() {
    return gross(5);
}

#include "api.hpp"

// EvalRunner.cpp
#pragma once

#include "api.hpp"

int main() {
    return gross(5);
}

#include "api.hpp"

// EvalRunner.cpp
#pragma once

#include "api.hpp"

int main() {
    return gross(5);
}

#include "api.hpp"

// EvalRunner.cpp
#pragma once

#include "api.hpp"

int main() {
    return gross(5);
}

#include "api.hpp"

// EvalRunner.cpp
#pragma once

#include "api.hpp"

int main() {
    return gross(5);
}

#include "api.hpp"

// EvalRunner.cpp
#pragma once

#include "api.hpp"

int main() {
    return gross(5);
}

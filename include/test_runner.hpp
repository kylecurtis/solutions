/* ================================================================================================
 * TEST_RUNNER.HPP
 *
 * Provides a lightweight runner for assert-based testing:
 * - Records individual test failures.
 * - Reports the results.
 * - Returns an appropriate process exit code when testing is complete.
================================================================================================ */
#pragma once

#include <iostream>
#include <string_view>

class TestRunner {
  private:
    int failures_{0};

  public:
    void check(bool condition, std::string_view test_name) {
        if (condition) {
            std::cout << "[PASS] " << test_name << '\n';
            return;
        }

        std::cerr << "[FAIL] " << test_name << '\n';
        ++failures_;
    }

    // Returns a process exit code so shells and CI tools can determine
    // whether the complete test run succeeded.
    [[nodiscard]] int report() const {
        if (failures_ == 0) {
            std::cout << "All tests passed.\n";
            return 0;
        }

        std::cerr << '\n' << failures_ << " test(s) failed.\n";
        return 1;
    }
};

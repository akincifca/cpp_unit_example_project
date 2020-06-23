#include <iostream>
#include "TestBasicMath.h"
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/TestRunner.h>
#include <cppunit/CompilerOutputter.h>

int main() {

    CPPUNIT_TEST_SUITE_REGISTRATION(TestBasicMath);

    // Informs test-listener about testresult
    CPPUNIT_NS::TestResult testResult;

    // Register listener for collecting the test-results
    CPPUNIT_NS::TestResultCollector collectedResults;
    testResult.addListener(&collectedResults);

    // Register listener for per-test progress output
    CPPUNIT_NS::BriefTestProgressListener progress;
    testResult.addListener(&progress);

    // Insert test-suite at test-runner by registry
    CPPUNIT_NS::TestRunner testRunner;
    testRunner.addTest(CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest());
    testRunner.run(testResult);

    // Output results in compiler-format
    CPPUNIT_NS::CompilerOutputter compilerOutputter(&collectedResults, std::cerr);
    compilerOutputter.write();

    return collectedResults.wasSuccessful() ? 0 : 1;
}

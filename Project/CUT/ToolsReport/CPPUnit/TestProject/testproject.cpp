#include <bits/stdc++.h>
#include <list>
#include <cppunit/TestCase.h>
#include <cppunit/TestFixture.h>
#include <cppunit/ui/text/TextTestRunner.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/XmlOutputter.h>
#include <netinet/in.h>

#include <iostream>
#include <string>
#include "Project.h"
#include <vector>
 
using namespace std;
using namespace CppUnit;


class TestProject : public CppUnit :: TestFixture {
    CPPUNIT_TEST_SUITE(TestProject);
    CPPUNIT_TEST(testclientName);
    CPPUNIT_TEST(teststDate);
    CPPUNIT_TEST(testpriority);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp(void);
    void tearDown(void);

protected:
    void testclientName(void);
    void teststDate(void);
    void testpriority(void);
  
private:
    Project *mTestObj;
};

//validBu
void
TestProject::testclientName(void)
{
    //Sunny Test Cases
    
    CPPUNIT_ASSERT(1==mTestObj->setclientName("ICICI"));
    CPPUNIT_ASSERT(1==mTestObj->setclientName("aritel5g"));
    CPPUNIT_ASSERT(1==mTestObj->setclientName("apple+tv"));
    CPPUNIT_ASSERT(1==mTestObj->setclientName("formula1"));
    CPPUNIT_ASSERT(1==mTestObj->setclientName("c@tburry"));

    //Rainy Test Cases
    
    CPPUNIT_ASSERT(0==mTestObj->setclientName("565"));
    CPPUNIT_ASSERT(0==mTestObj->setclientName("11112"));
    CPPUNIT_ASSERT(0==mTestObj->setclientName("96348"));
    CPPUNIT_ASSERT(0==mTestObj->setclientName("00000"));
    CPPUNIT_ASSERT(0==mTestObj->setclientName("1175"));
}

//validDate
void
TestProject::teststDate(void)
{
    //Sunny Test Cases
    
    CPPUNIT_ASSERT(1==mTestObj->setstDate("01/03/2022"));
    CPPUNIT_ASSERT(1==mTestObj->setstDate("10/03/2022"));
    CPPUNIT_ASSERT(1==mTestObj->setstDate("11/03/2022"));
    CPPUNIT_ASSERT(1==mTestObj->setstDate("22/12/2022"));
    CPPUNIT_ASSERT(1==mTestObj->setstDate("30/10/2022"));

    //Rainy Test Cases
    CPPUNIT_ASSERT(0==mTestObj->setstDate("144/3/2022"));
    CPPUNIT_ASSERT(0==mTestObj->setstDate("14/3/2020"));
    CPPUNIT_ASSERT(0==mTestObj->setstDate("00/31/2022"));
    CPPUNIT_ASSERT(0==mTestObj->setstDate("14/3/20222"));
    CPPUNIT_ASSERT(0==mTestObj->setstDate("32/3/2022"));
}

//validPriority
void 
TestProject::testpriority(void) 
{
    //Sunny Test Cases
   
    CPPUNIT_ASSERT(1==mTestObj->setPriority("1"));
    CPPUNIT_ASSERT(1==mTestObj->setPriority("3"));
    CPPUNIT_ASSERT(1==mTestObj->setPriority("2"));
    CPPUNIT_ASSERT(1==mTestObj->setPriority("2"));
    CPPUNIT_ASSERT(1==mTestObj->setPriority("3"));

     //Rainy Test Cases

    CPPUNIT_ASSERT(0==mTestObj->setPriority("4"));
    CPPUNIT_ASSERT(0==mTestObj->setPriority("0"));
    CPPUNIT_ASSERT(0==mTestObj->setPriority("6"));
    CPPUNIT_ASSERT(0==mTestObj->setPriority("*"));
    CPPUNIT_ASSERT(0==mTestObj->setPriority("_"));

}


void TestProject::setUp(void) {
    mTestObj = new Project();
}

void TestProject::tearDown(void) {
    delete mTestObj;
}



//-----------------------------------------------------------------------------

CPPUNIT_TEST_SUITE_REGISTRATION( TestProject );

int main(int argc, char* argv[]) {

    // informs test-listener about testresults
    CPPUNIT_NS::TestResult testresult;

    // register listener for collecting the test-results
    CPPUNIT_NS::TestResultCollector collectedresults;
    testresult.addListener (&collectedresults);

    // register listener for per-test progress output
    CPPUNIT_NS::BriefTestProgressListener progress;
    testresult.addListener (&progress);

    // insert test-suite at test-runner by registry
    CPPUNIT_NS::TestRunner testrunner;
    testrunner.addTest (CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest ());
    testrunner.run(testresult);

    // output results in compiler-format
    CPPUNIT_NS::CompilerOutputter compileroutputter(&collectedresults, std::cerr);
    compileroutputter.write ();

    // Output XML for Jenkins CPPunit plugin
    ofstream xmlFileOut("cppDateResults.xml");
    XmlOutputter xmlOut(&collectedresults, xmlFileOut);
    xmlOut.write();

    // return 0 if tests were successful
    return collectedresults.wasSuccessful() ? 0 : 1;
}


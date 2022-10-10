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
#include "Employee.h"
#include <vector>
 
using namespace std;
using namespace CppUnit;


class TestEmployee : public CppUnit :: TestFixture {
    CPPUNIT_TEST_SUITE(TestEmployee);
    CPPUNIT_TEST(testfirstname);
    CPPUNIT_TEST(testphone1);
    CPPUNIT_TEST(testBU);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp(void);
    void tearDown(void);

protected:
    void testfirstname(void);
    void testphone1(void);
    void testBU(void);
  
private:
    Employee *mTestObj;
};

//validNames
void
TestEmployee::testfirstname(void)
{
    //Sunny Test Cases
 
    CPPUNIT_ASSERT(1==mTestObj->setFirstName("vamshi"));
    CPPUNIT_ASSERT(1==mTestObj->setFirstName("HITESH"));
    CPPUNIT_ASSERT(1==mTestObj->setFirstName("kalyani"));
    CPPUNIT_ASSERT(1==mTestObj->setFirstName("SUSHI"));
    CPPUNIT_ASSERT(1==mTestObj->setFirstName("nk"));


    //Rainy Test Cases 
     CPPUNIT_ASSERT(0==mTestObj->setFirstName("5Gtechnology"));
     CPPUNIT_ASSERT(0==mTestObj->setFirstName("vamshi s"));
     CPPUNIT_ASSERT(0==mTestObj->setFirstName("55555"));
     CPPUNIT_ASSERT(0==mTestObj->setFirstName("uuuu5u"));
     CPPUNIT_ASSERT(0==mTestObj->setFirstName("tom jerry"));
}

//validNumber
void
TestEmployee::testphone1(void)
{
    //Sunny Test Cases
    CPPUNIT_ASSERT(1== mTestObj->setPhone1("1234567892"));
    CPPUNIT_ASSERT(1== mTestObj->setPhone1("8888558965"));
    CPPUNIT_ASSERT(1== mTestObj->setPhone1("1234515682"));
    CPPUNIT_ASSERT(1== mTestObj->setPhone1("1234567886"));
    CPPUNIT_ASSERT(1== mTestObj->setPhone1("1234567888"));

    //Rainy Test Cases 
    CPPUNIT_ASSERT(0== mTestObj->setPhone1("kalyani"));
    CPPUNIT_ASSERT(0== mTestObj->setPhone1("122566 ldhj"));
    CPPUNIT_ASSERT(0== mTestObj->setPhone1("111111_11"));
    CPPUNIT_ASSERT(0== mTestObj->setPhone1("00"));
    CPPUNIT_ASSERT(0== mTestObj->setPhone1("@#$%*&"));
}


//validBu
void 
TestEmployee::testBU(void) 
{
    //Sunny Test Cases
    CPPUNIT_ASSERT(1== mTestObj->setBu("Airtel"));
    CPPUNIT_ASSERT(1== mTestObj->setBu("idea5g"));
    CPPUNIT_ASSERT(1== mTestObj->setBu("formula1"));
    CPPUNIT_ASSERT(1== mTestObj->setBu("oneplus"));

    //Rainy Test Cases 
    CPPUNIT_ASSERT(0== mTestObj->setBu("1234567892"));
    CPPUNIT_ASSERT(0== mTestObj->setBu("46546"));
    CPPUNIT_ASSERT(0== mTestObj->setBu("100100"));
    CPPUNIT_ASSERT(0== mTestObj->setBu("0000"));
    CPPUNIT_ASSERT(0== mTestObj->setBu("1892"));
}

void TestEmployee::setUp(void) {
    mTestObj = new Employee();
}

void TestEmployee::tearDown(void) {
    delete mTestObj;
}



//-----------------------------------------------------------------------------

CPPUNIT_TEST_SUITE_REGISTRATION( TestEmployee );

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


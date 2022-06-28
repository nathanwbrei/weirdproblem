

// Copyright 2021, Jefferson Science Associates, LLC.
// Subject to the terms in the LICENSE file found in the top-level directory.

#include <iostream>
#include <JANA/JApplication.h>

int main() {


    japp = new JApplication;
    japp->SetParameterValue("monkey", 22);
    japp->Run();
}


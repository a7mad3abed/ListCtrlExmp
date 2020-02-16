#include "MyApp.h"


bool MyApp::OnInit()
{
    MyFrame *frame = new MyFrame("List Example");
    frame->Show(true);
    return true;
}

IMPLEMENT_APP(MyApp);

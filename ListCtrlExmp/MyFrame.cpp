#include "MyFrame.h"
#include "wx/listctrl.h"
#include <vector>

class Item
{
public:
    const char * id = "";
    const char* name = "" ;

};

MyFrame::MyFrame(const wxString& title)
    :wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE)
{
    std::vector<Item> items;
    items.push_back({ "0", "Ahmed" });
    items.push_back({ "1", "Lobna" });
    items.push_back({ "2", "Mohamed" });
    items.push_back({ "3", "Khadiga" });

    wxListCtrl* list = new wxListCtrl(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT);
    wxListItem col1;
    col1.SetId(0);
    col1.SetText("id");
    col1.SetWidth(40);
    list->InsertColumn(0,col1);

    wxListItem col2;
    col2.SetId(0);
    col2.SetText(_("name"));
    list->InsertColumn(1, col2);


    for (int i = 0; i < items.size(); i++)
    {
        wxListItem m_item;
        m_item.SetId(i);
        m_item.SetText(items[i].id);
        list->InsertItem(m_item);
    }



    for (int i = 0; i < items.size(); i++)
    {
        list->SetItem(i, 1, items[i].name);
    }
}

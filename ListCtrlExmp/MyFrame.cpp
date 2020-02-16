#include "MyFrame.h"
#include "wx/listctrl.h"
#include <vector>
#include "wx/dataview.h"
#include <string>

class Item
{
public:
    int id = 0;
    const char* name = "" ;

};

MyFrame::MyFrame(const wxString& title)
    :wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE)
{
    std::vector<Item> items;
    items.push_back({ 0, "Ahmed" });
    items.push_back({ 1, "Lobna" });
    items.push_back({ 2, "Mohamed" });
    items.push_back({ 3, "Khadiga" });

    wxDataViewListCtrl* list = new wxDataViewListCtrl(this, wxID_ANY);
    list->AppendTextColumn("id");
    list->AppendTextColumn("name");

    wxVector<wxVariant> data;

    data.push_back(wxVariant(std::to_string(items[0].id)));
    data.push_back(wxVariant(items[0].name));

    list->AppendItem(data);

    data.clear();
    data.push_back(wxVariant(std::to_string(items[1].id)));
    data.push_back(wxVariant(items[1].name));

    list->AppendItem(data);

    data.clear();
    data.push_back(wxVariant(std::to_string(items[2].id)));
    data.push_back(wxVariant(items[2].name));

    list->AppendItem(data);

    /*
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
    col1.SetBackgroundColour(wxColor(*wxRED));
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
    */


}

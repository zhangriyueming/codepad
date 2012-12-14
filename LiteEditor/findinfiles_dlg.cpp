//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "findinfiles_dlg.h"


// Declare the bitmap loading function
extern void wxCABC4InitBitmapResources();

static bool bBitmapLoaded = false;


FindInFilesDialogBase::FindInFilesDialogBase(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if ( !bBitmapLoaded ) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCABC4InitBitmapResources();
        bBitmapLoaded = true;
    }
    
    wxBoxSizer* bSizer1 = new wxBoxSizer(wxHORIZONTAL);
    this->SetSizer(bSizer1);
    
    wxFlexGridSizer* fgSizer41 = new wxFlexGridSizer(  0, 2, 0, 0);
    fgSizer41->SetFlexibleDirection( wxBOTH );
    fgSizer41->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    fgSizer41->AddGrowableCol(1);
    fgSizer41->AddGrowableRow(2);
    
    bSizer1->Add(fgSizer41, 1, wxALL|wxEXPAND, 5);
    
    m_staticText1 = new wxStaticText(this, wxID_ANY, _("Find What :"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer41->Add(m_staticText1, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    wxArrayString m_findStringArr;
    m_findString = new wxComboBox(this, wxID_ANY, wxT(""), wxDefaultPosition, wxSize(-1, -1), m_findStringArr, 0);
    m_findString->SetToolTip(_("String to search"));
    
    fgSizer41->Add(m_findString, 0, wxALL|wxEXPAND, 5);
    
    m_staticText2 = new wxStaticText(this, wxID_ANY, _("Look in :"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer41->Add(m_staticText2, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    wxBoxSizer* bSizer10 = new wxBoxSizer(wxHORIZONTAL);
    
    fgSizer41->Add(bSizer10, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL, 5);
    
    m_dirPicker = new DirPicker(this, wxID_ANY, wxT("..."), wxEmptyString, _("Select a folder:"), wxDefaultPosition, wxDefaultSize, wxDP_USE_COMBOBOX);
    bSizer10->Add(m_dirPicker, 1, wxALL, 5);
    
    m_btnAddPath = new wxButton(this, wxID_ANY, _("&Add"), wxDefaultPosition, wxSize(-1, -1), wxBU_EXACTFIT);
    
    bSizer10->Add(m_btnAddPath, 0, wxRIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    fgSizer41->Add(0, 0, 0, wxEXPAND, 5);
    
    wxBoxSizer* bSizer9 = new wxBoxSizer(wxHORIZONTAL);
    
    fgSizer41->Add(bSizer9, 0, wxEXPAND, 5);
    
    wxArrayString m_listPathsArr;
    m_listPaths = new wxListBox(this, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), m_listPathsArr, 0);
    
    bSizer9->Add(m_listPaths, 1, wxLEFT|wxTOP|wxBOTTOM|wxEXPAND, 5);
    
    wxBoxSizer* boxSizer1 = new wxBoxSizer(wxVERTICAL);
    
    bSizer9->Add(boxSizer1, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 5);
    
    m_btnRemovelPath = new wxButton(this, wxID_ANY, _(""), wxDefaultPosition, wxSize(-1, -1), wxBU_EXACTFIT);
    #if wxVERSION_NUMBER >= 2904
    m_btnRemovelPath->SetBitmap(wxXmlResource::Get()->LoadBitmap(wxT("delete-line")));
    m_btnRemovelPath->SetBitmapMargins(2,2);
    #endif
    m_btnRemovelPath->SetToolTip(_("Remove the selected search path"));
    
    boxSizer1->Add(m_btnRemovelPath, 0, wxTOP|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_btnClearPaths = new wxButton(this, wxID_ANY, _(""), wxDefaultPosition, wxSize(-1, -1), wxBU_EXACTFIT);
    #if wxVERSION_NUMBER >= 2904
    m_btnClearPaths->SetBitmap(wxXmlResource::Get()->LoadBitmap(wxT("clear-all")));
    m_btnClearPaths->SetBitmapMargins(2,2);
    #endif
    m_btnClearPaths->SetToolTip(_("Clear the search path list"));
    
    boxSizer1->Add(m_btnClearPaths, 0, wxBOTTOM|wxEXPAND|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_staticText3 = new wxStaticText(this, wxID_ANY, _("File Mask:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer41->Add(m_staticText3, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    wxArrayString m_fileTypesArr;
    m_fileTypesArr.Add(wxT("*.c"));
    m_fileTypesArr.Add(wxT("*.cpp"));
    m_fileTypesArr.Add(wxT("*.cxx"));
    m_fileTypesArr.Add(wxT("*.cc"));
    m_fileTypesArr.Add(wxT("*.h"));
    m_fileTypesArr.Add(wxT("*.hpp"));
    m_fileTypesArr.Add(wxT("*.inc"));
    m_fileTypesArr.Add(wxT("*.mm"));
    m_fileTypesArr.Add(wxT("*.m"));
    m_fileTypesArr.Add(wxT("*.xrc"));
    m_fileTypesArr.Add(wxT("*.*"));
    m_fileTypes = new wxComboBox(this, wxID_ANY, wxT("*.c;*.cpp;*.cxx;*.cc;*.h;*.hpp;*.inc;*.mm;*.m;*.xrc"), wxDefaultPosition, wxSize(-1, -1), m_fileTypesArr, 0);
    m_fileTypes->SetToolTip(_("Search these file types"));
    
    fgSizer41->Add(m_fileTypes, 1, wxALL|wxEXPAND, 5);
    
    m_staticText5 = new wxStaticText(this, wxID_ANY, _("Files Encoding:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer41->Add(m_staticText5, 0, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
    
    wxArrayString m_choiceEncodingArr;
    m_choiceEncoding = new wxChoice(this, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), m_choiceEncodingArr, 0);
    m_choiceEncoding->SetToolTip(_("Use this file encoding when scanning files for matches"));
    
    fgSizer41->Add(m_choiceEncoding, 1, wxALL|wxEXPAND, 5);
    
    m_staticText7 = new wxStaticText(this, wxID_ANY, _("Options:"), wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer41->Add(m_staticText7, 0, wxALL|wxALIGN_RIGHT, 5);
    
    m_notebook1 = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), 0);
    
    fgSizer41->Add(m_notebook1, 0, wxALL|wxEXPAND, 5);
    
    m_panel1 = new wxPanel(m_notebook1, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxTAB_TRAVERSAL);
    m_notebook1->AddPage(m_panel1, _("General"), false);
    
    wxBoxSizer* bSizer6 = new wxBoxSizer(wxVERTICAL);
    m_panel1->SetSizer(bSizer6);
    
    wxFlexGridSizer* fgSizer3 = new wxFlexGridSizer(  0, 1, 0, 0);
    fgSizer3->SetFlexibleDirection( wxBOTH );
    fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    
    bSizer6->Add(fgSizer3, 0, wxALL|wxEXPAND, 5);
    
    m_matchCase = new wxCheckBox(m_panel1, wxID_ANY, _("&Match case"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_matchCase->SetValue(false);
    m_matchCase->SetToolTip(_("Toggle case sensitive search"));
    
    fgSizer3->Add(m_matchCase, 0, wxALL|wxEXPAND, 5);
    
    m_matchWholeWord = new wxCheckBox(m_panel1, wxID_ANY, _("Match &whole word"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_matchWholeWord->SetValue(false);
    m_matchWholeWord->SetToolTip(_("Toggle whole word search"));
    
    fgSizer3->Add(m_matchWholeWord, 0, wxALL|wxEXPAND, 5);
    
    m_regualrExpression = new wxCheckBox(m_panel1, wxID_ANY, _("Regular &expression"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_regualrExpression->SetValue(false);
    m_regualrExpression->SetToolTip(_("The 'Find What' field is a regular expression"));
    
    fgSizer3->Add(m_regualrExpression, 0, wxALL|wxEXPAND, 5);
    
    m_checkBoxSaveFilesBeforeSearching = new wxCheckBox(m_panel1, wxID_ANY, _("&Save modified files before searching"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkBoxSaveFilesBeforeSearching->SetValue(false);
    m_checkBoxSaveFilesBeforeSearching->SetToolTip(_("Save any modified files before search starts"));
    
    fgSizer3->Add(m_checkBoxSaveFilesBeforeSearching, 0, wxALL|wxEXPAND, 5);
    
    m_checkBoxSeparateTab = new wxCheckBox(m_panel1, wxID_ANY, _("Display search results in separate tab"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkBoxSeparateTab->SetValue(true);
    
    fgSizer3->Add(m_checkBoxSeparateTab, 0, wxALL, 5);
    
    m_panel2 = new wxPanel(m_notebook1, wxID_ANY, wxDefaultPosition, wxSize(-1, -1), wxTAB_TRAVERSAL);
    m_notebook1->AddPage(m_panel2, _("C++"), false);
    
    wxBoxSizer* bSizer7 = new wxBoxSizer(wxVERTICAL);
    m_panel2->SetSizer(bSizer7);
    
    wxFlexGridSizer* fgSizer4 = new wxFlexGridSizer(  0, 1, 0, 0);
    fgSizer4->SetFlexibleDirection( wxBOTH );
    fgSizer4->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
    
    bSizer7->Add(fgSizer4, 0, wxEXPAND, 5);
    
    m_printScope = new wxCheckBox(m_panel2, wxID_ANY, _("Display the C++ scope of the match"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_printScope->SetValue(false);
    m_printScope->SetToolTip(_("Display the class + function name for the matches"));
    
    fgSizer4->Add(m_printScope, 0, wxALL, 5);
    
    m_checkBoxSkipMatchesFoundInComments = new wxCheckBox(m_panel2, wxID_ANY, _("Hide matches found in comments"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkBoxSkipMatchesFoundInComments->SetValue(false);
    
    fgSizer4->Add(m_checkBoxSkipMatchesFoundInComments, 0, wxALL, 5);
    
    m_checkBoxSkipMatchesFoundInStrings = new wxCheckBox(m_panel2, wxID_ANY, _("Hide matches found inside strings"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkBoxSkipMatchesFoundInStrings->SetValue(false);
    
    fgSizer4->Add(m_checkBoxSkipMatchesFoundInStrings, 0, wxALL, 5);
    
    m_checkBoxHighlighStringComments = new wxCheckBox(m_panel2, wxID_ANY, _("Use different colour for matches found in comments"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_checkBoxHighlighStringComments->SetValue(false);
    
    fgSizer4->Add(m_checkBoxHighlighStringComments, 0, wxALL, 5);
    
    fgSizer41->Add(0, 0, 0, wxBOTTOM|wxEXPAND, 10);
    
    wxBoxSizer* bSizer2 = new wxBoxSizer(wxVERTICAL);
    
    bSizer1->Add(bSizer2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5);
    
    m_find = new wxButton(this, wxID_FIND, _("&Find"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_find->SetDefault();
    m_find->SetToolTip(_("Begin search"));
    
    bSizer2->Add(m_find, 0, wxALL|wxEXPAND, 5);
    
    m_replaceAll = new wxButton(this, wxID_REPLACE, _("&Replace"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_replaceAll->SetToolTip(_("Search for matches and place them in the 'Replace' window as candidates for possible replace operation"));
    
    bSizer2->Add(m_replaceAll, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 5);
    
    m_stop = new wxButton(this, wxID_STOP, _("Sto&p"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_stop->SetToolTip(_("Stop the current search"));
    
    bSizer2->Add(m_stop, 0, wxLEFT|wxRIGHT|wxBOTTOM|wxEXPAND, 5);
    
    m_cancel = new wxButton(this, wxID_CLOSE, _("Close"), wxDefaultPosition, wxSize(-1, -1), 0);
    m_cancel->SetToolTip(_("Close this dialog"));
    
    bSizer2->Add(m_cancel, 0, wxALL|wxEXPAND, 5);
    
    
    SetSizeHints(-1,-1);
    if ( GetSizer() ) {
         GetSizer()->Fit(this);
    }
    Centre();
    // Connect events
    this->Connect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(FindInFilesDialogBase::OnClose), NULL, this);
    m_btnAddPath->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnAddPath), NULL, this);
    m_btnRemovelPath->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnRemovePath), NULL, this);
    m_btnRemovelPath->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(FindInFilesDialogBase::OnRemovePathUI), NULL, this);
    m_btnClearPaths->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClearPaths), NULL, this);
    m_btnClearPaths->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(FindInFilesDialogBase::OnClearPathsUI), NULL, this);
    m_matchCase->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClick), NULL, this);
    m_matchWholeWord->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClick), NULL, this);
    m_regualrExpression->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClick), NULL, this);
    m_checkBoxSaveFilesBeforeSearching->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClick), NULL, this);
    m_checkBoxSeparateTab->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClick), NULL, this);
    m_printScope->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClick), NULL, this);
    m_checkBoxSkipMatchesFoundInComments->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClick), NULL, this);
    m_checkBoxSkipMatchesFoundInStrings->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClick), NULL, this);
    m_checkBoxHighlighStringComments->Connect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClick), NULL, this);
    m_checkBoxHighlighStringComments->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(FindInFilesDialogBase::OnUseDiffColourForCommentsUI), NULL, this);
    m_find->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClick), NULL, this);
    m_find->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(FindInFilesDialogBase::OnFindWhatUI), NULL, this);
    m_replaceAll->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClick), NULL, this);
    m_replaceAll->Connect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(FindInFilesDialogBase::OnFindWhatUI), NULL, this);
    m_stop->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClick), NULL, this);
    m_cancel->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClick), NULL, this);
    
}

FindInFilesDialogBase::~FindInFilesDialogBase()
{
    this->Disconnect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(FindInFilesDialogBase::OnClose), NULL, this);
    m_btnAddPath->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnAddPath), NULL, this);
    m_btnRemovelPath->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnRemovePath), NULL, this);
    m_btnRemovelPath->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(FindInFilesDialogBase::OnRemovePathUI), NULL, this);
    m_btnClearPaths->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClearPaths), NULL, this);
    m_btnClearPaths->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(FindInFilesDialogBase::OnClearPathsUI), NULL, this);
    m_matchCase->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClick), NULL, this);
    m_matchWholeWord->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClick), NULL, this);
    m_regualrExpression->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClick), NULL, this);
    m_checkBoxSaveFilesBeforeSearching->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClick), NULL, this);
    m_checkBoxSeparateTab->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClick), NULL, this);
    m_printScope->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClick), NULL, this);
    m_checkBoxSkipMatchesFoundInComments->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClick), NULL, this);
    m_checkBoxSkipMatchesFoundInStrings->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClick), NULL, this);
    m_checkBoxHighlighStringComments->Disconnect(wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClick), NULL, this);
    m_checkBoxHighlighStringComments->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(FindInFilesDialogBase::OnUseDiffColourForCommentsUI), NULL, this);
    m_find->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClick), NULL, this);
    m_find->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(FindInFilesDialogBase::OnFindWhatUI), NULL, this);
    m_replaceAll->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClick), NULL, this);
    m_replaceAll->Disconnect(wxEVT_UPDATE_UI, wxUpdateUIEventHandler(FindInFilesDialogBase::OnFindWhatUI), NULL, this);
    m_stop->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClick), NULL, this);
    m_cancel->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(FindInFilesDialogBase::OnClick), NULL, this);
    
}

//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxcrafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef CODELITE_CODELITE_TERMINAL_WXCRAFTER_BASE_CLASSES_H
#define CODELITE_CODELITE_TERMINAL_WXCRAFTER_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/frame.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/stc/stc.h>
#include <wx/menu.h>
#include <wx/timer.h>
#include <wx/dialog.h>
#include <wx/stattext.h>
#include <wx/clrpicker.h>
#include <wx/fontpicker.h>
#include <wx/button.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

class MainFrameBaseClass : public wxFrame
{
public:
    enum {
        ID_SIGHUP = 1001,
        ID_SIGINT = 1002,
        ID_SIGKILL = 1003,
        ID_SIGTERM = 1004,
    };
protected:
    wxPanel* m_mainPanel;
    wxStyledTextCtrl* m_stc;
    wxMenuBar* m_menuBar;
    wxMenu* m_File;
    wxMenuItem* m_menuItemSave;
    wxMenuItem* m_menuItemClear;
    wxMenuItem* m_menuItem69;
    wxMenuItem* m_menuItemPreferences;
    wxMenuItem* m_menuItem51;
    wxMenuItem* m_menuItem7;
    wxMenu* m_Signals;
    wxMenuItem* m_menuItemINT;
    wxMenuItem* m_menuItemTERM;
    wxMenuItem* m_menuItemKILL;
    wxMenuItem* m_menuItemHUP;
    wxMenu* m_Help;
    wxMenuItem* m_menuItem9;
    wxTimer* m_timerMarker;

protected:
    virtual void OnIdle(wxIdleEvent& event) { event.Skip(); }
    virtual void OnKeyDown(wxKeyEvent& event) { event.Skip(); }
    virtual void OnStcUpdateUI(wxStyledTextEvent& event) { event.Skip(); }
    virtual void OnClearView(wxCommandEvent& event) { event.Skip(); }
    virtual void OnSettings(wxCommandEvent& event) { event.Skip(); }
    virtual void OnExit(wxCommandEvent& event) { event.Skip(); }
    virtual void OnSignal(wxCommandEvent& event) { event.Skip(); }
    virtual void OnAbout(wxCommandEvent& event) { event.Skip(); }
    virtual void OnAddMarker(wxTimerEvent& event) { event.Skip(); }

public:
    wxStyledTextCtrl* GetStc() { return m_stc; }
    wxPanel* GetMainPanel() { return m_mainPanel; }
    wxMenuBar* GetMenuBar() { return m_menuBar; }
    wxTimer* GetTimerMarker() { return m_timerMarker; }
    MainFrameBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Codepad-Terminal"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_FRAME_STYLE);
    virtual ~MainFrameBaseClass();
};


class SettingsDlgBase : public wxDialog
{
protected:
    wxStaticText* m_staticText31;
    wxColourPickerCtrl* m_colourPickerFG;
    wxStaticText* m_staticText35;
    wxColourPickerCtrl* m_colourPickerBG;
    wxStaticText* m_staticText39;
    wxFontPickerCtrl* m_fontPicker;
    wxButton* m_button45;
    wxButton* m_button47;

protected:
    virtual void OnFGColour(wxColourPickerEvent& event) { event.Skip(); }
    virtual void OnBGColour(wxColourPickerEvent& event) { event.Skip(); }
    virtual void OnFontSelected(wxFontPickerEvent& event) { event.Skip(); }

public:
    wxStaticText* GetStaticText31() { return m_staticText31; }
    wxColourPickerCtrl* GetColourPickerFG() { return m_colourPickerFG; }
    wxStaticText* GetStaticText35() { return m_staticText35; }
    wxColourPickerCtrl* GetColourPickerBG() { return m_colourPickerBG; }
    wxStaticText* GetStaticText39() { return m_staticText39; }
    wxFontPickerCtrl* GetFontPicker() { return m_fontPicker; }
    wxButton* GetButton45() { return m_button45; }
    wxButton* GetButton47() { return m_button47; }
    SettingsDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Settings"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~SettingsDlgBase();
};

#endif

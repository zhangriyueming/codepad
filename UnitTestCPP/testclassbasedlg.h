///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 16 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __testclassbasedlg__
#define __testclassbasedlg__

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/checkbox.h>
#include <wx/checklst.h>
#include <wx/statline.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class TestClassBaseDlg
///////////////////////////////////////////////////////////////////////////////
class TestClassBaseDlg : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText1;
		wxTextCtrl* m_textCtrlClassName;
		wxButton* m_buttonClass;
		wxButton* m_buttonRefresh;
		wxCheckBox* m_checkBox1;
		wxTextCtrl* m_textCtrlFileName;
		wxCheckBox* m_checkBoxUseFixture;
		wxTextCtrl* m_textCtrlFixtureName;
		wxStaticText* m_staticText6;
		wxCheckListBox* m_checkListMethods;
		wxButton* m_buttonCheckAll;
		wxButton* m_buttonUnCheckAll;
		wxStaticLine* m_staticline2;
		wxButton* m_buttonCreate;
		wxButton* m_buttonCancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClassNameTyped( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnShowClassListDialog( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnRefreshFunctions( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnRefreshButtonUI( wxUpdateUIEvent& event ){ event.Skip(); }
		virtual void OnUseActiveEditor( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnUseFixture( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnCheckAll( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnUnCheckAll( wxCommandEvent& event ){ event.Skip(); }
		virtual void OnButtonOk( wxCommandEvent& event ){ event.Skip(); }
		
	
	public:
		TestClassBaseDlg( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Create UnitTests for Class.."), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 779,381 ), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER );
		~TestClassBaseDlg();
	
};

#endif //__testclassbasedlg__

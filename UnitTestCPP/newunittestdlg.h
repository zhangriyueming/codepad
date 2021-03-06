//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2008 by Eran Ifrah
// file name            : newunittestdlg.h
//
// -------------------------------------------------------------------------
// A
//              _____           _      _     _ _
//             /  __ \         | |    | |   (_) |
//             | /  \/ ___   __| | ___| |    _| |_ ___
//             | |    / _ \ / _  |/ _ \ |   | | __/ _ )
//             | \__/\ (_) | (_| |  __/ |___| | ||  __/
//              \____/\___/ \__,_|\___\_____/_|\__\___|
//
//                                                  F i l e
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

#ifndef __newunittestdlg__
#define __newunittestdlg__

/**
@file
Subclass of NewUnitTestBaseDlg, which is generated by wxFormBuilder.
*/

#include "newunittestbasedlg.h"

class UnitTestPP;
class IConfigTool;

/**
 * Implementing NewUnitTestBaseDlg
 **/
class NewUnitTestDlg : public NewUnitTestBaseDlg
{
	UnitTestPP  *m_plugin;
	IConfigTool *m_config;

public:
	/** Constructor */
	NewUnitTestDlg( wxWindow* parent, UnitTestPP *plugin, IConfigTool *conf );
	virtual ~NewUnitTestDlg();

	wxString GetTestName() {
		return m_textCtrlTestName->GetValue();
	}
	wxString GetFixtureName() {
		return m_textCtrlFixtureName->GetValue();
	}
	wxString GetProjectName() {
		return m_choiceProjects->GetStringSelection();
	}
	wxString GetFilename() {
		return m_textCtrlOutputFile->GetValue();
	}
};

#endif // __newunittestdlg__

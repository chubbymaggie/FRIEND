//
//  Settings.hpp
//  Flexible Register/Instruction Extender aNd Documentation
//
//  Created by Alexander Hude on 11/11/2016.
//  Copyright © 2017 Alexander Hude. All rights reserved.
//

#pragma once

#include <string>

class PluginDelegate;

class Settings
{
public:
	
	Settings() {}
	
	void		setDelegate(PluginDelegate* delegate) {m_delegate = delegate;}
	void		load();
	bool		show();
	
private:
	
	static int idaapi s_formCallback(int fid, form_actions_t &fa);

private:
	
	PluginDelegate* m_delegate;
	
	std::string	m_configPath;
	
	bool		m_procEnabled = false;
	bool		m_docEnabled = false;
	bool		m_summaryEnabled = false;
	bool		m_saveSettings = false;
};

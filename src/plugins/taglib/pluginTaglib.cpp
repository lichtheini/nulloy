/********************************************************************
**  Nulloy Music Player, http://nulloy.com
**  Copyright (C) 2010-2013 Sergey Vlasov <sergey@vlasov.me>
**
**  This program can be distributed under the terms of the GNU
**  General Public License version 3.0 as published by the Free
**  Software Foundation and appearing in the file LICENSE.GPL3
**  included in the packaging of this file.  Please review the
**  following information to ensure the GNU General Public License
**  version 3.0 requirements will be met:
**
**  http://www.gnu.org/licenses/gpl-3.0.html
**
*********************************************************************/

#include "pluginTaglib.h"
#include "tagReaderTaglib.h"
#include "coverReaderTaglib.h"

NPluginTaglib::NPluginTaglib(QObject *parent) : QObject(parent)
{
	m_plugins << new NTagReaderTaglib()
	          << new NCoverReaderTaglib();
}

NPluginTaglib::~NPluginTaglib()
{
	foreach (NPlugin *plugin, m_plugins)
		delete plugin;
}

QList<NPlugin *> NPluginTaglib::plugins()
{
	return m_plugins;
}

Q_EXPORT_PLUGIN2(plugin_taglib, NPluginTaglib)


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

#ifndef N_GLOBAL_H
#define N_GLOBAL_H

#include <QtCore>

#ifndef Q_MOC_RUN
namespace N
#else
class N
#endif
{
#if defined(Q_MOC_RUN)
	Q_GADGET
	Q_ENUMS(PlaybackState)
public:
#endif

	enum PlaybackState {
		PlaybackStopped,
		PlaybackPlaying,
		PlaybackPaused
	};

	extern const QMetaObject staticMetaObject;
};

#endif


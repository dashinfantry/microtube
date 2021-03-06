/* $BEGIN_LICENSE

This file is part of Minitube.
Copyright 2009, Flavio Tordini <flavio.tordini@gmail.com>
Copyright 2018, Michał Szczepaniak <m.szczepaniak.000@gmail.com>

Minitube is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

Minitube is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Minitube.  If not, see <http://www.gnu.org/licenses/>.

$END_LICENSE */

#ifndef YTSUGGESTER_H
#define YTSUGGESTER_H

#include <QtCore>
#include "suggester.h"

class YTSuggester : public Suggester {

    Q_OBJECT

public:
    YTSuggester(QObject *parent = 0);
    void suggest(const QString &query);

signals:
    void ready(const QVector<Suggestion*> &suggestions);

private slots:
    void handleNetworkData(QByteArray response);

};

#endif // YTSUGGESTER_H

/**
 * \file
 * \author Lars Bilke
 * \date   2011-03-23
 * \brief  Definition of the QValueTooltipSlider class.
 *
 * \copyright
 * Copyright (c) 2012-2015, OpenGeoSys Community (http://www.opengeosys.org)
 *            Distributed under a Modified BSD License.
 *              See accompanying file LICENSE.txt or
 *              http://www.opengeosys.org/project/license
 */

#ifndef QVALUETOOLTIPSLIDER_H
#define QVALUETOOLTIPSLIDER_H

#include <QSlider>

/**
 * \brief A QSlider which shows its value as a tooltip when moved.
 */
class QValueTooltipSlider : public QSlider
{
	Q_OBJECT

public:
	QValueTooltipSlider(QWidget* parent = 0);

public slots:
	void setTooltipValue(int value);

protected:
};

#endif // QVALUETOOLTIPSLIDER_H

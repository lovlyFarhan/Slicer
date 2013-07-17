/*==============================================================================

  Program: 3D Slicer

  Copyright (c) Kitware Inc.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Julien Finet, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#ifndef __qSlicerQTCLIPlugins_h
#define __qSlicerQTCLIPlugins_h

// QT includes
#include <QDesignerCustomWidgetCollectionInterface>

// QtCLI includes
#include "qSlicerCLIProgressBarPlugin.h"

// \class Group the plugins in one library
class Q_SLICER_BASE_QTCLI_PLUGINS_EXPORT qSlicerQTCLIPlugins
  : public QObject
  , public QDesignerCustomWidgetCollectionInterface
{
  Q_OBJECT
  Q_INTERFACES(QDesignerCustomWidgetCollectionInterface);

public:
  QList<QDesignerCustomWidgetInterface*> customWidgets() const
    {
    QList<QDesignerCustomWidgetInterface *> plugins;
    plugins << new qSlicerCLIProgressBarPlugin;
    return plugins;
    }
};

#endif

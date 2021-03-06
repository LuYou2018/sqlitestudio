#ifndef EXTENDEDPALETTE_H
#define EXTENDEDPALETTE_H

#include <QBrush>

class QStyle;

class ExtendedPalette
{
    public:
        ExtendedPalette();

        QBrush editorString() const;
        void setEditorString(const QBrush &value);

        QBrush editorLineBase() const;
        void setEditorLineBase(const QBrush &value);

        void styleChanged(QStyle* style, const QString& themeName);

    private:
        QBrush editorStringBrush;
        QBrush editorLineBaseBrush;
};

#endif // EXTENDEDPALETTE_H

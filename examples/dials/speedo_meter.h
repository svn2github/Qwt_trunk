#ifndef SPEEDO_METER
#define SPEEDO_METER

#include <qstring.h>
#include <qwt_dial.h>

class SpeedoMeter: public QwtDial
{
public:
    SpeedoMeter( QWidget *parent = NULL );

    void setLabel( const QString & );
    QString label() const;

protected:
    virtual void drawScaleContents( QPainter *painter,
        const QPointF &center, double radius ) const QWT_OVERRIDE;

private:
    QString d_label;
};

#endif

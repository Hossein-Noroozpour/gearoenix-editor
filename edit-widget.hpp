#ifndef EDITWIDGET_HPP
#define EDITWIDGET_HPP

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QPainter>
#include <QDebug>

class Widget : public QGraphicsView
{

    Q_OBJECT
private:
    QGraphicsScene* scene;
public:
    Widget(): QGraphicsView()
    {
        scene = new QGraphicsScene();
        setScene(scene);
    }
    void resizeEvent(QResizeEvent *pe) override
    {
        qDebug() << "painted";
        float width = size().width();
        float height = size().height();
        unsigned char *buffer = new unsigned char[(int)width * (int)height];
        for(int i = (int)height - 1, index = 0; i >= 0; --i)
            for(int j = (int) width - 1; j >= 0; --j, ++index)
                buffer[index] = (unsigned char)(j & 255);
        QImage img(buffer, width, height, QImage::Format_Indexed8);
        scene->clear();
        scene->addPixmap(QPixmap::fromImage(img));
        update();
        QGraphicsView::resizeEvent(pe);
    }
};

#endif

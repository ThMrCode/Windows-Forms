#pragma once
#include <cmath>

namespace windowyujra
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

    public ref class ColorPalet {
    public: 
        // Azul oscuro
        static Color primaryColor = Color::FromArgb(41, 128, 185); 
        // Gris oscuro
        static Color secondaryColor = Color::FromArgb(52, 73, 94); 
        // Gris claro
        static Color backgroundColor = Color::FromArgb(236, 240, 241); 
        // Amarillo brillante
        static Color accentColor = Color::FromArgb(241, 196, 15); 
        // Azul muy oscuro
        static Color textColor = Color::FromArgb(44, 62, 80); 
        // Blanco
        static Color whiteColor = Color::FromArgb(255, 255, 255); 
        // Amarillo Palido
        static Color yellowColor = Color::FromArgb(255, 255, 224);
        // Creación de los Pen con los colores especificados
        static float widthBold = 10.0f;
        static Pen^ blackBold = gcnew Pen(Color::Black, widthBold);
        static Pen^ primaryBold = gcnew Pen(primaryColor, widthBold);
        static Pen^ secondaryBold = gcnew Pen(secondaryColor, widthBold);
        static Pen^ backgroundBold = gcnew Pen(backgroundColor, widthBold);
        static Pen^ accentBold = gcnew Pen(accentColor, widthBold);
        static Pen^ textBold = gcnew Pen(textColor, widthBold);
        static Pen^ whiteBold = gcnew Pen(whiteColor, widthBold);
        static Pen^ yellowBold = gcnew Pen(yellowColor, widthBold);
        static float widthMiddle = 5.0f;
        static Pen^ blackMiddle = gcnew Pen(Color::Black, widthMiddle);
        static Pen^ cyanMiddle = gcnew Pen(Color::Cyan, widthMiddle);
        static Pen^ purpleMiddle = gcnew Pen(Color::Purple, widthMiddle);
        static Pen^ greenMiddle = gcnew Pen(Color::LightGreen, widthMiddle);
        static Pen^ primaryMiddle = gcnew Pen(primaryColor, widthMiddle);
        static Pen^ secondaryMiddle = gcnew Pen(secondaryColor, widthMiddle);
        static Pen^ backgroundMiddle = gcnew Pen(backgroundColor, widthMiddle);
        static Pen^ accentMiddle = gcnew Pen(accentColor, widthMiddle);
        static Pen^ textMiddle = gcnew Pen(textColor, widthMiddle);
        static Pen^ whiteMiddle = gcnew Pen(whiteColor, widthMiddle);
        static Pen^ yellowMiddle = gcnew Pen(yellowColor, widthMiddle);
        static float widthSmall = 3.0f;
        static Pen^ blackSmall = gcnew Pen(Color::Black, widthSmall);
        // Creación de los Brushes con los colores especificados
        static Brush^ blackBrush = gcnew SolidBrush(Color::Black);
        static Brush^ primaryBrush = gcnew SolidBrush(primaryColor);
        static Brush^ secondaryBrush = gcnew SolidBrush(secondaryColor);
        static Brush^ backgroundBrush = gcnew SolidBrush(backgroundColor);
        static Brush^ accentBrush = gcnew SolidBrush(accentColor);
        static Brush^ textBrush = gcnew SolidBrush(textColor);
        static Brush^ whiteBrush = gcnew SolidBrush(whiteColor);
        static Brush^ yellowBrush = gcnew SolidBrush(yellowColor);
    };

	public ref class CustomerUI {
    public:
        static void ApplyStyle(Control^ control)
    {
        for each (Control ^ child in control->Controls)
        {
            if (dynamic_cast<Button^>(child))
            {
                Button^ button = dynamic_cast<Button^>(child);
                button->BackColor = ColorPalet::primaryColor;
                button->ForeColor = ColorPalet::whiteColor;
                button->FlatStyle = FlatStyle::Flat;
                button->FlatAppearance->BorderSize = 0;
                button->Font = gcnew Drawing::Font("Segoe UI", 10, FontStyle::Bold);
                button->FlatAppearance->MouseOverBackColor = Color::FromArgb(31, 97, 141);
                button->FlatAppearance->MouseDownBackColor = Color::FromArgb(21, 67, 96);
                button->Cursor = Cursors::Hand;
            }
            else if (dynamic_cast<Label^>(child))
            {
                Label^ label = dynamic_cast<Label^>(child);
                label->ForeColor = ColorPalet::textColor;
                label->Font = gcnew Drawing::Font("Segoe UI", 10, FontStyle::Regular);
            }
            else if (dynamic_cast<TextBox^>(child))
            {
                TextBox^ textBox = dynamic_cast<TextBox^>(child);
                textBox->BackColor = ColorPalet::whiteColor;
                textBox->ForeColor = ColorPalet::textColor;
                textBox->Font = gcnew Drawing::Font("Segoe UI", 10);
                textBox->BorderStyle = BorderStyle::None;

                // Evento para cambiar la apariencia cuando se selecciona el TextBox
                textBox->Enter += gcnew EventHandler(&ApplyStyle_Enter);
                textBox->Leave += gcnew EventHandler(&ApplyStyle_Leave);
            }
            else if (dynamic_cast<TableLayoutPanel^>(child))
            {
                TableLayoutPanel^ tableLayoutPanel = dynamic_cast<TableLayoutPanel^>(child);
                tableLayoutPanel->BackColor = ColorPalet::backgroundColor;
                tableLayoutPanel->BorderStyle = BorderStyle::None;
            }
            else if (dynamic_cast<Form^>(child))
            {
                Form^ form = dynamic_cast<Form^>(child);
                form->BackColor = ColorPalet::backgroundColor;
                form->Font = gcnew Drawing::Font("Segoe UI", 10);
            }

            // Aplicar el estilo recursivamente a los controles hijos
            if (child->Controls->Count > 0)
            {
                ApplyStyle(child);
            }
        }
    }

        static void ApplyStyle_Enter(Object^ sender, EventArgs^ e)
          {
              TextBox^ textBox = dynamic_cast<TextBox^>(sender);
              if (textBox != nullptr)
              {
                  textBox->BackColor = ColorPalet::yellowColor; // Amarillo pálido para la entrada activa
                  textBox->BorderStyle = BorderStyle::Fixed3D;
              }
          }

        static void ApplyStyle_Leave(Object^ sender, EventArgs^ e)
          {
              TextBox^ textBox = dynamic_cast<TextBox^>(sender);
              if (textBox != nullptr)
              {
                  textBox->BackColor = ColorPalet::whiteColor; // Blanco
                  textBox->BorderStyle = BorderStyle::None;
              }
          }

	};

    public ref class GraphicsExtra {
    public:
        static Rectangle RectangleIn(int x, int y, int w, int h, int b) {
            return Rectangle(x + b / 2, y + b / 2, w - b, h - b);
        }
        static Rectangle RectangleEx(int x, int y, int w, int h, int b) {
            return Rectangle(x - b / 2, y - b / 2, w + b, h + b);
        }
        static Point IsometricPot(int x, int y, int z, Point pot) {
            // Traducir a Isometrico origen pot
            // Aca tambien se define el angulo de inclinacion
            int new_x = pot.X + (((x - z) * sqrt(3)) / 2.0);
            int new_y = pot.Y - y - ((x + z) / 2.0);
            return Point(new_x, new_y);
        }
        static Rectangle RectanglePot(int x, int y, int s) {
            return Rectangle(x, y, s, s);
        }
    };

    public ref class Graphics3D {
    public:
        static void Sphere(int x, int y, int size, Graphics^ canvas) {
            Pen^ pen = ColorPalet::primaryMiddle;
            Brush^ brush = ColorPalet::whiteBrush;
            float factor = 0.425f;
            canvas->FillEllipse(brush, Rectangle(x, y, size, size));
            canvas->DrawEllipse(pen, GraphicsExtra::RectangleIn(x, y, size, size, ColorPalet::widthMiddle));
            canvas->DrawArc(pen, GraphicsExtra::RectangleIn(x, y + 0.5 * (1.0f - factor) * size, size, factor * size, ColorPalet::widthMiddle), 0.0f, 180.0f);
        }
        static void Cylinder(int x, int y, int h, int d, Graphics^ canvas) {
            Pen^ pen = ColorPalet::greenMiddle;
            Brush^ brush = ColorPalet::whiteBrush;
            float factor = 0.425f;
            Rectangle r1 = GraphicsExtra::RectangleIn(x, y, d, factor * d, ColorPalet::widthMiddle);
            Rectangle r2 = GraphicsExtra::RectangleIn(x, y + h - factor * d, d, factor * d, ColorPalet::widthMiddle);
            Point p1 = Point((int)(x + 0.5 * ColorPalet::widthMiddle), (int)(y + 0.5 * factor * d));
            Point p2 = Point((int)(x + 0.5 * ColorPalet::widthMiddle), (int)(y + h - 0.5 * factor * d));
            Point p3 = Point((int)(x + d - 0.5 * ColorPalet::widthMiddle), (int)(y + 0.5 * factor * d));
            Point p4 = Point((int)(x + d - 0.5 * ColorPalet::widthMiddle), (int)(y + h - 0.5 * factor * d));
            array<Point>^ page = { p1,p2,p4,p3 };
            canvas->FillEllipse(brush, r1);
            canvas->FillEllipse(brush, r2);
            canvas->FillPolygon(brush,page);
            canvas->DrawEllipse(pen, r1);
            canvas->DrawLine(pen, p1, p2);
            canvas->DrawLine(pen, p3, p4);
            canvas->DrawArc(pen, r2, 0.0f, 180.0f);
        }
        static void Cone(int x, int y, int h, int d, Graphics^ canvas) {
            Pen^ pen = ColorPalet::purpleMiddle;
            Brush^ brush = ColorPalet::whiteBrush;
            float factor = 0.425f;
            Rectangle r1 = GraphicsExtra::RectangleIn(x, y + h - factor * d, d, factor * d, ColorPalet::widthMiddle);
            Point p1 = Point((int)(x + 0.5 * ColorPalet::widthMiddle), (int)(y + h - 0.5 * factor * d));
            Point p2 = Point((int)(x + 0.5 * d), (int)(y + 0.5 * ColorPalet::widthMiddle));
            Point p3 = Point((int)(x + d - 0.5 * ColorPalet::widthMiddle), (int)(y + h - 0.5 * factor * d));
            array<Point>^ page = { p1,p2,p3 };
            canvas->FillPolygon(brush,page);
            canvas->FillEllipse(brush, r1);
            canvas->DrawLine(pen, p1,p2);
            canvas->DrawLine(pen, p3,p2);
            canvas->DrawArc(pen, r1, 0.0f, 180.0f);
        }
        static void Cube(int x, int y, int l, Graphics^ canvas) {
            // Lapiz
            Pen^ pen = ColorPalet::cyanMiddle;
            Brush^ brush = ColorPalet::whiteBrush;
            // Se le pasa punto de origen
            Point p1 = Point(x,y);
            Point p2 = GraphicsExtra::IsometricPot(l,0,0,p1);
            Point p3 = GraphicsExtra::IsometricPot(l, l, 0, p1);
            Point p4 = GraphicsExtra::IsometricPot(0, 0, l, p1);
            Point p5 = GraphicsExtra::IsometricPot(0, l, l, p1);
            Point p6 = GraphicsExtra::IsometricPot(0, l, 0, p1);
            Point p7 = GraphicsExtra::IsometricPot(l, l, l, p1);
            array<Point>^ page_1 = { p1,p2,p3,p6 };
            array<Point>^ page_2 = { p1,p4,p5,p6 };
            array<Point>^ page_3 = { p3,p6,p5,p7 };
            canvas->FillPolygon(brush, page_1);
            canvas->FillPolygon(brush, page_2);
            canvas->FillPolygon(brush, page_3);
            canvas->DrawLine(pen,p1,p2);
            canvas->DrawLine(pen, p2, p3);
            canvas->DrawLine(pen, p1, p4);
            canvas->DrawLine(pen, p4, p5);
            canvas->DrawLine(pen, p3, p6);
            canvas->DrawLine(pen, p3, p7);
            canvas->DrawLine(pen, p5, p6);
            canvas->DrawLine(pen, p5, p7);
            canvas->DrawLine(pen, p1, p6);
        }
        static void Paralepiped(int x, int y, int s_x, int s_y,int s_z, Graphics^ canvas) {
            Pen^ pen = ColorPalet::blackMiddle;
            Brush^ brush = ColorPalet::whiteBrush;
            // Se le pasa punto de origen
            Point p1 = Point(x, y);
            Point p2 = GraphicsExtra::IsometricPot(s_x, 0, 0, p1);
            Point p3 = GraphicsExtra::IsometricPot(s_x, s_y, 0, p1);
            Point p4 = GraphicsExtra::IsometricPot(0, 0, s_z, p1);
            Point p5 = GraphicsExtra::IsometricPot(0, s_y, s_z, p1);
            Point p6 = GraphicsExtra::IsometricPot(0, s_y, 0, p1);
            Point p7 = GraphicsExtra::IsometricPot(s_x, s_y, s_z, p1);
            array<Point>^ page_1 = { p1,p2,p3,p6 };
            array<Point>^ page_2 = { p1,p4,p5,p6 };
            array<Point>^ page_3 = { p3,p6,p5,p7 };
            canvas->FillPolygon(brush, page_1);
            canvas->FillPolygon(brush, page_2);
            canvas->FillPolygon(brush, page_3);
            canvas->DrawLine(pen, p1, p2);
            canvas->DrawLine(pen, p2, p3);
            canvas->DrawLine(pen, p1, p4);
            canvas->DrawLine(pen, p4, p5);
            canvas->DrawLine(pen, p3, p6);
            canvas->DrawLine(pen, p3, p7);
            canvas->DrawLine(pen, p5, p6);
            canvas->DrawLine(pen, p5, p7);
            canvas->DrawLine(pen, p1, p6);
        }
        static void Isometric_1(int x, int y, int size, Graphics^ canvas) {
            int s_x_1 = (0.5 * size);  int s_y_1 = (0.7 * size);int s_z_1 = (0.7 * size);
            int s_x_2 = (size - s_x_1);  int s_y_2 = size;int s_z_2 = size;
            int l_1 = 50;  int b_1 = 25;
            int l_2 = 70;  int b_2 = 25;
            int dif = 20;
            Point pot_1 = GraphicsExtra::IsometricPot(0,0,(size-s_z_1),Point(x,y));
            Point pot_2 = GraphicsExtra::IsometricPot(s_x_1, 0, 0, Point(x, y));
            Paralepiped(pot_2.X, pot_2.Y, s_x_2,s_y_2, s_z_2, canvas);
            Paralepiped(pot_1.X, pot_1.Y, s_x_1, s_y_1, s_z_1, canvas);
        }
        static void Isometric_2(int x, int y, int size, Graphics^ canvas) {
            int s_x_1 = size;  int s_y_1 = (0.5*size);int s_z_1 = size;
            int s_x_2 = (0.55*size);  int s_y_2 = (size - s_y_1) ;int s_z_2 = (0.25 * size);
            int s_x_3 = (0.55 * size);  int s_y_3 = (size - s_y_1);int s_z_3 = (0.25 * size);
            Point pot_2 = GraphicsExtra::IsometricPot((s_x_1-s_x_2), s_y_1, 0, Point(x, y));
            Point pot_3 = GraphicsExtra::IsometricPot((s_x_1 - s_x_2), s_y_1, (s_z_1-s_z_3), Point(x, y));
            Paralepiped(x, y, s_x_1, s_y_1, s_z_1, canvas);
            Paralepiped(pot_2.X, pot_2.Y, s_x_2, s_y_2, s_z_2, canvas);
            Paralepiped(pot_3.X, pot_3.Y, s_x_3, s_y_3, s_z_3, canvas);
        }
        static void DrawHappyFace(Point position, Graphics^ canvas)
        {
            Pen^ pen = ColorPalet::blackMiddle;
            Brush^ brush = ColorPalet::whiteBrush;
            // Tamaño y posición de la cara
            int faceRadius = 50;
            Rectangle faceRect(position.X - faceRadius, position.Y - faceRadius, 2 * faceRadius, 2 * faceRadius);
            // Dibujar la cara
            canvas->FillEllipse(brush, faceRect);
            canvas->DrawEllipse(pen, faceRect);
            // Ojos
            int eyeRadius = 5;
            Point leftEye(position.X - 15, position.Y - 10);
            Point rightEye(position.X + 15, position.Y - 10);
            canvas->DrawEllipse(pen, leftEye.X - eyeRadius, leftEye.Y - eyeRadius, 2 * eyeRadius, 2 * eyeRadius);
            canvas->DrawEllipse(pen, rightEye.X - eyeRadius, rightEye.Y - eyeRadius, 2 * eyeRadius, 2 * eyeRadius);
            // Boca
            Point mouthStart(position.X - 20, position.Y + 10);
            Point mouthEnd(position.X + 20, position.Y + 10);
            Point mouthControl(position.X, position.Y + 30);
            canvas->DrawBezier(pen, mouthStart, Point(mouthControl.X - 10, mouthControl.Y), Point(mouthControl.X + 10, mouthControl.Y), mouthEnd);
        }
    };

    public ref class GraphicsFuntion {
    public:
        static void DrawPlane(Point pot, Graphics^ canvas, int size_x, int size_y, int extra) {
            Pen^ pen = ColorPalet::blackSmall;
            Brush^ brush = ColorPalet::whiteBrush;
            Point p1 = Point(pot.X - extra, pot.Y);
            Point p2 = Point(pot.X + size_x, pot.Y);
            Point p3 = Point(pot.X, pot.Y + extra);
            Point p4 = Point(pot.X, pot.Y - size_y);
            Rectangle plane = Rectangle(pot.X - extra, pot.Y - size_y, size_x + extra, size_y + extra);
            Rectangle plane_ = GraphicsExtra::RectangleIn(pot.X - extra, pot.Y - size_y, size_x + extra, size_y + extra,pen->Width);
            canvas->FillRectangle(brush, plane);
            canvas->DrawRectangle(pen, plane_);
            canvas->DrawLine(pen,p1,p2);
            canvas->DrawLine(pen,p3, p4);
        }
        static void Draw(array<double>^ array_f, double space, Brush^ brush, int size_x, int size_y, Point pot, Graphics^ canvas) {
            // Declarar y Dibujar Plano
            double x_max = (space * array_f->Length);
            for (int i = 0; i < array_f->Length; i++)
            {
                // Nuevo y
                if (abs(array_f[i] / x_max) < 1 && (array_f[i] / x_max) > -0.4) {
                    int new_x = pot.X + (space * (i+1) / x_max) * (size_x);
                    int new_y = pot.Y - (array_f[i] / x_max) * (size_y);
                    Rectangle r1 = GraphicsExtra::RectanglePot(new_x, new_y, 3);
                    canvas->FillRectangle(brush, r1);
                }
            }
        }
        static void DrawFunction1(Point pot, Graphics^ canvas) {
            int size_y = 200; int size_x = 200; int extra = 80; int n = 120;
            double space = 0.03;
            DrawPlane(pot, canvas, size_x+10, size_y+10, extra);
            Brush^ brush_cube = ColorPalet::blackBrush; 
            array<double>^ array_cube = gcnew array<double>(n);
            for (int i = 0; i < n; i++)
            {
                array_cube[i] = 1 / pow(space *(i + 1), 0.33);
            }
            Draw(array_cube, space,brush_cube, size_x, size_y, pot, canvas);
            Brush^ brush_square = ColorPalet::primaryBrush;
            array<double>^ array_square = gcnew array<double>(n);
            for (int i = 0; i < n; i++)
            {
                array_square[i] = 1 / pow(space * (i + 1), 0.5);
            }
            Draw(array_square, space, brush_square, size_x, size_y, pot, canvas);
            Brush^ brush_expo = Brushes::Green;
            array<double>^ array_expo = gcnew array<double>(n);
            for (int i = 0; i < n; i++)
            {
                array_expo[i] = 1 / log(space * i);
            }
            Draw(array_expo, space, brush_expo, size_x, size_y, pot, canvas);
        }
    };

    public ref class GraphicsPolar {
    public:
        static void Draw(array<double>^ array_r,Brush^ brush, int size,Point pot, Graphics^ canvas) {
            double r_max = 0;
            for (int i = 0; i < array_r->Length; i++)
            {
                if (abs(array_r[i]) > r_max) r_max = abs(array_r[i]);
            }
            if (r_max == 0) r_max = 1;
            for (int i = 0; i < array_r->Length; i++)
            {
                // El angulo es i
                double teta = (Math::PI * i / 180.0);
                double new_r = (array_r[i] / r_max) * (size);
                double new_x = pot.X + new_r * cos(teta);
                double new_y = pot.Y - new_r * sin(teta);
                Rectangle r1 = GraphicsExtra::RectanglePot(new_x, new_y, 3);
                canvas->FillRectangle(brush, r1);
            }
        }
        static void DrawElipse(int size,Point pot, Graphics^ canvas) {
            int n = 360;
            double a = size * 0.8; double b = size * 0.5;
            array<double>^ array_r = gcnew array<double>(n);
            for (int i = 0; i < n; i++)
            {
                double teta = (Math::PI * i / 180.0);
                array_r[i] = 1.0 / sqrt(pow((cos(teta) / a), 2) + pow((sin(teta) / b), 2));
            }
            GraphicsPolar::Draw(array_r, Brushes::Black, size, pot, canvas);
        }
        static void DrawRectangle(int size, Point pot, Graphics^ canvas) {
            int n = 360;
            array<double>^ array_r = gcnew array<double>(n);
            for (int i = 0; i < n; i++)
            {
                double teta = (Math::PI * i / 180.0);
                if (i < 45 || i > 315) {
                    array_r[i] = (size / 2) / cos(teta);
                }
                else if (i > 45 && i < 135) {
                    array_r[i] = (size / 2) / sin(teta);
                }
                else if (i > 135 && i < 225) {
                    array_r[i] = -1 * (size / 2) / cos(teta);
                }
                else if (i > 225 && i < 315) {
                    array_r[i] = -1 * (size / 2) / sin(teta);
                }
            }
            GraphicsPolar::Draw(array_r, Brushes::Black, size, pot, canvas);
        }
        static void DrawLem(int size, Point pot, Graphics^ canvas) {
            int n = 360;
            array<double>^ array_r = gcnew array<double>(n);
            for (int i = 0; i < n; i++)
            {
                double teta = (Math::PI * i / 180.0);
                if (cos(2*teta) >= 0) {
                    array_r[i] = size * sqrt(cos(2*teta));
                }
                else array_r[i] = 0;
            }
            GraphicsPolar::Draw(array_r, Brushes::Black, size, pot, canvas);

        }
        static void DrawCardioide(int size, Point pot, Graphics^ canvas) {
            int n = 360;
            array<double>^ array_r = gcnew array<double>(n);
            for (int i = 0; i < n; i++)
            {
                double teta = (Math::PI * i / 180.0);
                array_r[i] = (size / 2) + (size/2) * cos(teta);
            }
            GraphicsPolar::Draw(array_r, Brushes::Black, size, pot, canvas);
        }
        static void DrawNefroide(int size, Point pot, Graphics^ canvas) {
            int n = 360;
            array<double>^ array_r = gcnew array<double>(n);
            for (int i = 0; i < n; i++)
            {
                double teta = (Math::PI * i / 180.0);
                array_r[i] = (size / 3) + (2*size / 3) * sin(teta/2);
            }
            GraphicsPolar::Draw(array_r, Brushes::Black, size, pot, canvas);
        }
        static void DrawTunel(int size, Point pot, Graphics^ canvas) {
            int n = 360;
            array<double>^ array_r = gcnew array<double>(n);
            for (int i = 0; i < n; i++)
            {
                double teta = (Math::PI * i / 180.0);
                if (abs(cos(teta)) > 0.5) {
                    array_r[i] = (size) *(-sin(teta)/ (cos(teta)* cos(teta)));
                }
                else array_r[i] = 0;
            }
            GraphicsPolar::Draw(array_r, Brushes::Black, size, pot, canvas);
        }
        static void DrawFunction1(Point pot, Graphics^ canvas) {
            int size_cell = 55; int space = 5;
            Point p1 = Point(pot.X, pot.Y);
            Point p2 = Point(pot.X + ((2.5 * size_cell) + space), pot.Y);
            Point p3 = Point(pot.X, pot.Y + (2.5 * size_cell + space));
            Point p4 = Point(pot.X + ((2.5 * size_cell) + space), pot.Y + (2.5 * size_cell + space));
            Point p5 = Point(pot.X + ((5 * size_cell) + 2*space), pot.Y);
            Point p6 = Point(pot.X + ((5 * size_cell) + 2 * space), pot.Y + (2.5 * size_cell + space));
            GraphicsFuntion::DrawPlane(p1, canvas, size_cell, size_cell, size_cell);
            GraphicsFuntion::DrawPlane(p2, canvas, size_cell, size_cell, size_cell);
            GraphicsFuntion::DrawPlane(p3, canvas, size_cell, size_cell, size_cell);
            GraphicsFuntion::DrawPlane(p4, canvas, size_cell, size_cell, size_cell);
            GraphicsFuntion::DrawPlane(p5, canvas, size_cell, size_cell, size_cell);
            GraphicsFuntion::DrawPlane(p6, canvas, size_cell, size_cell, size_cell);
            // Para La Elipse
            DrawElipse(size_cell*0.8,p1,canvas);
            // Para EL Rectangulo
            DrawRectangle(size_cell * 0.8, p2, canvas);
            // Para La Lemniscata
            DrawLem(size_cell * 0.8, p3, canvas);
            // Para El Cardioide
            DrawCardioide(size_cell * 0.8, p4, canvas);
            // Para El Nefroide
            DrawNefroide(size_cell * 0.8, p5, canvas);
            // Para El Tunel
            DrawTunel(size_cell * 0.8, p6, canvas);
        }
    };

    ref class Administrator
    {
    private:
        array<String^>^ array_user;
        array<String^>^ array_password;
        int length;
    public:
        Administrator() : length(0) {
        }
        void push(String^ user, String^ password) {
            array<String^>^ temp_user = gcnew array<String^>(this->length + 1);
            array<String^>^ temp_password = gcnew array<String^>(this->length + 1);
            for (int i = 0; i < this->length; i++)
            {
                temp_user[i] = array_user[i];
                temp_password[i] = array_password[i];
            }
            temp_user[this->length] = user;
            temp_password[this->length] = password;
            this->length++;
            this->array_user = temp_user;
            this->array_password = temp_password;
        }
        bool verify(String^ user, String^ password) {
            bool val_return = false;
            for (int i = 0; i < this->length; i++)
            {
                if (array_user[i] == user && array_password[i] == password) {
                    val_return = true;
                    break;
                }
            }
            return val_return;
        }
    };

};


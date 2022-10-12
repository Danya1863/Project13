#include <iostream>
using namespace std;

class Transport
{
	string type;
	string color;
	int speed;
	int fuelcons;
	int passenger;
public:
	Transport()
	{
		type = color = "";
		speed = fuelcons = passenger = 0;
	}
	Transport(string t, string c, int s, int f, int p)
	{
		type = t;
		color = c;
		speed = s;
		fuelcons = f;
		passenger = p;
	}
	void Show()
	{
		cout << "��������� " << type << endl;
		cout << "����: " << color << endl;
		cout << "��������: " << speed << " ��\\�\n";
		cout << "������ ������� " << fuelcons << " �\\100 ��\n";
		cout << "��������� " << passenger << endl;
	}
};

class Plane :public Transport
{
	string company;
public:
	Plane()
	{
		company = "";
	}
	Plane(string t, string c, int s, int f, int p, string co) :Transport(t, c, s, f, p)
	{
		company = co;
	}
	void Show()
	{
		Transport::Show();
		cout << "�������� " << company << endl;
	}
};

class Cycle :public Transport
{
	double tire_size;
public:
	Cycle()
	{
		tire_size = 0;
	}
	Cycle(string t, string c, int s, int f, int p, double ti) :Transport(t, c, s, 0, p)
	{
		tire_size = ti;
	}
	void Show()
	{
		Transport::Show();
		cout << "���� ����� " << tire_size << " ��\n";
	}
};

class Jeep :public Transport
{
	bool offroad;
public:
	Jeep()
	{
		offroad = false;
	}
	Jeep(string t, string c, int s, int f, int p, bool off) :Transport(t, c, s, f, p)
	{
		offroad = f;
	}
	void Show()
	{
		Transport::Show();
		if (offroad)
			cout << "��� ����������\n";
		else
			cout << "�� ��� ����������\n";
	}
};

class Ship :public Transport
{
	double carr_cap;
public:
	Ship()
	{
		carr_cap = 0;
	}
	Ship(string t, string c, int s, int f, int p, double cc) :Transport(t, c, s, f, p)
	{
		carr_cap = cc;
	}
	void Show()
	{
		Transport::Show();
		cout << "���������������� " << carr_cap << " ����\n";
	}
};

class Truck :public Transport
{
	int HP;
public:
	Truck()
	{
		HP = 0;
	}
	Truck(string t, string c, int s, int f, int p, int hp) :Transport(t, c, s, f, p)
	{
		HP = hp;
	}
	void Show()
	{
		Transport::Show();
		cout << "��������� ���� " << HP << "\n";
	}
};

int main()
{
	setlocale(LC_ALL, "Rus");
	Plane obj1("C������", "���������", 350, 800, 450, "���.���������");
	obj1.Show();
	cout << endl;
	Cycle obj2("���������", "������", 20, 0, 1, 29);
	obj2.Show();
	cout << endl;
	Jeep obj3("����", "������", 220, 26, 6, true);
	obj3.Show();
	cout << endl;
	Ship obj4("�������", "������", 40, 50, 850, 1000);
	obj4.Show();
	cout << endl;
	Truck obj5("����", "�����-�����", 170, 30, 3, 1200);
	obj5.Show();
	cout << endl;
}
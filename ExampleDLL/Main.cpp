#include "DLL.h"
#include <iostream>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>


void networkTest();


void windowTest();


int main()
{
	networkTest();

	windowTest();

	return 0;
}

void networkTest()
{
	std::cout << "Network\n";

	sf::UdpSocket udpS, udpR;
	sf::Packet packS, packR;
	sf::IpAddress ip("Localhost");
	unsigned short port = 69;
	std::string test;

	udpR.bind(port, ip);

	packS << "amogus sus";
	udpS.send(packS, ip, port);

	udpR.receive(packR, ip, port);
	packR >> test;
	std::cout << "Recieved: \"" << test << "\" From localhost\n";
}


void windowTest()
{
	std::cout << "Window\n";

	sf::Window win(sf::VideoMode(800, 600), "");
	while (win.isOpen())
	{
		sf::Event e;
		while (win.pollEvent(e))
			if (!e.type)
				win.close();
	}
}
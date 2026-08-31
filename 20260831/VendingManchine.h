#pragma once
class VendingManchine
{
private:
	int money;		//‚¨‹ài©”Ì‹@j
	int colaStock;	//İŒÉ
public:
	VendingManchine();
	void insertMoney(int amount);
	void buyCola();
	int getMoney() const;//GetŠÖ”
	int getColaStock() const;
};


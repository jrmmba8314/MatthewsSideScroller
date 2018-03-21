#ifndef _LOCALDATA_H_
#define _LOCALDATA_H_

class ShipLD : public node
{
public:
	ShipLD();
	void* operator new(size_t);
	void operator delete(void*);
	node* Clone();
	void Save(File&);
	void Load(File&);

	bool IsRight;
	bool LostControl;
	int LostControlCnt;
	DYNCREATED
};
extern ShipLD* GetShipLD(node* This);

class EagleLD : public node
{
public:
	EagleLD();
	void* operator new(size_t);
	void operator delete(void*);
	node* Clone();
	void Save(File&);
	void Load(File&);

	int Hits;
	int HowMany;
	DYNCREATED
};
extern EagleLD* GetEagleLD(node* This);

#endif // _LOCALDATA_H

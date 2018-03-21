#include "stdafx.h"
#include "Headers.h"

#include "LocalDataFun.h"

MemoryPool ShipLDMemoryPool(sizeof(ShipLD));
DYNCREATEI(ShipLD);
ShipLD::ShipLD()
{
	IsRight = true;
	LostControl = false;
	LostControlCnt = 0;

}

void* ShipLD::operator new(size_t size)
{
	return ShipLDMemoryPool.Alloc();
}

void ShipLD::operator delete(void* pVoid)
{
	ShipLDMemoryPool.Free(pVoid);
}

node* ShipLD::Clone()
{
	return new ShipLD(*this);
}

void ShipLD::Save(File& f)
{
	f.Write(IsRight);
	f.Write(LostControl);
	f.Write(LostControlCnt);

}

void ShipLD::Load(File& f)
{
	f.Read(IsRight);
	f.Read(LostControl);
	f.Read(LostControlCnt);

}

ShipLD* GetShipLD(node* This)
{
	return (ShipLD*)This->local;
}

MemoryPool EagleLDMemoryPool(sizeof(EagleLD));
DYNCREATEI(EagleLD);
EagleLD::EagleLD()
{
	Hits = 0;
	HowMany = 0;

}

void* EagleLD::operator new(size_t size)
{
	return EagleLDMemoryPool.Alloc();
}

void EagleLD::operator delete(void* pVoid)
{
	EagleLDMemoryPool.Free(pVoid);
}

node* EagleLD::Clone()
{
	return new EagleLD(*this);
}

void EagleLD::Save(File& f)
{
	f.Write(Hits);
	f.Write(HowMany);

}

void EagleLD::Load(File& f)
{
	f.Read(Hits);
	f.Read(HowMany);

}

EagleLD* GetEagleLD(node* This)
{
	return (EagleLD*)This->local;
}


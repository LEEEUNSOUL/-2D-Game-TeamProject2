#pragma once
#include "GgaetIp.h"

class WorkerPanel;
class PlusMinusButton : public Script
{
private : 
	Transform* _transform;
	bool _isClicked; 

	WorkerPanel* _workerPanel;
	Sprite* _sprite;
	Collider* collider;
	
	int _plusNum = 0;
	int _minusNum = 0;

public:
	virtual void Init() override;
	virtual void Update() override;

	virtual void OnMouseDown(); 

public:

	bool GetisClicked() { return _isClicked; }
	void SetLinkWithWC(WorkerPanel* wP) { _workerPanel = wP; }
};


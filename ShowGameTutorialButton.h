#pragma once
<<<<<<< HEAD
#include "GgaetIp.h"
=======
#include "Script.h"
>>>>>>> 0f7f9b0219f1745f0e7ae3001324f3429b3bf896

class ShowGameTutorialButton : public Script
{
private:
<<<<<<< HEAD
	Sprite* _sprite; 
	Transform* _transform; 
	Collider* collider; 
=======
>>>>>>> 0f7f9b0219f1745f0e7ae3001324f3429b3bf896

public:

	virtual void Init();
<<<<<<< HEAD
	
	virtual void OnMouseDown() override;
	virtual void OnMouseUp() override;
=======
	virtual void Update();

	virtual void OnMouseDown() override;
>>>>>>> 0f7f9b0219f1745f0e7ae3001324f3429b3bf896
};


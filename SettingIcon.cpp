#include "stdafx.h"
#include "SettingIcon.h"
#include "SettingPanel.h"



void SettingIcon::Init()
{
	_sprite = object->GetComponent<Sprite>(); 
}


void SettingIcon::Update()
{

}


void SettingIcon::OnMouseDown()
{
<<<<<<< HEAD
	_sprite->GetTransform()->SetScale(Vector2(1.58f, 1.58f));
=======
	_sprite->GetTransform()->SetScale(Vector2(0.98f, 0.98f));
>>>>>>> 0f7f9b0219f1745f0e7ae3001324f3429b3bf896
	_settingPanel->SetIsActive(!_settingPanel->GetIsActive());
}

void SettingIcon::OnMouseUp()
{
<<<<<<< HEAD
	_sprite->GetTransform()->SetScale(Vector2(1.65f, 1.65f));
=======
	_sprite->GetTransform()->SetScale(Vector2(1.0f, 1.0f));
>>>>>>> 0f7f9b0219f1745f0e7ae3001324f3429b3bf896
}

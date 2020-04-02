#include "stdafx.h"
#include "SettingPanel.h"
#include "VolumeBar.h"
<<<<<<< HEAD
#include "ShowGameTutorialButton.h"
=======
>>>>>>> 0f7f9b0219f1745f0e7ae3001324f3429b3bf896


void SettingPanel::Init()
{
<<<<<<< HEAD
    object->AddComponent<Sprite>()->SetSprite(Image::CreateImage("Sprite/UI/SettingPanel.png"));
    object->GetTransform()->SetPosition(Vector2(540, 290) + (DesignResolution * Vector2(1, -1) / 2));

    //Æ©Åä¸®¾ó ¾À ¿ÀÇÂÇÒ ¹öÆ° »ý¼º 
    _tutorialButton = Object::CreateObject(object);
    _tutorialButton->AddComponent<Sprite>()->SetSprite(Image::CreateImage("Sprite/UI/ShowTutorial.png"));
    _tutorialButton->GetTransform()->SetPosition(Vector2(3, -100));
    _tutorialButton->AddComponent<BoxCollider>();
    _tutorialButton->AddComponent<ShowGameTutorialButton>();
    _tutorialButton->SetCameraAffected(false);

    auto volumeBar = Object::CreateObject(object);
    volumeBar->AddComponent<VolumeBar>();
    volumeBar->GetComponent<VolumeBar>();
    volumeBar->GetTransform()->SetDepth(99);
    volumeBar->GetComponent<VolumeBar>()->SetLinkWithSettingPanel(object);

    auto vCollider = volumeBar->AddComponent<BoxCollider>();
    volumeBar->GetTransform()->SetPosition(
        volumeBar->GetTransform()->GetPosition() + Vector2(2, 10));
    vCollider->SetSize(Vector2(100, 20));
    volumeBar->SetCameraAffected(false);
=======
	object->AddComponent<Sprite>()->SetSprite(Image::CreateImage("Sprite/UI/SettingPanel.png"));
	object->GetTransform()->SetPosition(Vector2(563, 290)); 

	//Æ©Åä¸®¾ó ¾À ¿ÀÇÂÇÒ ¹öÆ° »ý¼º 
	_tutorialButton = Object::CreateObject(object); 
	_tutorialButton->AddComponent<Sprite>()->SetSprite(Image::CreateImage("Sprite/UI/ShowTutorial.png"));
	_tutorialButton->GetTransform()->SetPosition(Vector2(3, -100)); 
	
	auto volumeBar = Object::CreateObject(object); 
	volumeBar->AddComponent<VolumeBar>();
	volumeBar->GetComponent<VolumeBar>()->SetLinkWithSettingPanel(object);
>>>>>>> 0f7f9b0219f1745f0e7ae3001324f3429b3bf896

}

void SettingPanel::Update()
{

}

void SettingPanel::OnMouseDown()
{

}

#include "stdafx.h"
#include "SetPopulationScene.h"
#include "WorkerPanel.h"

<<<<<<< HEAD

void SetPopulationScene::Init()
{

	this->SetTag("SetPopulationScene");

=======
void SetPopulationScene::Init()
{
	this->SetTag("SetPopulationScene");



>>>>>>> 0f7f9b0219f1745f0e7ae3001324f3429b3bf896
	ApplicationManager::GetInstance()->SetResolution(1600, 900, false);

	Object* setPopulationScene = Object::CreateObject();
	setPopulationScene->AddComponent<Sprite>()->SetSprite(Image::CreateImage("Sprite/UI/SetPopulation.png"));
<<<<<<< HEAD
	setPopulationScene->GetTransform()->SetPosition(Vector2(0, 0) + (DesignResolution * Vector2(1, -1) / 2));
	setPopulationScene->AddComponent<WorkerPanel>(); 
	setPopulationScene->SetCameraAffected(false); 
=======
	setPopulationScene->GetTransform()->SetPosition(Vector2(0, 0)); 
	setPopulationScene->AddComponent<WorkerPanel>(); 

>>>>>>> 0f7f9b0219f1745f0e7ae3001324f3429b3bf896

}

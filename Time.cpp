#include "stdafx.h"
#include "Time.h"

void Time::Init()
{
	_isDay = true; 

	//�� ������ ���� 
	//�ڽ����� ����ϸ� ������ �θ� ���� �����ȴ�. 
	_nightSky = Object::CreateObject(object); 
	_nightSky->AddComponent<Sprite>()->SetSprite(Image::CreateImage("Sprite/UI/NightSky.png")); 
	_nightSky->GetTransform()->SetPosition(Vector2(60, 60) + (DesignResolution * Vector2(1, -1) / 2));
	_nightSky->GetTransform()->SetScale(Vector2(1.5f, 1.5f)); 
	_nightSky->GetComponent<Sprite>()->SetOpacity(0); 
	_nightSky->SetCameraAffected(false);
	
	_timeUI = Object::CreateObject(object); 
	_timeUI->AddComponent<Sprite>()->SetSprite(Image::CreateImage("Sprite/UI/LuytenTown_Time.png"));
	_timeUI->GetTransform()->SetPosition(Convert(821, 23, 320, 52) + (DesignResolution * Vector2(1, -1) / 2));
	_timeUI->SetCameraAffected(false);

	//�ð� ���� text 
	_hourText = Object::CreateObject(object);
	_hourText->AddComponent<Text>();
	_hourText->GetComponent<Text>()->CreateText(to_wstring(_gameTime / 3600) + string_to_wstring("��"), L"HYHeadLine-Medium", L"ko-KR", { 1,1,1,1 }, 18, 40, 40);
	_hourText->GetComponent<Text>()->SetAnchorPoint(AnchorPoint::LeftCenter);
	_hourText->GetComponent<Text>()->GetTransform()->SetPosition(Vector2(_timeUI->GetTransform()->GetPosition().x, 
																		 _timeUI->GetTransform()->GetPosition().y)+
																	     Vector2(96, -5));
	_hourText->GetComponent<Text>()->SetCameraAffected(false);


	_minuteText = Object::CreateObject(object);
	_minuteText->AddComponent<Text>();
	_minuteText->GetComponent<Text>()->CreateText(to_wstring(_gameTime / 60) + string_to_wstring("��"), L"HYHeadLine-Medium", L"ko-KR", { 1,1,1,1 }, 18, 40, 40);
	_minuteText->GetComponent<Text>()->SetAnchorPoint(AnchorPoint::LeftCenter);
	_minuteText->GetComponent<Text>()->GetTransform()->SetPosition(Vector2(_timeUI->GetTransform()->GetPosition().x, 
																   		   _timeUI->GetTransform()->GetPosition().y)+
																			Vector2(134, -5));
	_minuteText->GetComponent<Text>()->SetCameraAffected(false);

	//n���� ���� text 
	_dateText = Object::CreateObject(object);
	_dateText->AddComponent<Text>();
	_dateText->GetComponent<Text>()->CreateText(to_wstring(_realTime / 1.2), L"HYHeadLine-Medium", L"ko-KR", { 1,1,1,1 }, 20, 60, 40);
	_dateText->GetComponent<Text>()->SetAnchorPoint(AnchorPoint::LeftCenter);
	_dateText->GetComponent<Text>()->GetTransform()->SetPosition(Vector2(_timeUI->GetTransform()->GetPosition().x,
																 		 _timeUI->GetTransform()->GetPosition().y) +
																		 Vector2(-115, -5));
	_dateText->GetComponent<Text>()->SetCameraAffected(false);


	//���� ���� text
	_dayText = Object::CreateObject(object);
	_dayText->AddComponent<Text>();
	_dayText->GetComponent<Text>()->CreateText(string_to_wstring(_dayOfWeek) + string_to_wstring("����"), L"HYHeadLine-Medium", L"ko-KR", { 1,1,1,1 }, 20, 100, 40);
	_dayText->GetComponent<Text>()->SetAnchorPoint(AnchorPoint::LeftCenter);
	_dayText->GetComponent<Text>()->GetTransform()->SetPosition(Vector2(_timeUI->GetTransform()->GetPosition().x,
																		_timeUI->GetTransform()->GetPosition().y) +
																		Vector2(-25, -5));
	_dayText->GetComponent<Text>()->SetCameraAffected(false);


	//�� & �� �ð� �̹���
	_dayNightSprite = Object::CreateObject(object);
	_dayNightSprite->GetTransform()->SetPosition(Vector2(_timeUI->GetTransform()->GetPosition().x,
														 _timeUI->GetTransform()->GetPosition().y) +
														 Vector2(-153, 0));
	_dayNightSprite->AddComponent<Sprite>()->SetSprite(Image::CreateImage("Sprite/UI/DayIcon.png"));
	_dayNightSprite->SetCameraAffected(false);

}


void Time::Update()
{
	GameTimeSet(); 

}


void Time::GameTimeSet()
{
<<<<<<< HEAD
	_realTime = TimeManager::GetInstance()->GetTime() - TimeManager::GetInstance()->GetDeltaTime();
	cout <<"realTime"<<TimeManager::GetInstance()->GetTime() - TimeManager::GetInstance()->GetDeltaTime() << endl; 
	
	_gameTime = _realTime * 48 + 28800; 

	int gameDayTime = _realTime % 10; //���� �ð� 20�� // 900 = 15��(���ð�)
=======
	_realTime = TimeManager::GetInstance()->GetTime();
	_gameTime = _realTime * 48 + 28800; //�ð��� �귶�� �� ��� 8�÷� �ʱ�ȭ �ȵ� ���� 

	int gameDayTime = _realTime % 10; //���� �ð� 20�� // 900 = 15��(���ð�)
	//cout << "�ð�" << gameDayTime << endl;
	//int gameDayTime = _gameTime % 720; //720��(48��*600) : realtime ���� 15�� (GameTime ���� 10�ð� (���ð�)) 
	//int gameNightTime = gameDayTime % 240; // 240��(48��*360) : realtime ���� 5�� (GameTime ���� 6�ð� (��ð�))
>>>>>>> 0f7f9b0219f1745f0e7ae3001324f3429b3bf896

	_hourText->GetComponent<Text>()->ChangeText(to_wstring(_gameTime / 3600) + string_to_wstring("��"));
	_minuteText->GetComponent<Text>()->ChangeText(to_wstring((_gameTime / 60) % 60) + string_to_wstring("��"));

	//realTime 20�� ������ = �� �������� ǥ��
	_dateText->GetComponent<Text>()->ChangeText(to_wstring(_realTime / 1200) + string_to_wstring("����"));
	_dayText->GetComponent<Text>()->ChangeText(string_to_wstring(_dayOfWeek) + string_to_wstring("����"));
	
	_dayOfWeek = "��";


	//TEST 
<<<<<<< HEAD
	if (gameDayTime == 0) //���� �� 
=======
	if (gameDayTime == 0)
>>>>>>> 0f7f9b0219f1745f0e7ae3001324f3429b3bf896
	{
		if (_isDay)
			return;
		_isDay = true;
		//cout << "���̴�" << endl;
		_dayNightSprite->GetComponent<Sprite>()->SetSprite(Image::CreateImage("Sprite/UI/DayIcon.png"));
<<<<<<< HEAD
		_nightSky->GetComponent<Sprite>()->SetOpacity(0);
=======
>>>>>>> 0f7f9b0219f1745f0e7ae3001324f3429b3bf896
		Notify(MSGTYPE::TIME, "isDay");
	}
	else if (gameDayTime == 5)
	{
		if (!_isDay)
			return;
		_isDay = false;
		//cout << "���̴�" << endl;
<<<<<<< HEAD
		_dayNightSprite->GetComponent<Sprite>()->SetSprite(Image::CreateImage("Sprite/UI/NightIcon.png"));
		_nightSky->GetComponent<Sprite>()->SetOpacity(1);
=======
		_dayNightSprite->GetComponent<Sprite>()->SetSprite(Image::CreateImage("Sprite/UI/DayIcon.png"));
>>>>>>> 0f7f9b0219f1745f0e7ae3001324f3429b3bf896
		Notify(MSGTYPE::TIME, "isNight");
	}

	if (gameDayTime == 10)
	{
		Notify(MSGTYPE::TIME, "SingleDateEnd"); //�� �ð��� ��
	}

<<<<<<< HEAD
=======
	//if (gameDayTime == 10 && gameDayTime!=0)
	//{
	//	Notify(MSGTYPE::TIME, "SingleDateEnd"); //�� �ð��� �� 
	//}
	
>>>>>>> 0f7f9b0219f1745f0e7ae3001324f3429b3bf896

#pragma region     ���� ���� 
	if ((_realTime / 1200) % 7 == 0) _dayOfWeek = "��";
	if ((_realTime / 1200) % 7 == 1) _dayOfWeek = "ȭ";
	if ((_realTime / 1200) % 7 == 2) _dayOfWeek = "��";
	if ((_realTime / 1200) % 7 == 3) _dayOfWeek = "��";
	if ((_realTime / 1200) % 7 == 4) _dayOfWeek = "��";
	if ((_realTime / 1200) % 7 == 5) _dayOfWeek = "��";
	if ((_realTime / 1200) % 7 == 6) _dayOfWeek = "��";
#pragma endregion 


}
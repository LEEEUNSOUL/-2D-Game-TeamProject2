#pragma once
#include "GgaetIp.h"

 

class VolumeBar : public Script
{
private:

<<<<<<< HEAD
	float _soundVolume; //���� 
	
=======
	float _soundVolume;
>>>>>>> 0f7f9b0219f1745f0e7ae3001324f3429b3bf896
	float _mouseX; 
	float _mouseY; 

	float _startVolumeBarPosX; 
	float _maxVolumeBarPosX;
	float _topVolumeBarLength; 
	
	Object* _settingPanel;

	//volume Bar�� PolyDraw
	//�������� ��� ����. �� ���������� �̾��ش�. 
<<<<<<< HEAD
	//��������, ������ ���� -> �� �� ���� �յ��� ���ͷ� ��Ƶδ� ��
=======
	//�� �����Ŷ� ��������, ������ �����ϰ� �� �� ���� �հ� ���ͷ� ��Ƶδ� ��
>>>>>>> 0f7f9b0219f1745f0e7ae3001324f3429b3bf896
	vector<Vector2> _topPolygonPos;
	vector<Vector2> _bottomPolygonPos;

	Object* _polyDrawTop;
<<<<<<< HEAD
	Object* _polyDrawBottom;
=======
	Object* _polyDrawBotton;
>>>>>>> 0f7f9b0219f1745f0e7ae3001324f3429b3bf896
	Object* _volumeControlButton; 

	/*PolygonDraw* _polyDrawTop;
	PolygonDraw* _polyDrawBottom; */

	Color _topColor;
	Color _bottomColor;

<<<<<<< HEAD
	bool _isClicked;

=======
>>>>>>> 0f7f9b0219f1745f0e7ae3001324f3429b3bf896
public: 

	virtual void Init() override; 
	virtual void Update() override; 
<<<<<<< HEAD
	virtual void OnMouseDown() override;
	virtual void OnMouseUp() override;
=======
>>>>>>> 0f7f9b0219f1745f0e7ae3001324f3429b3bf896

	//Link
	void SetLinkWithSettingPanel(Object* ob) { _settingPanel = ob; }
	//Getter
	float GetSoundVolume() { return _soundVolume; }
};


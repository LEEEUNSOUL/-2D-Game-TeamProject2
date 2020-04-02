#pragma once
#include "GgaetIp.h"

 

class VolumeBar : public Script
{
private:

<<<<<<< HEAD
	float _soundVolume; //볼륨 
	
=======
	float _soundVolume;
>>>>>>> 0f7f9b0219f1745f0e7ae3001324f3429b3bf896
	float _mouseX; 
	float _mouseY; 

	float _startVolumeBarPosX; 
	float _maxVolumeBarPosX;
	float _topVolumeBarLength; 
	
	Object* _settingPanel;

	//volume Bar용 PolyDraw
	//꼭지점을 담는 벡터. 이 꼭지점들을 이어준다. 
<<<<<<< HEAD
	//시작지점, 끝지점 설정 -> 이 두 점을 잇도록 벡터로 담아두는 것
=======
	//선 담을거라서 시작지점, 끝지점 설정하고 이 두 점을 잇게 벡터로 담아두는 것
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


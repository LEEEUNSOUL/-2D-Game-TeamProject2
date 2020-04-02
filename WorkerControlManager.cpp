#include "stdafx.h"
#include "WorkerControlManager.h"



WorkerControlManager::WorkerControlManager() 
{
	_mWorkers.clear();

<<<<<<< HEAD
	_mWorkers.insert(make_pair("Miner", 10));
	_mWorkers.insert(make_pair("Wood_Cutter", 10));
	_mWorkers.insert(make_pair("Water_Collecter", 10));
	_mWorkers.insert(make_pair("Carpenter", 10));
	_mWorkers.insert(make_pair("Refiner", 10));
=======
	_mWorkers.insert(make_pair("Miner", 0));
	_mWorkers.insert(make_pair("Wood_Cutter", 0));
	_mWorkers.insert(make_pair("Water_Collecter", 0));
	_mWorkers.insert(make_pair("Carpenter", 0));
	_mWorkers.insert(make_pair("Refiner", 0));
>>>>>>> 0f7f9b0219f1745f0e7ae3001324f3429b3bf896

	//생성자에 넣으면 딱 한 번만 실행되니까 더이상 0으로 초기화 되지 않음
	//init에 두면 WorkerControlManager를 Scene으로 등록시킬 경우 Scene의 자식들에서 계속 초기화 된다.
} 

WorkerControlManager* WorkerControlManager::GetInstance()
{
	static WorkerControlManager* instance = new WorkerControlManager();
	return instance;
}

void WorkerControlManager::SetPopulation(map<string, int> map)
{
	_mWorkers = map;
}
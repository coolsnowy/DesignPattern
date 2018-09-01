//
// Created by coolsnowy on 2018/9/1.
//

#ifndef TEST_CONCRETESTATE_H
#define TEST_CONCRETESTATE_H

#include "State.h"

class TrafficLights;

// 红灯
class RedLight : public State
{
public:
	RedLight(TrafficLights* context);
	virtual void handle() override;

private:
	TrafficLights* pContext;
};

// 绿灯
class GreenLight : public State
{
public:
	GreenLight(TrafficLights* context);
	virtual void handle() override;

private:
	TrafficLights* pContext;
};

// 黄灯
class YellowLight : public State
{
public:
	YellowLight(TrafficLights* context);
	virtual void handle() override;

private:
	TrafficLights* pContext;
};

#endif //TEST_CONCRETESTATE_H

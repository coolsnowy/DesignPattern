//
// Created by coolsnowy on 2018/9/1.
//

#include "ConcreteState.h"
#include "Context.h"
#include <iostream>

// 红灯
RedLight::RedLight(TrafficLights* context) : pContext(context) {

}

void RedLight::handle()
{
	std::cout << "Red Light" << std::endl;
	pContext->SetState(new GreenLight(pContext));
	delete this;
}

// 绿灯
GreenLight::GreenLight(TrafficLights* context) : pContext(context) {

}

void GreenLight::handle()
{
	std::cout << "Green Light" << std::endl;
	pContext->SetState(new YellowLight(pContext));
	delete this;
}

// 黄灯
YellowLight::YellowLight(TrafficLights* context) : pContext(context) {

}

void YellowLight::handle()
{
	std::cout << "Yellow Light" << std::endl;
	pContext->SetState(new RedLight(pContext));
	delete this;
}
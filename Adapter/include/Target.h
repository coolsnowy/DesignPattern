//
// Created by coolsnowy on 2018/8/5.
//

#ifndef TEST_TARGET_H
#define TEST_TARGET_H

// 俄罗斯插座
class RussiaSocket {
public:
	// 使用双脚圆形充电
	virtual void charge() = 0;
	virtual ~RussiaSocket() = default;
};

#endif //TEST_TARGET_H

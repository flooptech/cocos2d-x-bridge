#include "cocos2d.h"

USING_NS_CC;

class FloopSDKBridgeXDelegate
{
public:
	virtual ~FloopSDKBridgeXDelegate() {}
	/*
	 * Floop SDK State
	 */

	// call when floop sdk is successfully loaded
	virtual bool onSuccessFloopClient() { return true; }
	// call when floop sdk failed
	virtual bool onFailureFloopClient() { return true; }

	/*
	 * Parental Gate
	 */

	// call when user has successfully passed the parental gate
	virtual bool parentalGateOnSuccessAnswer() { return true; }
	// call when user failed to passed the parental gate
	virtual bool parentalGateOnFailureAnswer() { return true; }
	// call when parental gate failed to load
	virtual bool parentalGateOnError() { return true; }
};

class FloopSDKBridgeX
{
public:
	static FloopSDKBridgeX* sharedFloopSDKBridgeX();

    void showCrossPromotionGroup();
    void showGallery();
    void showParentalGate();

    void setDelegate(FloopSDKBridgeXDelegate* delegate) { m_delegate = delegate; }
    FloopSDKBridgeXDelegate* getDelegate() { return m_delegate; }

private:
    FloopSDKBridgeX()
    : m_delegate(NULL)
    {
    }

    FloopSDKBridgeXDelegate* m_delegate;
};


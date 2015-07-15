#include "FloopSDKBridgeX.h"
#include "FloopSDKBridgeXJni.h"

static FloopSDKBridgeX* s_pFloopSDKBridgeX = NULL;

FloopSDKBridgeX* FloopSDKBridgeX::sharedFloopSDKBridgeX()
{
    if (s_pFloopSDKBridgeX == NULL)
    {
    	s_pFloopSDKBridgeX = new FloopSDKBridgeX();
    }
    return s_pFloopSDKBridgeX;
}

void FloopSDKBridgeX::showCrossPromotionGroup()
{
	showCrossPromotionGroupJNI();
}

void FloopSDKBridgeX::showGallery()
{
	showGalleryJNI();
}

void FloopSDKBridgeX::showParentalGate()
{
	showParentalGateJNI();
}

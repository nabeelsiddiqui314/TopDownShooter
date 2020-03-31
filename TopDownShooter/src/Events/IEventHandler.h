#pragma once

class Event;
class TransformEvent;
class AnimationEvent;
class TextureRectEvent;
class GunFireEvent;

class IEventHandler {
public:
	IEventHandler() {}
	virtual ~IEventHandler() {}
public:
	virtual void handleEvent(const Event&) {};
	virtual void handleEvent(const TransformEvent&) {};
	virtual void handleEvent(const AnimationEvent&) {};
	virtual void handleEvent(const TextureRectEvent&) {};
	virtual void handleEvent(const GunFireEvent&) {};
};
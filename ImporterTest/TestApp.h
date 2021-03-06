#ifndef INCLUDED_TESTAPP_H
#define INCLUDED_TESTAPP_H

//====================================================================================================
// Filename:	TestApp.h
// Created by:	Brett Huff
// Description:	Class for the test application.
//====================================================================================================

//====================================================================================================
// Includes
//====================================================================================================

#include <Engine.h>

//====================================================================================================
// Class Declarations
//====================================================================================================

//class Model // Put into engine
//{
//public:
//	std::vector<Mesh*> mMeshes;
//	std::vector<MeshBuffer*> mMeshBuffers;
//};

class TestApp : public Application
{
public:
	TestApp();
	virtual ~TestApp();
	
	void DrawSkeleton();
	
private:
	virtual void OnInitialize(u32 width, u32 height);
	virtual void OnTerminate();
	virtual bool OnInput(const InputEvent& evt);
	virtual void OnUpdate();

	void LoadModel(const char* filename, Model& model);
	
	Window mWindow;
	Timer mTimer;

	GraphicsSystem mGraphicsSystem;
	Camera mCamera;
	MeshRenderer mRenderer;

	AnimationController mAnimationController;
	Model mModel;
	std::vector<std::string> textureNames;

	bool mKeyStates[256];
	bool mDrawSkeleton;

	s32 mMouseX;
	s32 mMouseY;
};

#endif // #ifndef INCLUDED_TESTAPP_H
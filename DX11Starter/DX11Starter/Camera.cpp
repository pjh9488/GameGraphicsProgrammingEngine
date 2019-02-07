#include "Camera.h"

using namespace DirectX;


Camera::Camera()
{
}


Camera::~Camera()
{
}

void Camera::Update()
{
	XMMATRIX XRotationMatrix = XMMatrixRotationX(XRotation); //Find the current X rotation
	XMMATRIX YRotationMatrix = XMMatrixRotationY(YRotation); //Find the Current Y rotation
	XMMATRIX RotationMatrix = XRotationMatrix + YRotationMatrix; //Combine X and Y rotation
	XMVECTOR UnitZ = { 0.0f,0.0f,1.0f }; //Default forward Vector
	XMVECTOR forward = XMVector3Transform(UnitZ, RotationMatrix);
	XMVECTOR up = { 0.0f,1.0f,0.0f };
	up = XMVector3Cross(up,forward); //Cross the Global Up and the current rotation(Forward)
	
	XMStoreFloat4x4(&view, XMMatrixLookToLH(XMLoadFloat3(&position), forward, up));

	/*if (GetAsyncKeyState('W') & 0x8000) { }
	if (GetAsyncKeyState('A') & 0x8000) {  }
	if (GetAsyncKeyState('S') & 0x8000) {  }
	if (GetAsyncKeyState('D') & 0x8000) { }*/
}

DirectX::XMFLOAT3 Camera::GetPosition()
{
	return position;
}

DirectX::XMFLOAT3 Camera::GetRotation()
{
	return rotation;
}

float Camera::GetXRotation()
{
	return XRotation;
}

float Camera::GetYRotation()
{
	return YRotation;
}

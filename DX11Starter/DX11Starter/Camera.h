#pragma once
#include <DirectXMath.h>
class Camera
{
public:
	Camera();
	~Camera();
	void Update();
	DirectX::XMFLOAT3 GetPosition();
	DirectX::XMFLOAT3 GetRotation();
	float GetXRotation();
	float GetYRotation();
private:
	DirectX::XMFLOAT3 position;
	DirectX::XMFLOAT3 rotation;
	float XRotation;
	float YRotation;
	DirectX::XMFLOAT4X4 view;
};


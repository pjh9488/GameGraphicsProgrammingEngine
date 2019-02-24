#pragma once
#include "SimpleShader.h"
class Material
{
public:
	Material(SimplePixelShader* ps, SimpleVertexShader* vs, ID3D11ShaderResourceView* shaderResource, ID3D11SamplerState* sam);
	~Material();

	SimplePixelShader* GetPixelShader();
	SimpleVertexShader* GetVertexShader();
	
	ID3D11ShaderResourceView* GetSRV();
	ID3D11SamplerState* GetSamplerState();

private:
	SimplePixelShader* pixelShader;
	SimpleVertexShader* vertexShader;

	ID3D11ShaderResourceView* SRV;
	ID3D11SamplerState* sampler;
};


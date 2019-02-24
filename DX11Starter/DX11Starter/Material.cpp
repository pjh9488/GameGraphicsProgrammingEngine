#include "Material.h"





Material::Material(SimplePixelShader* ps, SimpleVertexShader * vs, ID3D11ShaderResourceView* shaderResource, ID3D11SamplerState* sam)
{
	pixelShader = ps;
	vertexShader = vs;
	SRV = shaderResource;
	sampler = sam;
}

Material::~Material()
{
}

SimplePixelShader * Material::GetPixelShader()
{
	return pixelShader;
}

SimpleVertexShader * Material::GetVertexShader()
{
	return vertexShader;
}

ID3D11ShaderResourceView * Material::GetSRV()
{
	return SRV;
}

ID3D11SamplerState * Material::GetSamplerState()
{
	return sampler;
}

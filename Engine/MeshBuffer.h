#ifndef INCLUDED_ENGINE_MESHBUFFER_H
#define INCLUDED_ENGINE_MESHBUFFER_H

//====================================================================================================
// Filename:	MeshBuffer.h
// Created by:	Peter Chan
// Description:	Class for holding the mesh vertex buffer and index buffer.
//====================================================================================================

//====================================================================================================
// Forward Declarations
//====================================================================================================

class GraphicsSystem;
class Mesh;

//====================================================================================================
// Class Declarations
//====================================================================================================

class MeshBuffer
{
public:
	MeshBuffer();
	~MeshBuffer();
	
	void Initialize(GraphicsSystem& gs, u32 vertexFormat, const void* vertexData, u32 numVertices);
	void Initialize(GraphicsSystem& gs, u32 vertexFormat, const void* vertexData, u32 numVertices, const u16* indexData, u32 numIndices);
	void Initialize(GraphicsSystem& gs, u32 vertexFormat, const Mesh& mesh);
	void Terminate();

	void Render(GraphicsSystem& gs);

	u32 GetVertexFormat() const			{ return mVertexFormat; }

private:
	ID3D11Buffer* mpVertexBuffer;
	ID3D11Buffer* mpIndexBuffer;

	u32 mVertexFormat;
	u32 mVertexSize;
	u32 mVertexCount;
	u32 mIndexCount;
};

#endif // #ifndef INCLUDED_ENGINE_MESHBUFFER_H

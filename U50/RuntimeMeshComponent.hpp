#ifndef UE4SS_SDK_RuntimeMeshComponent_HPP
#define UE4SS_SDK_RuntimeMeshComponent_HPP

#include "RuntimeMeshComponent_enums.hpp"

struct FRuntimeMeshMaterialSlot
{
    FName SlotName;                                                                   // 0x0000 (size: 0x8)
    class UMaterialInterface* Material;                                               // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FRuntimeMeshSectionProperties
{
    ERuntimeMeshUpdateFrequency UpdateFrequency;                                      // 0x0000 (size: 0x1)
    int32 MaterialSlot;                                                               // 0x0004 (size: 0x4)
    bool bIsVisible;                                                                  // 0x0008 (size: 0x1)
    bool bIsMainPassRenderable;                                                       // 0x0009 (size: 0x1)
    bool bCastsShadow;                                                                // 0x000A (size: 0x1)
    bool bForceOpaque;                                                                // 0x000B (size: 0x1)
    bool bUseHighPrecisionTangents;                                                   // 0x000C (size: 0x1)
    bool bUseHighPrecisionTexCoords;                                                  // 0x000D (size: 0x1)
    uint8 NumTexCoords;                                                               // 0x000E (size: 0x1)
    bool bWants32BitIndices;                                                          // 0x000F (size: 0x1)

}; // Size: 0x10

struct FRuntimeMeshLODProperties
{
    float ScreenSize;                                                                 // 0x0000 (size: 0x4)
    bool bCanGetSectionsIndependently;                                                // 0x0004 (size: 0x1)
    bool bCanGetAllSectionsAtOnce;                                                    // 0x0005 (size: 0x1)
    bool bShouldMergeStaticSectionBuffers;                                            // 0x0006 (size: 0x1)

}; // Size: 0x8

class URuntimeMeshProviderTargetInterface : public UObject
{

    void SetupMaterialSlot(int32 MaterialSlot, FName SlotName, class UMaterialInterface* InMaterial);
    void SetSectionVisibility(int32 LODIndex, int32 SectionId, bool bIsVisible);
    void SetSectionCastsShadow(int32 LODIndex, int32 SectionId, bool bCastsShadow);
    void SetLODScreenSize(int32 LODIndex, float ScreenSize);
    void RemoveSection(int32 LODIndex, int32 SectionId);
    void MarkSectionDirty(int32 LODIndex, int32 SectionId);
    void MarkLODDirty(int32 LODIndex);
    void MarkCollisionDirty();
    void MarkAllLODsDirty();
    bool IsMaterialSlotNameValid(FName MaterialSlotName);
    int32 GetNumMaterials();
    TArray<FRuntimeMeshMaterialSlot> GetMaterialSlots();
    TArray<FName> GetMaterialSlotNames();
    FRuntimeMeshMaterialSlot GetMaterialSlot(int32 SlotIndex);
    int32 GetMaterialIndex(FName MaterialSlotName);
    class UMaterialInterface* GetMaterial(int32 SlotIndex);
    void CreateSection(int32 LODIndex, int32 SectionId, const FRuntimeMeshSectionProperties& SectionProperties);
    void ConfigureLODs(const TArray<FRuntimeMeshLODProperties>& InLODs);
    void ClearSection(int32 LODIndex, int32 SectionId);
}; // Size: 0x28

struct FRuntimeMeshCollisionSourceSectionInfo
{
    int32 StartIndex;                                                                 // 0x0000 (size: 0x4)
    int32 EndIndex;                                                                   // 0x0004 (size: 0x4)
    TWeakObjectPtr<class URuntimeMeshProvider> SourceProvider;                        // 0x0008 (size: 0x8)
    int32 SectionId;                                                                  // 0x0010 (size: 0x4)
    ERuntimeMeshCollisionFaceSourceType SourceType;                                   // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FRuntimeMeshAsyncBodySetupData
{
    class UBodySetup* BodySetup;                                                      // 0x0000 (size: 0x8)
    TArray<FRuntimeMeshCollisionSourceSectionInfo> CollisionSources;                  // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FRuntimeMeshCollisionHitInfo
{
    TWeakObjectPtr<class URuntimeMeshProvider> SourceProvider;                        // 0x0000 (size: 0x8)
    ERuntimeMeshCollisionFaceSourceType SourceType;                                   // 0x0008 (size: 0x1)
    int32 SectionId;                                                                  // 0x000C (size: 0x4)
    int32 FaceIndex;                                                                  // 0x0010 (size: 0x4)
    class UMaterialInterface* Material;                                               // 0x0018 (size: 0x8)

}; // Size: 0x20

class URuntimeMesh : public URuntimeMeshProviderTargetInterface
{
    class URuntimeMeshProvider* MeshProviderPtr;                                      // 0x0038 (size: 0x8)
    class UBodySetup* BodySetup;                                                      // 0x0048 (size: 0x8)
    TArray<FRuntimeMeshCollisionSourceSectionInfo> CollisionSource;                   // 0x0050 (size: 0x10)
    TArray<FRuntimeMeshAsyncBodySetupData> AsyncBodySetupQueue;                       // 0x0060 (size: 0x10)
    TArray<FRuntimeMeshMaterialSlot> MaterialSlots;                                   // 0x0368 (size: 0x10)
    TMap<FName, int32> SlotNameLookup;                                                // 0x0378 (size: 0x50)
    FRuntimeMeshCollisionUpdated CollisionUpdated;                                    // 0x0460 (size: 0x10)
    void RuntimeMeshCollisionUpdatedDelegate();

    void Reset();
    bool IsInitialized();
    void Initialize(class URuntimeMeshProvider* Provider);
    class URuntimeMeshProvider* GetProviderPtr();
    FBoxSphereBounds GetLocalBounds();
    FRuntimeMeshCollisionHitInfo GetHitSource(int32 FaceIndex);
    class UBodySetup* GetBodySetup();
}; // Size: 0x470

class ARuntimeMeshActor : public AActor
{
    class URuntimeMeshComponent* RuntimeMeshComponent;                                // 0x0220 (size: 0x8)

    void SetRuntimeMeshMobility(ERuntimeMeshMobility NewMobility);
    ERuntimeMeshMobility GetRuntimeMeshMobility();
    class URuntimeMeshComponent* GetRuntimeMeshComponent();
}; // Size: 0x228

struct FRuntimeMeshTriangleStream
{
}; // Size: 0x18

struct FRuntimeMeshVertexTexCoordStream
{
}; // Size: 0x18

struct FRuntimeMeshVertexTangentStream
{
}; // Size: 0x18

struct FRuntimeMeshVertexPositionStream
{
}; // Size: 0x10

struct FRuntimeMeshVertexColorStream
{
}; // Size: 0x10

struct FRuntimeMeshCollisionVertexStream
{
}; // Size: 0x10

struct FRuntimeMeshCollisionTriangleStream
{
}; // Size: 0x10

struct FRuntimeMeshCollisionTexCoordStream
{
}; // Size: 0x10

struct FRuntimeMeshCollisionMaterialIndexStream
{
}; // Size: 0x10

struct FRuntimeMeshRenderableMeshData
{
    FRuntimeMeshVertexPositionStream Positions;                                       // 0x0000 (size: 0x10)
    FRuntimeMeshVertexTangentStream Tangents;                                         // 0x0010 (size: 0x18)
    FRuntimeMeshVertexTexCoordStream TexCoords;                                       // 0x0028 (size: 0x18)
    FRuntimeMeshVertexColorStream Colors;                                             // 0x0040 (size: 0x10)
    FRuntimeMeshTriangleStream Triangles;                                             // 0x0050 (size: 0x18)
    FRuntimeMeshTriangleStream AdjacencyTriangles;                                    // 0x0068 (size: 0x18)

}; // Size: 0x80

struct FRuntimeMeshCollisionData
{
    FRuntimeMeshCollisionVertexStream Vertices;                                       // 0x0000 (size: 0x10)
    FRuntimeMeshCollisionTriangleStream Triangles;                                    // 0x0010 (size: 0x10)
    FRuntimeMeshCollisionTexCoordStream TexCoords;                                    // 0x0020 (size: 0x10)
    FRuntimeMeshCollisionMaterialIndexStream MaterialIndices;                         // 0x0030 (size: 0x10)
    TArray<FRuntimeMeshCollisionSourceSectionInfo> CollisionSources;                  // 0x0040 (size: 0x10)
    bool bFlipNormals;                                                                // 0x0050 (size: 0x1)
    bool bDeformableMesh;                                                             // 0x0051 (size: 0x1)
    bool bFastCook;                                                                   // 0x0052 (size: 0x1)
    bool bDisableActiveEdgePrecompute;                                                // 0x0053 (size: 0x1)

}; // Size: 0x58

struct FRuntimeMeshCollisionConvexMesh
{
    TArray<FVector> VertexBuffer;                                                     // 0x0000 (size: 0x10)
    FBox BoundingBox;                                                                 // 0x0010 (size: 0x1C)

}; // Size: 0x30

struct FRuntimeMeshCollisionSphere
{
    FVector Center;                                                                   // 0x0000 (size: 0xC)
    float Radius;                                                                     // 0x000C (size: 0x4)

}; // Size: 0x10

struct FRuntimeMeshCollisionBox
{
    FVector Center;                                                                   // 0x0000 (size: 0xC)
    FRotator Rotation;                                                                // 0x000C (size: 0xC)
    FVector Extents;                                                                  // 0x0018 (size: 0xC)

}; // Size: 0x24

struct FRuntimeMeshCollisionCapsule
{
    FVector Center;                                                                   // 0x0000 (size: 0xC)
    FRotator Rotation;                                                                // 0x000C (size: 0xC)
    float Radius;                                                                     // 0x0018 (size: 0x4)
    float Length;                                                                     // 0x001C (size: 0x4)

}; // Size: 0x20

struct FRuntimeMeshCollisionSettings
{
    bool bUseComplexAsSimple;                                                         // 0x0000 (size: 0x1)
    bool bUseAsyncCooking;                                                            // 0x0001 (size: 0x1)
    ERuntimeMeshCollisionCookingMode CookingMode;                                     // 0x0002 (size: 0x1)
    TArray<FRuntimeMeshCollisionConvexMesh> ConvexElements;                           // 0x0008 (size: 0x10)
    TArray<FRuntimeMeshCollisionSphere> Spheres;                                      // 0x0018 (size: 0x10)
    TArray<FRuntimeMeshCollisionBox> Boxes;                                           // 0x0028 (size: 0x10)
    TArray<FRuntimeMeshCollisionCapsule> Capsules;                                    // 0x0038 (size: 0x10)

}; // Size: 0x48

class URuntimeMeshBlueprintFunctions : public UBlueprintFunctionLibrary
{

    void SetVertexIndex(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 Index, int32 NewIndex);
    void SetTexCoord(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Index, FVector2D NewTexCoord, int32 ChannelId);
    void SetTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector InTangentX, FVector InTangentY, FVector InTangentZ);
    void SetTangent(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector NewTangent);
    void SetPosition(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32 Index, FVector NewPosition);
    void SetNumTriangles(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 NewNum, bool bAllowShrinking);
    void SetNumTexCoords(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 NewNum, bool bAllowShrinking);
    void SetNumTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 NewNum, bool bAllowShrinking);
    void SetNumPositions(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32 NewNum, bool bAllowShrinking);
    void SetNumColors(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32 NewNum, bool bAllowShrinking);
    void SetNumCollisionVertices(FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32 NewNum, bool bAllowShrinking);
    void SetNumCollisionTriangles(FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32 NewNum, bool bAllowShrinking);
    void SetNumCollisionTexCoords(FRuntimeMeshCollisionTexCoordStream& Stream, FRuntimeMeshCollisionTexCoordStream& OutStream, int32 NewNumChannels, int32 NewNumTexCoords, bool bAllowShrinking);
    void SetNumCollisionMaterialIndices(FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32 NewNum, bool bAllowShrinking);
    void SetNormal(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector NewNormal);
    void SetColor(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32 Index, FLinearColor NewColor);
    void SetCollisionVertex(FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32 Index, FVector NewVertex);
    void SetCollisionTexCoord(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Index, FVector2D NewTexCoord, int32 ChannelId);
    void SeCollisionMaterialIndex(FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32 Index, int32 NewIndex);
    void NumTriangles(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32& OutNumTriangles);
    void NumTexCoords(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32& OutNumTexCoords);
    void NumTexCoordChannels(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32& OutNumTexCoordChannels);
    void NumTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32& OutNumTangents);
    void NumPositions(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32& OutNumPositions);
    void NumIndices(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32& OutNumIndices);
    void NumColors(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32& OutNumColors);
    void NumCollisionVertices(FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32& OutNumVertices);
    void NumCollisionTriangles(FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32& OutNumTriangles);
    void NumCollisionTexCoords(FRuntimeMeshCollisionTexCoordStream& Stream, FRuntimeMeshCollisionTexCoordStream& OutStream, int32 ChannelId, int32& OutNumTexCoords);
    void NumCollisionTexCoordChannels(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32& OutNumTexCoordChannels);
    void NumCollisionMaterialIndices(FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32& OutNumIndices);
    void GetVertexIndex(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 Index, int32& OutIndex);
    FRuntimeMeshTriangleStream GetTriangleStream(FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData);
    FRuntimeMeshVertexTexCoordStream GetTexCoordStream(FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData);
    void GetTexCoord(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Index, FVector2D& OutTexCoord);
    FRuntimeMeshVertexTangentStream GetTangentStream(FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData);
    void GetTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector& OutTangentX, FVector& OutTangentY, FVector& OutTangentZ);
    void GetTangent(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector& OutTangent);
    FRuntimeMeshVertexPositionStream GetPositionStream(FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData);
    void GetPosition(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32 Index, FVector& OutPosition);
    void GetNormal(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Index, FVector& OutNormal);
    FRuntimeMeshVertexColorStream GetColorStream(FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData);
    void GetColor(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32 Index, FLinearColor& OutColor);
    FRuntimeMeshCollisionVertexStream GetCollisionVertexStream(FRuntimeMeshCollisionData& CollisionData, FRuntimeMeshCollisionData& OutCollisionData);
    void GetCollisionVertex(FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32 Index, FVector& OutVertex);
    FRuntimeMeshCollisionTriangleStream GetCollisionTriangleStream(FRuntimeMeshCollisionData& CollisionData, FRuntimeMeshCollisionData& OutCollisionData);
    void GetCollisionTriangle(FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32 Index, int32& OutIndexA, int32& OutIndexB, int32& OutIndexC);
    FRuntimeMeshCollisionTexCoordStream GetCollisionTexCoordStream(FRuntimeMeshCollisionData& CollisionData, FRuntimeMeshCollisionData& OutCollisionData);
    void GetCollisionTexCoord(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Index, FVector2D& OutTexCoord, int32 ChannelId);
    FRuntimeMeshCollisionMaterialIndexStream GetCollisionMaterialIndexStream(FRuntimeMeshCollisionData& CollisionData, FRuntimeMeshCollisionData& OutCollisionData);
    void GetCollisionMaterialIndex(FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32 Index, int32& OutIndex);
    void GetBounds(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, FBox& OutBounds);
    FRuntimeMeshTriangleStream GetAdjacencyTriangleStream(FRuntimeMeshRenderableMeshData& MeshData, FRuntimeMeshRenderableMeshData& OutMeshData);
    void EmptyTriangles(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 Slack);
    void EmptyTexCoords(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Slack);
    void EmptyTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, int32 Slack);
    void EmptyPositions(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, int32 Slack);
    void EmptyColors(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, int32 Slack);
    void EmptyCollisionVertices(FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, int32 Slack);
    void EmptyCollisionTriangles(FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32 Slack);
    void EmptyCollisionTexCoords(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32 Slack);
    void EmptyCollisionMaterialIndices(FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32 Slack);
    FRuntimeMeshRenderableMeshData CreateRenderableMeshData(bool bWantsHighPrecisionTangents, bool bWantsHighPrecisionTexCoords, uint8 NumTexCoords, bool bWants32BitIndices);
    void AppendTriangles(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, const FRuntimeMeshTriangleStream& InOther);
    void AppendTexCoords(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, const FRuntimeMeshVertexTexCoordStream& InOther);
    void AppendTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, const FRuntimeMeshVertexTangentStream& InOther);
    void AppendPositions(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, const FRuntimeMeshVertexPositionStream& InOther);
    void AppendColors(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, const FRuntimeMeshVertexColorStream& InOther);
    void AddTriangle(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 NewIndexA, int32 NewIndexB, int32 NewIndexC);
    void AddTexCoord(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, int32& OutIndex, FVector2D InTexCoord, int32 ChannelId);
    void AddTangents(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, FVector InTangentX, FVector InTangentY, FVector InTangentZ, int32& OutIndex);
    void AddPosition(FRuntimeMeshVertexPositionStream& Stream, FRuntimeMeshVertexPositionStream& OutStream, FVector InPosition, int32& OutIndex);
    void AddNormalAndTangent(FRuntimeMeshVertexTangentStream& Stream, FRuntimeMeshVertexTangentStream& OutStream, FVector InNormal, FVector InTangent, int32& OutIndex);
    void AddIndex(FRuntimeMeshTriangleStream& Stream, FRuntimeMeshTriangleStream& OutStream, int32 NewIndex, int32& OutIndex);
    void AddColor(FRuntimeMeshVertexColorStream& Stream, FRuntimeMeshVertexColorStream& OutStream, FLinearColor InColor, int32& OutIndex);
    void AddCollisionVertex(FRuntimeMeshCollisionVertexStream& Stream, FRuntimeMeshCollisionVertexStream& OutStream, FVector InVertex, int32& OutIndex);
    void AddCollisionTriangle(FRuntimeMeshCollisionTriangleStream& Stream, FRuntimeMeshCollisionTriangleStream& OutStream, int32 NewIndexA, int32 NewIndexB, int32 NewIndexC, int32& OutTriangleIndex);
    void AddCollisionTexCoord(FRuntimeMeshVertexTexCoordStream& Stream, FRuntimeMeshVertexTexCoordStream& OutStream, FVector2D InTexCoord, int32& OutIndex);
    void AddCollisionSphere(FRuntimeMeshCollisionSettings& Settings, FRuntimeMeshCollisionSettings& OutSettings, FRuntimeMeshCollisionSphere NewSphere);
    void AddCollisionMaterialIndex(FRuntimeMeshCollisionMaterialIndexStream& Stream, FRuntimeMeshCollisionMaterialIndexStream& OutStream, int32 NewIndex, int32& OutIndex);
    void AddCollisionConvex(FRuntimeMeshCollisionSettings& Settings, FRuntimeMeshCollisionSettings& OutSettings, FRuntimeMeshCollisionConvexMesh NewConvex);
    void AddCollisionCapsule(FRuntimeMeshCollisionSettings& Settings, FRuntimeMeshCollisionSettings& OutSettings, FRuntimeMeshCollisionCapsule NewCapsule);
    void AddCollisionBox(FRuntimeMeshCollisionSettings& Settings, FRuntimeMeshCollisionSettings& OutSettings, FRuntimeMeshCollisionBox NewBox);
}; // Size: 0x28

class URuntimeMeshComponent : public UMeshComponent
{
    class URuntimeMesh* RuntimeMeshReference;                                         // 0x0470 (size: 0x8)

    void SetupMaterialSlot(int32 MaterialSlot, FName SlotName, class UMaterialInterface* InMaterial);
    void SetRuntimeMeshMobility(ERuntimeMeshMobility NewMobility);
    void SetRuntimeMesh(class URuntimeMesh* NewMesh);
    void Initialize(class URuntimeMeshProvider* Provider);
    ERuntimeMeshMobility GetRuntimeMeshMobility();
    class URuntimeMesh* GetRuntimeMesh();
    class URuntimeMeshProvider* GetProvider();
    class URuntimeMesh* GetOrCreateRuntimeMesh();
    TArray<FRuntimeMeshMaterialSlot> GetMaterialSlots();
    FRuntimeMeshCollisionHitInfo GetHitSource(int32 FaceIndex);
}; // Size: 0x480

class URuntimeMeshComponentEngineSubsystem : public UEngineSubsystem
{
}; // Size: 0x60

class URuntimeMeshComponentSettings : public UDeveloperSettings
{
    ERuntimeMeshUpdateFrequency DefaultUpdateFrequency;                               // 0x0038 (size: 0x1)
    bool bUse32BitIndicesByDefault;                                                   // 0x0039 (size: 0x1)
    bool bUseHighPrecisionTexCoordsByDefault;                                         // 0x003A (size: 0x1)
    bool bUseHighPrecisionTangentsByDefault;                                          // 0x003B (size: 0x1)
    bool bCookCollisionAsync;                                                         // 0x003C (size: 0x1)
    ERuntimeMeshCollisionCookingMode DefaultCookingMode;                              // 0x003D (size: 0x1)
    FInt32Range MinMaxThreadPoolThreads;                                              // 0x0040 (size: 0x10)
    int32 SystemThreadDivisor;                                                        // 0x0050 (size: 0x4)
    ERuntimeMeshThreadingPriority ThreadPriority;                                     // 0x0054 (size: 0x1)
    int32 ThreadStackSize;                                                            // 0x0058 (size: 0x4)
    float MaxAllowedTimePerTick;                                                      // 0x005C (size: 0x4)

}; // Size: 0x60

struct FRuntimeMeshTangent
{
    FVector TangentX;                                                                 // 0x0000 (size: 0xC)
    bool bFlipTangentY;                                                               // 0x000C (size: 0x1)

}; // Size: 0x10

class URuntimeMeshComponentStatic : public URuntimeMeshComponent
{
    class URuntimeMesh* RuntimeMesh;                                                  // 0x0478 (size: 0x8)
    class URuntimeMeshProviderStatic* StaticProvider;                                 // 0x0480 (size: 0x8)
    class URuntimeMeshModifierNormals* NormalsModifier;                               // 0x0488 (size: 0x8)
    class URuntimeMeshModifierAdjacency* AdjacencyModifier;                           // 0x0490 (size: 0x8)

    void UpdateSectionFromComponents(int32 LODIndex, int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FRuntimeMeshTangent>& Tangents);
    void UpdateSection_Blueprint(int32 LODIndex, int32 SectionId, const FRuntimeMeshRenderableMeshData& SectionData);
    void SetRenderableSectionAffectsCollision(int32 SectionId, bool bCollisionEnabled);
    void SetRenderableLODForCollision(int32 LODIndex);
    void SetCollisionSettings(const FRuntimeMeshCollisionSettings& NewCollisionSettings);
    void SetCollisionMesh(const FRuntimeMeshCollisionData& NewCollisionMesh);
    void RemoveAllSectionsForLOD(int32 LODIndex);
    bool HasTessellationTriangleGenerationEnabled();
    bool HasNormalTangentGenerationEnabled();
    class URuntimeMeshProviderStatic* GetStaticProvider();
    TSet<int32> GetSectionsForMeshCollision();
    FRuntimeMeshRenderableMeshData GetSectionRenderDataAndClear(int32 LODIndex, int32 SectionId);
    FRuntimeMeshRenderableMeshData GetSectionRenderData(int32 LODIndex, int32 SectionId);
    FRuntimeMeshSectionProperties GetSectionProperties(int32 LODIndex, int32 SectionId);
    TArray<int32> GetSectionIds(int32 LODIndex);
    FBoxSphereBounds GetSectionBounds(int32 LODIndex, int32 SectionId);
    int32 GetLODForMeshCollision();
    int32 GetLastSectionId(int32 LODIndex);
    FRuntimeMeshCollisionSettings GetCollisionSettings();
    FRuntimeMeshCollisionData GetCollisionMesh();
    void EnableNormalTangentGeneration();
    void EnabledTessellationTrianglesGeneration();
    bool DoesSectionHaveValidMeshData(int32 LODIndex, int32 SectionId);
    void DisableTessellationTrianglesGeneration();
    void DisableNormalTangentGeneration();
    void CreateSectionFromComponents(int32 LODIndex, int32 SectionIndex, int32 MaterialSlot, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FRuntimeMeshTangent>& Tangents, ERuntimeMeshUpdateFrequency UpdateFrequency, bool bCreateCollision);
    void CreateSection_Blueprint(int32 LODIndex, int32 SectionId, const FRuntimeMeshSectionProperties& SectionProperties, const FRuntimeMeshRenderableMeshData& SectionData);
    void ClearSection(int32 LODIndex, int32 SectionId);
}; // Size: 0x4A0

class URuntimeMeshModifier : public UObject
{

    void ApplyToMesh(FRuntimeMeshRenderableMeshData& MeshData);
    void ApplyToCollisionMesh(FRuntimeMeshCollisionData& MeshData);
}; // Size: 0x28

class URuntimeMeshModifierAdjacency : public URuntimeMeshModifier
{

    void CalculateTessellationIndices(FRuntimeMeshRenderableMeshData& MeshData);
}; // Size: 0x28

class URuntimeMeshModifierNormals : public URuntimeMeshModifier
{
    bool bComputeSmoothNormals;                                                       // 0x0028 (size: 0x1)

    void CalculateNormalsTangents(FRuntimeMeshRenderableMeshData& MeshData, bool bInComputeSmoothNormals);
}; // Size: 0x30

struct FRuntimeMeshSectionData
{
}; // Size: 0x90

class URuntimeMeshProvider : public URuntimeMeshProviderTargetInterface
{

    void Shutdown();
    bool IsThreadSafe();
    bool IsBound();
    void Initialize();
    bool HasCollisionMesh();
    bool GetSectionMeshForLOD(int32 LODIndex, int32 SectionId, FRuntimeMeshRenderableMeshData& MeshData);
    FRuntimeMeshCollisionSettings GetCollisionSettings();
    bool GetCollisionMesh(FRuntimeMeshCollisionData& CollisionData);
    FBoxSphereBounds GetBounds();
    bool GetAllSectionsMeshForLOD(int32 LODIndex, TMap<int32, FRuntimeMeshSectionData>& MeshDatas);
    void CollisionUpdateCompleted();
}; // Size: 0x58

class URuntimeMeshProviderPassthrough : public URuntimeMeshProvider
{
    class URuntimeMeshProvider* ChildProvider;                                        // 0x0058 (size: 0x8)

    void SetChildProvider(class URuntimeMeshProvider* InProvider);
    class URuntimeMeshProvider* GetChildProvider();
}; // Size: 0x68

class URuntimeMeshProviderBox : public URuntimeMeshProvider
{
    FVector BoxRadius;                                                                // 0x0080 (size: 0xC)
    class UMaterialInterface* Material;                                               // 0x0090 (size: 0x8)

    void SetBoxRadius(const FVector& InRadius);
    void SetBoxMaterial(class UMaterialInterface* InMaterial);
    FVector GetBoxRadius();
    class UMaterialInterface* GetBoxMaterial();
}; // Size: 0x98

struct FRuntimeMeshRenderableCollisionData
{
    FRuntimeMeshCollisionVertexStream Vertices;                                       // 0x0000 (size: 0x10)
    FRuntimeMeshCollisionTriangleStream Triangles;                                    // 0x0010 (size: 0x10)
    FRuntimeMeshCollisionTexCoordStream TexCoords;                                    // 0x0020 (size: 0x10)

}; // Size: 0x30

class URuntimeMeshProviderCollision : public URuntimeMeshProviderPassthrough
{
    int32 LODForMeshCollision;                                                        // 0x0068 (size: 0x4)
    TMap<int32, FRuntimeMeshRenderableCollisionData> RenderableCollisionData;         // 0x0070 (size: 0x50)
    TSet<int32> SectionsAffectingCollision;                                           // 0x00C0 (size: 0x50)
    FRuntimeMeshCollisionSettings CollisionSettings;                                  // 0x0110 (size: 0x48)
    FRuntimeMeshCollisionData CollisionMesh;                                          // 0x0158 (size: 0x58)

    void SetRenderableSectionAffectsCollision(int32 SectionId, bool bCollisionEnabled);
    void SetRenderableLODForCollision(int32 LODIndex);
    void SetCollisionSettings(const FRuntimeMeshCollisionSettings& NewCollisionSettings);
    void SetCollisionMesh(const FRuntimeMeshCollisionData& NewCollisionMesh);
}; // Size: 0x1D8

class URuntimeMeshProviderMemoryCache : public URuntimeMeshProviderPassthrough
{

    void ClearCache();
}; // Size: 0x218

class URuntimeMeshProviderModifiers : public URuntimeMeshProviderPassthrough
{
    TArray<class URuntimeMeshModifier*> Modifiers;                                    // 0x0068 (size: 0x10)

    void RemoveModifier(class URuntimeMeshModifier* ModifierToRemove);
    void AddModifier(class URuntimeMeshModifier* NewModifier);
}; // Size: 0x78

class URuntimeMeshProviderPlane : public URuntimeMeshProviderPassthrough
{
    FVector LocationA;                                                                // 0x0094 (size: 0xC)
    FVector LocationB;                                                                // 0x00A0 (size: 0xC)
    FVector LocationC;                                                                // 0x00AC (size: 0xC)
    TArray<int32> VertsAB;                                                            // 0x00B8 (size: 0x10)
    TArray<int32> VertsAC;                                                            // 0x00C8 (size: 0x10)
    TArray<float> ScreenSize;                                                         // 0x00D8 (size: 0x10)
    class UMaterialInterface* Material;                                               // 0x00E8 (size: 0x8)

}; // Size: 0xF0

class URuntimeMeshProviderSphere : public URuntimeMeshProvider
{
    int32 MaxLOD;                                                                     // 0x0080 (size: 0x4)
    float SphereRadius;                                                               // 0x0084 (size: 0x4)
    int32 MaxLatitudeSegments;                                                        // 0x0088 (size: 0x4)
    int32 MinLatitudeSegments;                                                        // 0x008C (size: 0x4)
    int32 MaxLongitudeSegments;                                                       // 0x0090 (size: 0x4)
    int32 MinLongitudeSegments;                                                       // 0x0094 (size: 0x4)
    float LODMultiplier;                                                              // 0x0098 (size: 0x4)
    class UMaterialInterface* SphereMaterial;                                         // 0x00A0 (size: 0x8)

    void SetSphereRadius(float InSphereRadius);
    void SetSphereMaterial(class UMaterialInterface* InSphereMaterial);
    void SetMinLongitudeSegments(int32 InMinLongitudeSegments);
    void SetMinLatitudeSegments(int32 InMinLatitudeSegments);
    void SetMaxLongitudeSegments(int32 InMaxLongitudeSegments);
    void SetMaxLatitudeSegments(int32 InMaxLatitudeSegments);
    void SetLODMultiplier(float InLODMultiplier);
    float GetSphereRadius();
    class UMaterialInterface* GetSphereMaterial();
    int32 GetMinLongitudeSegments();
    int32 GetMinLatitudeSegments();
    int32 GetMaxLongitudeSegments();
    int32 GetMaxLatitudeSegments();
    float GetLODMultiplier();
}; // Size: 0xA8

class URuntimeMeshProviderStatic : public URuntimeMeshProvider
{
    bool StoreEditorGeneratedDataForGame;                                             // 0x0058 (size: 0x1)
    TArray<class URuntimeMeshModifier*> CurrentMeshModifiers;                         // 0x0248 (size: 0x10)

    void UpdateSectionFromComponents(int32 LODIndex, int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FRuntimeMeshTangent>& Tangents);
    void UpdateSection_Blueprint(int32 LODIndex, int32 SectionId, const FRuntimeMeshRenderableMeshData& SectionData);
    void UnRegisterModifier(class URuntimeMeshModifier* Modifier);
    void SetShouldSerializeMeshData(bool bIsSerialized);
    void SetRenderableSectionAffectsCollision(int32 SectionId, bool bCollisionEnabled, bool bForceUpdate);
    void SetRenderableLODForCollision(int32 LODIndex);
    void SetCollisionSettings(const FRuntimeMeshCollisionSettings& NewCollisionSettings);
    void SetCollisionMesh(const FRuntimeMeshCollisionData& NewCollisionMesh);
    void RemoveAllSectionsForLOD(int32 LODIndex);
    void RegisterModifier(class URuntimeMeshModifier* Modifier);
    TSet<int32> GetSectionsForMeshCollision();
    FRuntimeMeshRenderableMeshData GetSectionRenderDataAndClear(int32 LODIndex, int32 SectionId);
    FRuntimeMeshRenderableMeshData GetSectionRenderData(int32 LODIndex, int32 SectionId);
    FRuntimeMeshSectionProperties GetSectionProperties(int32 LODIndex, int32 SectionId);
    TArray<int32> GetSectionIds(int32 LODIndex);
    FBoxSphereBounds GetSectionBounds(int32 LODIndex, int32 SectionId);
    int32 GetLODForMeshCollision();
    int32 GetLastSectionId(int32 LODIndex);
    FRuntimeMeshCollisionSettings GetCollisionSettingsStatic();
    FRuntimeMeshCollisionData GetCollisionMeshStatic();
    bool DoesSectionHaveValidMeshData(int32 LODIndex, int32 SectionId);
    void CreateSectionFromComponents(int32 LODIndex, int32 SectionIndex, int32 MaterialSlot, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FRuntimeMeshTangent>& Tangents, ERuntimeMeshUpdateFrequency UpdateFrequency, bool bCreateCollision);
    void CreateSection_Blueprint(int32 LODIndex, int32 SectionId, const FRuntimeMeshSectionProperties& SectionProperties, const FRuntimeMeshRenderableMeshData& SectionData);
}; // Size: 0x258

class URuntimeMeshProviderStaticMesh : public URuntimeMeshProvider
{
    class UStaticMesh* StaticMesh;                                                    // 0x0058 (size: 0x8)
    int32 MaxLOD;                                                                     // 0x0060 (size: 0x4)
    int32 ComplexCollisionLOD;                                                        // 0x0064 (size: 0x4)

    void SetStaticMesh(class UStaticMesh* InStaticMesh);
    void SetMaxLOD(int32 InMaxLOD);
    void SetComplexCollisionLOD(int32 InLOD);
    class UStaticMesh* GetStaticMesh();
    int32 GetMaxLOD();
    int32 GetComplexCollisionLOD();
}; // Size: 0x68

class URuntimeMeshSlicer : public UBlueprintFunctionLibrary
{

    bool SliceRuntimeMeshData(FRuntimeMeshRenderableMeshData& SourceSection, const FPlane& SlicePlane, ERuntimeMeshSliceCapOption CapOption, FRuntimeMeshRenderableMeshData& NewSourceSection, FRuntimeMeshRenderableMeshData& NewSourceSectionCap, bool bCreateDestination, FRuntimeMeshRenderableMeshData& DestinationSection, FRuntimeMeshRenderableMeshData& NewDestinationSectionCap);
    void SliceRuntimeMesh(class URuntimeMeshComponent* InRuntimeMesh, FVector PlanePosition, FVector PlaneNormal, bool bCreateOtherHalf, class URuntimeMeshComponent*& OutOtherHalfRuntimeMesh, ERuntimeMeshSliceCapOption CapOption, class UMaterialInterface* CapMaterial);
}; // Size: 0x28

class URuntimeMeshStaticMeshConverter : public UBlueprintFunctionLibrary
{

    bool CopyStaticMeshToRuntimeMesh(class UStaticMesh* StaticMesh, class URuntimeMeshComponent* RuntimeMeshComponent, int32 CollisionLODIndex, int32 MaxLODToCopy);
    bool CopyStaticMeshSectionToRenderableMeshData(class UStaticMesh* StaticMesh, int32 LODIndex, int32 SectionId, FRuntimeMeshRenderableMeshData& OutMeshData);
    bool CopyStaticMeshLODToCollisionData(class UStaticMesh* StaticMesh, int32 LODIndex, FRuntimeMeshCollisionData& OutCollisionData);
    bool CopyStaticMeshComponentToRuntimeMesh(class UStaticMeshComponent* StaticMeshComponent, class URuntimeMeshComponent* RuntimeMeshComponent, int32 CollisionLODIndex, int32 MaxLODToCopy);
    bool CopyStaticMeshCollisionToCollisionSettings(class UStaticMesh* StaticMesh, FRuntimeMeshCollisionSettings& OutCollisionSettings);
}; // Size: 0x28

#endif

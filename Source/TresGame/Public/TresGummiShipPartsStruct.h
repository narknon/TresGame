#pragma once
#include "CoreMinimal.h"
#include "ETresGummiType.h"
#include "TresGummiShipPartsStruct.generated.h"

USTRUCT(BlueprintType)
struct FTresGummiShipPartsStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_indexX;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_indexY;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_indexZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGummiType m_gummiKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 m_gummiID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 m_sizeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 m_sizeY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 m_sizeZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_rotX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_rotY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_rotZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 m_pointX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 m_pointY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 m_pointZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 m_materialID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 m_patternID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 m_baseColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 m_materilColor;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_flipX;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_flipY;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_flipZ;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int8 m_Offset;
    
    TRESGAME_API FTresGummiShipPartsStruct();
};


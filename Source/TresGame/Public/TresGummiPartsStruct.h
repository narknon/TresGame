#pragma once
#include "CoreMinimal.h"
#include "TresGummiGraphicData.h"
#include "TresGummiPartsStruct.generated.h"

USTRUCT(BlueprintType)
struct FTresGummiPartsStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 m_nSizeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 m_nSizeY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 m_nSizeZ;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int16 m_nCost;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int16 m_nHP;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int16 m_nSpeed;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int16 m_nPower;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int16 m_nRoll;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int16 m_nAttack;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int16 m_nTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isPattern;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isSticker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isColorChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isFlip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isUVAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPreviewScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGummiGraphicData m_GraphicData;
    
    TRESGAME_API FTresGummiPartsStruct();
};


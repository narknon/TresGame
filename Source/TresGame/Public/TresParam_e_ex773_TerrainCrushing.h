#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresEnemy_e_ex773_CrushingParam.h"
#include "TresEnemy_e_ex773_CrushingPattern.h"
#include "InputCoreTypes.h"
#include "TresParam_e_ex773_TerrainCrushing.generated.h"

UCLASS(Abstract, Blueprintable, Const)
class UTresParam_e_ex773_TerrainCrushing : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemy_e_ex773_CrushingParam> m_pro_CrushingParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemy_e_ex773_CrushingPattern> m_pro_CrushingPatternArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_FaceClawPatternIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_FlarePillarPatternIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_HeavenlyPillarPatternIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDisableKyes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey m_ClearKeys;
    
    UTresParam_e_ex773_TerrainCrushing();
};


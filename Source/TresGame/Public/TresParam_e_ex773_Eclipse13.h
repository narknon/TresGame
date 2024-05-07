#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresParam_e_ex773_Eclipse13.generated.h"

class UCurveFloat;
class UTres_e_ex773_Eclipse13_WaveArrayAsset;

UCLASS(Blueprintable)
class UTresParam_e_ex773_Eclipse13 : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTres_e_ex773_Eclipse13_WaveArrayAsset* pShellMoveArrayAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Shell_SizeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Shell_SizeMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Shell_SizeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCurveFloat*> Exp_CurveFloatArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Exp_ScaleArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Exp_MaxHitCount;
    
    UTresParam_e_ex773_Eclipse13();
};


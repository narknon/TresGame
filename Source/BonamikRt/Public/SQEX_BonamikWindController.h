#pragma once
#include "CoreMinimal.h"
#include "SQEX_BonamikPresetWindInstance.h"
#include "UObject/NoExportTypes.h"
#include "SQEX_BonamikWindController.generated.h"

class USQEX_BonamikWind;
class UWorld;

USTRUCT(BlueprintType)
struct BONAMIKRT_API FSQEX_BonamikWindController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, EditAnywhere, Category = "SQEX_BonamikWindController", meta = (AllowPrivateAccess = "true"))
    FSQEX_BonamikPresetWindInstance m_PresetWind[10];
    
    UPROPERTY(Transient, EditAnywhere, Category = "SQEX_BonamikWindController", meta = (AllowPrivateAccess = "true"))
    TArray<TWeakObjectPtr<USQEX_BonamikWind>> m_WindSources;
    
    UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere, Category = "SQEX_BonamikWindController", meta = (AllowPrivateAccess = "true"))
    FVector m_CurrentGlobalWindForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SQEX_BonamikWindController", meta = (AllowPrivateAccess = "true"))
    float m_GlobalWindScale;
    
    UPROPERTY(Transient, BlueprintReadWrite, EditAnywhere, Category = "SQEX_BonamikWindController", meta = (AllowPrivateAccess = "true"))
    TWeakObjectPtr<UWorld> RefWorld;
    
public:
    FSQEX_BonamikWindController();
};


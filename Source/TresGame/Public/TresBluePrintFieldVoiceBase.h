#pragma once
#include "CoreMinimal.h"
#include "TresBluePrintObjectBase.h"
#include "ETresFieldVoiceExecuteMode.h"
#include "UObject/NoExportTypes.h"
#include "TresBluePrintFieldVoiceBase.generated.h"

class ATresAIPawnBase;
class UTresFieldVoiceCommonParam;
class UTresFieldVoice;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UTresBluePrintFieldVoiceBase : public UTresBluePrintObjectBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresFieldVoiceCommonParam* m_pCommonParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresFieldVoiceExecuteMode::Type> m_ExecuteMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_Infinity;
    
public:
    UTresBluePrintFieldVoiceBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSameExecuter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSameBruePrintClass();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingVoice();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayAfterTime(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverLastExecuteSameGroupTime(float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInCenter(const FVector2D& posRate, const FVector2D& InRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCinematic();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTresFieldVoice* GetRandomFieldVoice(TArray<UTresFieldVoice*> targetArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresAIPawnBase* GetPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayAfterTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetExecuteNum();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool Execute();
    
};


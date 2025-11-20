/*This interface should be implemented in characters or objects capable 
  of starting conversations with players*/

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Dialogue.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable, BlueprintType)
class UDialogueActor : public UInterface
{
	GENERATED_BODY()
};


class DIALOGUESYS_API IDialogueActor
{
	GENERATED_BODY()

public:

	//Used to get the state of the conversation, returns the row from which the dialogue should start
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	FName GetCurrentDialogueRow();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void UpdateCurrentDialogueRow(FName NewRow);
};

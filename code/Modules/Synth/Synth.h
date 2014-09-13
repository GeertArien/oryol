#pragma once
//------------------------------------------------------------------------------
/**
    @class Oryol::Synth
    @ingroup Synth
    @brief the Synth module implements a chip-tune audio system
*/
#include "Core/Singleton.h"
#include "Synth/Core/soundMgr.h"
#include "Synth/Core/SynthOp.h"

namespace Oryol {
    
class Synth {
public:
    /// setup the Synth module
    static void Setup(const SynthSetup& setup);
    /// discard the Synth module
    static void Discard();
    /// check if Synth module is valid
    static bool IsValid();
    /// update the sound system, call once per frame, advances tick
    static void Update();
    /// add a sound synthesis Op
    static void AddOp(int32 voice, int32 track, const SynthOp& op, float32 timeOffset = 0.0f);
    
private:
    struct _state {
        _priv::soundMgr soundManager;
    };
    static _state* state;
};
    
} // namespace Oryol
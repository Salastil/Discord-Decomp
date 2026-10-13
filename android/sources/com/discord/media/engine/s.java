package com.discord.media.engine;

import com.facebook.react.bridge.Callback;
import java.util.Map;
import kotlin.Unit;
import kotlin.jvm.functions.Function2;

/* loaded from: classes.dex */
public final /* synthetic */ class s implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4231d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Callback f4232e;

    public /* synthetic */ s(int i5, Callback callback) {
        this.f4231d = i5;
        this.f4232e = callback;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        Unit invokeSuspend$lambda$0;
        Unit invokeSuspend$lambda$02;
        Unit invokeSuspend$lambda$03;
        Unit createVoiceConnectionWithOptions$lambda$1;
        String str = (String) obj;
        switch (this.f4231d) {
            case 0:
                invokeSuspend$lambda$0 = MediaEngineModule$getAudioSubsystem$1.invokeSuspend$lambda$0(this.f4232e, str, (String) obj2);
                return invokeSuspend$lambda$0;
            case 1:
                invokeSuspend$lambda$02 = MediaEngineModule$getMLSSigningKeyB64$1.invokeSuspend$lambda$0(this.f4232e, str, (String) obj2);
                return invokeSuspend$lambda$02;
            case 2:
                invokeSuspend$lambda$03 = MediaEngineModule$stopLocalAudioRecording$1.invokeSuspend$lambda$0(this.f4232e, str, ((Integer) obj2).intValue());
                return invokeSuspend$lambda$03;
            default:
                createVoiceConnectionWithOptions$lambda$1 = MediaEngineModule.createVoiceConnectionWithOptions$lambda$1(this.f4232e, str, (Map) obj2);
                return createVoiceConnectionWithOptions$lambda$1;
        }
    }
}

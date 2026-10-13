package com.discord.media.engine;

import com.facebook.react.bridge.Callback;
import java.util.List;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;

/* loaded from: classes.dex */
public final /* synthetic */ class l implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4219d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Callback f4220e;

    public /* synthetic */ l(int i5, Callback callback) {
        this.f4219d = i5;
        this.f4220e = callback;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Unit invokeSuspend$lambda$0;
        Unit invokeSuspend$lambda$02;
        Unit invokeSuspend$lambda$03;
        Unit invokeSuspend$lambda$04;
        Unit invokeSuspend$lambda$05;
        Unit invokeSuspend$lambda$06;
        Unit invokeSuspend$lambda$07;
        Unit invokeSuspend$lambda$08;
        Unit invokeSuspend$lambda$09;
        Unit invokeSuspend$lambda$010;
        Unit invokeSuspend$lambda$011;
        Unit invokeSuspend$lambda$012;
        Unit invokeSuspend$lambda$013;
        switch (this.f4219d) {
            case 0:
                invokeSuspend$lambda$0 = MediaEngineModule$connectionInstanceGetEncryptionModes$1.invokeSuspend$lambda$0(this.f4220e, (String[]) obj);
                return invokeSuspend$lambda$0;
            case 1:
                invokeSuspend$lambda$02 = MediaEngineModule$connectionInstanceGetFilteredStats$1.invokeSuspend$lambda$0(this.f4220e, (String) obj);
                return invokeSuspend$lambda$02;
            case 2:
                invokeSuspend$lambda$03 = MediaEngineModule$connectionInstanceGetMLSKeyPackageB64$1.invokeSuspend$lambda$0(this.f4220e, (String) obj);
                return invokeSuspend$lambda$03;
            case 3:
                invokeSuspend$lambda$04 = MediaEngineModule$connectionInstanceGetMLSPairwiseFingerprintB64$1.invokeSuspend$lambda$0(this.f4220e, (String) obj);
                return invokeSuspend$lambda$04;
            case 4:
                invokeSuspend$lambda$05 = MediaEngineModule$connectionInstanceGetStats$1.invokeSuspend$lambda$0(this.f4220e, (String) obj);
                return invokeSuspend$lambda$05;
            case 5:
                invokeSuspend$lambda$06 = MediaEngineModule$connectionInstanceProcessMLSProposalsB64$1.invokeSuspend$lambda$0(this.f4220e, (String) obj);
                return invokeSuspend$lambda$06;
            case 6:
                invokeSuspend$lambda$07 = MediaEngineModule$getCodecCapabilities$1.invokeSuspend$lambda$0(this.f4220e, (String) obj);
                return invokeSuspend$lambda$07;
            case 7:
                invokeSuspend$lambda$08 = MediaEngineModule$getCodecSurvey$1.invokeSuspend$lambda$0(this.f4220e, (String) obj);
                return invokeSuspend$lambda$08;
            case 8:
                invokeSuspend$lambda$09 = MediaEngineModule$getInputDevices$1.invokeSuspend$lambda$0(this.f4220e, (List) obj);
                return invokeSuspend$lambda$09;
            case 9:
                invokeSuspend$lambda$010 = MediaEngineModule$getOutputDevices$1.invokeSuspend$lambda$0(this.f4220e, (List) obj);
                return invokeSuspend$lambda$010;
            case 10:
                invokeSuspend$lambda$011 = MediaEngineModule$getVideoInputDevices$1.invokeSuspend$lambda$0(this.f4220e, (List) obj);
                return invokeSuspend$lambda$011;
            case 11:
                invokeSuspend$lambda$012 = MediaEngineModule$rankRtcRegions$1.invokeSuspend$lambda$0(this.f4220e, (String[]) obj);
                return invokeSuspend$lambda$012;
            default:
                invokeSuspend$lambda$013 = MediaEngineModule$startLocalAudioRecording$1.invokeSuspend$lambda$0(this.f4220e, ((Boolean) obj).booleanValue());
                return invokeSuspend$lambda$013;
        }
    }
}

package com.discord.media.engine;

import com.facebook.react.bridge.Callback;
import java.util.List;
import kotlin.Unit;
import kotlin.jvm.functions.Function3;

/* loaded from: classes.dex */
public final /* synthetic */ class m implements Function3 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4221d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f4222e;

    public /* synthetic */ m(int i5, Object obj) {
        this.f4221d = i5;
        this.f4222e = obj;
    }

    @Override // kotlin.jvm.functions.Function3
    public final Object invoke(Object obj, Object obj2, Object obj3) {
        Unit invokeSuspend$lambda$0;
        Unit invokeSuspend$lambda$02;
        Unit invokeSuspend$lambda$3;
        switch (this.f4221d) {
            case 0:
                invokeSuspend$lambda$0 = MediaEngineModule$connectionInstancePrepareMLSCommitTransitionB64$1.invokeSuspend$lambda$0((Callback) this.f4222e, ((Boolean) obj).booleanValue(), ((Integer) obj2).intValue(), (String) obj3);
                return invokeSuspend$lambda$0;
            case 1:
                invokeSuspend$lambda$02 = MediaEngineModule$connectionInstanceProcessMLSWelcomeB64$1.invokeSuspend$lambda$0((Callback) this.f4222e, ((Boolean) obj).booleanValue(), ((Integer) obj2).intValue(), (String) obj3);
                return invokeSuspend$lambda$02;
            default:
                invokeSuspend$lambda$3 = MediaEngineModule$initializeEngine$1.invokeSuspend$lambda$3((MediaEngineModule) this.f4222e, (List) obj, (List) obj2, (List) obj3);
                return invokeSuspend$lambda$3;
        }
    }
}

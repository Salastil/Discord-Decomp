package com.discord.foreground_service.utils;

import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class Log$w$2 extends FunctionReferenceImpl implements Function3 {
    public Log$w$2(Object obj) {
        super(3, obj, com.discord.logging.Log.class, "w", "w(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function3
    public /* bridge */ /* synthetic */ Object invoke(Object obj, Object obj2, Object obj3) {
        invoke((String) obj, (String) obj2, (Throwable) obj3);
        return Unit.a;
    }

    public final void invoke(String p02, String p12, Throwable th2) {
        Intrinsics.checkNotNullParameter(p02, "p0");
        Intrinsics.checkNotNullParameter(p12, "p1");
        ((com.discord.logging.Log) this.receiver).w(p02, p12, th2);
    }
}

package com.discord.security_key;

import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function3;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

@Metadata(k = 3, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class SecurityKeyManagerModule$webauthn$2 extends FunctionReferenceImpl implements Function3 {
    public SecurityKeyManagerModule$webauthn$2(Object obj) {
        super(3, obj, SecurityKeyManagerModule.class, "reject", "reject(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)V", 0);
    }

    @Override // kotlin.jvm.functions.Function3
    public /* bridge */ /* synthetic */ Object invoke(Object obj, Object obj2, Object obj3) {
        invoke((String) obj, (String) obj2, (Throwable) obj3);
        return Unit.a;
    }

    public final void invoke(String p02, String str, Throwable th2) {
        Intrinsics.checkNotNullParameter(p02, "p0");
        ((SecurityKeyManagerModule) this.receiver).reject(p02, str, th2);
    }
}

package com.appsflyer.internal;

import fo.q;
import fo.r;
import java.lang.reflect.Field;
import kotlin.Result;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

/* loaded from: classes.dex */
public final class AFj1gSDK implements AFj1jSDK {
    @Override // com.appsflyer.internal.AFj1jSDK
    @NotNull
    public final String getRevenue() {
        Object i5;
        try {
            q qVar = Result.f13476e;
            Field declaredField = z4.a.class.getDeclaredField("a");
            declaredField.setAccessible(true);
            Object obj = declaredField.get(null);
            Intrinsics.checkNotNull(obj, "");
            i5 = (String) obj;
        } catch (Throwable th2) {
            q qVar2 = Result.f13476e;
            i5 = ki.b.i(th2);
        }
        return (String) (i5 instanceof r ? "" : i5);
    }
}

package dp;

import java.lang.reflect.Member;
import java.lang.reflect.Type;
import java.util.List;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a0 implements g {
    public static final a0 a = new a0();

    @Override // dp.g
    public final List a() {
        return m0.f13512d;
    }

    @Override // dp.g
    public final /* bridge */ /* synthetic */ Member b() {
        return null;
    }

    @Override // dp.g
    public final boolean c() {
        return false;
    }

    @Override // dp.g
    public final Object call(Object[] args) {
        Intrinsics.checkNotNullParameter(args, "args");
        throw new UnsupportedOperationException("call/callBy are not supported for this declaration.");
    }

    @Override // dp.g
    public final Type getReturnType() {
        Class TYPE = Void.TYPE;
        Intrinsics.checkNotNullExpressionValue(TYPE, "TYPE");
        return TYPE;
    }
}

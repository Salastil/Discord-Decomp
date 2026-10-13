package dp;

import java.lang.reflect.Member;
import java.lang.reflect.Method;
import java.lang.reflect.Type;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public abstract class z implements g {
    public final Method a;

    /* renamed from: b, reason: collision with root package name */
    public final List f7676b;

    /* renamed from: c, reason: collision with root package name */
    public final Class f7677c;

    public z(Method method, List list) {
        this.a = method;
        this.f7676b = list;
        Class<?> returnType = method.getReturnType();
        Intrinsics.checkNotNullExpressionValue(returnType, "getReturnType(...)");
        this.f7677c = returnType;
    }

    @Override // dp.g
    public final List a() {
        return this.f7676b;
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
    public final Type getReturnType() {
        return this.f7677c;
    }
}

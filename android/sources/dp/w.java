package dp;

import java.lang.reflect.Member;
import java.lang.reflect.Type;
import java.util.List;
import kotlin.jvm.internal.SpreadBuilder;

/* loaded from: classes3.dex */
public abstract class w implements g {
    public final Member a;

    /* renamed from: b, reason: collision with root package name */
    public final Type f7672b;

    /* renamed from: c, reason: collision with root package name */
    public final Class f7673c;

    /* renamed from: d, reason: collision with root package name */
    public final List f7674d;

    /* JADX WARN: Code restructure failed: missing block: B:4:0x0025, code lost:
    
        if (r1 == null) goto L6;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public w(Member member, Type type, Class cls, Type[] typeArr) {
        List H;
        this.a = member;
        this.f7672b = type;
        this.f7673c = cls;
        if (cls != null) {
            SpreadBuilder spreadBuilder = new SpreadBuilder(2);
            spreadBuilder.add(cls);
            spreadBuilder.addSpread(typeArr);
            H = kotlin.collections.c0.g(spreadBuilder.toArray(new Type[spreadBuilder.size()]));
        }
        H = kotlin.collections.x.H(typeArr);
        this.f7674d = H;
    }

    @Override // dp.g
    public final List a() {
        return this.f7674d;
    }

    @Override // dp.g
    public final Member b() {
        return this.a;
    }

    @Override // dp.g
    public final boolean c() {
        return false;
    }

    public void d(Object[] objArr) {
        m3.n.t(this, objArr);
    }

    public final void e(Object obj) {
        if (obj == null || !this.a.getDeclaringClass().isInstance(obj)) {
            throw new IllegalArgumentException("An object member requires the object instance passed as the first argument.");
        }
    }

    @Override // dp.g
    public final Type getReturnType() {
        return this.f7672b;
    }
}

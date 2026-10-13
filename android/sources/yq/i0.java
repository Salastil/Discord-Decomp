package yq;

import java.util.ArrayList;
import java.util.Map;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class i0 extends q0 {

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ int f21042c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ Object f21043d;

    public /* synthetic */ i0(int i5, Object obj) {
        this.f21042c = i5;
        this.f21043d = obj;
    }

    @Override // yq.u0
    public boolean a() {
        switch (this.f21042c) {
            case 1:
                return false;
            default:
                return super.a();
        }
    }

    @Override // yq.u0
    public boolean f() {
        switch (this.f21042c) {
            case 1:
                return ((Map) this.f21043d).isEmpty();
            default:
                return super.f();
        }
    }

    @Override // yq.q0
    public final s0 h(p0 key) {
        switch (this.f21042c) {
            case 0:
                Intrinsics.checkNotNullParameter(key, "key");
                if (!((ArrayList) this.f21043d).contains(key)) {
                    return null;
                }
                ip.i a = key.a();
                Intrinsics.checkNotNull(a, "null cannot be cast to non-null type org.jetbrains.kotlin.descriptors.TypeParameterDescriptor");
                return z0.j((ip.s0) a);
            default:
                Intrinsics.checkNotNullParameter(key, "key");
                return (s0) ((Map) this.f21043d).get(key);
        }
    }
}

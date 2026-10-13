package lq;

import ip.i;
import jp.h;
import kotlin.jvm.internal.Intrinsics;
import yq.c1;
import yq.s0;
import yq.u0;
import yq.y;

/* loaded from: classes3.dex */
public final class d extends u0 {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ int f14208b;

    /* renamed from: c, reason: collision with root package name */
    public final u0 f14209c;

    public d(u0 substitution, int i5) {
        this.f14208b = i5;
        switch (i5) {
            case 1:
                this.f14209c = substitution;
                break;
            default:
                Intrinsics.checkNotNullParameter(substitution, "substitution");
                this.f14209c = substitution;
                break;
        }
    }

    @Override // yq.u0
    public boolean a() {
        switch (this.f14208b) {
            case 0:
                return this.f14209c.a();
            default:
                return super.a();
        }
    }

    @Override // yq.u0
    public boolean b() {
        switch (this.f14208b) {
            case 0:
                return true;
            default:
                return super.b();
        }
    }

    @Override // yq.u0
    public final h d(h annotations) {
        switch (this.f14208b) {
            case 0:
                Intrinsics.checkNotNullParameter(annotations, "annotations");
                break;
            default:
                Intrinsics.checkNotNullParameter(annotations, "annotations");
                break;
        }
        return this.f14209c.d(annotations);
    }

    @Override // yq.u0
    public final s0 e(y key) {
        switch (this.f14208b) {
            case 0:
                Intrinsics.checkNotNullParameter(key, "key");
                Intrinsics.checkNotNullParameter(key, "key");
                s0 e9 = this.f14209c.e(key);
                if (e9 == null) {
                    return null;
                }
                i a = key.r0().a();
                return nt.a.h(e9, a instanceof ip.s0 ? (ip.s0) a : null);
            default:
                Intrinsics.checkNotNullParameter(key, "key");
                return this.f14209c.e(key);
        }
    }

    @Override // yq.u0
    public final boolean f() {
        switch (this.f14208b) {
        }
        return this.f14209c.f();
    }

    @Override // yq.u0
    public final y g(y topLevelType, c1 position) {
        switch (this.f14208b) {
            case 0:
                Intrinsics.checkNotNullParameter(topLevelType, "topLevelType");
                Intrinsics.checkNotNullParameter(position, "position");
                break;
            default:
                Intrinsics.checkNotNullParameter(topLevelType, "topLevelType");
                Intrinsics.checkNotNullParameter(position, "position");
                break;
        }
        return this.f14209c.g(topLevelType, position);
    }
}

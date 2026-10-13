package yq;

import java.util.ArrayDeque;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public class o0 {
    public final boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f21056b;

    /* renamed from: c, reason: collision with root package name */
    public final zq.b f21057c;

    /* renamed from: d, reason: collision with root package name */
    public final zq.e f21058d;

    /* renamed from: e, reason: collision with root package name */
    public final zq.f f21059e;

    /* renamed from: f, reason: collision with root package name */
    public int f21060f;

    /* renamed from: g, reason: collision with root package name */
    public ArrayDeque f21061g;

    /* renamed from: h, reason: collision with root package name */
    public ir.k f21062h;

    public o0(boolean z5, boolean z6, zq.b typeSystemContext, zq.e kotlinTypePreparator, zq.f kotlinTypeRefiner) {
        Intrinsics.checkNotNullParameter(typeSystemContext, "typeSystemContext");
        Intrinsics.checkNotNullParameter(kotlinTypePreparator, "kotlinTypePreparator");
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        this.a = z5;
        this.f21056b = z6;
        this.f21057c = typeSystemContext;
        this.f21058d = kotlinTypePreparator;
        this.f21059e = kotlinTypeRefiner;
    }

    public final void a() {
        ArrayDeque arrayDeque = this.f21061g;
        Intrinsics.checkNotNull(arrayDeque);
        arrayDeque.clear();
        ir.k kVar = this.f21062h;
        Intrinsics.checkNotNull(kVar);
        kVar.clear();
    }

    public boolean b(cr.d subType, cr.d superType) {
        Intrinsics.checkNotNullParameter(subType, "subType");
        Intrinsics.checkNotNullParameter(superType, "superType");
        return true;
    }

    public final void c() {
        if (this.f21061g == null) {
            this.f21061g = new ArrayDeque(4);
        }
        if (this.f21062h == null) {
            int i5 = ir.k.f12269i;
            this.f21062h = ir.n.f();
        }
    }

    public final b1 d(cr.d type) {
        Intrinsics.checkNotNullParameter(type, "type");
        return this.f21058d.a(type);
    }

    public final y e(cr.d type) {
        Intrinsics.checkNotNullParameter(type, "type");
        return this.f21059e.a(type);
    }
}

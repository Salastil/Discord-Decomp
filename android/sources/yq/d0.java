package yq;

import java.util.List;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class d0 extends c0 {

    /* renamed from: e, reason: collision with root package name */
    public final p0 f21023e;

    /* renamed from: i, reason: collision with root package name */
    public final List f21024i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f21025v;

    /* renamed from: w, reason: collision with root package name */
    public final rq.o f21026w;

    /* renamed from: x, reason: collision with root package name */
    public final Function1 f21027x;

    public d0(p0 constructor, List arguments, boolean z5, rq.o memberScope, Function1 refinedTypeFactory) {
        Intrinsics.checkNotNullParameter(constructor, "constructor");
        Intrinsics.checkNotNullParameter(arguments, "arguments");
        Intrinsics.checkNotNullParameter(memberScope, "memberScope");
        Intrinsics.checkNotNullParameter(refinedTypeFactory, "refinedTypeFactory");
        this.f21023e = constructor;
        this.f21024i = arguments;
        this.f21025v = z5;
        this.f21026w = memberScope;
        this.f21027x = refinedTypeFactory;
        if (!(memberScope instanceof ar.g) || (memberScope instanceof ar.m)) {
            return;
        }
        throw new IllegalStateException("SimpleTypeImpl should not be created for error type: " + memberScope + '\n' + constructor);
    }

    @Override // yq.c0
    /* renamed from: A0 */
    public final c0 x0(boolean z5) {
        if (z5 == this.f21025v) {
            return this;
        }
        if (z5) {
            Intrinsics.checkNotNullParameter(this, "delegate");
            return new b0(this, 1);
        }
        Intrinsics.checkNotNullParameter(this, "delegate");
        return new b0(this, 0);
    }

    @Override // yq.c0
    /* renamed from: B0 */
    public final c0 z0(k0 newAttributes) {
        Intrinsics.checkNotNullParameter(newAttributes, "newAttributes");
        return newAttributes.isEmpty() ? this : new e0(this, newAttributes);
    }

    @Override // yq.y
    public final rq.o N() {
        return this.f21026w;
    }

    @Override // yq.y
    public final List l0() {
        return this.f21024i;
    }

    @Override // yq.y
    public final k0 q0() {
        k0.f21045e.getClass();
        return k0.f21046i;
    }

    @Override // yq.y
    public final p0 r0() {
        return this.f21023e;
    }

    @Override // yq.y
    public final boolean t0() {
        return this.f21025v;
    }

    @Override // yq.y
    /* renamed from: v0 */
    public final y y0(zq.f kotlinTypeRefiner) {
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        c0 c0Var = (c0) this.f21027x.invoke(kotlinTypeRefiner);
        return c0Var == null ? this : c0Var;
    }

    @Override // yq.b1
    public final b1 y0(zq.f kotlinTypeRefiner) {
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        c0 c0Var = (c0) this.f21027x.invoke(kotlinTypeRefiner);
        return c0Var == null ? this : c0Var;
    }
}

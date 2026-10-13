package fr;

import java.util.Iterator;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class q extends a {

    /* renamed from: d, reason: collision with root package name */
    public final yq.j f9032d;

    /* renamed from: e, reason: collision with root package name */
    public final int f9033e;

    public q(int i5, yq.j value) {
        Intrinsics.checkNotNullParameter(value, "value");
        this.f9032d = value;
        this.f9033e = i5;
    }

    @Override // fr.a
    public final int a() {
        return 1;
    }

    @Override // fr.a
    public final void b(int i5, yq.j value) {
        Intrinsics.checkNotNullParameter(value, "value");
        throw new IllegalStateException();
    }

    @Override // fr.a
    public final Object get(int i5) {
        if (i5 == this.f9033e) {
            return this.f9032d;
        }
        return null;
    }

    @Override // fr.a, java.lang.Iterable
    public final Iterator iterator() {
        return new p(this);
    }
}

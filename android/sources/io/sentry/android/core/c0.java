package io.sentry.android.core;

import java.util.concurrent.CopyOnWriteArrayList;

/* loaded from: classes3.dex */
public final class c0 extends CopyOnWriteArrayList {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ d0 f11105d;

    public c0(d0 d0Var) {
        this.f11105d = d0Var;
    }

    @Override // java.util.concurrent.CopyOnWriteArrayList, java.util.List, java.util.Collection
    public final boolean add(Object obj) {
        b0 b0Var = (b0) obj;
        boolean add = super.add(b0Var);
        if (Boolean.FALSE.equals(this.f11105d.f11115e.f11123v)) {
            b0Var.c();
            return add;
        }
        if (Boolean.TRUE.equals(this.f11105d.f11115e.f11123v)) {
            b0Var.f();
        }
        return add;
    }
}

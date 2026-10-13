package com.google.android.gms.internal.play_billing;

import java.util.AbstractMap;
import java.util.Objects;

/* loaded from: classes3.dex */
public final class y extends t {

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ z f5891i;

    public y(z zVar) {
        this.f5891i = zVar;
    }

    @Override // java.util.List
    public final /* bridge */ /* synthetic */ Object get(int i5) {
        z zVar = this.f5891i;
        a2.h(i5, zVar.f5894x);
        Object[] objArr = zVar.f5893w;
        int i6 = i5 + i5;
        Object obj = objArr[i6];
        Objects.requireNonNull(obj);
        Object obj2 = objArr[i6 + 1];
        Objects.requireNonNull(obj2);
        return new AbstractMap.SimpleImmutableEntry(obj, obj2);
    }

    @Override // com.google.android.gms.internal.play_billing.p
    public final boolean h() {
        return true;
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f5891i.f5894x;
    }
}

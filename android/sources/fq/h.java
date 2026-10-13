package fq;

import iq.o;

/* loaded from: classes3.dex */
public enum h implements o {
    NONE(0),
    INTERNAL_TO_CLASS_ID(1),
    DESC_TO_CLASS_ID(2);


    /* renamed from: d, reason: collision with root package name */
    public final int f8979d;

    h(int i5) {
        this.f8979d = i5;
    }

    @Override // iq.o
    public final int a() {
        return this.f8979d;
    }
}

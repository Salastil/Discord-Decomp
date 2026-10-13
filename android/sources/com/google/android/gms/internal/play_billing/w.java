package com.google.android.gms.internal.play_billing;

import java.util.NoSuchElementException;

/* loaded from: classes3.dex */
public final class w extends f0 {

    /* renamed from: d, reason: collision with root package name */
    public final Object f5861d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f5862e;

    public w(Object obj) {
        this.f5861d = obj;
    }

    @Override // java.util.Iterator
    public final boolean hasNext() {
        return !this.f5862e;
    }

    @Override // java.util.Iterator
    public final Object next() {
        if (this.f5862e) {
            throw new NoSuchElementException();
        }
        this.f5862e = true;
        return this.f5861d;
    }
}

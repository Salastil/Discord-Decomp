package org.chromium.net;

/* loaded from: classes.dex */
public final class c {
    public CronetProvider a;

    /* renamed from: b, reason: collision with root package name */
    public lt.b f16187b;

    public final boolean equals(Object obj) {
        return (obj instanceof c) && this.a.equals(((c) obj).a);
    }

    public final int hashCode() {
        return this.a.hashCode();
    }
}

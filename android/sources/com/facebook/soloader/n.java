package com.facebook.soloader;

import java.util.zip.ZipEntry;

/* loaded from: classes3.dex */
public final class n extends g0 implements Comparable {

    /* renamed from: i, reason: collision with root package name */
    public final ZipEntry f5114i;

    /* renamed from: v, reason: collision with root package name */
    public final int f5115v;

    public n(String str, ZipEntry zipEntry, int i5) {
        super(str, String.valueOf(zipEntry.getCrc()));
        this.f5114i = zipEntry;
        this.f5115v = i5;
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        return this.f5099d.compareTo(((n) obj).f5099d);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && n.class == obj.getClass()) {
            n nVar = (n) obj;
            if (this.f5114i.equals(nVar.f5114i) && this.f5115v == nVar.f5115v) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return this.f5114i.hashCode() + (this.f5115v * 31);
    }
}

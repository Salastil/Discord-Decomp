package com.horcrux.svg;

import java.util.HashMap;

/* loaded from: classes3.dex */
public enum s {
    /* JADX INFO: Fake field, exist only in values array */
    MATRIX("matrix"),
    /* JADX INFO: Fake field, exist only in values array */
    SATURATE("saturate"),
    /* JADX INFO: Fake field, exist only in values array */
    HUE_ROTATE("hueRotate"),
    /* JADX INFO: Fake field, exist only in values array */
    LUMINANCE_TO_ALPHA("luminanceToAlpha");


    /* renamed from: e, reason: collision with root package name */
    public static final HashMap f6420e = new HashMap();

    /* renamed from: d, reason: collision with root package name */
    public final String f6422d;

    static {
        for (s sVar : values()) {
            f6420e.put(sVar.f6422d, sVar);
        }
    }

    s(String str) {
        this.f6422d = str;
    }

    @Override // java.lang.Enum
    public final String toString() {
        return this.f6422d;
    }
}

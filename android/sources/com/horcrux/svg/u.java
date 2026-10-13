package com.horcrux.svg;

import java.util.HashMap;

/* loaded from: classes3.dex */
public enum u {
    OBJECT_BOUNDING_BOX("objectBoundingBox"),
    USER_SPACE_ON_USE("userSpaceOnUse");


    /* renamed from: v, reason: collision with root package name */
    public static final HashMap f6429v = new HashMap();

    /* renamed from: d, reason: collision with root package name */
    public final String f6431d;

    static {
        for (u uVar : values()) {
            f6429v.put(uVar.f6431d, uVar);
        }
    }

    u(String str) {
        this.f6431d = str;
    }

    public static u a(String str) {
        HashMap hashMap = f6429v;
        if (hashMap.containsKey(str)) {
            return (u) hashMap.get(str);
        }
        throw new IllegalArgumentException(a3.e.k("Unknown 'Unit' Value: ", str));
    }

    @Override // java.lang.Enum
    public final String toString() {
        return this.f6431d;
    }
}

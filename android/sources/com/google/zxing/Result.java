package com.google.zxing;

import java.util.EnumMap;
import java.util.Map;
import jj.a;
import jj.k;
import jj.l;

/* loaded from: classes3.dex */
public final class Result {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final byte[] f6292b;

    /* renamed from: c, reason: collision with root package name */
    public l[] f6293c;

    /* renamed from: d, reason: collision with root package name */
    public final a f6294d;

    /* renamed from: e, reason: collision with root package name */
    public Map f6295e;

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public Result(String str, byte[] bArr, l[] lVarArr, a aVar) {
        this(str, bArr, lVarArr, aVar, 0);
        System.currentTimeMillis();
    }

    public final void a(Map map) {
        if (map != null) {
            Map map2 = this.f6295e;
            if (map2 == null) {
                this.f6295e = map;
            } else {
                map2.putAll(map);
            }
        }
    }

    public final void b(k kVar, Object obj) {
        if (this.f6295e == null) {
            this.f6295e = new EnumMap(k.class);
        }
        this.f6295e.put(kVar, obj);
    }

    public final String toString() {
        return this.a;
    }

    public Result(String str, byte[] bArr, l[] lVarArr, a aVar, int i5) {
        this.a = str;
        this.f6292b = bArr;
        this.f6293c = lVarArr;
        this.f6294d = aVar;
        this.f6295e = null;
    }
}

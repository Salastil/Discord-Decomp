package com.google.android.gms.internal.play_billing;

import java.util.Map;

/* loaded from: classes3.dex */
public final class b3 implements Map.Entry, Comparable {

    /* renamed from: d, reason: collision with root package name */
    public Object f5706d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ a3 f5707e;

    public b3(a3 a3Var, Object obj) {
        this.f5707e = a3Var;
        this.f5706d = obj;
    }

    @Override // java.lang.Comparable
    public final /* bridge */ /* synthetic */ int compareTo(Object obj) {
        ((b3) obj).getClass();
        throw null;
    }

    @Override // java.util.Map.Entry
    public final boolean equals(Object obj) {
        if (obj != this) {
            if (obj instanceof Map.Entry) {
                Map.Entry entry = (Map.Entry) obj;
                if (entry.getKey() != null) {
                    return false;
                }
                Object obj2 = this.f5706d;
                Object value = entry.getValue();
                if (obj2 == null ? value == null : obj2.equals(value)) {
                }
            }
            return false;
        }
        return true;
    }

    @Override // java.util.Map.Entry
    public final /* synthetic */ Object getKey() {
        return null;
    }

    @Override // java.util.Map.Entry
    public final Object getValue() {
        return this.f5706d;
    }

    @Override // java.util.Map.Entry
    public final int hashCode() {
        Object obj = this.f5706d;
        if (obj == null) {
            return 0;
        }
        return obj.hashCode();
    }

    @Override // java.util.Map.Entry
    public final Object setValue(Object obj) {
        this.f5707e.f();
        Object obj2 = this.f5706d;
        this.f5706d = obj;
        return obj2;
    }

    public final String toString() {
        return "null=".concat(String.valueOf(this.f5706d));
    }
}

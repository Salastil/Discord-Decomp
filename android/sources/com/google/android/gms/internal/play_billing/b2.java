package com.google.android.gms.internal.play_billing;

import java.util.Collections;
import java.util.Iterator;
import java.util.Map;

/* loaded from: classes3.dex */
public final class b2 {

    /* renamed from: c, reason: collision with root package name */
    public static final /* synthetic */ int f5704c = 0;
    public final a3 a = new a3();

    /* renamed from: b, reason: collision with root package name */
    public boolean f5705b;

    static {
        new b2(0);
    }

    public b2() {
    }

    public static void b(w1 w1Var, r3 r3Var, int i5, Object obj) {
        if (r3Var == r3.f5819v) {
            w1Var.N(i5, 3);
            ((p1) obj).a(w1Var);
            w1Var.N(i5, 4);
            return;
        }
        w1Var.N(i5, r3Var.f5823e);
        s3 s3Var = s3.f5827d;
        switch (r3Var.ordinal()) {
            case 0:
                w1Var.J(Double.doubleToRawLongBits(((Double) obj).doubleValue()));
                break;
            case 1:
                w1Var.H(Float.floatToRawIntBits(((Float) obj).floatValue()));
                break;
            case 2:
                w1Var.R(((Long) obj).longValue());
                break;
            case 3:
                w1Var.R(((Long) obj).longValue());
                break;
            case 4:
                w1Var.L(((Integer) obj).intValue());
                break;
            case 5:
                w1Var.J(((Long) obj).longValue());
                break;
            case 6:
                w1Var.H(((Integer) obj).intValue());
                break;
            case 7:
                w1Var.E(((Boolean) obj).booleanValue() ? (byte) 1 : (byte) 0);
                break;
            case 8:
                if (!(obj instanceof u1)) {
                    w1Var.M((String) obj);
                    break;
                } else {
                    u1 u1Var = (u1) obj;
                    w1Var.P(u1Var.d());
                    u1Var.i(w1Var);
                    break;
                }
            case 9:
                ((p1) obj).a(w1Var);
                break;
            case 10:
                p1 p1Var = (p1) obj;
                w1Var.P(p1Var.d());
                p1Var.a(w1Var);
                break;
            case 11:
                if (!(obj instanceof u1)) {
                    byte[] bArr = (byte[]) obj;
                    int length = bArr.length;
                    w1Var.P(length);
                    w1Var.F(bArr, 0, length);
                    break;
                } else {
                    u1 u1Var2 = (u1) obj;
                    w1Var.P(u1Var2.d());
                    u1Var2.i(w1Var);
                    break;
                }
            case 12:
                w1Var.P(((Integer) obj).intValue());
                break;
            case 13:
                if (!(obj instanceof a4)) {
                    w1Var.L(((Integer) obj).intValue());
                    break;
                } else {
                    w1Var.L(((a4) obj).f5700d);
                    break;
                }
            case 14:
                w1Var.H(((Integer) obj).intValue());
                break;
            case 15:
                w1Var.J(((Long) obj).longValue());
                break;
            case 16:
                int intValue = ((Integer) obj).intValue();
                w1Var.P((intValue >> 31) ^ (intValue + intValue));
                break;
            case 17:
                long longValue = ((Long) obj).longValue();
                w1Var.R((longValue >> 63) ^ (longValue + longValue));
                break;
        }
    }

    public final void a() {
        if (this.f5705b) {
            return;
        }
        a3 a3Var = this.a;
        int i5 = a3Var.f5689e;
        for (int i6 = 0; i6 < i5; i6++) {
            Object obj = a3Var.c(i6).f5706d;
            if (obj instanceof e2) {
                ((e2) obj).q();
            }
        }
        Iterator it = a3Var.a().iterator();
        while (it.hasNext()) {
            Object value = ((Map.Entry) it.next()).getValue();
            if (value instanceof e2) {
                ((e2) value).q();
            }
        }
        if (!a3Var.f5691v) {
            if (a3Var.f5689e > 0) {
                a3Var.c(0).getClass();
                throw null;
            }
            Iterator it2 = a3Var.a().iterator();
            if (it2.hasNext()) {
                ((Map.Entry) it2.next()).getKey().getClass();
                throw new ClassCastException();
            }
        }
        if (!a3Var.f5691v) {
            a3Var.f5690i = a3Var.f5690i.isEmpty() ? Collections.EMPTY_MAP : Collections.unmodifiableMap(a3Var.f5690i);
            a3Var.f5693x = a3Var.f5693x.isEmpty() ? Collections.EMPTY_MAP : Collections.unmodifiableMap(a3Var.f5693x);
            a3Var.f5691v = true;
        }
        this.f5705b = true;
    }

    public final Object clone() {
        b2 b2Var = new b2();
        a3 a3Var = this.a;
        if (a3Var.f5689e > 0) {
            a3Var.c(0).getClass();
            throw null;
        }
        Iterator it = a3Var.a().iterator();
        if (!it.hasNext()) {
            return b2Var;
        }
        Map.Entry entry = (Map.Entry) it.next();
        if (entry.getKey() != null) {
            throw new ClassCastException();
        }
        entry.getValue();
        throw null;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof b2)) {
            return false;
        }
        a3 a3Var = ((b2) obj).a;
        a3 a3Var2 = this.a;
        if (a3Var2.size() != a3Var.size() || !a3Var2.keySet().equals(a3Var.keySet())) {
            return false;
        }
        Iterator it = ((androidx.datastore.preferences.protobuf.d1) a3Var2.entrySet()).iterator();
        while (it.hasNext()) {
            Map.Entry entry = (Map.Entry) it.next();
            Object key = entry.getKey();
            Object value = entry.getValue();
            Object obj2 = a3Var.get(key);
            if (!(value == obj2 ? true : (value == null || obj2 == null) ? false : value instanceof k2 ? value.equals(obj2) : obj2 instanceof k2 ? obj2.equals(value) : value.equals(obj2))) {
                return false;
            }
        }
        return true;
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public b2(int i5) {
        a();
        a();
    }
}

package qc;

import java.util.Arrays;

/* loaded from: classes3.dex */
public final class u {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final byte[] f16800b;

    /* renamed from: c, reason: collision with root package name */
    public final int f16801c;

    /* renamed from: d, reason: collision with root package name */
    public final int f16802d;

    public u(int i5, int i6, int i10, byte[] bArr) {
        this.a = i5;
        this.f16800b = bArr;
        this.f16801c = i6;
        this.f16802d = i10;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && u.class == obj.getClass()) {
            u uVar = (u) obj;
            if (this.a == uVar.a && this.f16801c == uVar.f16801c && this.f16802d == uVar.f16802d && Arrays.equals(this.f16800b, uVar.f16800b)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return ((((Arrays.hashCode(this.f16800b) + (this.a * 31)) * 31) + this.f16801c) * 31) + this.f16802d;
    }
}

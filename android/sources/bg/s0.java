package bg;

import java.util.Comparator;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class s0 implements Comparator {

    /* renamed from: d, reason: collision with root package name */
    public static final s0 f2991d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ s0[] f2992e;

    static {
        s0 s0Var = new s0("INSTANCE", 0);
        f2991d = s0Var;
        f2992e = new s0[]{s0Var};
    }

    public static s0[] values() {
        return (s0[]) f2992e.clone();
    }

    @Override // java.util.Comparator
    public final /* bridge */ /* synthetic */ int compare(Object obj, Object obj2) {
        byte[] bArr = (byte[]) obj;
        byte[] bArr2 = (byte[]) obj2;
        int min = Math.min(bArr.length, bArr2.length);
        for (int i5 = 0; i5 < min; i5++) {
            int i6 = (bArr[i5] & 255) - (bArr2[i5] & 255);
            if (i6 != 0) {
                return i6;
            }
        }
        return bArr.length - bArr2.length;
    }

    @Override // java.lang.Enum
    public final String toString() {
        return "UnsignedBytes.lexicographicalComparator() (pure Java version)";
    }
}

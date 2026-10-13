package androidx.datastore.preferences.protobuf;

/* loaded from: classes.dex */
public final class f1 {
    public static boolean a(Object obj, h hVar) {
        int b10 = hVar.b();
        int i5 = b10 >>> 3;
        int i6 = b10 & 7;
        if (i6 == 0) {
            ((e1) obj).c(i5 << 3, Long.valueOf(hVar.B()));
            return true;
        }
        if (i6 == 1) {
            ((e1) obj).c((i5 << 3) | 1, Long.valueOf(hVar.s()));
            return true;
        }
        if (i6 == 2) {
            ((e1) obj).c((i5 << 3) | 2, hVar.h());
            return true;
        }
        if (i6 != 3) {
            if (i6 == 4) {
                return false;
            }
            if (i6 != 5) {
                throw x.b();
            }
            ((e1) obj).c((i5 << 3) | 5, Integer.valueOf(hVar.q()));
            return true;
        }
        e1 b11 = e1.b();
        int i10 = i5 << 3;
        int i11 = i10 | 4;
        while (hVar.a() != Integer.MAX_VALUE && a(b11, hVar)) {
        }
        if (i11 != hVar.b()) {
            throw new x("Protocol message end-group tag did not match expected tag.");
        }
        b11.f1740e = false;
        ((e1) obj).c(i10 | 3, b11);
        return true;
    }
}

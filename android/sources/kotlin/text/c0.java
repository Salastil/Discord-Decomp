package kotlin.text;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import fo.e0;
import fo.f0;
import fo.j0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;

/* loaded from: classes3.dex */
public abstract class c0 {
    public static final boolean a(String str) {
        for (int i5 = 0; i5 < str.length(); i5++) {
            char charAt = str.charAt(i5);
            if (Intrinsics.compare((int) charAt, IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) >= 0 || Character.isLetter(charAt)) {
                return true;
            }
        }
        return false;
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x002e  */
    /* JADX WARN: Removed duplicated region for block: B:7:0x002b  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final byte b(String str) {
        fo.y yVar;
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(str, "<this>");
        fo.c0 d6 = d(str);
        if (d6 != null) {
            int i5 = d6.f8810d;
            if (Integer.compare(Integer.MIN_VALUE ^ i5, -2147483393) <= 0) {
                yVar = new fo.y((byte) i5);
                if (yVar == null) {
                    return yVar.f8844d;
                }
                StringsKt__StringNumberConversionsKt.e(str);
                throw null;
            }
        }
        yVar = null;
        if (yVar == null) {
        }
    }

    public static final int c(String str) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(str, "<this>");
        fo.c0 d6 = d(str);
        if (d6 != null) {
            return d6.f8810d;
        }
        StringsKt__StringNumberConversionsKt.e(str);
        throw null;
    }

    public static final fo.c0 d(String str) {
        int i5;
        Intrinsics.checkNotNullParameter(str, "<this>");
        CharsKt__CharJVMKt.checkRadix(10);
        int length = str.length();
        if (length == 0) {
            return null;
        }
        int i6 = 0;
        char charAt = str.charAt(0);
        if (Intrinsics.compare((int) charAt, 48) < 0) {
            i5 = 1;
            if (length == 1 || charAt != '+') {
                return null;
            }
        } else {
            i5 = 0;
        }
        fo.b0 b0Var = fo.c0.f8809e;
        int i10 = 119304647;
        while (i5 < length) {
            int digit = Character.digit((int) str.charAt(i5), 10);
            if (digit < 0) {
                return null;
            }
            int i11 = i6 ^ Integer.MIN_VALUE;
            if (Integer.compare(i11, i10 ^ Integer.MIN_VALUE) > 0) {
                if (i10 != 119304647) {
                    return null;
                }
                i10 = (int) (((-1) & 4294967295L) / (4294967295L & 10));
                if (Integer.compare(i11, i10 ^ Integer.MIN_VALUE) > 0) {
                    return null;
                }
            }
            int i12 = i6 * 10;
            int i13 = digit + i12;
            if (Integer.compare(i13 ^ Integer.MIN_VALUE, i12 ^ Integer.MIN_VALUE) < 0) {
                return null;
            }
            i5++;
            i6 = i13;
        }
        return new fo.c0(i6);
    }

    public static final long e(String str) {
        Intrinsics.checkNotNullParameter(str, "<this>");
        f0 f2 = f(str);
        if (f2 != null) {
            return f2.f8815d;
        }
        StringsKt__StringNumberConversionsKt.e(str);
        throw null;
    }

    public static final f0 f(String str) {
        int i5;
        long j;
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(str, "<this>");
        int i6 = 10;
        CharsKt__CharJVMKt.checkRadix(10);
        int length = str.length();
        if (length == 0) {
            return null;
        }
        char charAt = str.charAt(0);
        int i10 = 1;
        if (Intrinsics.compare((int) charAt, 48) >= 0) {
            i5 = 0;
        } else {
            if (length == 1 || charAt != '+') {
                return null;
            }
            i5 = 1;
        }
        long j5 = 10;
        e0 e0Var = f0.f8814e;
        long j7 = 0;
        long j10 = 512409557603043100L;
        while (i5 < length) {
            int digit = Character.digit((int) str.charAt(i5), i6);
            if (digit < 0) {
                return null;
            }
            int i11 = length;
            long j11 = j7 ^ Long.MIN_VALUE;
            int i12 = i5;
            if (Long.compare(j11, j10 ^ Long.MIN_VALUE) <= 0) {
                j = j5;
            } else {
                if (j10 != 512409557603043100L) {
                    return null;
                }
                if (j5 >= 0) {
                    long j12 = (LongCompanionObject.MAX_VALUE / j5) << i10;
                    j = j5;
                    j10 = j12 + ((((-1) - (j12 * j5)) ^ Long.MIN_VALUE) >= (j5 ^ Long.MIN_VALUE) ? i10 : 0);
                } else if (LongCompanionObject.MAX_VALUE < (j5 ^ Long.MIN_VALUE)) {
                    j = j5;
                    j10 = 0;
                } else {
                    j10 = 1;
                    j = j5;
                }
                if (Long.compare(j11, j10 ^ Long.MIN_VALUE) > 0) {
                    return null;
                }
            }
            long j13 = j7 * j;
            fo.b0 b0Var = fo.c0.f8809e;
            long j14 = (digit & 4294967295L) + j13;
            if (Long.compare(j14 ^ Long.MIN_VALUE, j13 ^ Long.MIN_VALUE) < 0) {
                return null;
            }
            i5 = i12 + 1;
            j7 = j14;
            length = i11;
            j5 = j;
            i6 = 10;
            i10 = 1;
        }
        return new f0(j7);
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x002e  */
    /* JADX WARN: Removed duplicated region for block: B:7:0x002b  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static final short g(String str) {
        j0 j0Var;
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(str, "<this>");
        Intrinsics.checkNotNullParameter(str, "<this>");
        fo.c0 d6 = d(str);
        if (d6 != null) {
            int i5 = d6.f8810d;
            if (Integer.compare(Integer.MIN_VALUE ^ i5, -2147418113) <= 0) {
                j0Var = new j0((short) i5);
                if (j0Var == null) {
                    return j0Var.f8818d;
                }
                StringsKt__StringNumberConversionsKt.e(str);
                throw null;
            }
        }
        j0Var = null;
        if (j0Var == null) {
        }
    }
}

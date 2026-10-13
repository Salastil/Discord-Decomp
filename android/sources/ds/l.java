package ds;

import a5.h0;
import fo.i0;
import fo.j0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class l extends h0 {

    /* renamed from: v, reason: collision with root package name */
    public final boolean f7737v;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public l(a5.a0 writer, boolean z5) {
        super(writer);
        Intrinsics.checkNotNullParameter(writer, "writer");
        this.f7737v = z5;
    }

    @Override // a5.h0
    public final void r(byte b10) {
        if (this.f7737v) {
            fo.x xVar = fo.y.f8843e;
            x(String.valueOf(b10 & 255));
        } else {
            fo.x xVar2 = fo.y.f8843e;
            v(String.valueOf(b10 & 255));
        }
    }

    @Override // a5.h0
    public final void t(int i5) {
        if (this.f7737v) {
            fo.b0 b0Var = fo.c0.f8809e;
            x(Long.toString(i5 & 4294967295L, 10));
        } else {
            fo.b0 b0Var2 = fo.c0.f8809e;
            v(Long.toString(i5 & 4294967295L, 10));
        }
    }

    @Override // a5.h0
    public final void u(long j) {
        int i5 = 63;
        String str = "0";
        if (this.f7737v) {
            fo.e0 e0Var = fo.f0.f8814e;
            if (j != 0) {
                if (j > 0) {
                    str = Long.toString(j, 10);
                } else {
                    char[] cArr = new char[64];
                    long j5 = (j >>> 1) / 5;
                    long j7 = 10;
                    cArr[63] = Character.forDigit((int) (j - (j5 * j7)), 10);
                    while (j5 > 0) {
                        i5--;
                        cArr[i5] = Character.forDigit((int) (j5 % j7), 10);
                        j5 /= j7;
                    }
                    str = new String(cArr, i5, 64 - i5);
                }
            }
            x(str);
            return;
        }
        fo.e0 e0Var2 = fo.f0.f8814e;
        if (j != 0) {
            if (j > 0) {
                str = Long.toString(j, 10);
            } else {
                char[] cArr2 = new char[64];
                long j10 = (j >>> 1) / 5;
                long j11 = 10;
                cArr2[63] = Character.forDigit((int) (j - (j10 * j11)), 10);
                while (j10 > 0) {
                    i5--;
                    cArr2[i5] = Character.forDigit((int) (j10 % j11), 10);
                    j10 /= j11;
                }
                str = new String(cArr2, i5, 64 - i5);
            }
        }
        v(str);
    }

    @Override // a5.h0
    public final void w(short s2) {
        if (this.f7737v) {
            i0 i0Var = j0.f8817e;
            x(String.valueOf(s2 & 65535));
        } else {
            i0 i0Var2 = j0.f8817e;
            v(String.valueOf(s2 & 65535));
        }
    }
}

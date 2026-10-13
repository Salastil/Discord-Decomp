package zc;

import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.metadata.Metadata;
import fi.e0;
import hc.f0;
import java.util.ArrayList;
import java.util.Arrays;
import ke.w;

/* loaded from: classes3.dex */
public final class g extends h {

    /* renamed from: o, reason: collision with root package name */
    public static final byte[] f21167o = {79, 112, 117, 115, 72, 101, 97, 100};

    /* renamed from: p, reason: collision with root package name */
    public static final byte[] f21168p = {79, 112, 117, 115, 84, 97, 103, 115};

    /* renamed from: n, reason: collision with root package name */
    public boolean f21169n;

    public static boolean e(w wVar, byte[] bArr) {
        if (wVar.a() < bArr.length) {
            return false;
        }
        int i5 = wVar.f13363b;
        byte[] bArr2 = new byte[bArr.length];
        wVar.e(bArr2, 0, bArr.length);
        wVar.F(i5);
        return Arrays.equals(bArr2, bArr);
    }

    @Override // zc.h
    public final long b(w wVar) {
        byte[] bArr = wVar.a;
        return (this.f21177i * jc.a.f(bArr[0], bArr.length > 1 ? bArr[1] : (byte) 0)) / 1000000;
    }

    @Override // zc.h
    public final boolean c(w wVar, long j, e4.c cVar) {
        if (e(wVar, f21167o)) {
            byte[] copyOf = Arrays.copyOf(wVar.a, wVar.f13364c);
            int i5 = copyOf[9] & 255;
            ArrayList b10 = jc.a.b(copyOf);
            if (((Format) cVar.f7939e) == null) {
                f0 f0Var = new f0();
                f0Var.k = "audio/opus";
                f0Var.f9690x = i5;
                f0Var.f9691y = 48000;
                f0Var.f9679m = b10;
                cVar.f7939e = new Format(f0Var);
                return true;
            }
        } else {
            if (!e(wVar, f21168p)) {
                ke.b.l((Format) cVar.f7939e);
                return false;
            }
            ke.b.l((Format) cVar.f7939e);
            if (!this.f21169n) {
                this.f21169n = true;
                wVar.G(8);
                Metadata y5 = zk.a.y(e0.m((String[]) zk.a.z(wVar, false, false).f19405d));
                if (y5 != null) {
                    f0 a = ((Format) cVar.f7939e).a();
                    Metadata metadata = ((Format) cVar.f7939e).G;
                    if (metadata != null) {
                        y5 = y5.a(metadata.f5427d);
                    }
                    a.f9677i = y5;
                    cVar.f7939e = new Format(a);
                    return true;
                }
            }
        }
        return true;
    }

    @Override // zc.h
    public final void d(boolean z5) {
        super.d(z5);
        if (z5) {
            this.f21169n = false;
        }
    }
}

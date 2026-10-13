package kd;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.google.android.exoplayer2.metadata.Metadata;
import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import ke.b0;
import ke.v;
import ke.w;

/* loaded from: classes3.dex */
public final class c extends nt.a {
    public final w a = new w();

    /* renamed from: b, reason: collision with root package name */
    public final v f13250b = new v();

    /* renamed from: c, reason: collision with root package name */
    public b0 f13251c;

    /* JADX WARN: Code restructure failed: missing block: B:9:0x0014, code lost:
    
        if (r5 != r7) goto L14;
     */
    @Override // nt.a
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Metadata m(dd.d dVar, ByteBuffer byteBuffer) {
        int i5;
        dd.b fVar;
        long j;
        long j5;
        boolean z5;
        boolean z6;
        boolean z7;
        int i6;
        int i10;
        int i11;
        long j7;
        boolean z8;
        long j10;
        long j11;
        boolean z10;
        boolean z11;
        boolean z12;
        boolean z13;
        int i12;
        int i13;
        int i14;
        char c6;
        long j12;
        boolean z14;
        w wVar = this.a;
        v vVar = this.f13250b;
        b0 b0Var = this.f13251c;
        if (b0Var != null) {
            long j13 = dVar.F;
            synchronized (b0Var) {
                long j14 = b0Var.f13284b;
            }
        }
        b0 b0Var2 = new b0(dVar.f14438x);
        this.f13251c = b0Var2;
        b0Var2.a(dVar.f14438x - dVar.F);
        byte[] array = byteBuffer.array();
        int limit = byteBuffer.limit();
        wVar.D(array, limit);
        vVar.o(array, limit);
        vVar.s(39);
        boolean z15 = true;
        long i15 = (vVar.i(1) << 32) | vVar.i(32);
        vVar.s(20);
        int i16 = vVar.i(12);
        int i17 = vVar.i(8);
        wVar.G(14);
        if (i17 == 0) {
            i5 = 0;
            fVar = new f();
        } else if (i17 != 255) {
            long j15 = -9223372036854775807L;
            if (i17 == 4) {
                int u5 = wVar.u();
                ArrayList arrayList = new ArrayList(u5);
                int i18 = 0;
                while (i18 < u5) {
                    long v5 = wVar.v();
                    boolean z16 = (wVar.u() & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? z15 : false;
                    ArrayList arrayList2 = new ArrayList();
                    if (z16) {
                        j = -9223372036854775807L;
                        j5 = -9223372036854775807L;
                        z5 = false;
                        z6 = false;
                        z7 = false;
                        i6 = 0;
                        i10 = 0;
                        i11 = 0;
                    } else {
                        int u6 = wVar.u();
                        boolean z17 = (u6 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0 ? z15 : false;
                        boolean z18 = (u6 & 64) != 0 ? z15 : false;
                        boolean z19 = (u6 & 32) != 0 ? z15 : false;
                        long v6 = z18 ? wVar.v() : -9223372036854775807L;
                        if (!z18) {
                            int u10 = wVar.u();
                            ArrayList arrayList3 = new ArrayList(u10);
                            for (int i19 = 0; i19 < u10; i19++) {
                                arrayList3.add(new g(wVar.u(), wVar.v()));
                            }
                            arrayList2 = arrayList3;
                        }
                        if (z19) {
                            long u11 = wVar.u();
                            z8 = (u11 & 128) != 0;
                            j7 = ((((u11 & 1) << 32) | wVar.v()) * 1000) / 90;
                        } else {
                            j7 = -9223372036854775807L;
                            z8 = false;
                        }
                        j5 = j7;
                        z7 = z8;
                        i6 = wVar.z();
                        z5 = z17;
                        z6 = z18;
                        j = v6;
                        i10 = wVar.u();
                        i11 = wVar.u();
                    }
                    arrayList.add(new h(v5, z16, z5, z6, arrayList2, j, z7, j5, i6, i10, i11));
                    i18++;
                    z15 = true;
                }
                fVar = new i(arrayList);
            } else if (i17 == 5) {
                b0 b0Var3 = this.f13251c;
                long v7 = wVar.v();
                boolean z20 = (wVar.u() & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0;
                List list = Collections.EMPTY_LIST;
                if (z20) {
                    j10 = -9223372036854775807L;
                    j11 = -9223372036854775807L;
                    z10 = false;
                    z11 = false;
                    z12 = false;
                    z13 = false;
                    i12 = 0;
                    i13 = 0;
                    i14 = 0;
                } else {
                    int u12 = wVar.u();
                    boolean z21 = (u12 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) != 0;
                    boolean z22 = (u12 & 64) != 0;
                    boolean z23 = (u12 & 32) != 0;
                    boolean z24 = (u12 & 16) != 0;
                    long a = (!z22 || z24) ? -9223372036854775807L : j.a(i15, wVar);
                    if (z22) {
                        c6 = ' ';
                        j12 = 90;
                    } else {
                        int u13 = wVar.u();
                        c6 = ' ';
                        ArrayList arrayList4 = new ArrayList(u13);
                        j12 = 90;
                        for (int i20 = 0; i20 < u13; i20++) {
                            int u14 = wVar.u();
                            long a10 = !z24 ? j.a(i15, wVar) : -9223372036854775807L;
                            arrayList4.add(new d(u14, a10, b0Var3.b(a10)));
                        }
                        list = arrayList4;
                    }
                    if (z23) {
                        long u15 = wVar.u();
                        z14 = (u15 & 128) != 0;
                        j15 = ((((u15 & 1) << c6) | wVar.v()) * 1000) / j12;
                    } else {
                        z14 = false;
                    }
                    int z25 = wVar.z();
                    int u16 = wVar.u();
                    i14 = wVar.u();
                    z13 = z14;
                    z12 = z24;
                    i12 = z25;
                    i13 = u16;
                    j11 = j15;
                    j10 = a;
                    z10 = z21;
                    z11 = z22;
                }
                fVar = new e(v7, z20, z10, z11, z12, j10, b0Var3.b(j10), list, z13, j11, i12, i13, i14);
            } else if (i17 != 6) {
                fVar = null;
            } else {
                b0 b0Var4 = this.f13251c;
                long a11 = j.a(i15, wVar);
                fVar = new j(a11, b0Var4.b(a11));
            }
            i5 = 0;
        } else {
            long v9 = wVar.v();
            int i21 = i16 - 4;
            byte[] bArr = new byte[i21];
            i5 = 0;
            wVar.e(bArr, 0, i21);
            fVar = new a(v9, i15, bArr);
        }
        if (fVar == null) {
            return new Metadata(new dd.b[i5]);
        }
        dd.b[] bVarArr = new dd.b[1];
        bVarArr[i5] = fVar;
        return new Metadata(bVarArr);
    }
}

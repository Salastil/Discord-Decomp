package ws;

import androidx.recyclerview.widget.RecyclerView;
import java.io.IOException;
import java.util.ArrayList;
import kotlin.jvm.internal.ByteCompanionObject;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.ByteString;

/* loaded from: classes3.dex */
public final class d {
    public int a;

    /* renamed from: b, reason: collision with root package name */
    public final ArrayList f20075b;

    /* renamed from: c, reason: collision with root package name */
    public final et.r f20076c;

    /* renamed from: d, reason: collision with root package name */
    public c[] f20077d;

    /* renamed from: e, reason: collision with root package name */
    public int f20078e;

    /* renamed from: f, reason: collision with root package name */
    public int f20079f;

    /* renamed from: g, reason: collision with root package name */
    public int f20080g;

    public d(s source) {
        Intrinsics.checkNotNullParameter(source, "source");
        this.a = RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
        this.f20075b = new ArrayList();
        this.f20076c = et.y.d(source);
        this.f20077d = new c[8];
        this.f20078e = 7;
    }

    public final int a(int i5) {
        int i6;
        int i10 = 0;
        if (i5 > 0) {
            int length = this.f20077d.length;
            while (true) {
                length--;
                i6 = this.f20078e;
                if (length < i6 || i5 <= 0) {
                    break;
                }
                c cVar = this.f20077d[length];
                Intrinsics.checkNotNull(cVar);
                int i11 = cVar.f20074c;
                i5 -= i11;
                this.f20080g -= i11;
                this.f20079f--;
                i10++;
            }
            c[] cVarArr = this.f20077d;
            System.arraycopy(cVarArr, i6 + 1, cVarArr, i6 + 1 + i10, this.f20079f);
            this.f20078e += i10;
        }
        return i10;
    }

    public final ByteString b(int i5) {
        if (i5 >= 0) {
            c[] cVarArr = f.a;
            if (i5 <= cVarArr.length - 1) {
                return cVarArr[i5].a;
            }
        }
        int length = this.f20078e + 1 + (i5 - f.a.length);
        if (length >= 0) {
            c[] cVarArr2 = this.f20077d;
            if (length < cVarArr2.length) {
                c cVar = cVarArr2[length];
                Intrinsics.checkNotNull(cVar);
                return cVar.a;
            }
        }
        throw new IOException(Intrinsics.stringPlus("Header index too large ", Integer.valueOf(i5 + 1)));
    }

    public final void c(c cVar) {
        this.f20075b.add(cVar);
        int i5 = cVar.f20074c;
        int i6 = this.a;
        if (i5 > i6) {
            kotlin.collections.u.k(r7, null, 0, this.f20077d.length);
            this.f20078e = this.f20077d.length - 1;
            this.f20079f = 0;
            this.f20080g = 0;
            return;
        }
        a((this.f20080g + i5) - i6);
        int i10 = this.f20079f + 1;
        c[] cVarArr = this.f20077d;
        if (i10 > cVarArr.length) {
            c[] cVarArr2 = new c[cVarArr.length * 2];
            System.arraycopy(cVarArr, 0, cVarArr2, cVarArr.length, cVarArr.length);
            this.f20078e = this.f20077d.length - 1;
            this.f20077d = cVarArr2;
        }
        int i11 = this.f20078e;
        this.f20078e = i11 - 1;
        this.f20077d[i11] = cVar;
        this.f20079f++;
        this.f20080g += i5;
    }

    public final ByteString d() {
        et.r source = this.f20076c;
        byte readByte = source.readByte();
        byte[] bArr = qs.b.a;
        int i5 = readByte & 255;
        int i6 = 0;
        boolean z5 = (readByte & ByteCompanionObject.MIN_VALUE) == 128;
        long e9 = e(i5, 127);
        if (!z5) {
            return source.m(e9);
        }
        Buffer sink = new Buffer();
        int[] iArr = y.a;
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter(sink, "sink");
        a5.g gVar = y.f20165c;
        a5.g gVar2 = gVar;
        long j = 0;
        int i10 = 0;
        while (j < e9) {
            j++;
            byte readByte2 = source.readByte();
            byte[] bArr2 = qs.b.a;
            i6 = (i6 << 8) | (readByte2 & 255);
            i10 += 8;
            while (i10 >= 8) {
                a5.g[] gVarArr = (a5.g[]) gVar2.f157i;
                Intrinsics.checkNotNull(gVarArr);
                gVar2 = gVarArr[(i6 >>> (i10 - 8)) & 255];
                Intrinsics.checkNotNull(gVar2);
                if (((a5.g[]) gVar2.f157i) == null) {
                    sink.U(gVar2.f155d);
                    i10 -= gVar2.f156e;
                    gVar2 = gVar;
                } else {
                    i10 -= 8;
                }
            }
        }
        while (i10 > 0) {
            a5.g[] gVarArr2 = (a5.g[]) gVar2.f157i;
            Intrinsics.checkNotNull(gVarArr2);
            a5.g gVar3 = gVarArr2[(i6 << (8 - i10)) & 255];
            Intrinsics.checkNotNull(gVar3);
            a5.g[] gVarArr3 = (a5.g[]) gVar3.f157i;
            int i11 = gVar3.f156e;
            if (gVarArr3 != null || i11 > i10) {
                break;
            }
            sink.U(gVar3.f155d);
            i10 -= i11;
            gVar2 = gVar;
        }
        return sink.m(sink.f16114e);
    }

    public final int e(int i5, int i6) {
        int i10 = i5 & i6;
        if (i10 < i6) {
            return i10;
        }
        int i11 = 0;
        while (true) {
            byte readByte = this.f20076c.readByte();
            byte[] bArr = qs.b.a;
            int i12 = readByte & 255;
            if ((readByte & ByteCompanionObject.MIN_VALUE) == 0) {
                return i6 + (i12 << i11);
            }
            i6 += (readByte & ByteCompanionObject.MAX_VALUE) << i11;
            i11 += 7;
        }
    }
}

package ws;

import androidx.recyclerview.widget.RecyclerView;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.ArrayList;
import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;
import okio.ByteString;

/* loaded from: classes3.dex */
public final class e {
    public final Buffer a;

    /* renamed from: b, reason: collision with root package name */
    public int f20081b;

    /* renamed from: c, reason: collision with root package name */
    public boolean f20082c;

    /* renamed from: d, reason: collision with root package name */
    public int f20083d;

    /* renamed from: e, reason: collision with root package name */
    public c[] f20084e;

    /* renamed from: f, reason: collision with root package name */
    public int f20085f;

    /* renamed from: g, reason: collision with root package name */
    public int f20086g;

    /* renamed from: h, reason: collision with root package name */
    public int f20087h;

    public e(Buffer out) {
        Intrinsics.checkNotNullParameter(out, "out");
        this.a = out;
        this.f20081b = Integer.MAX_VALUE;
        this.f20083d = RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
        this.f20084e = new c[8];
        this.f20085f = 7;
    }

    public final void a(int i5) {
        int i6;
        if (i5 > 0) {
            int length = this.f20084e.length - 1;
            int i10 = 0;
            while (true) {
                i6 = this.f20085f;
                if (length < i6 || i5 <= 0) {
                    break;
                }
                c cVar = this.f20084e[length];
                Intrinsics.checkNotNull(cVar);
                i5 -= cVar.f20074c;
                int i11 = this.f20087h;
                c cVar2 = this.f20084e[length];
                Intrinsics.checkNotNull(cVar2);
                this.f20087h = i11 - cVar2.f20074c;
                this.f20086g--;
                i10++;
                length--;
            }
            c[] cVarArr = this.f20084e;
            int i12 = i6 + 1;
            System.arraycopy(cVarArr, i12, cVarArr, i12 + i10, this.f20086g);
            c[] cVarArr2 = this.f20084e;
            int i13 = this.f20085f + 1;
            Arrays.fill(cVarArr2, i13, i13 + i10, (Object) null);
            this.f20085f += i10;
        }
    }

    public final void b(c cVar) {
        int i5 = cVar.f20074c;
        int i6 = this.f20083d;
        if (i5 > i6) {
            c[] cVarArr = this.f20084e;
            kotlin.collections.u.k(cVarArr, null, 0, cVarArr.length);
            this.f20085f = this.f20084e.length - 1;
            this.f20086g = 0;
            this.f20087h = 0;
            return;
        }
        a((this.f20087h + i5) - i6);
        int i10 = this.f20086g + 1;
        c[] cVarArr2 = this.f20084e;
        if (i10 > cVarArr2.length) {
            c[] cVarArr3 = new c[cVarArr2.length * 2];
            System.arraycopy(cVarArr2, 0, cVarArr3, cVarArr2.length, cVarArr2.length);
            this.f20085f = this.f20084e.length - 1;
            this.f20084e = cVarArr3;
        }
        int i11 = this.f20085f;
        this.f20085f = i11 - 1;
        this.f20084e[i11] = cVar;
        this.f20086g++;
        this.f20087h += i5;
    }

    public final void c(ByteString source) {
        Intrinsics.checkNotNullParameter(source, "data");
        int[] iArr = y.a;
        Intrinsics.checkNotNullParameter(source, "bytes");
        int c6 = source.c();
        long j = 0;
        int i5 = 0;
        long j5 = 0;
        int i6 = 0;
        while (i6 < c6) {
            int i10 = i6 + 1;
            byte f2 = source.f(i6);
            byte[] bArr = qs.b.a;
            j5 += y.f20164b[f2 & 255];
            i6 = i10;
        }
        int i11 = (int) ((j5 + 7) >> 3);
        int c8 = source.c();
        Buffer buffer = this.a;
        if (i11 >= c8) {
            e(source.c(), 127, 0);
            buffer.R(source);
            return;
        }
        Buffer sink = new Buffer();
        int[] iArr2 = y.a;
        Intrinsics.checkNotNullParameter(source, "source");
        Intrinsics.checkNotNullParameter(sink, "sink");
        int c10 = source.c();
        int i12 = 0;
        while (i5 < c10) {
            int i13 = i5 + 1;
            byte f10 = source.f(i5);
            byte[] bArr2 = qs.b.a;
            int i14 = f10 & 255;
            int i15 = y.a[i14];
            byte b10 = y.f20164b[i14];
            j = (j << b10) | i15;
            i12 += b10;
            while (i12 >= 8) {
                i12 -= 8;
                sink.U((int) (j >> i12));
            }
            i5 = i13;
        }
        if (i12 > 0) {
            sink.U((int) ((j << (8 - i12)) | (255 >>> i12)));
        }
        ByteString m5 = sink.m(sink.f16114e);
        e(m5.c(), 127, IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
        buffer.R(m5);
    }

    public final void d(ArrayList headerBlock) {
        int i5;
        int i6;
        Intrinsics.checkNotNullParameter(headerBlock, "headerBlock");
        if (this.f20082c) {
            int i10 = this.f20081b;
            if (i10 < this.f20083d) {
                e(i10, 31, 32);
            }
            this.f20082c = false;
            this.f20081b = Integer.MAX_VALUE;
            e(this.f20083d, 31, 32);
        }
        int size = headerBlock.size();
        int i11 = 0;
        while (i11 < size) {
            int i12 = i11 + 1;
            c cVar = (c) headerBlock.get(i11);
            ByteString i13 = cVar.a.i();
            ByteString byteString = cVar.f20073b;
            Integer num = (Integer) f.f20088b.get(i13);
            if (num != null) {
                int intValue = num.intValue();
                i6 = intValue + 1;
                if (2 <= i6 && i6 < 8) {
                    c[] cVarArr = f.a;
                    if (Intrinsics.areEqual(cVarArr[intValue].f20073b, byteString)) {
                        i5 = i6;
                    } else if (Intrinsics.areEqual(cVarArr[i6].f20073b, byteString)) {
                        i6 = intValue + 2;
                        i5 = i6;
                    }
                }
                i5 = i6;
                i6 = -1;
            } else {
                i5 = -1;
                i6 = -1;
            }
            if (i6 == -1) {
                int i14 = this.f20085f + 1;
                int length = this.f20084e.length;
                while (true) {
                    if (i14 >= length) {
                        break;
                    }
                    int i15 = i14 + 1;
                    c cVar2 = this.f20084e[i14];
                    Intrinsics.checkNotNull(cVar2);
                    if (Intrinsics.areEqual(cVar2.a, i13)) {
                        c cVar3 = this.f20084e[i14];
                        Intrinsics.checkNotNull(cVar3);
                        if (Intrinsics.areEqual(cVar3.f20073b, byteString)) {
                            i6 = f.a.length + (i14 - this.f20085f);
                            break;
                        } else if (i5 == -1) {
                            i5 = f.a.length + (i14 - this.f20085f);
                        }
                    }
                    i14 = i15;
                }
            }
            if (i6 != -1) {
                e(i6, 127, IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            } else if (i5 == -1) {
                this.a.U(64);
                c(i13);
                c(byteString);
                b(cVar);
            } else {
                ByteString prefix = c.f20067d;
                i13.getClass();
                Intrinsics.checkNotNullParameter(prefix, "prefix");
                if (!i13.h(prefix, prefix.c()) || Intrinsics.areEqual(c.f20072i, i13)) {
                    e(i5, 63, 64);
                    c(byteString);
                    b(cVar);
                } else {
                    e(i5, 15, 0);
                    c(byteString);
                }
            }
            i11 = i12;
        }
    }

    public final void e(int i5, int i6, int i10) {
        Buffer buffer = this.a;
        if (i5 < i6) {
            buffer.U(i5 | i10);
            return;
        }
        buffer.U(i10 | i6);
        int i11 = i5 - i6;
        while (i11 >= 128) {
            buffer.U(128 | (i11 & 127));
            i11 >>>= 7;
        }
        buffer.U(i11);
    }
}

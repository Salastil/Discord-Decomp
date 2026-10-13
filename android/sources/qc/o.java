package qc;

import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.metadata.Metadata;
import hc.f0;
import java.util.Collections;
import ke.d0;
import kotlin.jvm.internal.ByteCompanionObject;

/* loaded from: classes3.dex */
public final class o {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int f16783b;

    /* renamed from: c, reason: collision with root package name */
    public final int f16784c;

    /* renamed from: d, reason: collision with root package name */
    public final int f16785d;

    /* renamed from: e, reason: collision with root package name */
    public final int f16786e;

    /* renamed from: f, reason: collision with root package name */
    public final int f16787f;

    /* renamed from: g, reason: collision with root package name */
    public final int f16788g;

    /* renamed from: h, reason: collision with root package name */
    public final int f16789h;

    /* renamed from: i, reason: collision with root package name */
    public final int f16790i;
    public final long j;
    public final e4.l k;

    /* renamed from: l, reason: collision with root package name */
    public final Metadata f16791l;

    public o(byte[] bArr, int i5) {
        ke.v vVar = new ke.v(bArr, bArr.length);
        vVar.p(i5 * 8);
        this.a = vVar.i(16);
        this.f16783b = vVar.i(16);
        this.f16784c = vVar.i(24);
        this.f16785d = vVar.i(24);
        int i6 = vVar.i(20);
        this.f16786e = i6;
        this.f16787f = d(i6);
        this.f16788g = vVar.i(3) + 1;
        int i10 = vVar.i(5) + 1;
        this.f16789h = i10;
        this.f16790i = a(i10);
        int i11 = vVar.i(4);
        int i12 = vVar.i(32);
        int i13 = d0.a;
        this.j = ((i11 & 4294967295L) << 32) | (i12 & 4294967295L);
        this.k = null;
        this.f16791l = null;
    }

    public static int a(int i5) {
        if (i5 == 8) {
            return 1;
        }
        if (i5 == 12) {
            return 2;
        }
        if (i5 == 16) {
            return 4;
        }
        if (i5 != 20) {
            return i5 != 24 ? -1 : 6;
        }
        return 5;
    }

    public static int d(int i5) {
        switch (i5) {
            case 8000:
                return 4;
            case 16000:
                return 5;
            case 22050:
                return 6;
            case 24000:
                return 7;
            case 32000:
                return 8;
            case 44100:
                return 9;
            case 48000:
                return 10;
            case 88200:
                return 1;
            case 96000:
                return 11;
            case 176400:
                return 2;
            case 192000:
                return 3;
            default:
                return -1;
        }
    }

    public final long b() {
        long j = this.j;
        if (j == 0) {
            return -9223372036854775807L;
        }
        return (j * 1000000) / this.f16786e;
    }

    public final Format c(byte[] bArr, Metadata metadata) {
        bArr[4] = ByteCompanionObject.MIN_VALUE;
        int i5 = this.f16785d;
        if (i5 <= 0) {
            i5 = -1;
        }
        Metadata metadata2 = this.f16791l;
        if (metadata2 != null) {
            metadata = metadata == null ? metadata2 : metadata2.a(metadata.f5427d);
        }
        f0 f0Var = new f0();
        f0Var.k = "audio/flac";
        f0Var.f9678l = i5;
        f0Var.f9690x = this.f16788g;
        f0Var.f9691y = this.f16786e;
        f0Var.f9679m = Collections.singletonList(bArr);
        f0Var.f9677i = metadata;
        return new Format(f0Var);
    }

    public o(int i5, int i6, int i10, int i11, int i12, int i13, int i14, long j, e4.l lVar, Metadata metadata) {
        this.a = i5;
        this.f16783b = i6;
        this.f16784c = i10;
        this.f16785d = i11;
        this.f16786e = i12;
        this.f16787f = d(i12);
        this.f16788g = i13;
        this.f16789h = i14;
        this.f16790i = a(i14);
        this.j = j;
        this.k = lVar;
        this.f16791l = metadata;
    }
}

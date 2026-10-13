package zd;

import android.graphics.Bitmap;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.zip.Inflater;
import ke.d0;
import ke.w;
import wd.d;
import wd.e;

/* loaded from: classes3.dex */
public final class b extends d {

    /* renamed from: m, reason: collision with root package name */
    public final w f21193m = new w();

    /* renamed from: n, reason: collision with root package name */
    public final w f21194n = new w();

    /* renamed from: o, reason: collision with root package name */
    public final a f21195o = new a();

    /* renamed from: p, reason: collision with root package name */
    public Inflater f21196p;

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    @Override // wd.d
    public final e e(byte[] bArr, int i5, boolean z5) {
        char c6;
        int[] iArr;
        wd.b bVar;
        int i6;
        int i10;
        int i11;
        int w5;
        w wVar = this.f21193m;
        wVar.D(bArr, i5);
        char c8 = 255;
        if (wVar.a() > 0 && (wVar.a[wVar.f13363b] & 255) == 120) {
            if (this.f21196p == null) {
                this.f21196p = new Inflater();
            }
            Inflater inflater = this.f21196p;
            w wVar2 = this.f21194n;
            if (d0.E(wVar, wVar2, inflater)) {
                wVar.D(wVar2.a, wVar2.f13364c);
            }
        }
        a aVar = this.f21195o;
        int i12 = 0;
        aVar.f21187d = 0;
        int[] iArr2 = aVar.f21185b;
        w wVar3 = aVar.a;
        aVar.f21188e = 0;
        aVar.f21189f = 0;
        aVar.f21190g = 0;
        aVar.f21191h = 0;
        aVar.f21192i = 0;
        wVar3.C(0);
        aVar.f21186c = false;
        ArrayList arrayList = new ArrayList();
        while (wVar.a() >= 3) {
            int i13 = wVar.f13364c;
            int u5 = wVar.u();
            int z6 = wVar.z();
            int i14 = wVar.f13363b + z6;
            if (i14 > i13) {
                wVar.F(i13);
                c6 = c8;
                i6 = i12;
                iArr = iArr2;
                bVar = null;
            } else {
                char c10 = 128;
                if (u5 != 128) {
                    switch (u5) {
                        case 20:
                            if (z6 % 5 == 2) {
                                wVar.G(2);
                                Arrays.fill(iArr2, i12);
                                int i15 = z6 / 5;
                                int i16 = i12;
                                while (i16 < i15) {
                                    int u6 = wVar.u();
                                    char c11 = c10;
                                    double u10 = wVar.u();
                                    double u11 = wVar.u() - 128;
                                    int[] iArr3 = iArr2;
                                    double u12 = wVar.u() - 128;
                                    iArr3[u6] = (d0.i((int) ((1.402d * u11) + u10), 0, 255) << 16) | (wVar.u() << 24) | (d0.i((int) ((u10 - (0.34414d * u12)) - (u11 * 0.71414d)), 0, 255) << 8) | d0.i((int) ((u12 * 1.772d) + u10), 0, 255);
                                    i16++;
                                    c10 = c11;
                                    c8 = 255;
                                    iArr2 = iArr3;
                                }
                                c6 = c8;
                                iArr = iArr2;
                                aVar.f21186c = true;
                                break;
                            }
                            c6 = c8;
                            iArr = iArr2;
                            break;
                        case 21:
                            if (z6 >= 4) {
                                wVar.G(3);
                                int i17 = z6 - 4;
                                if (((128 & wVar.u()) != 0 ? 1 : i12) != 0) {
                                    if (i17 >= 7 && (w5 = wVar.w()) >= 4) {
                                        aVar.f21191h = wVar.z();
                                        aVar.f21192i = wVar.z();
                                        wVar3.C(w5 - 4);
                                        i17 = z6 - 11;
                                    }
                                }
                                int i18 = wVar3.f13363b;
                                int i19 = wVar3.f13364c;
                                if (i18 < i19 && i17 > 0) {
                                    int min = Math.min(i17, i19 - i18);
                                    wVar.e(wVar3.a, i18, min);
                                    wVar3.F(i18 + min);
                                }
                            }
                            c6 = c8;
                            iArr = iArr2;
                            break;
                        case 22:
                            if (z6 >= 19) {
                                aVar.f21187d = wVar.z();
                                aVar.f21188e = wVar.z();
                                wVar.G(11);
                                aVar.f21189f = wVar.z();
                                aVar.f21190g = wVar.z();
                            }
                            c6 = c8;
                            iArr = iArr2;
                            break;
                        default:
                            c6 = c8;
                            iArr = iArr2;
                            break;
                    }
                    i6 = 0;
                    bVar = null;
                } else {
                    c6 = c8;
                    iArr = iArr2;
                    if (aVar.f21187d == 0 || aVar.f21188e == 0 || aVar.f21191h == 0 || aVar.f21192i == 0 || (i10 = wVar3.f13364c) == 0 || wVar3.f13363b != i10 || !aVar.f21186c) {
                        bVar = null;
                    } else {
                        wVar3.F(0);
                        int i20 = aVar.f21191h * aVar.f21192i;
                        int[] iArr4 = new int[i20];
                        int i21 = 0;
                        while (i21 < i20) {
                            int u13 = wVar3.u();
                            if (u13 != 0) {
                                i11 = i21 + 1;
                                iArr4[i21] = iArr[u13];
                            } else {
                                int u14 = wVar3.u();
                                if (u14 != 0) {
                                    i11 = ((u14 & 64) == 0 ? u14 & 63 : ((u14 & 63) << 8) | wVar3.u()) + i21;
                                    Arrays.fill(iArr4, i21, i11, (u14 & IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT) == 0 ? 0 : iArr[wVar3.u()]);
                                }
                            }
                            i21 = i11;
                        }
                        Bitmap createBitmap = Bitmap.createBitmap(iArr4, aVar.f21191h, aVar.f21192i, Bitmap.Config.ARGB_8888);
                        float f2 = aVar.f21189f;
                        float f10 = aVar.f21187d;
                        float f11 = f2 / f10;
                        float f12 = aVar.f21190g;
                        float f13 = aVar.f21188e;
                        bVar = new wd.b(null, null, null, createBitmap, f12 / f13, 0, 0, f11, 0, Integer.MIN_VALUE, -3.4028235E38f, aVar.f21191h / f10, aVar.f21192i / f13, false, -16777216, Integer.MIN_VALUE, 0.0f);
                    }
                    i6 = 0;
                    aVar.f21187d = 0;
                    aVar.f21188e = 0;
                    aVar.f21189f = 0;
                    aVar.f21190g = 0;
                    aVar.f21191h = 0;
                    aVar.f21192i = 0;
                    wVar3.C(0);
                    aVar.f21186c = false;
                }
                wVar.F(i14);
            }
            if (bVar != null) {
                arrayList.add(bVar);
            }
            i12 = i6;
            c8 = c6;
            iArr2 = iArr;
        }
        return new br.a(Collections.unmodifiableList(arrayList), 2);
    }
}

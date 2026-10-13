package hb;

import android.net.Uri;
import android.os.Bundle;
import android.window.OnBackInvokedDispatcher;
import com.facebook.react.bridge.NativeModule;
import com.facebook.react.shell.MainReactPackage;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.MediaItem;
import com.google.android.exoplayer2.MediaMetadata;
import com.google.android.exoplayer2.Timeline;
import com.google.android.exoplayer2.h;
import com.google.android.exoplayer2.metadata.Metadata;
import e4.r;
import ei.e;
import ei.j;
import fi.c0;
import fi.e0;
import fi.p;
import fi.r0;
import fi.w0;
import fi.y;
import hc.f;
import hc.f0;
import hc.g;
import hc.g0;
import hc.h1;
import hc.i0;
import hc.j0;
import hc.k0;
import hc.l0;
import hc.m0;
import hc.n0;
import hc.n1;
import hc.o0;
import hc.p0;
import hc.q0;
import hc.q1;
import hc.r1;
import hc.s0;
import hc.s1;
import hc.t0;
import hc.t1;
import hc.u0;
import ic.u;
import ie.q;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.UUID;
import javax.inject.Provider;
import k0.d;
import ke.b;
import ke.d0;
import n1.k;
import nc.i;
import nd.z0;
import u4.c;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements Provider, j, e, ke.j, f {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f9614d;

    public /* synthetic */ a(int i5) {
        this.f9614d = i5;
    }

    public static /* bridge */ /* synthetic */ OnBackInvokedDispatcher d(Object obj) {
        return (OnBackInvokedDispatcher) obj;
    }

    @Override // hc.f
    public g a(Bundle bundle) {
        w0 a;
        r0 j;
        r0 v5;
        Bundle bundle2;
        Bundle bundle3;
        int i5 = 0;
        boolean z5 = false;
        switch (this.f9614d) {
            case 8:
                Format format = Format.f5203f0;
                f0 f0Var = new f0();
                if (bundle != null) {
                    ClassLoader classLoader = b.class.getClassLoader();
                    int i6 = d0.a;
                    bundle.setClassLoader(classLoader);
                }
                String string = bundle.getString(Format.f5204g0);
                String str = format.f5225d;
                if (string == null) {
                    string = str;
                }
                f0Var.a = string;
                String string2 = bundle.getString(Format.h0);
                String str2 = format.f5227e;
                if (string2 == null) {
                    string2 = str2;
                }
                f0Var.f9670b = string2;
                String string3 = bundle.getString(Format.f5205i0);
                String str3 = format.f5229i;
                if (string3 == null) {
                    string3 = str3;
                }
                f0Var.f9671c = string3;
                f0Var.f9672d = bundle.getInt(Format.f5206j0, format.f5230v);
                f0Var.f9673e = bundle.getInt(Format.f5207k0, format.f5231w);
                f0Var.f9674f = bundle.getInt(Format.f5208l0, format.f5232x);
                f0Var.f9675g = bundle.getInt(Format.f5209m0, format.f5233y);
                String string4 = bundle.getString(Format.f5210n0);
                String str4 = format.F;
                if (string4 == null) {
                    string4 = str4;
                }
                f0Var.f9676h = string4;
                Metadata metadata = (Metadata) bundle.getParcelable(Format.f5211o0);
                Metadata metadata2 = format.G;
                if (metadata == null) {
                    metadata = metadata2;
                }
                f0Var.f9677i = metadata;
                String string5 = bundle.getString(Format.f5212p0);
                String str5 = format.H;
                if (string5 == null) {
                    string5 = str5;
                }
                f0Var.j = string5;
                String string6 = bundle.getString(Format.f5213q0);
                String str6 = format.I;
                if (string6 == null) {
                    string6 = str6;
                }
                f0Var.k = string6;
                f0Var.f9678l = bundle.getInt(Format.f5214r0, format.J);
                ArrayList arrayList = new ArrayList();
                while (true) {
                    byte[] byteArray = bundle.getByteArray(Format.f5215s0 + "_" + Integer.toString(i5, 36));
                    if (byteArray == null) {
                        f0Var.f9679m = arrayList;
                        f0Var.f9680n = (i) bundle.getParcelable(Format.f5216t0);
                        f0Var.f9681o = bundle.getLong(Format.f5217u0, format.M);
                        f0Var.f9682p = bundle.getInt(Format.f5218v0, format.N);
                        f0Var.f9683q = bundle.getInt(Format.f5219w0, format.O);
                        f0Var.f9684r = bundle.getFloat(Format.f5220x0, format.P);
                        f0Var.f9685s = bundle.getInt(Format.f5221y0, format.Q);
                        f0Var.f9686t = bundle.getFloat(Format.f5222z0, format.R);
                        f0Var.f9687u = bundle.getByteArray(Format.A0);
                        f0Var.f9688v = bundle.getInt(Format.B0, format.T);
                        Bundle bundle4 = bundle.getBundle(Format.C0);
                        if (bundle4 != null) {
                            f0Var.f9689w = (le.b) le.b.H.a(bundle4);
                        }
                        f0Var.f9690x = bundle.getInt(Format.D0, format.V);
                        f0Var.f9691y = bundle.getInt(Format.E0, format.W);
                        f0Var.f9692z = bundle.getInt(Format.F0, format.X);
                        f0Var.A = bundle.getInt(Format.G0, format.Y);
                        f0Var.B = bundle.getInt(Format.H0, format.Z);
                        f0Var.C = bundle.getInt(Format.I0, format.a0);
                        f0Var.D = bundle.getInt(Format.K0, format.f5223b0);
                        f0Var.E = bundle.getInt(Format.L0, format.f5224c0);
                        f0Var.F = bundle.getInt(Format.J0, format.f5226d0);
                        return new Format(f0Var);
                    }
                    arrayList.add(byteArray);
                    i5++;
                }
            case 9:
                b.g(bundle.getInt(n1.f9818d, -1) == 0);
                return bundle.getBoolean(g0.f9702w, false) ? new g0(bundle.getBoolean(g0.f9703x, false)) : new g0();
            case 10:
                String string7 = bundle.getString(MediaItem.F, "");
                string7.getClass();
                Bundle bundle5 = bundle.getBundle(MediaItem.G);
                o0 o0Var = bundle5 == null ? o0.f9823x : (o0) o0.I.a(bundle5);
                Bundle bundle6 = bundle.getBundle(MediaItem.H);
                MediaMetadata mediaMetadata = bundle6 == null ? MediaMetadata.f5241f0 : (MediaMetadata) MediaMetadata.N0.a(bundle6);
                Bundle bundle7 = bundle.getBundle(MediaItem.I);
                l0 l0Var = bundle7 == null ? l0.J : (l0) k0.I.a(bundle7);
                Bundle bundle8 = bundle.getBundle(MediaItem.J);
                q0 q0Var = bundle8 == null ? q0.f9843i : (q0) q0.f9847y.a(bundle8);
                Bundle bundle9 = bundle.getBundle(MediaItem.K);
                return new MediaItem(string7, l0Var, bundle9 != null ? (p0) p0.L.a(bundle9) : null, o0Var, mediaMetadata, q0Var);
            case 11:
                Uri uri = (Uri) bundle.getParcelable(i0.f9728e);
                uri.getClass();
                c cVar = new c();
                cVar.f18811d = uri;
                return new i0(cVar);
            case 12:
                j0 j0Var = new j0();
                String str7 = k0.f9767y;
                l0 l0Var2 = k0.f9766x;
                long j5 = bundle.getLong(str7, l0Var2.f9768d);
                b.g(j5 >= 0);
                j0Var.a = j5;
                long j7 = bundle.getLong(k0.E, l0Var2.f9769e);
                if (j7 != Long.MIN_VALUE && j7 < 0) {
                    r12 = false;
                }
                b.g(r12);
                j0Var.f9756b = j7;
                j0Var.f9757c = bundle.getBoolean(k0.F, l0Var2.f9770i);
                j0Var.f9758d = bundle.getBoolean(k0.G, l0Var2.f9771v);
                j0Var.f9759e = bundle.getBoolean(k0.H, l0Var2.f9772w);
                return new l0(j0Var);
            case 13:
                String string8 = bundle.getString(n0.F);
                string8.getClass();
                UUID fromString = UUID.fromString(string8);
                Uri uri2 = (Uri) bundle.getParcelable(n0.G);
                String str8 = n0.H;
                Bundle bundle10 = Bundle.EMPTY;
                Bundle bundle11 = bundle.getBundle(str8);
                if (bundle11 == null) {
                    bundle11 = bundle10;
                }
                w0 w0Var = w0.f8728y;
                if (bundle11 == bundle10) {
                    a = w0Var;
                } else {
                    HashMap hashMap = new HashMap();
                    if (bundle11 != bundle10) {
                        for (String str9 : bundle11.keySet()) {
                            String string9 = bundle11.getString(str9);
                            if (string9 != null) {
                                hashMap.put(str9, string9);
                            }
                        }
                    }
                    a = w0.a(hashMap);
                }
                boolean z6 = bundle.getBoolean(n0.I, false);
                boolean z7 = bundle.getBoolean(n0.J, false);
                boolean z8 = bundle.getBoolean(n0.K, false);
                String str10 = n0.L;
                ArrayList<Integer> arrayList2 = new ArrayList<>();
                ArrayList<Integer> integerArrayList = bundle.getIntegerArrayList(str10);
                if (integerArrayList != null) {
                    arrayList2 = integerArrayList;
                }
                e0 k = e0.k(arrayList2);
                byte[] byteArray2 = bundle.getByteArray(n0.M);
                m0 m0Var = new m0();
                m0Var.a = fromString;
                m0Var.f9786c = w0Var;
                m0Var.f9790g = r0.f8704w;
                m0Var.f9785b = uri2;
                m0Var.f9786c = w0.a(a);
                m0Var.f9787d = z6;
                m0Var.f9789f = z8;
                m0Var.f9788e = z7;
                m0Var.f9790g = e0.k(k);
                m0Var.f9791h = byteArray2 != null ? Arrays.copyOf(byteArray2, byteArray2.length) : null;
                return new n0(m0Var);
            case 14:
                return new o0(bundle.getLong(o0.f9824y, -9223372036854775807L), bundle.getLong(o0.E, -9223372036854775807L), bundle.getLong(o0.F, -9223372036854775807L), bundle.getFloat(o0.G, -3.4028235E38f), bundle.getFloat(o0.H, -3.4028235E38f));
            case 15:
                Bundle bundle12 = bundle.getBundle(p0.G);
                n0 n0Var = bundle12 == null ? null : (n0) n0.N.a(bundle12);
                Bundle bundle13 = bundle.getBundle(p0.H);
                i0 i0Var = bundle13 != null ? (i0) i0.f9729i.a(bundle13) : null;
                ArrayList parcelableArrayList = bundle.getParcelableArrayList(p0.I);
                if (parcelableArrayList == null) {
                    c0 c0Var = e0.f8656e;
                    j = r0.f8704w;
                } else {
                    c0 c0Var2 = e0.f8656e;
                    p.c(4, "initialCapacity");
                    Object[] objArr = new Object[4];
                    int i10 = 0;
                    int i11 = 0;
                    boolean z10 = false;
                    while (i10 < parcelableArrayList.size()) {
                        Bundle bundle14 = (Bundle) parcelableArrayList.get(i10);
                        bundle14.getClass();
                        md.b bVar = new md.b(bundle14.getInt(md.b.f14441v, 0), bundle14.getInt(md.b.f14442w, 0), bundle14.getInt(md.b.f14443x, 0));
                        int i12 = i11 + 1;
                        if (objArr.length < i12) {
                            objArr = Arrays.copyOf(objArr, y.d(objArr.length, i12));
                        } else if (z10) {
                            objArr = (Object[]) objArr.clone();
                        } else {
                            objArr[i11] = bVar;
                            i10++;
                            i11++;
                            z10 = z10;
                        }
                        z10 = false;
                        objArr[i11] = bVar;
                        i10++;
                        i11++;
                        z10 = z10;
                    }
                    j = e0.j(i11, objArr);
                }
                r0 r0Var = j;
                ArrayList parcelableArrayList2 = bundle.getParcelableArrayList(p0.K);
                if (parcelableArrayList2 == null) {
                    c0 c0Var3 = e0.f8656e;
                    v5 = r0.f8704w;
                } else {
                    v5 = b.v(t0.L, parcelableArrayList2);
                }
                r0 r0Var2 = v5;
                Uri uri3 = (Uri) bundle.getParcelable(p0.E);
                uri3.getClass();
                return new p0(uri3, bundle.getString(p0.F), n0Var, i0Var, r0Var, bundle.getString(p0.J), r0Var2);
            case 16:
                r rVar = new r(10, z5 ? 1 : 0);
                rVar.f8000e = (Uri) bundle.getParcelable(q0.f9844v);
                rVar.f8001i = bundle.getString(q0.f9845w);
                bundle.getBundle(q0.f9846x);
                return new q0(rVar);
            case 17:
                Uri uri4 = (Uri) bundle.getParcelable(t0.E);
                uri4.getClass();
                String string10 = bundle.getString(t0.F);
                String string11 = bundle.getString(t0.G);
                int i13 = bundle.getInt(t0.H, 0);
                int i14 = bundle.getInt(t0.I, 0);
                String string12 = bundle.getString(t0.J);
                String string13 = bundle.getString(t0.K);
                s0 s0Var = new s0(uri4);
                s0Var.a = string10;
                s0Var.f9866e = string11;
                s0Var.f9863b = i13;
                s0Var.f9864c = i14;
                s0Var.f9867f = string12;
                s0Var.f9868g = string13;
                return new t0(s0Var);
            case 18:
                u0 u0Var = new u0();
                u0Var.a = bundle.getCharSequence(MediaMetadata.f5242g0);
                u0Var.f9894b = bundle.getCharSequence(MediaMetadata.h0);
                u0Var.f9895c = bundle.getCharSequence(MediaMetadata.f5243i0);
                u0Var.f9896d = bundle.getCharSequence(MediaMetadata.f5244j0);
                u0Var.f9897e = bundle.getCharSequence(MediaMetadata.f5245k0);
                u0Var.f9898f = bundle.getCharSequence(MediaMetadata.f5246l0);
                u0Var.f9899g = bundle.getCharSequence(MediaMetadata.f5247m0);
                byte[] byteArray3 = bundle.getByteArray(MediaMetadata.f5250p0);
                String str11 = MediaMetadata.I0;
                Integer valueOf = bundle.containsKey(str11) ? Integer.valueOf(bundle.getInt(str11)) : null;
                u0Var.j = byteArray3 != null ? (byte[]) byteArray3.clone() : null;
                u0Var.k = valueOf;
                u0Var.f9902l = (Uri) bundle.getParcelable(MediaMetadata.f5251q0);
                u0Var.f9914x = bundle.getCharSequence(MediaMetadata.B0);
                u0Var.f9915y = bundle.getCharSequence(MediaMetadata.C0);
                u0Var.f9916z = bundle.getCharSequence(MediaMetadata.D0);
                u0Var.C = bundle.getCharSequence(MediaMetadata.G0);
                u0Var.D = bundle.getCharSequence(MediaMetadata.H0);
                u0Var.E = bundle.getCharSequence(MediaMetadata.J0);
                u0Var.G = bundle.getBundle(MediaMetadata.M0);
                String str12 = MediaMetadata.f5248n0;
                if (bundle.containsKey(str12) && (bundle3 = bundle.getBundle(str12)) != null) {
                    u0Var.f9900h = (n1) n1.f9819e.a(bundle3);
                }
                String str13 = MediaMetadata.f5249o0;
                if (bundle.containsKey(str13) && (bundle2 = bundle.getBundle(str13)) != null) {
                    u0Var.f9901i = (n1) n1.f9819e.a(bundle2);
                }
                String str14 = MediaMetadata.f5252r0;
                if (bundle.containsKey(str14)) {
                    u0Var.f9903m = Integer.valueOf(bundle.getInt(str14));
                }
                String str15 = MediaMetadata.f5253s0;
                if (bundle.containsKey(str15)) {
                    u0Var.f9904n = Integer.valueOf(bundle.getInt(str15));
                }
                String str16 = MediaMetadata.f5254t0;
                if (bundle.containsKey(str16)) {
                    u0Var.f9905o = Integer.valueOf(bundle.getInt(str16));
                }
                String str17 = MediaMetadata.L0;
                if (bundle.containsKey(str17)) {
                    u0Var.f9906p = Boolean.valueOf(bundle.getBoolean(str17));
                }
                String str18 = MediaMetadata.f5255u0;
                if (bundle.containsKey(str18)) {
                    u0Var.f9907q = Boolean.valueOf(bundle.getBoolean(str18));
                }
                String str19 = MediaMetadata.f5256v0;
                if (bundle.containsKey(str19)) {
                    u0Var.f9908r = Integer.valueOf(bundle.getInt(str19));
                }
                String str20 = MediaMetadata.f5257w0;
                if (bundle.containsKey(str20)) {
                    u0Var.f9909s = Integer.valueOf(bundle.getInt(str20));
                }
                String str21 = MediaMetadata.f5258x0;
                if (bundle.containsKey(str21)) {
                    u0Var.f9910t = Integer.valueOf(bundle.getInt(str21));
                }
                String str22 = MediaMetadata.f5259y0;
                if (bundle.containsKey(str22)) {
                    u0Var.f9911u = Integer.valueOf(bundle.getInt(str22));
                }
                String str23 = MediaMetadata.f5260z0;
                if (bundle.containsKey(str23)) {
                    u0Var.f9912v = Integer.valueOf(bundle.getInt(str23));
                }
                String str24 = MediaMetadata.A0;
                if (bundle.containsKey(str24)) {
                    u0Var.f9913w = Integer.valueOf(bundle.getInt(str24));
                }
                String str25 = MediaMetadata.E0;
                if (bundle.containsKey(str25)) {
                    u0Var.A = Integer.valueOf(bundle.getInt(str25));
                }
                String str26 = MediaMetadata.F0;
                if (bundle.containsKey(str26)) {
                    u0Var.B = Integer.valueOf(bundle.getInt(str26));
                }
                String str27 = MediaMetadata.K0;
                if (bundle.containsKey(str27)) {
                    u0Var.F = Integer.valueOf(bundle.getInt(str27));
                }
                return new MediaMetadata(u0Var);
            case 19:
                b.g(bundle.getInt(n1.f9818d, -1) == 1);
                float f2 = bundle.getFloat(h1.f9714v, -1.0f);
                return f2 == -1.0f ? new h1() : new h1(f2);
            case 20:
                int i15 = bundle.getInt(n1.f9818d, -1);
                if (i15 == 0) {
                    return (n1) g0.f9704y.a(bundle);
                }
                if (i15 == 1) {
                    return (n1) h1.f9715w.a(bundle);
                }
                if (i15 == 2) {
                    return (n1) q1.f9852y.a(bundle);
                }
                if (i15 == 3) {
                    return (n1) r1.f9858y.a(bundle);
                }
                throw new IllegalArgumentException(d.i(i15, "Unknown RatingType: "));
            case 21:
                b.g(bundle.getInt(n1.f9818d, -1) == 2);
                int i16 = bundle.getInt(q1.f9850w, 5);
                float f10 = bundle.getFloat(q1.f9851x, -1.0f);
                return f10 == -1.0f ? new q1(i16) : new q1(i16, f10);
            case 22:
                b.g(bundle.getInt(n1.f9818d, -1) == 3);
                return bundle.getBoolean(r1.f9856w, false) ? new r1(bundle.getBoolean(r1.f9857x, false)) : new r1();
            case 23:
                int i17 = bundle.getInt(s1.E, 0);
                long j10 = bundle.getLong(s1.F, -9223372036854775807L);
                long j11 = bundle.getLong(s1.G, 0L);
                boolean z11 = bundle.getBoolean(s1.H, false);
                Bundle bundle15 = bundle.getBundle(s1.I);
                od.b bVar2 = bundle15 != null ? (od.b) od.b.I.a(bundle15) : od.b.f15830x;
                s1 s1Var = new s1();
                s1Var.i(null, null, i17, j10, j11, bVar2, z11);
                return s1Var;
            case 24:
                Bundle bundle16 = bundle.getBundle(Timeline.Window.R);
                MediaItem mediaItem = bundle16 != null ? (MediaItem) MediaItem.L.a(bundle16) : MediaItem.E;
                long j12 = bundle.getLong(Timeline.Window.S, -9223372036854775807L);
                long j13 = bundle.getLong(Timeline.Window.T, -9223372036854775807L);
                long j14 = bundle.getLong(Timeline.Window.U, -9223372036854775807L);
                boolean z12 = bundle.getBoolean(Timeline.Window.V, false);
                boolean z13 = bundle.getBoolean(Timeline.Window.W, false);
                Bundle bundle17 = bundle.getBundle(Timeline.Window.X);
                o0 o0Var2 = bundle17 != null ? (o0) o0.I.a(bundle17) : null;
                boolean z14 = bundle.getBoolean(Timeline.Window.Y, false);
                long j15 = bundle.getLong(Timeline.Window.Z, 0L);
                long j16 = bundle.getLong(Timeline.Window.a0, -9223372036854775807L);
                int i18 = bundle.getInt(Timeline.Window.f5289b0, 0);
                int i19 = bundle.getInt(Timeline.Window.f5290c0, 0);
                long j17 = bundle.getLong(Timeline.Window.f5291d0, 0L);
                Timeline.Window window = new Timeline.Window();
                window.b(Timeline.Window.P, mediaItem, null, j12, j13, j14, z12, z13, o0Var2, j15, j16, i18, i19, j17);
                window.I = z14;
                return window;
            default:
                k kVar = z0.E;
                Bundle bundle18 = bundle.getBundle(t1.f9885x);
                bundle18.getClass();
                z0 z0Var = (z0) kVar.a(bundle18);
                int[] intArray = bundle.getIntArray(t1.f9886y);
                int i20 = z0Var.f15208d;
                int[] iArr = new int[i20];
                if (intArray == null) {
                    intArray = iArr;
                }
                boolean[] booleanArray = bundle.getBooleanArray(t1.E);
                boolean[] zArr = new boolean[i20];
                if (booleanArray == null) {
                    booleanArray = zArr;
                }
                return new t1(z0Var, bundle.getBoolean(t1.F, false), intArray, booleanArray);
        }
    }

    @Override // ei.e
    public Object apply(Object obj) {
        return new u((ke.y) obj);
    }

    @Override // javax.inject.Provider
    public Object get() {
        NativeModule viewManagersMap$lambda$2;
        NativeModule viewManagersMap$lambda$3;
        switch (this.f9614d) {
            case 0:
                viewManagersMap$lambda$2 = MainReactPackage.viewManagersMap$lambda$2();
                return viewManagersMap$lambda$2;
            case 1:
                viewManagersMap$lambda$3 = MainReactPackage.viewManagersMap$lambda$3();
                return viewManagersMap$lambda$3;
            default:
                return new hc.j(new q(), 50000, 50000, 2500, 5000, false);
        }
    }

    @Override // ke.j
    public void invoke(Object obj) {
        h hVar = (h) obj;
        switch (this.f9614d) {
            case 4:
                hVar.onPlayerError(new com.google.android.exoplayer2.c(2, new ai.k("Player release timed out."), 1003));
                break;
            default:
                hVar.onRenderedFirstFrame();
                break;
        }
    }
}
